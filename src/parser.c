#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_include = 1,
  anon_sym_SEMI = 2,
  anon_sym_LPAREN_STAR = 3,
  aux_sym_comment_definition_token1 = 4,
  anon_sym_STAR_RPAREN = 5,
  anon_sym_POUND = 6,
  aux_sym_comment_definition_token2 = 7,
  anon_sym_const = 8,
  anon_sym_COLON = 9,
  anon_sym_is = 10,
  anon_sym_boolean = 11,
  anon_sym_integer = 12,
  sym_identifier = 13,
  sym_string = 14,
  sym_number = 15,
  anon_sym_and = 16,
  anon_sym_or = 17,
  anon_sym_not = 18,
  anon_sym_LPAREN = 19,
  anon_sym_RPAREN = 20,
  sym_source_file = 21,
  sym__definition = 22,
  sym_include_definition = 23,
  sym_comment_definition = 24,
  sym_const_definition = 25,
  sym_type = 26,
  sym__expression = 27,
  sym_binary_expression = 28,
  sym_unary_expression = 29,
  sym_parenthesized_expression = 30,
  aux_sym_source_file_repeat1 = 31,
  aux_sym_comment_definition_repeat1 = 32,
  aux_sym_comment_definition_repeat2 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_include] = "include",
  [anon_sym_SEMI] = ";",
  [anon_sym_LPAREN_STAR] = "(*",
  [aux_sym_comment_definition_token1] = "comment_definition_token1",
  [anon_sym_STAR_RPAREN] = "*)",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_definition_token2] = "comment_definition_token2",
  [anon_sym_const] = "const",
  [anon_sym_COLON] = ":",
  [anon_sym_is] = "is",
  [anon_sym_boolean] = "boolean",
  [anon_sym_integer] = "integer",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [sym_number] = "number",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_not] = "not",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_include_definition] = "include_definition",
  [sym_comment_definition] = "comment_definition",
  [sym_const_definition] = "const_definition",
  [sym_type] = "type",
  [sym__expression] = "_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_comment_definition_repeat1] = "comment_definition_repeat1",
  [aux_sym_comment_definition_repeat2] = "comment_definition_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LPAREN_STAR] = anon_sym_LPAREN_STAR,
  [aux_sym_comment_definition_token1] = aux_sym_comment_definition_token1,
  [anon_sym_STAR_RPAREN] = anon_sym_STAR_RPAREN,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_definition_token2] = aux_sym_comment_definition_token2,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_integer] = anon_sym_integer,
  [sym_identifier] = sym_identifier,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_include_definition] = sym_include_definition,
  [sym_comment_definition] = sym_comment_definition,
  [sym_const_definition] = sym_const_definition,
  [sym_type] = sym_type,
  [sym__expression] = sym__expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_comment_definition_repeat1] = aux_sym_comment_definition_repeat1,
  [aux_sym_comment_definition_repeat2] = aux_sym_comment_definition_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_definition_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_definition_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_integer] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_include_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_const_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_definition_repeat2] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 8,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 11,
  [14] = 10,
  [15] = 8,
  [16] = 11,
  [17] = 8,
  [18] = 18,
  [19] = 19,
  [20] = 19,
  [21] = 18,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 18,
  [26] = 19,
  [27] = 19,
  [28] = 18,
  [29] = 22,
  [30] = 30,
  [31] = 24,
  [32] = 24,
  [33] = 22,
  [34] = 34,
  [35] = 35,
  [36] = 24,
  [37] = 37,
  [38] = 22,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(36);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == 'b') ADVANCE(26);
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == '*') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(59);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(44);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(39);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(16);
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == 'g') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(8);
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 33:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 34:
      if (eof) ADVANCE(36);
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 35:
      if (eof) ADVANCE(36);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '(') ADVANCE(5);
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      END_STATE();
    case 36:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_comment_definition_token1);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_comment_definition_token1);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == '*') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_comment_definition_token1);
      if (lookahead == ')') ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_comment_definition_token1);
      if (lookahead == '*') ADVANCE(39);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_STAR_RPAREN);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_comment_definition_token2);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_comment_definition_token2);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(46);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_comment_definition_token2);
      if (lookahead == '*') ADVANCE(39);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_comment_definition_token2);
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_comment_definition_token2);
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*') ADVANCE(39);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 35},
  [2] = {.lex_state = 35},
  [3] = {.lex_state = 35},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 34},
  [9] = {.lex_state = 34},
  [10] = {.lex_state = 34},
  [11] = {.lex_state = 34},
  [12] = {.lex_state = 34},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 34},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 34},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 35},
  [30] = {.lex_state = 35},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 35},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 35},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 33},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN_STAR] = ACTIONS(1),
    [anon_sym_STAR_RPAREN] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_integer] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(49),
    [sym__definition] = STATE(3),
    [sym_include_definition] = STATE(3),
    [sym_comment_definition] = STATE(3),
    [sym_const_definition] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_include] = ACTIONS(5),
    [anon_sym_LPAREN_STAR] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_const] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_include,
    ACTIONS(18), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(24), 1,
      anon_sym_const,
    STATE(2), 5,
      sym__definition,
      sym_include_definition,
      sym_comment_definition,
      sym_const_definition,
      aux_sym_source_file_repeat1,
  [23] = 6,
    ACTIONS(5), 1,
      anon_sym_include,
    ACTIONS(7), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      anon_sym_const,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(2), 5,
      sym__definition,
      sym_include_definition,
      sym_comment_definition,
      sym_const_definition,
      aux_sym_source_file_repeat1,
  [46] = 5,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 2,
      sym_string,
      sym_number,
    STATE(41), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
  [66] = 5,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 2,
      sym_string,
      sym_number,
    STATE(39), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
  [86] = 5,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 2,
      sym_string,
      sym_number,
    STATE(40), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
  [106] = 5,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 2,
      sym_string,
      sym_number,
    STATE(35), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
  [126] = 3,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(10), 2,
      sym_comment_definition,
      aux_sym_comment_definition_repeat2,
    ACTIONS(51), 5,
      anon_sym_include,
      anon_sym_LPAREN_STAR,
      anon_sym_POUND,
      aux_sym_comment_definition_token2,
      anon_sym_const,
  [141] = 4,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      aux_sym_comment_definition_token2,
    STATE(10), 2,
      sym_comment_definition,
      aux_sym_comment_definition_repeat2,
    ACTIONS(51), 4,
      anon_sym_include,
      anon_sym_LPAREN_STAR,
      anon_sym_POUND,
      anon_sym_const,
  [158] = 6,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(62), 1,
      anon_sym_POUND,
    ACTIONS(65), 1,
      aux_sym_comment_definition_token2,
    ACTIONS(57), 2,
      anon_sym_include,
      anon_sym_const,
    STATE(10), 2,
      sym_comment_definition,
      aux_sym_comment_definition_repeat2,
  [179] = 4,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 1,
      aux_sym_comment_definition_token2,
    STATE(9), 2,
      sym_comment_definition,
      aux_sym_comment_definition_repeat2,
    ACTIONS(70), 4,
      anon_sym_include,
      anon_sym_LPAREN_STAR,
      anon_sym_POUND,
      anon_sym_const,
  [196] = 3,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    STATE(8), 2,
      sym_comment_definition,
      aux_sym_comment_definition_repeat2,
    ACTIONS(70), 5,
      anon_sym_include,
      anon_sym_LPAREN_STAR,
      anon_sym_POUND,
      aux_sym_comment_definition_token2,
      anon_sym_const,
  [211] = 2,
    STATE(15), 2,
      sym_comment_definition,
      aux_sym_comment_definition_repeat2,
    ACTIONS(70), 5,
      anon_sym_LPAREN_STAR,
      aux_sym_comment_definition_token1,
      anon_sym_STAR_RPAREN,
      anon_sym_POUND,
      aux_sym_comment_definition_token2,
  [223] = 5,
    ACTIONS(74), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(80), 1,
      aux_sym_comment_definition_token2,
    ACTIONS(57), 2,
      aux_sym_comment_definition_token1,
      anon_sym_STAR_RPAREN,
    STATE(14), 2,
      sym_comment_definition,
      aux_sym_comment_definition_repeat2,
  [241] = 2,
    STATE(14), 2,
      sym_comment_definition,
      aux_sym_comment_definition_repeat2,
    ACTIONS(51), 5,
      anon_sym_LPAREN_STAR,
      aux_sym_comment_definition_token1,
      anon_sym_STAR_RPAREN,
      anon_sym_POUND,
      aux_sym_comment_definition_token2,
  [253] = 3,
    ACTIONS(83), 1,
      aux_sym_comment_definition_token2,
    STATE(17), 2,
      sym_comment_definition,
      aux_sym_comment_definition_repeat2,
    ACTIONS(70), 4,
      anon_sym_LPAREN_STAR,
      aux_sym_comment_definition_token1,
      anon_sym_STAR_RPAREN,
      anon_sym_POUND,
  [267] = 3,
    ACTIONS(85), 1,
      aux_sym_comment_definition_token2,
    STATE(14), 2,
      sym_comment_definition,
      aux_sym_comment_definition_repeat2,
    ACTIONS(51), 4,
      anon_sym_LPAREN_STAR,
      aux_sym_comment_definition_token1,
      anon_sym_STAR_RPAREN,
      anon_sym_POUND,
  [281] = 5,
    ACTIONS(87), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(89), 1,
      aux_sym_comment_definition_token1,
    ACTIONS(91), 1,
      anon_sym_STAR_RPAREN,
    ACTIONS(93), 1,
      anon_sym_POUND,
    STATE(19), 2,
      sym_comment_definition,
      aux_sym_comment_definition_repeat1,
  [298] = 5,
    ACTIONS(87), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(93), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      aux_sym_comment_definition_token1,
    ACTIONS(97), 1,
      anon_sym_STAR_RPAREN,
    STATE(23), 2,
      sym_comment_definition,
      aux_sym_comment_definition_repeat1,
  [315] = 5,
    ACTIONS(87), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(93), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      aux_sym_comment_definition_token1,
    ACTIONS(99), 1,
      anon_sym_STAR_RPAREN,
    STATE(23), 2,
      sym_comment_definition,
      aux_sym_comment_definition_repeat1,
  [332] = 5,
    ACTIONS(87), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(93), 1,
      anon_sym_POUND,
    ACTIONS(101), 1,
      aux_sym_comment_definition_token1,
    ACTIONS(103), 1,
      anon_sym_STAR_RPAREN,
    STATE(20), 2,
      sym_comment_definition,
      aux_sym_comment_definition_repeat1,
  [349] = 2,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 5,
      anon_sym_include,
      anon_sym_LPAREN_STAR,
      anon_sym_POUND,
      aux_sym_comment_definition_token2,
      anon_sym_const,
  [360] = 5,
    ACTIONS(109), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(112), 1,
      aux_sym_comment_definition_token1,
    ACTIONS(115), 1,
      anon_sym_STAR_RPAREN,
    ACTIONS(117), 1,
      anon_sym_POUND,
    STATE(23), 2,
      sym_comment_definition,
      aux_sym_comment_definition_repeat1,
  [377] = 2,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 5,
      anon_sym_include,
      anon_sym_LPAREN_STAR,
      anon_sym_POUND,
      aux_sym_comment_definition_token2,
      anon_sym_const,
  [388] = 5,
    ACTIONS(87), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(93), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      aux_sym_comment_definition_token1,
    ACTIONS(122), 1,
      anon_sym_STAR_RPAREN,
    STATE(26), 2,
      sym_comment_definition,
      aux_sym_comment_definition_repeat1,
  [405] = 5,
    ACTIONS(87), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(93), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      aux_sym_comment_definition_token1,
    ACTIONS(124), 1,
      anon_sym_STAR_RPAREN,
    STATE(23), 2,
      sym_comment_definition,
      aux_sym_comment_definition_repeat1,
  [422] = 5,
    ACTIONS(87), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(93), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      aux_sym_comment_definition_token1,
    ACTIONS(126), 1,
      anon_sym_STAR_RPAREN,
    STATE(23), 2,
      sym_comment_definition,
      aux_sym_comment_definition_repeat1,
  [439] = 5,
    ACTIONS(87), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(93), 1,
      anon_sym_POUND,
    ACTIONS(128), 1,
      aux_sym_comment_definition_token1,
    ACTIONS(130), 1,
      anon_sym_STAR_RPAREN,
    STATE(27), 2,
      sym_comment_definition,
      aux_sym_comment_definition_repeat1,
  [456] = 1,
    ACTIONS(105), 5,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_LPAREN_STAR,
      anon_sym_POUND,
      anon_sym_const,
  [464] = 1,
    ACTIONS(132), 5,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_LPAREN_STAR,
      anon_sym_POUND,
      anon_sym_const,
  [472] = 1,
    ACTIONS(51), 5,
      anon_sym_LPAREN_STAR,
      aux_sym_comment_definition_token1,
      anon_sym_STAR_RPAREN,
      anon_sym_POUND,
      aux_sym_comment_definition_token2,
  [480] = 1,
    ACTIONS(49), 5,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_LPAREN_STAR,
      anon_sym_POUND,
      anon_sym_const,
  [488] = 1,
    ACTIONS(107), 5,
      anon_sym_LPAREN_STAR,
      aux_sym_comment_definition_token1,
      anon_sym_STAR_RPAREN,
      anon_sym_POUND,
      aux_sym_comment_definition_token2,
  [496] = 1,
    ACTIONS(134), 5,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_LPAREN_STAR,
      anon_sym_POUND,
      anon_sym_const,
  [504] = 1,
    ACTIONS(136), 4,
      anon_sym_SEMI,
      anon_sym_and,
      anon_sym_or,
      anon_sym_RPAREN,
  [511] = 1,
    ACTIONS(51), 4,
      anon_sym_LPAREN_STAR,
      aux_sym_comment_definition_token1,
      anon_sym_STAR_RPAREN,
      anon_sym_POUND,
  [518] = 1,
    ACTIONS(138), 4,
      anon_sym_SEMI,
      anon_sym_and,
      anon_sym_or,
      anon_sym_RPAREN,
  [525] = 1,
    ACTIONS(107), 4,
      anon_sym_LPAREN_STAR,
      aux_sym_comment_definition_token1,
      anon_sym_STAR_RPAREN,
      anon_sym_POUND,
  [532] = 1,
    ACTIONS(140), 4,
      anon_sym_SEMI,
      anon_sym_and,
      anon_sym_or,
      anon_sym_RPAREN,
  [539] = 2,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    ACTIONS(142), 2,
      anon_sym_and,
      anon_sym_or,
  [547] = 2,
    ACTIONS(146), 1,
      anon_sym_SEMI,
    ACTIONS(142), 2,
      anon_sym_and,
      anon_sym_or,
  [555] = 2,
    STATE(46), 1,
      sym_type,
    ACTIONS(148), 2,
      anon_sym_boolean,
      anon_sym_integer,
  [563] = 1,
    ACTIONS(150), 1,
      sym_string,
  [567] = 1,
    ACTIONS(152), 1,
      anon_sym_is,
  [571] = 1,
    ACTIONS(154), 1,
      sym_identifier,
  [575] = 1,
    ACTIONS(156), 1,
      anon_sym_COLON,
  [579] = 1,
    ACTIONS(158), 1,
      anon_sym_COLON,
  [583] = 1,
    ACTIONS(160), 1,
      anon_sym_SEMI,
  [587] = 1,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 86,
  [SMALL_STATE(7)] = 106,
  [SMALL_STATE(8)] = 126,
  [SMALL_STATE(9)] = 141,
  [SMALL_STATE(10)] = 158,
  [SMALL_STATE(11)] = 179,
  [SMALL_STATE(12)] = 196,
  [SMALL_STATE(13)] = 211,
  [SMALL_STATE(14)] = 223,
  [SMALL_STATE(15)] = 241,
  [SMALL_STATE(16)] = 253,
  [SMALL_STATE(17)] = 267,
  [SMALL_STATE(18)] = 281,
  [SMALL_STATE(19)] = 298,
  [SMALL_STATE(20)] = 315,
  [SMALL_STATE(21)] = 332,
  [SMALL_STATE(22)] = 349,
  [SMALL_STATE(23)] = 360,
  [SMALL_STATE(24)] = 377,
  [SMALL_STATE(25)] = 388,
  [SMALL_STATE(26)] = 405,
  [SMALL_STATE(27)] = 422,
  [SMALL_STATE(28)] = 439,
  [SMALL_STATE(29)] = 456,
  [SMALL_STATE(30)] = 464,
  [SMALL_STATE(31)] = 472,
  [SMALL_STATE(32)] = 480,
  [SMALL_STATE(33)] = 488,
  [SMALL_STATE(34)] = 496,
  [SMALL_STATE(35)] = 504,
  [SMALL_STATE(36)] = 511,
  [SMALL_STATE(37)] = 518,
  [SMALL_STATE(38)] = 525,
  [SMALL_STATE(39)] = 532,
  [SMALL_STATE(40)] = 539,
  [SMALL_STATE(41)] = 547,
  [SMALL_STATE(42)] = 555,
  [SMALL_STATE(43)] = 563,
  [SMALL_STATE(44)] = 567,
  [SMALL_STATE(45)] = 571,
  [SMALL_STATE(46)] = 575,
  [SMALL_STATE(47)] = 579,
  [SMALL_STATE(48)] = 583,
  [SMALL_STATE(49)] = 587,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_definition, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_definition, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_definition_repeat2, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_definition_repeat2, 2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_definition_repeat2, 2), SHIFT_REPEAT(25),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_definition_repeat2, 2), SHIFT_REPEAT(12),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_definition_repeat2, 2), SHIFT_REPEAT(10),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_definition, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_definition, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_definition_repeat2, 2), SHIFT_REPEAT(28),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_definition_repeat2, 2), SHIFT_REPEAT(13),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_definition_repeat2, 2), SHIFT_REPEAT(14),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_definition, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_definition, 3),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_definition_repeat1, 2), SHIFT_REPEAT(21),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_definition_repeat1, 2), SHIFT_REPEAT(23),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_definition_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_definition_repeat1, 2), SHIFT_REPEAT(16),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_definition, 7),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [162] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_seed7(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
