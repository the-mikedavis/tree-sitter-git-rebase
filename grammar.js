const NEWLINE = /[\r?\n]+/;
// anything but newline
const ANYTHING = /\S[^\n\r]*/;
const ANYTHING_BUT_WHITESPACE = /\S+/;
// white-space token(s) but not the newline character
const WHITE_SPACE = /[\t\f\v ]+/;
const ALPHA_HYPHEN = /[a-zA-Z-]+/;

module.exports = grammar({
  name: "git_rebase",

  extras: ($) => [WHITE_SPACE, $.comment],

  rules: {
    source: ($) => surround($.operation, NEWLINE),

    operation: ($) =>
      choice(
        $._label_operation,
        $._exec_operation,
        $._merge_operation,
        $._fixup_operation,
        $._nullary_operation
      ),
    _nullary_operation: ($) => $.command,

    _label_operation: ($) => seq($.command, $.label, optional($.message)),

    _merge_operation: ($) =>
      seq($.command, $.option, $.label, $.label, optional($.message)),

    _fixup_operation: ($) =>
      seq($.command, $.option, $.label, optional($.message)),

    _exec_operation: ($) =>
      seq(alias(choice("x", "exec"), $.command), $.message),

    // maybe this should be /-[a-zA-Z]/?
    option: ($) => choice("-c", "-C"),

    label: ($) => ANYTHING_BUT_WHITESPACE,

    message: ($) => token(prec(-1, ANYTHING)),

    command: ($) => ALPHA_HYPHEN,

    comment: ($) => token(prec(-1, /#[^\r\n]*/)),
  },
});

function surround(rule, separator) {
  return seq(
    optional(separator),
    optional(sep1(rule, repeat1(separator))),
    optional(separator)
  );
}

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}
