#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 5

enum {
  aux_sym__line_token1 = 1,
  anon_sym_merge = 2,
  anon_sym_m = 3,
  anon_sym_POUND = 4,
  anon_sym_fixup = 5,
  anon_sym_f = 6,
  anon_sym_pick = 7,
  anon_sym_p = 8,
  anon_sym_reword = 9,
  anon_sym_r = 10,
  anon_sym_edit = 11,
  anon_sym_e = 12,
  anon_sym_squash = 13,
  anon_sym_s = 14,
  anon_sym_drop = 15,
  anon_sym_d = 16,
  anon_sym_label = 17,
  anon_sym_l = 18,
  anon_sym_reset = 19,
  anon_sym_t = 20,
  anon_sym_exec = 21,
  anon_sym_x = 22,
  anon_sym_break = 23,
  anon_sym_b = 24,
  anon_sym_DASHc = 25,
  anon_sym_DASHC = 26,
  sym_label = 27,
  sym_commit = 28,
  aux_sym_message_token1 = 29,
  sym_comment = 30,
  sym_source = 31,
  sym__line = 32,
  sym_operation = 33,
  sym__merge = 34,
  sym__fixup = 35,
  sym__commit_operation_without_option = 36,
  sym__label_operation = 37,
  sym__exec = 38,
  sym__break = 39,
  sym_option = 40,
  sym_message = 41,
  sym_command = 42,
  aux_sym_source_repeat1 = 43,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__line_token1] = "_line_token1",
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
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__line_token1] = aux_sym__line_token1,
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
  [3] = {.index = 0, .length = 1},
  [4] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_operator, 0},
  [1] =
    {field_operator, 0, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [2] = sym_comment,
  },
  [4] = {
    [3] = sym_comment,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_message, 2,
    sym_message,
    sym_comment,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(45);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == 'f') ADVANCE(51);
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(55);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == 't') ADVANCE(65);
      if (lookahead == 'x') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(46);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '\r') ADVANCE(112);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(113);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(74);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(77);
      END_STATE();
    case 5:
      if (lookahead == 'C') ADVANCE(72);
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 'g') ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == 'h') ADVANCE(58);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == 'k') ADVANCE(52);
      END_STATE();
    case 21:
      if (lookahead == 'k') ADVANCE(68);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(16);
      if (lookahead == 'w') ADVANCE(24);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 33:
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 35:
      if (lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(36)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(76);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(77);
      END_STATE();
    case 37:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 44:
      if (eof) ADVANCE(45);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == 'f') ADVANCE(51);
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(55);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == 't') ADVANCE(65);
      if (lookahead == 'x') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(44)
      END_STATE();
    case 45:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym__line_token1);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_merge);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_fixup);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_pick);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'i') ADVANCE(9);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_reword);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_edit);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'x') ADVANCE(15);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_squash);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'q') ADVANCE(33);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_drop);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_reset);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DASHc);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DASHc);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(77);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DASHC);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DASHC);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(77);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(74);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(77);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'C') ADVANCE(73);
      if (lookahead == 'c') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(76);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_label);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_commit);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
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
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\r') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(116);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 44},
  [2] = {.lex_state = 44},
  [3] = {.lex_state = 44},
  [4] = {.lex_state = 44},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 37},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 37},
  [13] = {.lex_state = 37},
  [14] = {.lex_state = 44},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 36},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 36},
  [39] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__line_token1] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source] = STATE(28),
    [sym__line] = STATE(2),
    [sym_operation] = STATE(32),
    [sym__merge] = STATE(16),
    [sym__fixup] = STATE(17),
    [sym__commit_operation_without_option] = STATE(26),
    [sym__label_operation] = STATE(23),
    [sym__exec] = STATE(27),
    [sym__break] = STATE(18),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__line_token1] = ACTIONS(5),
    [anon_sym_merge] = ACTIONS(7),
    [anon_sym_m] = ACTIONS(9),
    [anon_sym_fixup] = ACTIONS(11),
    [anon_sym_f] = ACTIONS(13),
    [anon_sym_pick] = ACTIONS(15),
    [anon_sym_p] = ACTIONS(17),
    [anon_sym_reword] = ACTIONS(15),
    [anon_sym_r] = ACTIONS(17),
    [anon_sym_edit] = ACTIONS(15),
    [anon_sym_e] = ACTIONS(17),
    [anon_sym_squash] = ACTIONS(15),
    [anon_sym_s] = ACTIONS(17),
    [anon_sym_drop] = ACTIONS(15),
    [anon_sym_d] = ACTIONS(17),
    [anon_sym_label] = ACTIONS(19),
    [anon_sym_l] = ACTIONS(21),
    [anon_sym_reset] = ACTIONS(19),
    [anon_sym_t] = ACTIONS(19),
    [anon_sym_exec] = ACTIONS(23),
    [anon_sym_x] = ACTIONS(23),
    [anon_sym_break] = ACTIONS(25),
    [anon_sym_b] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [2] = {
    [sym__line] = STATE(3),
    [sym_operation] = STATE(32),
    [sym__merge] = STATE(16),
    [sym__fixup] = STATE(17),
    [sym__commit_operation_without_option] = STATE(26),
    [sym__label_operation] = STATE(23),
    [sym__exec] = STATE(27),
    [sym__break] = STATE(18),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(31),
    [aux_sym__line_token1] = ACTIONS(33),
    [anon_sym_merge] = ACTIONS(7),
    [anon_sym_m] = ACTIONS(9),
    [anon_sym_fixup] = ACTIONS(11),
    [anon_sym_f] = ACTIONS(13),
    [anon_sym_pick] = ACTIONS(15),
    [anon_sym_p] = ACTIONS(17),
    [anon_sym_reword] = ACTIONS(15),
    [anon_sym_r] = ACTIONS(17),
    [anon_sym_edit] = ACTIONS(15),
    [anon_sym_e] = ACTIONS(17),
    [anon_sym_squash] = ACTIONS(15),
    [anon_sym_s] = ACTIONS(17),
    [anon_sym_drop] = ACTIONS(15),
    [anon_sym_d] = ACTIONS(17),
    [anon_sym_label] = ACTIONS(19),
    [anon_sym_l] = ACTIONS(21),
    [anon_sym_reset] = ACTIONS(19),
    [anon_sym_t] = ACTIONS(19),
    [anon_sym_exec] = ACTIONS(23),
    [anon_sym_x] = ACTIONS(23),
    [anon_sym_break] = ACTIONS(25),
    [anon_sym_b] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [3] = {
    [sym__line] = STATE(3),
    [sym_operation] = STATE(32),
    [sym__merge] = STATE(16),
    [sym__fixup] = STATE(17),
    [sym__commit_operation_without_option] = STATE(26),
    [sym__label_operation] = STATE(23),
    [sym__exec] = STATE(27),
    [sym__break] = STATE(18),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(35),
    [aux_sym__line_token1] = ACTIONS(37),
    [anon_sym_merge] = ACTIONS(40),
    [anon_sym_m] = ACTIONS(43),
    [anon_sym_fixup] = ACTIONS(46),
    [anon_sym_f] = ACTIONS(49),
    [anon_sym_pick] = ACTIONS(52),
    [anon_sym_p] = ACTIONS(55),
    [anon_sym_reword] = ACTIONS(52),
    [anon_sym_r] = ACTIONS(55),
    [anon_sym_edit] = ACTIONS(52),
    [anon_sym_e] = ACTIONS(55),
    [anon_sym_squash] = ACTIONS(52),
    [anon_sym_s] = ACTIONS(55),
    [anon_sym_drop] = ACTIONS(52),
    [anon_sym_d] = ACTIONS(55),
    [anon_sym_label] = ACTIONS(58),
    [anon_sym_l] = ACTIONS(61),
    [anon_sym_reset] = ACTIONS(58),
    [anon_sym_t] = ACTIONS(58),
    [anon_sym_exec] = ACTIONS(64),
    [anon_sym_x] = ACTIONS(64),
    [anon_sym_break] = ACTIONS(67),
    [anon_sym_b] = ACTIONS(70),
    [sym_comment] = ACTIONS(73),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(76),
    [aux_sym__line_token1] = ACTIONS(76),
    [anon_sym_merge] = ACTIONS(76),
    [anon_sym_m] = ACTIONS(78),
    [anon_sym_fixup] = ACTIONS(76),
    [anon_sym_f] = ACTIONS(78),
    [anon_sym_pick] = ACTIONS(76),
    [anon_sym_p] = ACTIONS(78),
    [anon_sym_reword] = ACTIONS(76),
    [anon_sym_r] = ACTIONS(78),
    [anon_sym_edit] = ACTIONS(76),
    [anon_sym_e] = ACTIONS(78),
    [anon_sym_squash] = ACTIONS(76),
    [anon_sym_s] = ACTIONS(78),
    [anon_sym_drop] = ACTIONS(76),
    [anon_sym_d] = ACTIONS(78),
    [anon_sym_label] = ACTIONS(76),
    [anon_sym_l] = ACTIONS(78),
    [anon_sym_reset] = ACTIONS(76),
    [anon_sym_t] = ACTIONS(76),
    [anon_sym_exec] = ACTIONS(76),
    [anon_sym_x] = ACTIONS(76),
    [anon_sym_break] = ACTIONS(76),
    [anon_sym_b] = ACTIONS(78),
    [sym_comment] = ACTIONS(76),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(82), 1,
      sym_label,
    STATE(20), 1,
      sym_option,
    ACTIONS(80), 2,
      anon_sym_DASHc,
      anon_sym_DASHC,
  [11] = 3,
    ACTIONS(86), 1,
      sym_commit,
    STATE(21), 1,
      sym_option,
    ACTIONS(84), 2,
      anon_sym_DASHc,
      anon_sym_DASHC,
  [22] = 3,
    ACTIONS(88), 1,
      aux_sym__line_token1,
    ACTIONS(90), 1,
      aux_sym_message_token1,
    STATE(37), 1,
      sym_message,
  [32] = 3,
    ACTIONS(90), 1,
      aux_sym_message_token1,
    ACTIONS(92), 1,
      aux_sym__line_token1,
    STATE(33), 1,
      sym_message,
  [42] = 3,
    ACTIONS(90), 1,
      aux_sym_message_token1,
    ACTIONS(94), 1,
      aux_sym__line_token1,
    STATE(31), 1,
      sym_message,
  [52] = 2,
    ACTIONS(96), 1,
      aux_sym_message_token1,
    STATE(39), 1,
      sym_message,
  [59] = 2,
    ACTIONS(98), 1,
      aux_sym__line_token1,
    ACTIONS(100), 1,
      anon_sym_POUND,
  [66] = 2,
    ACTIONS(102), 1,
      aux_sym_message_token1,
    STATE(25), 1,
      sym_command,
  [73] = 2,
    ACTIONS(96), 1,
      aux_sym_message_token1,
    STATE(35), 1,
      sym_message,
  [80] = 2,
    ACTIONS(104), 1,
      aux_sym__line_token1,
    ACTIONS(106), 1,
      sym_comment,
  [87] = 2,
    ACTIONS(108), 1,
      aux_sym__line_token1,
    ACTIONS(110), 1,
      anon_sym_POUND,
  [94] = 1,
    ACTIONS(112), 1,
      aux_sym__line_token1,
  [98] = 1,
    ACTIONS(112), 1,
      aux_sym__line_token1,
  [102] = 1,
    ACTIONS(112), 1,
      aux_sym__line_token1,
  [106] = 1,
    ACTIONS(114), 1,
      sym_commit,
  [110] = 1,
    ACTIONS(116), 1,
      sym_commit,
  [114] = 1,
    ACTIONS(118), 1,
      sym_commit,
  [118] = 1,
    ACTIONS(120), 1,
      sym_commit,
  [122] = 1,
    ACTIONS(112), 1,
      aux_sym__line_token1,
  [126] = 1,
    ACTIONS(122), 1,
      aux_sym__line_token1,
  [130] = 1,
    ACTIONS(124), 1,
      aux_sym__line_token1,
  [134] = 1,
    ACTIONS(112), 1,
      aux_sym__line_token1,
  [138] = 1,
    ACTIONS(112), 1,
      aux_sym__line_token1,
  [142] = 1,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
  [146] = 1,
    ACTIONS(128), 1,
      sym_label,
  [150] = 1,
    ACTIONS(130), 1,
      aux_sym__line_token1,
  [154] = 1,
    ACTIONS(132), 1,
      aux_sym__line_token1,
  [158] = 1,
    ACTIONS(134), 1,
      aux_sym__line_token1,
  [162] = 1,
    ACTIONS(136), 1,
      aux_sym__line_token1,
  [166] = 1,
    ACTIONS(138), 1,
      aux_sym__line_token1,
  [170] = 1,
    ACTIONS(98), 1,
      aux_sym__line_token1,
  [174] = 1,
    ACTIONS(140), 1,
      aux_sym__line_token1,
  [178] = 1,
    ACTIONS(142), 1,
      aux_sym__line_token1,
  [182] = 1,
    ACTIONS(144), 1,
      sym_label,
  [186] = 1,
    ACTIONS(146), 1,
      aux_sym__line_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 11,
  [SMALL_STATE(7)] = 22,
  [SMALL_STATE(8)] = 32,
  [SMALL_STATE(9)] = 42,
  [SMALL_STATE(10)] = 52,
  [SMALL_STATE(11)] = 59,
  [SMALL_STATE(12)] = 66,
  [SMALL_STATE(13)] = 73,
  [SMALL_STATE(14)] = 80,
  [SMALL_STATE(15)] = 87,
  [SMALL_STATE(16)] = 94,
  [SMALL_STATE(17)] = 98,
  [SMALL_STATE(18)] = 102,
  [SMALL_STATE(19)] = 106,
  [SMALL_STATE(20)] = 110,
  [SMALL_STATE(21)] = 114,
  [SMALL_STATE(22)] = 118,
  [SMALL_STATE(23)] = 122,
  [SMALL_STATE(24)] = 126,
  [SMALL_STATE(25)] = 130,
  [SMALL_STATE(26)] = 134,
  [SMALL_STATE(27)] = 138,
  [SMALL_STATE(28)] = 142,
  [SMALL_STATE(29)] = 146,
  [SMALL_STATE(30)] = 150,
  [SMALL_STATE(31)] = 154,
  [SMALL_STATE(32)] = 158,
  [SMALL_STATE(33)] = 162,
  [SMALL_STATE(34)] = 166,
  [SMALL_STATE(35)] = 170,
  [SMALL_STATE(36)] = 174,
  [SMALL_STATE(37)] = 178,
  [SMALL_STATE(38)] = 182,
  [SMALL_STATE(39)] = 186,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(5),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(5),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(6),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(6),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(22),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(22),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(38),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(38),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(12),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(36),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(36),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(32),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fixup, 3, .production_id = 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__commit_operation_without_option, 2, .production_id = 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fixup, 2, .production_id = 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__merge, 4, .production_id = 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_operation, 2, .production_id = 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__merge, 2, .production_id = 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1, .production_id = 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exec, 2, .production_id = 1),
  [126] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fixup, 3, .production_id = 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__commit_operation_without_option, 3, .production_id = 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_operation, 3, .production_id = 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__break, 1, .production_id = 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fixup, 4, .production_id = 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__merge, 6, .production_id = 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_git_rebase(void) {
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
