#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 64
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 3

enum {
  aux_sym__line_token1 = 1,
  anon_sym_ = 2,
  anon_sym_TAB = 3,
  anon_sym_2 = 4,
  anon_sym_3 = 5,
  anon_sym_merge = 6,
  anon_sym_m = 7,
  anon_sym_POUND = 8,
  anon_sym_fixup = 9,
  anon_sym_f = 10,
  anon_sym_pick = 11,
  anon_sym_p = 12,
  anon_sym_reword = 13,
  anon_sym_r = 14,
  anon_sym_edit = 15,
  anon_sym_e = 16,
  anon_sym_squash = 17,
  anon_sym_s = 18,
  anon_sym_drop = 19,
  anon_sym_d = 20,
  anon_sym_label = 21,
  anon_sym_l = 22,
  anon_sym_reset = 23,
  anon_sym_t = 24,
  anon_sym_exec = 25,
  anon_sym_x = 26,
  anon_sym_break = 27,
  anon_sym_b = 28,
  anon_sym_DASHc = 29,
  anon_sym_DASHC = 30,
  sym_label = 31,
  sym_commit = 32,
  aux_sym_message_token1 = 33,
  sym_comment = 34,
  sym_source = 35,
  sym__line = 36,
  sym_operation = 37,
  sym__merge = 38,
  sym__fixup = 39,
  sym__commit_operation_without_option = 40,
  sym__label_operation = 41,
  sym__exec = 42,
  sym__break = 43,
  sym_option = 44,
  sym_message = 45,
  sym_command = 46,
  aux_sym_source_repeat1 = 47,
  aux_sym__line_repeat1 = 48,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__line_token1] = "_line_token1",
  [anon_sym_] = " ",
  [anon_sym_TAB] = "\t",
  [anon_sym_2] = "\f",
  [anon_sym_3] = "",
  [anon_sym_merge] = "merge",
  [anon_sym_m] = "m",
  [anon_sym_POUND] = "#",
  [anon_sym_fixup] = "fixup",
  [anon_sym_f] = "f",
  [anon_sym_pick] = "pick",
  [anon_sym_p] = "p",
  [anon_sym_reword] = "reword",
  [anon_sym_r] = "r",
  [anon_sym_edit] = "edit",
  [anon_sym_e] = "e",
  [anon_sym_squash] = "squash",
  [anon_sym_s] = "s",
  [anon_sym_drop] = "drop",
  [anon_sym_d] = "d",
  [anon_sym_label] = "label",
  [anon_sym_l] = "l",
  [anon_sym_reset] = "reset",
  [anon_sym_t] = "t",
  [anon_sym_exec] = "exec",
  [anon_sym_x] = "x",
  [anon_sym_break] = "break",
  [anon_sym_b] = "b",
  [anon_sym_DASHc] = "-c",
  [anon_sym_DASHC] = "-C",
  [sym_label] = "label",
  [sym_commit] = "commit",
  [aux_sym_message_token1] = "message_token1",
  [sym_comment] = "comment",
  [sym_source] = "source",
  [sym__line] = "_line",
  [sym_operation] = "operation",
  [sym__merge] = "_merge",
  [sym__fixup] = "_fixup",
  [sym__commit_operation_without_option] = "_commit_operation_without_option",
  [sym__label_operation] = "_label_operation",
  [sym__exec] = "_exec",
  [sym__break] = "_break",
  [sym_option] = "option",
  [sym_message] = "message",
  [sym_command] = "command",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym__line_repeat1] = "_line_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__line_token1] = aux_sym__line_token1,
  [anon_sym_] = anon_sym_,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_3] = anon_sym_3,
  [anon_sym_merge] = anon_sym_merge,
  [anon_sym_m] = anon_sym_m,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_fixup] = anon_sym_fixup,
  [anon_sym_f] = anon_sym_f,
  [anon_sym_pick] = anon_sym_pick,
  [anon_sym_p] = anon_sym_p,
  [anon_sym_reword] = anon_sym_reword,
  [anon_sym_r] = anon_sym_r,
  [anon_sym_edit] = anon_sym_edit,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_squash] = anon_sym_squash,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_drop] = anon_sym_drop,
  [anon_sym_d] = anon_sym_d,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_l] = anon_sym_l,
  [anon_sym_reset] = anon_sym_reset,
  [anon_sym_t] = anon_sym_t,
  [anon_sym_exec] = anon_sym_exec,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_b] = anon_sym_b,
  [anon_sym_DASHc] = anon_sym_DASHc,
  [anon_sym_DASHC] = anon_sym_DASHC,
  [sym_label] = sym_label,
  [sym_commit] = sym_commit,
  [aux_sym_message_token1] = aux_sym_message_token1,
  [sym_comment] = sym_comment,
  [sym_source] = sym_source,
  [sym__line] = sym__line,
  [sym_operation] = sym_operation,
  [sym__merge] = sym__merge,
  [sym__fixup] = sym__fixup,
  [sym__commit_operation_without_option] = sym__commit_operation_without_option,
  [sym__label_operation] = sym__label_operation,
  [sym__exec] = sym__exec,
  [sym__break] = sym__break,
  [sym_option] = sym_option,
  [sym_message] = sym_message,
  [sym_command] = sym_command,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym__line_repeat1] = aux_sym__line_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_merge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_m] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fixup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pick] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_p] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_edit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_squash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_drop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_l] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHC] = {
    .visible = true,
    .named = false,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_commit] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_message_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_operation] = {
    .visible = true,
    .named = true,
  },
  [sym__merge] = {
    .visible = false,
    .named = true,
  },
  [sym__fixup] = {
    .visible = false,
    .named = true,
  },
  [sym__commit_operation_without_option] = {
    .visible = false,
    .named = true,
  },
  [sym__label_operation] = {
    .visible = false,
    .named = true,
  },
  [sym__exec] = {
    .visible = false,
    .named = true,
  },
  [sym__break] = {
    .visible = false,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__line_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_operator = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_operator] = "operator",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_operator, 0},
  [1] =
    {field_operator, 0, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(44);
      if (lookahead == '\t') ADVANCE(48);
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead == 11) ADVANCE(53);
      if (lookahead == '\f') ADVANCE(50);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == ' ') ADVANCE(46);
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'b') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(61);
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(57);
      if (lookahead == 'p') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead == 'x') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(42);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(48);
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead == 11) ADVANCE(53);
      if (lookahead == '\f') ADVANCE(50);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == ' ') ADVANCE(46);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '-') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(48);
      if (lookahead == 11) ADVANCE(54);
      if (lookahead == '\f') ADVANCE(51);
      if (lookahead == ' ') ADVANCE(46);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(88);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(48);
      if (lookahead == 11) ADVANCE(54);
      if (lookahead == '\f') ADVANCE(51);
      if (lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(88);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(45);
      END_STATE();
    case 5:
      if (lookahead == 'C') ADVANCE(85);
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == 'g') ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 21:
      if (lookahead == 'k') ADVANCE(62);
      END_STATE();
    case 22:
      if (lookahead == 'k') ADVANCE(80);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 27:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(16);
      if (lookahead == 'w') ADVANCE(25);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 36:
      if (lookahead == 'x') ADVANCE(35);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 43:
      if (eof) ADVANCE(44);
      if (lookahead == '\t') ADVANCE(48);
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead == 11) ADVANCE(53);
      if (lookahead == '\f') ADVANCE(50);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == ' ') ADVANCE(46);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == 'b') ADVANCE(81);
      if (lookahead == 'd') ADVANCE(72);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(57);
      if (lookahead == 'p') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead == 'x') ADVANCE(79);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym__line_token1);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(88);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(88);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_merge);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_fixup);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'i') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_pick);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'i') ADVANCE(9);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_reword);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_edit);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 'x') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'x') ADVANCE(15);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_squash);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'q') ADVANCE(34);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_drop);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == 'r') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_reset);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'r') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DASHc);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DASHc);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(88);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DASHC);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DASHC);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'C') ADVANCE(86);
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_label);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_commit);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(117);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t') ADVANCE(49);
      if (lookahead == 11) ADVANCE(55);
      if (lookahead == '\f') ADVANCE(52);
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 43},
  [2] = {.lex_state = 43},
  [3] = {.lex_state = 43},
  [4] = {.lex_state = 43},
  [5] = {.lex_state = 43},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 43},
  [11] = {.lex_state = 123},
  [12] = {.lex_state = 123},
  [13] = {.lex_state = 123},
  [14] = {.lex_state = 123},
  [15] = {.lex_state = 123},
  [16] = {.lex_state = 123},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 123},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 43},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__line_token1] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [anon_sym_merge] = ACTIONS(1),
    [anon_sym_m] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_fixup] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [anon_sym_pick] = ACTIONS(1),
    [anon_sym_p] = ACTIONS(1),
    [anon_sym_reword] = ACTIONS(1),
    [anon_sym_r] = ACTIONS(1),
    [anon_sym_edit] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_squash] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_drop] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_reset] = ACTIONS(1),
    [anon_sym_t] = ACTIONS(1),
    [anon_sym_exec] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
    [anon_sym_DASHc] = ACTIONS(1),
    [anon_sym_DASHC] = ACTIONS(1),
    [sym_commit] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(60),
    [sym__line] = STATE(3),
    [sym_operation] = STATE(58),
    [sym__merge] = STATE(51),
    [sym__fixup] = STATE(63),
    [sym__commit_operation_without_option] = STATE(62),
    [sym__label_operation] = STATE(61),
    [sym__exec] = STATE(56),
    [sym__break] = STATE(54),
    [aux_sym_source_repeat1] = STATE(3),
    [aux_sym__line_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__line_token1] = ACTIONS(5),
    [anon_sym_] = ACTIONS(7),
    [anon_sym_TAB] = ACTIONS(7),
    [anon_sym_2] = ACTIONS(7),
    [anon_sym_3] = ACTIONS(7),
    [anon_sym_merge] = ACTIONS(9),
    [anon_sym_m] = ACTIONS(11),
    [anon_sym_fixup] = ACTIONS(13),
    [anon_sym_f] = ACTIONS(15),
    [anon_sym_pick] = ACTIONS(17),
    [anon_sym_p] = ACTIONS(19),
    [anon_sym_reword] = ACTIONS(17),
    [anon_sym_r] = ACTIONS(19),
    [anon_sym_edit] = ACTIONS(17),
    [anon_sym_e] = ACTIONS(19),
    [anon_sym_squash] = ACTIONS(17),
    [anon_sym_s] = ACTIONS(19),
    [anon_sym_drop] = ACTIONS(17),
    [anon_sym_d] = ACTIONS(19),
    [anon_sym_label] = ACTIONS(21),
    [anon_sym_l] = ACTIONS(23),
    [anon_sym_reset] = ACTIONS(21),
    [anon_sym_t] = ACTIONS(21),
    [anon_sym_exec] = ACTIONS(25),
    [anon_sym_x] = ACTIONS(25),
    [anon_sym_break] = ACTIONS(27),
    [anon_sym_b] = ACTIONS(29),
    [sym_comment] = ACTIONS(31),
  },
  [2] = {
    [sym__line] = STATE(2),
    [sym_operation] = STATE(58),
    [sym__merge] = STATE(51),
    [sym__fixup] = STATE(63),
    [sym__commit_operation_without_option] = STATE(62),
    [sym__label_operation] = STATE(61),
    [sym__exec] = STATE(56),
    [sym__break] = STATE(54),
    [aux_sym_source_repeat1] = STATE(2),
    [aux_sym__line_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(33),
    [aux_sym__line_token1] = ACTIONS(35),
    [anon_sym_] = ACTIONS(38),
    [anon_sym_TAB] = ACTIONS(38),
    [anon_sym_2] = ACTIONS(38),
    [anon_sym_3] = ACTIONS(38),
    [anon_sym_merge] = ACTIONS(41),
    [anon_sym_m] = ACTIONS(44),
    [anon_sym_fixup] = ACTIONS(47),
    [anon_sym_f] = ACTIONS(50),
    [anon_sym_pick] = ACTIONS(53),
    [anon_sym_p] = ACTIONS(56),
    [anon_sym_reword] = ACTIONS(53),
    [anon_sym_r] = ACTIONS(56),
    [anon_sym_edit] = ACTIONS(53),
    [anon_sym_e] = ACTIONS(56),
    [anon_sym_squash] = ACTIONS(53),
    [anon_sym_s] = ACTIONS(56),
    [anon_sym_drop] = ACTIONS(53),
    [anon_sym_d] = ACTIONS(56),
    [anon_sym_label] = ACTIONS(59),
    [anon_sym_l] = ACTIONS(62),
    [anon_sym_reset] = ACTIONS(59),
    [anon_sym_t] = ACTIONS(59),
    [anon_sym_exec] = ACTIONS(65),
    [anon_sym_x] = ACTIONS(65),
    [anon_sym_break] = ACTIONS(68),
    [anon_sym_b] = ACTIONS(71),
    [sym_comment] = ACTIONS(74),
  },
  [3] = {
    [sym__line] = STATE(2),
    [sym_operation] = STATE(58),
    [sym__merge] = STATE(51),
    [sym__fixup] = STATE(63),
    [sym__commit_operation_without_option] = STATE(62),
    [sym__label_operation] = STATE(61),
    [sym__exec] = STATE(56),
    [sym__break] = STATE(54),
    [aux_sym_source_repeat1] = STATE(2),
    [aux_sym__line_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(77),
    [aux_sym__line_token1] = ACTIONS(79),
    [anon_sym_] = ACTIONS(7),
    [anon_sym_TAB] = ACTIONS(7),
    [anon_sym_2] = ACTIONS(7),
    [anon_sym_3] = ACTIONS(7),
    [anon_sym_merge] = ACTIONS(9),
    [anon_sym_m] = ACTIONS(11),
    [anon_sym_fixup] = ACTIONS(13),
    [anon_sym_f] = ACTIONS(15),
    [anon_sym_pick] = ACTIONS(17),
    [anon_sym_p] = ACTIONS(19),
    [anon_sym_reword] = ACTIONS(17),
    [anon_sym_r] = ACTIONS(19),
    [anon_sym_edit] = ACTIONS(17),
    [anon_sym_e] = ACTIONS(19),
    [anon_sym_squash] = ACTIONS(17),
    [anon_sym_s] = ACTIONS(19),
    [anon_sym_drop] = ACTIONS(17),
    [anon_sym_d] = ACTIONS(19),
    [anon_sym_label] = ACTIONS(21),
    [anon_sym_l] = ACTIONS(23),
    [anon_sym_reset] = ACTIONS(21),
    [anon_sym_t] = ACTIONS(21),
    [anon_sym_exec] = ACTIONS(25),
    [anon_sym_x] = ACTIONS(25),
    [anon_sym_break] = ACTIONS(27),
    [anon_sym_b] = ACTIONS(29),
    [sym_comment] = ACTIONS(31),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [aux_sym__line_token1] = ACTIONS(81),
    [anon_sym_] = ACTIONS(81),
    [anon_sym_TAB] = ACTIONS(81),
    [anon_sym_2] = ACTIONS(81),
    [anon_sym_3] = ACTIONS(81),
    [anon_sym_merge] = ACTIONS(81),
    [anon_sym_m] = ACTIONS(83),
    [anon_sym_fixup] = ACTIONS(81),
    [anon_sym_f] = ACTIONS(83),
    [anon_sym_pick] = ACTIONS(81),
    [anon_sym_p] = ACTIONS(83),
    [anon_sym_reword] = ACTIONS(81),
    [anon_sym_r] = ACTIONS(83),
    [anon_sym_edit] = ACTIONS(81),
    [anon_sym_e] = ACTIONS(83),
    [anon_sym_squash] = ACTIONS(81),
    [anon_sym_s] = ACTIONS(83),
    [anon_sym_drop] = ACTIONS(81),
    [anon_sym_d] = ACTIONS(83),
    [anon_sym_label] = ACTIONS(81),
    [anon_sym_l] = ACTIONS(83),
    [anon_sym_reset] = ACTIONS(81),
    [anon_sym_t] = ACTIONS(81),
    [anon_sym_exec] = ACTIONS(81),
    [anon_sym_x] = ACTIONS(81),
    [anon_sym_break] = ACTIONS(81),
    [anon_sym_b] = ACTIONS(83),
    [sym_comment] = ACTIONS(81),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [aux_sym__line_token1] = ACTIONS(85),
    [anon_sym_] = ACTIONS(85),
    [anon_sym_TAB] = ACTIONS(85),
    [anon_sym_2] = ACTIONS(85),
    [anon_sym_3] = ACTIONS(85),
    [anon_sym_merge] = ACTIONS(85),
    [anon_sym_m] = ACTIONS(87),
    [anon_sym_fixup] = ACTIONS(85),
    [anon_sym_f] = ACTIONS(87),
    [anon_sym_pick] = ACTIONS(85),
    [anon_sym_p] = ACTIONS(87),
    [anon_sym_reword] = ACTIONS(85),
    [anon_sym_r] = ACTIONS(87),
    [anon_sym_edit] = ACTIONS(85),
    [anon_sym_e] = ACTIONS(87),
    [anon_sym_squash] = ACTIONS(85),
    [anon_sym_s] = ACTIONS(87),
    [anon_sym_drop] = ACTIONS(85),
    [anon_sym_d] = ACTIONS(87),
    [anon_sym_label] = ACTIONS(85),
    [anon_sym_l] = ACTIONS(87),
    [anon_sym_reset] = ACTIONS(85),
    [anon_sym_t] = ACTIONS(85),
    [anon_sym_exec] = ACTIONS(85),
    [anon_sym_x] = ACTIONS(85),
    [anon_sym_break] = ACTIONS(85),
    [anon_sym_b] = ACTIONS(87),
    [sym_comment] = ACTIONS(85),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    STATE(6), 1,
      aux_sym__line_repeat1,
    ACTIONS(91), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
    ACTIONS(89), 5,
      aux_sym__line_token1,
      anon_sym_DASHc,
      anon_sym_DASHC,
      sym_commit,
      sym_comment,
  [17] = 6,
    ACTIONS(100), 1,
      sym_label,
    STATE(9), 1,
      aux_sym__line_repeat1,
    STATE(40), 1,
      sym_option,
    ACTIONS(94), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(96), 2,
      anon_sym_2,
      anon_sym_3,
    ACTIONS(98), 2,
      anon_sym_DASHc,
      anon_sym_DASHC,
  [39] = 5,
    ACTIONS(106), 1,
      sym_commit,
    STATE(6), 1,
      aux_sym__line_repeat1,
    STATE(38), 1,
      sym_option,
    ACTIONS(104), 2,
      anon_sym_DASHc,
      anon_sym_DASHC,
    ACTIONS(102), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [59] = 4,
    STATE(9), 1,
      aux_sym__line_repeat1,
    ACTIONS(108), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(111), 2,
      anon_sym_2,
      anon_sym_3,
    ACTIONS(114), 3,
      anon_sym_DASHc,
      anon_sym_DASHC,
      sym_label,
  [76] = 4,
    ACTIONS(116), 1,
      aux_sym__line_token1,
    ACTIONS(118), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym__line_repeat1,
    ACTIONS(102), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [92] = 4,
    ACTIONS(122), 1,
      aux_sym_message_token1,
    STATE(20), 1,
      aux_sym__line_repeat1,
    STATE(59), 1,
      sym_message,
    ACTIONS(120), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [108] = 4,
    ACTIONS(122), 1,
      aux_sym_message_token1,
    STATE(20), 1,
      aux_sym__line_repeat1,
    STATE(55), 1,
      sym_message,
    ACTIONS(120), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [124] = 4,
    ACTIONS(122), 1,
      aux_sym_message_token1,
    STATE(20), 1,
      aux_sym__line_repeat1,
    STATE(53), 1,
      sym_message,
    ACTIONS(120), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [140] = 4,
    ACTIONS(122), 1,
      aux_sym_message_token1,
    STATE(20), 1,
      aux_sym__line_repeat1,
    STATE(45), 1,
      sym_message,
    ACTIONS(120), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [156] = 4,
    ACTIONS(122), 1,
      aux_sym_message_token1,
    STATE(20), 1,
      aux_sym__line_repeat1,
    STATE(46), 1,
      sym_message,
    ACTIONS(120), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [172] = 4,
    ACTIONS(124), 1,
      aux_sym_message_token1,
    STATE(20), 1,
      aux_sym__line_repeat1,
    STATE(50), 1,
      sym_command,
    ACTIONS(120), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [188] = 3,
    ACTIONS(126), 1,
      aux_sym__line_token1,
    STATE(27), 1,
      aux_sym__line_repeat1,
    ACTIONS(128), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [201] = 4,
    ACTIONS(134), 1,
      sym_label,
    STATE(21), 1,
      aux_sym__line_repeat1,
    ACTIONS(130), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(132), 2,
      anon_sym_2,
      anon_sym_3,
  [216] = 3,
    ACTIONS(89), 1,
      anon_sym_POUND,
    STATE(19), 1,
      aux_sym__line_repeat1,
    ACTIONS(136), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [229] = 3,
    ACTIONS(114), 1,
      aux_sym_message_token1,
    STATE(20), 1,
      aux_sym__line_repeat1,
    ACTIONS(139), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [242] = 4,
    ACTIONS(114), 1,
      sym_label,
    STATE(21), 1,
      aux_sym__line_repeat1,
    ACTIONS(142), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(145), 2,
      anon_sym_2,
      anon_sym_3,
  [257] = 3,
    ACTIONS(150), 1,
      anon_sym_POUND,
    STATE(19), 1,
      aux_sym__line_repeat1,
    ACTIONS(148), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [270] = 3,
    ACTIONS(152), 1,
      aux_sym__line_token1,
    STATE(22), 1,
      aux_sym__line_repeat1,
    ACTIONS(154), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [283] = 3,
    ACTIONS(156), 1,
      sym_commit,
    STATE(6), 1,
      aux_sym__line_repeat1,
    ACTIONS(102), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [296] = 4,
    ACTIONS(158), 1,
      sym_label,
    STATE(21), 1,
      aux_sym__line_repeat1,
    ACTIONS(130), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(132), 2,
      anon_sym_2,
      anon_sym_3,
  [311] = 3,
    ACTIONS(160), 1,
      aux_sym__line_token1,
    STATE(12), 1,
      aux_sym__line_repeat1,
    ACTIONS(162), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [324] = 3,
    ACTIONS(164), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym__line_repeat1,
    ACTIONS(102), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [337] = 3,
    ACTIONS(166), 1,
      aux_sym__line_token1,
    STATE(33), 1,
      aux_sym__line_repeat1,
    ACTIONS(168), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [350] = 3,
    ACTIONS(170), 1,
      sym_commit,
    STATE(6), 1,
      aux_sym__line_repeat1,
    ACTIONS(102), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [363] = 3,
    ACTIONS(172), 1,
      aux_sym__line_token1,
    STATE(15), 1,
      aux_sym__line_repeat1,
    ACTIONS(174), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [376] = 3,
    ACTIONS(176), 1,
      sym_commit,
    STATE(6), 1,
      aux_sym__line_repeat1,
    ACTIONS(102), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [389] = 3,
    ACTIONS(178), 1,
      aux_sym__line_token1,
    STATE(14), 1,
      aux_sym__line_repeat1,
    ACTIONS(180), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [402] = 3,
    ACTIONS(182), 1,
      anon_sym_POUND,
    STATE(19), 1,
      aux_sym__line_repeat1,
    ACTIONS(148), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [415] = 2,
    STATE(16), 1,
      aux_sym__line_repeat1,
    ACTIONS(184), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [425] = 2,
    STATE(8), 1,
      aux_sym__line_repeat1,
    ACTIONS(186), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [435] = 2,
    STATE(24), 1,
      aux_sym__line_repeat1,
    ACTIONS(188), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [445] = 2,
    STATE(7), 1,
      aux_sym__line_repeat1,
    ACTIONS(190), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [455] = 2,
    STATE(29), 1,
      aux_sym__line_repeat1,
    ACTIONS(192), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [465] = 2,
    STATE(11), 1,
      aux_sym__line_repeat1,
    ACTIONS(194), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [475] = 2,
    STATE(31), 1,
      aux_sym__line_repeat1,
    ACTIONS(196), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [485] = 2,
    STATE(25), 1,
      aux_sym__line_repeat1,
    ACTIONS(198), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [495] = 2,
    STATE(13), 1,
      aux_sym__line_repeat1,
    ACTIONS(200), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [505] = 2,
    STATE(18), 1,
      aux_sym__line_repeat1,
    ACTIONS(202), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [515] = 1,
    ACTIONS(204), 4,
      anon_sym_,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_3,
  [522] = 1,
    ACTIONS(206), 1,
      aux_sym__line_token1,
  [526] = 1,
    ACTIONS(160), 1,
      aux_sym__line_token1,
  [530] = 1,
    ACTIONS(208), 1,
      aux_sym__line_token1,
  [534] = 1,
    ACTIONS(210), 1,
      aux_sym__line_token1,
  [538] = 1,
    ACTIONS(212), 1,
      aux_sym__line_token1,
  [542] = 1,
    ACTIONS(214), 1,
      aux_sym__line_token1,
  [546] = 1,
    ACTIONS(216), 1,
      aux_sym__line_token1,
  [550] = 1,
    ACTIONS(218), 1,
      aux_sym__line_token1,
  [554] = 1,
    ACTIONS(152), 1,
      aux_sym__line_token1,
  [558] = 1,
    ACTIONS(216), 1,
      aux_sym__line_token1,
  [562] = 1,
    ACTIONS(220), 1,
      aux_sym__line_token1,
  [566] = 1,
    ACTIONS(216), 1,
      aux_sym__line_token1,
  [570] = 1,
    ACTIONS(222), 1,
      aux_sym__line_token1,
  [574] = 1,
    ACTIONS(116), 1,
      aux_sym__line_token1,
  [578] = 1,
    ACTIONS(224), 1,
      aux_sym__line_token1,
  [582] = 1,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
  [586] = 1,
    ACTIONS(216), 1,
      aux_sym__line_token1,
  [590] = 1,
    ACTIONS(216), 1,
      aux_sym__line_token1,
  [594] = 1,
    ACTIONS(216), 1,
      aux_sym__line_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 17,
  [SMALL_STATE(8)] = 39,
  [SMALL_STATE(9)] = 59,
  [SMALL_STATE(10)] = 76,
  [SMALL_STATE(11)] = 92,
  [SMALL_STATE(12)] = 108,
  [SMALL_STATE(13)] = 124,
  [SMALL_STATE(14)] = 140,
  [SMALL_STATE(15)] = 156,
  [SMALL_STATE(16)] = 172,
  [SMALL_STATE(17)] = 188,
  [SMALL_STATE(18)] = 201,
  [SMALL_STATE(19)] = 216,
  [SMALL_STATE(20)] = 229,
  [SMALL_STATE(21)] = 242,
  [SMALL_STATE(22)] = 257,
  [SMALL_STATE(23)] = 270,
  [SMALL_STATE(24)] = 283,
  [SMALL_STATE(25)] = 296,
  [SMALL_STATE(26)] = 311,
  [SMALL_STATE(27)] = 324,
  [SMALL_STATE(28)] = 337,
  [SMALL_STATE(29)] = 350,
  [SMALL_STATE(30)] = 363,
  [SMALL_STATE(31)] = 376,
  [SMALL_STATE(32)] = 389,
  [SMALL_STATE(33)] = 402,
  [SMALL_STATE(34)] = 415,
  [SMALL_STATE(35)] = 425,
  [SMALL_STATE(36)] = 435,
  [SMALL_STATE(37)] = 445,
  [SMALL_STATE(38)] = 455,
  [SMALL_STATE(39)] = 465,
  [SMALL_STATE(40)] = 475,
  [SMALL_STATE(41)] = 485,
  [SMALL_STATE(42)] = 495,
  [SMALL_STATE(43)] = 505,
  [SMALL_STATE(44)] = 515,
  [SMALL_STATE(45)] = 522,
  [SMALL_STATE(46)] = 526,
  [SMALL_STATE(47)] = 530,
  [SMALL_STATE(48)] = 534,
  [SMALL_STATE(49)] = 538,
  [SMALL_STATE(50)] = 542,
  [SMALL_STATE(51)] = 546,
  [SMALL_STATE(52)] = 550,
  [SMALL_STATE(53)] = 554,
  [SMALL_STATE(54)] = 558,
  [SMALL_STATE(55)] = 562,
  [SMALL_STATE(56)] = 566,
  [SMALL_STATE(57)] = 570,
  [SMALL_STATE(58)] = 574,
  [SMALL_STATE(59)] = 578,
  [SMALL_STATE(60)] = 582,
  [SMALL_STATE(61)] = 586,
  [SMALL_STATE(62)] = 590,
  [SMALL_STATE(63)] = 594,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(2),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(10),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(37),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(37),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(35),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(35),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(36),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(36),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(41),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(41),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(34),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(57),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(57),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(58),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__line_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line_repeat1, 2), SHIFT_REPEAT(6),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line_repeat1, 2), SHIFT_REPEAT(9),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__line_repeat1, 2), SHIFT_REPEAT(9),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__line_repeat1, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_operation, 3, .production_id = 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line_repeat1, 2), SHIFT_REPEAT(19),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__line_repeat1, 2), SHIFT_REPEAT(20),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line_repeat1, 2), SHIFT_REPEAT(21),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__line_repeat1, 2), SHIFT_REPEAT(21),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__merge, 7, .production_id = 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fixup, 5, .production_id = 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__merge, 3, .production_id = 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fixup, 3, .production_id = 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__commit_operation_without_option, 3, .production_id = 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__commit_operation_without_option, 5, .production_id = 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_operation, 5, .production_id = 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exec, 3, .production_id = 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1, .production_id = 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fixup, 7, .production_id = 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__break, 1, .production_id = 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__merge, 11, .production_id = 1),
  [226] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gitrebasetodo(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
