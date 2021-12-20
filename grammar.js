const WHITE_SPACE = choice(" ", "\t", "\v", "\f");
const NEWLINE = /\r?\n/;

const PICK = choice("pick", "p");
const REWORD = choice("reword", "r");
const EDIT = choice("edit", "e");
const SQUASH = choice("squash", "s");
const FIXUP = choice("fixup", "f");
const EXEC = choice("exec", "x");
const BREAK = choice("break", "b");
const DROP = choice("drop", "d");
const LABEL = choice("label", "l");
const RESET = choice("reset", "t");
const MERGE = choice("merge", "m");

module.exports = grammar({
  // hyphens are not allowed in grammar names
  name: "gitrebasetodo",

  extras: ($) => [],

  rules: {
    source: ($) => repeat($._command),

    _command: ($) =>
      choice(seq($.operation, NEWLINE), seq(optional(WHITE_SPACE), NEWLINE)),

    operation: ($) =>
      choice(
        // $._merge,
        // $._break,
        // $._commit_operation_with_option,
        $._commit_operation_without_option
        // $._label_operation,
      ),

    // _break: $ => BREAK,

    _commit_operation_without_option: ($) =>
      seq(
        choice(PICK, REWORD, EDIT, SQUASH),
        WHITE_SPACE,
        $.commit,
        WHITE_SPACE,
        optional(alias($._implicit_comment, $.comment))
      ),

    // _label_operation: $ => seq(
    //   choice(LABEL, RESET),
    //   $.label,
    // ),

    // TODO: may need to use the external scanner for this
    label: ($) => /\w\d-_/,

    commit: ($) => /[a-f0-9]{7,40}/,

    _explicit_comment: ($) => token(seq("#", /.*/)),
    _implicit_comment: ($) => token(repeat(choice(WHITE_SPACE, /.*/))),

    comment: ($) => choice($._explicit_comment, $._implicit_comment),
  },
});
