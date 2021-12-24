const NEWLINE = /\r?\n/;
// anything but newline
const ANYTHING = /[^\n]+/;
// white-space token(s) but not the newline character
const WHITE_SPACE = /[\t\f\v ]+/;

// operators
const PICK = field("operator", choice("pick", "p"));
const REWORD = field("operator", choice("reword", "r"));
const EDIT = field("operator", choice("edit", "e"));
const SQUASH = field("operator", choice("squash", "s"));
const FIXUP = field("operator", choice("fixup", "f"));
const EXEC = field("operator", choice("exec", "x"));
const BREAK = field("operator", choice("break", "b"));
const DROP = field("operator", choice("drop", "d"));
const LABEL = field("operator", choice("label", "l"));
const RESET = field("operator", choice("reset", "t"));
const MERGE = field("operator", choice("merge", "m"));

module.exports = grammar({
  name: "git_rebase",

  extras: ($) => [WHITE_SPACE],

  inline: ($) => [$._line],

  rules: {
    source: ($) =>
      seq(
        repeat(NEWLINE),
        $._line,
        repeat(seq($._operation_separator, optional($._line))),
        optional(NEWLINE)
      ),

    _operation_separator: ($) => token(prec(1, NEWLINE)),

    _line: ($) => choice($.operation, $.comment),

    operation: ($) =>
      choice(
        $._merge,
        $._fixup,
        $._commit_operation_without_option,
        $._label_operation,
        $._exec,
        $._break
      ),

    _merge: ($) =>
      seq(
        MERGE,
        optional(seq($.option, $.commit)),
        $.label,
        optional(seq("#", $.message))
      ),

    _fixup: ($) =>
      seq(
        FIXUP,
        optional($.option),
        $.commit,
        optional(alias($.message, $.comment))
      ),

    _commit_operation_without_option: ($) =>
      seq(
        choice(PICK, REWORD, EDIT, SQUASH, DROP),
        $.commit,
        optional(alias($.message, $.comment))
      ),

    _label_operation: ($) =>
      seq(choice(LABEL, RESET), $.label, optional($.comment)),

    _exec: ($) => seq(EXEC, $.command),

    _break: ($) => BREAK,

    // maybe this should be /-[a-zA-Z]/?
    option: ($) => choice("-c", "-C"),

    label: ($) => /\S+/,

    commit: ($) => /[a-f0-9]{7,40}/,

    message: ($) => ANYTHING,

    command: ($) => ANYTHING,

    comment: ($) => token(seq("#", optional(ANYTHING))),
  },
});
