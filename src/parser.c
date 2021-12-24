#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 5

enum {
  aux_sym_source_token1 = 1,
  sym__operation_separator = 2,
  anon_sym_merge = 3,
  anon_sym_m = 4,
  anon_sym_POUND = 5,
  anon_sym_fixup = 6,
  anon_sym_f = 7,
  anon_sym_pick = 8,
  anon_sym_p = 9,
  anon_sym_reword = 10,
  anon_sym_r = 11,
  anon_sym_edit = 12,
  anon_sym_e = 13,
  anon_sym_squash = 14,
  anon_sym_s = 15,
  anon_sym_drop = 16,
  anon_sym_d = 17,
  anon_sym_label = 18,
  anon_sym_l = 19,
  anon_sym_reset = 20,
  anon_sym_t = 21,
  anon_sym_exec = 22,
  anon_sym_x = 23,
  anon_sym_break = 24,
  anon_sym_b = 25,
  anon_sym_DASHc = 26,
  anon_sym_DASHC = 27,
  sym_label = 28,
  sym_commit = 29,
  aux_sym_message_token1 = 30,
  sym_comment = 31,
  sym_source = 32,
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
  aux_sym_source_repeat2 = 44,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_token1] = "source_token1",
  [sym__operation_separator] = "_operation_separator",
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
  [aux_sym_source_repeat2] = "source_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_token1] = aux_sym_source_token1,
  [sym__operation_separator] = sym__operation_separator,
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
  [aux_sym_source_repeat2] = aux_sym_source_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__operation_separator] = {
    .visible = false,
    .named = true,
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
  [aux_sym_source_repeat2] = {
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
      if (eof) ADVANCE(47);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == 'b') ADVANCE(72);
      if (lookahead == 'd') ADVANCE(64);
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead == 'l') ADVANCE(66);
      if (lookahead == 'm') ADVANCE(51);
      if (lookahead == 'p') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == 'x') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(49);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(48);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(48);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == 'b') ADVANCE(72);
      if (lookahead == 'd') ADVANCE(64);
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead == 'l') ADVANCE(66);
      if (lookahead == 'm') ADVANCE(51);
      if (lookahead == 'p') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == 'x') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(77);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(80);
      END_STATE();
    case 6:
      if (lookahead == 'C') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'g') ADVANCE(15);
      END_STATE();
    case 19:
      if (lookahead == 'h') ADVANCE(61);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == 'k') ADVANCE(55);
      END_STATE();
    case 22:
      if (lookahead == 'k') ADVANCE(71);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 27:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(17);
      if (lookahead == 'w') ADVANCE(25);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 36:
      if (lookahead == 'x') ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(37)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(79);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(80);
      END_STATE();
    case 38:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 45:
      if (eof) ADVANCE(47);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == 'b') ADVANCE(72);
      if (lookahead == 'd') ADVANCE(64);
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead == 'l') ADVANCE(66);
      if (lookahead == 'm') ADVANCE(51);
      if (lookahead == 'p') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == 'x') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(45)
      END_STATE();
    case 46:
      if (eof) ADVANCE(47);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '\r') ADVANCE(116);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__operation_separator);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_merge);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_fixup);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_pick);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_reword);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_edit);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 'x') ADVANCE(16);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_squash);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'q') ADVANCE(34);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_drop);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_reset);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DASHc);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DASHc);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(80);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DASHC);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DASHC);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(80);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(77);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(80);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'C') ADVANCE(76);
      if (lookahead == 'c') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(79);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_label);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_commit);
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
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '\r') ADVANCE(116);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(119);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 45},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 46},
  [6] = {.lex_state = 46},
  [7] = {.lex_state = 46},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 45},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 38},
  [36] = {.lex_state = 38},
  [37] = {.lex_state = 38},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 37},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 37},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_token1] = ACTIONS(1),
    [sym__operation_separator] = ACTIONS(1),
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
    [sym_source] = STATE(38),
    [sym_operation] = STATE(14),
    [sym__merge] = STATE(30),
    [sym__fixup] = STATE(29),
    [sym__commit_operation_without_option] = STATE(28),
    [sym__label_operation] = STATE(27),
    [sym__exec] = STATE(24),
    [sym__break] = STATE(20),
    [aux_sym_source_repeat1] = STATE(3),
    [aux_sym_source_token1] = ACTIONS(3),
    [anon_sym_merge] = ACTIONS(5),
    [anon_sym_m] = ACTIONS(7),
    [anon_sym_fixup] = ACTIONS(9),
    [anon_sym_f] = ACTIONS(11),
    [anon_sym_pick] = ACTIONS(13),
    [anon_sym_p] = ACTIONS(15),
    [anon_sym_reword] = ACTIONS(13),
    [anon_sym_r] = ACTIONS(15),
    [anon_sym_edit] = ACTIONS(13),
    [anon_sym_e] = ACTIONS(15),
    [anon_sym_squash] = ACTIONS(13),
    [anon_sym_s] = ACTIONS(15),
    [anon_sym_drop] = ACTIONS(13),
    [anon_sym_d] = ACTIONS(15),
    [anon_sym_label] = ACTIONS(17),
    [anon_sym_l] = ACTIONS(19),
    [anon_sym_reset] = ACTIONS(17),
    [anon_sym_t] = ACTIONS(17),
    [anon_sym_exec] = ACTIONS(21),
    [anon_sym_x] = ACTIONS(21),
    [anon_sym_break] = ACTIONS(23),
    [anon_sym_b] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [2] = {
    [sym_operation] = STATE(26),
    [sym__merge] = STATE(30),
    [sym__fixup] = STATE(29),
    [sym__commit_operation_without_option] = STATE(28),
    [sym__label_operation] = STATE(27),
    [sym__exec] = STATE(24),
    [sym__break] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(29),
    [aux_sym_source_token1] = ACTIONS(31),
    [sym__operation_separator] = ACTIONS(29),
    [anon_sym_merge] = ACTIONS(5),
    [anon_sym_m] = ACTIONS(7),
    [anon_sym_fixup] = ACTIONS(9),
    [anon_sym_f] = ACTIONS(11),
    [anon_sym_pick] = ACTIONS(13),
    [anon_sym_p] = ACTIONS(15),
    [anon_sym_reword] = ACTIONS(13),
    [anon_sym_r] = ACTIONS(15),
    [anon_sym_edit] = ACTIONS(13),
    [anon_sym_e] = ACTIONS(15),
    [anon_sym_squash] = ACTIONS(13),
    [anon_sym_s] = ACTIONS(15),
    [anon_sym_drop] = ACTIONS(13),
    [anon_sym_d] = ACTIONS(15),
    [anon_sym_label] = ACTIONS(17),
    [anon_sym_l] = ACTIONS(19),
    [anon_sym_reset] = ACTIONS(17),
    [anon_sym_t] = ACTIONS(17),
    [anon_sym_exec] = ACTIONS(21),
    [anon_sym_x] = ACTIONS(21),
    [anon_sym_break] = ACTIONS(23),
    [anon_sym_b] = ACTIONS(25),
    [sym_comment] = ACTIONS(33),
  },
  [3] = {
    [sym_operation] = STATE(15),
    [sym__merge] = STATE(30),
    [sym__fixup] = STATE(29),
    [sym__commit_operation_without_option] = STATE(28),
    [sym__label_operation] = STATE(27),
    [sym__exec] = STATE(24),
    [sym__break] = STATE(20),
    [aux_sym_source_repeat1] = STATE(4),
    [aux_sym_source_token1] = ACTIONS(35),
    [anon_sym_merge] = ACTIONS(5),
    [anon_sym_m] = ACTIONS(7),
    [anon_sym_fixup] = ACTIONS(9),
    [anon_sym_f] = ACTIONS(11),
    [anon_sym_pick] = ACTIONS(13),
    [anon_sym_p] = ACTIONS(15),
    [anon_sym_reword] = ACTIONS(13),
    [anon_sym_r] = ACTIONS(15),
    [anon_sym_edit] = ACTIONS(13),
    [anon_sym_e] = ACTIONS(15),
    [anon_sym_squash] = ACTIONS(13),
    [anon_sym_s] = ACTIONS(15),
    [anon_sym_drop] = ACTIONS(13),
    [anon_sym_d] = ACTIONS(15),
    [anon_sym_label] = ACTIONS(17),
    [anon_sym_l] = ACTIONS(19),
    [anon_sym_reset] = ACTIONS(17),
    [anon_sym_t] = ACTIONS(17),
    [anon_sym_exec] = ACTIONS(21),
    [anon_sym_x] = ACTIONS(21),
    [anon_sym_break] = ACTIONS(23),
    [anon_sym_b] = ACTIONS(25),
    [sym_comment] = ACTIONS(37),
  },
  [4] = {
    [aux_sym_source_repeat1] = STATE(4),
    [aux_sym_source_token1] = ACTIONS(39),
    [anon_sym_merge] = ACTIONS(42),
    [anon_sym_m] = ACTIONS(44),
    [anon_sym_fixup] = ACTIONS(42),
    [anon_sym_f] = ACTIONS(44),
    [anon_sym_pick] = ACTIONS(42),
    [anon_sym_p] = ACTIONS(44),
    [anon_sym_reword] = ACTIONS(42),
    [anon_sym_r] = ACTIONS(44),
    [anon_sym_edit] = ACTIONS(42),
    [anon_sym_e] = ACTIONS(44),
    [anon_sym_squash] = ACTIONS(42),
    [anon_sym_s] = ACTIONS(44),
    [anon_sym_drop] = ACTIONS(42),
    [anon_sym_d] = ACTIONS(44),
    [anon_sym_label] = ACTIONS(42),
    [anon_sym_l] = ACTIONS(44),
    [anon_sym_reset] = ACTIONS(42),
    [anon_sym_t] = ACTIONS(42),
    [anon_sym_exec] = ACTIONS(42),
    [anon_sym_x] = ACTIONS(42),
    [anon_sym_break] = ACTIONS(42),
    [anon_sym_b] = ACTIONS(44),
    [sym_comment] = ACTIONS(42),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 1,
      aux_sym_message_token1,
    STATE(22), 1,
      sym_message,
    ACTIONS(48), 2,
      aux_sym_source_token1,
      sym__operation_separator,
  [14] = 4,
    ACTIONS(50), 1,
      aux_sym_message_token1,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    STATE(32), 1,
      sym_message,
    ACTIONS(54), 2,
      aux_sym_source_token1,
      sym__operation_separator,
  [28] = 4,
    ACTIONS(50), 1,
      aux_sym_message_token1,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      sym_message,
    ACTIONS(58), 2,
      aux_sym_source_token1,
      sym__operation_separator,
  [42] = 3,
    ACTIONS(62), 1,
      aux_sym_source_token1,
    ACTIONS(64), 1,
      anon_sym_POUND,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      sym__operation_separator,
  [53] = 3,
    ACTIONS(68), 1,
      sym_label,
    STATE(45), 1,
      sym_option,
    ACTIONS(66), 2,
      anon_sym_DASHc,
      anon_sym_DASHC,
  [64] = 3,
    ACTIONS(72), 1,
      sym_commit,
    STATE(43), 1,
      sym_option,
    ACTIONS(70), 2,
      anon_sym_DASHc,
      anon_sym_DASHC,
  [75] = 3,
    ACTIONS(76), 1,
      aux_sym_source_token1,
    ACTIONS(78), 1,
      anon_sym_POUND,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      sym__operation_separator,
  [86] = 4,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 1,
      aux_sym_source_token1,
    ACTIONS(84), 1,
      sym__operation_separator,
    STATE(13), 1,
      aux_sym_source_repeat2,
  [99] = 4,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 1,
      aux_sym_source_token1,
    ACTIONS(90), 1,
      sym__operation_separator,
    STATE(13), 1,
      aux_sym_source_repeat2,
  [112] = 4,
    ACTIONS(84), 1,
      sym__operation_separator,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      aux_sym_source_token1,
    STATE(16), 1,
      aux_sym_source_repeat2,
  [125] = 4,
    ACTIONS(84), 1,
      sym__operation_separator,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      aux_sym_source_token1,
    STATE(12), 1,
      aux_sym_source_repeat2,
  [138] = 4,
    ACTIONS(84), 1,
      sym__operation_separator,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      aux_sym_source_token1,
    STATE(13), 1,
      aux_sym_source_repeat2,
  [151] = 3,
    ACTIONS(103), 1,
      aux_sym_source_token1,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      sym__operation_separator,
  [162] = 2,
    ACTIONS(109), 1,
      aux_sym_source_token1,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      sym__operation_separator,
  [170] = 2,
    ACTIONS(113), 1,
      aux_sym_source_token1,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      sym__operation_separator,
  [178] = 2,
    ACTIONS(117), 1,
      aux_sym_source_token1,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      sym__operation_separator,
  [186] = 2,
    ACTIONS(121), 1,
      aux_sym_source_token1,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      sym__operation_separator,
  [194] = 2,
    ACTIONS(125), 1,
      aux_sym_source_token1,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      sym__operation_separator,
  [202] = 2,
    ACTIONS(76), 1,
      aux_sym_source_token1,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      sym__operation_separator,
  [210] = 2,
    ACTIONS(117), 1,
      aux_sym_source_token1,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      sym__operation_separator,
  [218] = 2,
    ACTIONS(129), 1,
      aux_sym_source_token1,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      sym__operation_separator,
  [226] = 2,
    ACTIONS(88), 1,
      aux_sym_source_token1,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      sym__operation_separator,
  [234] = 2,
    ACTIONS(117), 1,
      aux_sym_source_token1,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      sym__operation_separator,
  [242] = 2,
    ACTIONS(117), 1,
      aux_sym_source_token1,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      sym__operation_separator,
  [250] = 2,
    ACTIONS(117), 1,
      aux_sym_source_token1,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      sym__operation_separator,
  [258] = 2,
    ACTIONS(117), 1,
      aux_sym_source_token1,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      sym__operation_separator,
  [266] = 2,
    ACTIONS(133), 1,
      aux_sym_source_token1,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      sym__operation_separator,
  [274] = 2,
    ACTIONS(137), 1,
      aux_sym_source_token1,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      sym__operation_separator,
  [282] = 2,
    ACTIONS(141), 1,
      aux_sym_source_token1,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      sym__operation_separator,
  [290] = 2,
    ACTIONS(145), 1,
      aux_sym_source_token1,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      sym__operation_separator,
  [298] = 2,
    ACTIONS(147), 1,
      aux_sym_message_token1,
    STATE(23), 1,
      sym_message,
  [305] = 2,
    ACTIONS(149), 1,
      aux_sym_message_token1,
    STATE(25), 1,
      sym_command,
  [312] = 2,
    ACTIONS(147), 1,
      aux_sym_message_token1,
    STATE(21), 1,
      sym_message,
  [319] = 1,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
  [323] = 1,
    ACTIONS(153), 1,
      sym_label,
  [327] = 1,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
  [331] = 1,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
  [335] = 1,
    ACTIONS(155), 1,
      sym_commit,
  [339] = 1,
    ACTIONS(157), 1,
      sym_commit,
  [343] = 1,
    ACTIONS(159), 1,
      sym_label,
  [347] = 1,
    ACTIONS(161), 1,
      sym_commit,
  [351] = 1,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
  [355] = 1,
    ACTIONS(165), 1,
      sym_commit,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 14,
  [SMALL_STATE(7)] = 28,
  [SMALL_STATE(8)] = 42,
  [SMALL_STATE(9)] = 53,
  [SMALL_STATE(10)] = 64,
  [SMALL_STATE(11)] = 75,
  [SMALL_STATE(12)] = 86,
  [SMALL_STATE(13)] = 99,
  [SMALL_STATE(14)] = 112,
  [SMALL_STATE(15)] = 125,
  [SMALL_STATE(16)] = 138,
  [SMALL_STATE(17)] = 151,
  [SMALL_STATE(18)] = 162,
  [SMALL_STATE(19)] = 170,
  [SMALL_STATE(20)] = 178,
  [SMALL_STATE(21)] = 186,
  [SMALL_STATE(22)] = 194,
  [SMALL_STATE(23)] = 202,
  [SMALL_STATE(24)] = 210,
  [SMALL_STATE(25)] = 218,
  [SMALL_STATE(26)] = 226,
  [SMALL_STATE(27)] = 234,
  [SMALL_STATE(28)] = 242,
  [SMALL_STATE(29)] = 250,
  [SMALL_STATE(30)] = 258,
  [SMALL_STATE(31)] = 266,
  [SMALL_STATE(32)] = 274,
  [SMALL_STATE(33)] = 282,
  [SMALL_STATE(34)] = 290,
  [SMALL_STATE(35)] = 298,
  [SMALL_STATE(36)] = 305,
  [SMALL_STATE(37)] = 312,
  [SMALL_STATE(38)] = 319,
  [SMALL_STATE(39)] = 323,
  [SMALL_STATE(40)] = 327,
  [SMALL_STATE(41)] = 331,
  [SMALL_STATE(42)] = 335,
  [SMALL_STATE(43)] = 339,
  [SMALL_STATE(44)] = 343,
  [SMALL_STATE(45)] = 347,
  [SMALL_STATE(46)] = 351,
  [SMALL_STATE(47)] = 355,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(4),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fixup, 3, .production_id = 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fixup, 3, .production_id = 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__commit_operation_without_option, 2, .production_id = 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__commit_operation_without_option, 2, .production_id = 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fixup, 2, .production_id = 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fixup, 2, .production_id = 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__merge, 2, .production_id = 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__merge, 2, .production_id = 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__merge, 4, .production_id = 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__merge, 4, .production_id = 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_operation, 2, .production_id = 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_operation, 2, .production_id = 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__break, 1, .production_id = 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__break, 1, .production_id = 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1, .production_id = 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 1, .production_id = 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__merge, 6, .production_id = 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__merge, 6, .production_id = 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fixup, 4, .production_id = 4),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fixup, 4, .production_id = 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exec, 2, .production_id = 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exec, 2, .production_id = 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_operation, 3, .production_id = 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_operation, 3, .production_id = 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__commit_operation_without_option, 3, .production_id = 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__commit_operation_without_option, 3, .production_id = 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fixup, 3, .production_id = 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fixup, 3, .production_id = 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [151] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1),
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
