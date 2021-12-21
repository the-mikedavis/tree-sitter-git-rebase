// helper constants
const WHITE_SPACE = repeat1(choice(" ", "\t", "\f", "\v"));
const NEWLINE = /\r?\n/;
const ANYTHING = /.*/;

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
  // hyphens are not allowed in grammar names
  name: "rebase",

  // this grammar is very rigid about whitespace, so I'm taking
  // full control of whitespace
  extras: ($) => [],

  rules: {
    source: ($) => repeat($._line),

    _line: ($) =>
      choice(
        seq($.operation, NEWLINE),
        seq(optional(WHITE_SPACE), NEWLINE),
        seq(optional(WHITE_SPACE), $.comment, NEWLINE)
      ),

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
        WHITE_SPACE,
        optional(seq($.option, WHITE_SPACE, $.commit, WHITE_SPACE)),
        $.label,
        optional(seq(WHITE_SPACE, "#", WHITE_SPACE, $.message))
      ),

    _fixup: ($) =>
      seq(
        FIXUP,
        WHITE_SPACE,
        optional(seq($.option, WHITE_SPACE)),
        $.commit,
        optional(seq(WHITE_SPACE, $.message))
      ),

    _commit_operation_without_option: ($) =>
      seq(
        choice(PICK, REWORD, EDIT, SQUASH, DROP),
        WHITE_SPACE,
        $.commit,
        optional(seq(WHITE_SPACE, $.message))
      ),

    _label_operation: ($) =>
      seq(
        choice(LABEL, RESET),
        WHITE_SPACE,
        $.label,
        optional(seq(WHITE_SPACE, $.comment))
      ),

    _exec: ($) => seq(EXEC, WHITE_SPACE, $.command),

    _break: ($) => BREAK,

    // maybe this should be /-[a-zA-Z]/?
    option: ($) => choice("-c", "-C"),

    label: ($) => /\S+/,

    commit: ($) => /[a-f0-9]{7,40}/,

    message: ($) => ANYTHING,

    command: ($) => ANYTHING,

    comment: ($) => token(seq("#", ANYTHING)),
  },
});
