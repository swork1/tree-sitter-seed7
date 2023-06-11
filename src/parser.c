#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_const = 1,
  anon_sym_COLON = 2,
  anon_sym_is = 3,
  anon_sym_SEMI = 4,
  anon_sym_boolean = 5,
  anon_sym_integer = 6,
  anon_sym_POUND = 7,
  aux_sym_line_comment_token1 = 8,
  anon_sym_LPAREN_STAR = 9,
  aux_sym_block_comment_token1 = 10,
  anon_sym_STAR_RPAREN = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_PLUS = 14,
  anon_sym_DASH = 15,
  anon_sym_STAR = 16,
  anon_sym_SLASH = 17,
  anon_sym_and = 18,
  anon_sym_or = 19,
  anon_sym_not = 20,
  anon_sym_TRUE = 21,
  anon_sym_FALSE = 22,
  sym_name = 23,
  sym_integer = 24,
  sym_source_file = 25,
  sym__statement = 26,
  sym_declaration = 27,
  sym_type = 28,
  sym_value = 29,
  sym__expression = 30,
  sym_line_comment = 31,
  sym_block_comment = 32,
  sym_binary_expression = 33,
  sym_unary_expression = 34,
  sym_parenthesized_expression = 35,
  sym_binary_operator = 36,
  sym_unary_operator = 37,
  sym_boolean = 38,
  aux_sym_source_file_repeat1 = 39,
  aux_sym_block_comment_repeat1 = 40,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_const] = "const",
  [anon_sym_COLON] = ":",
  [anon_sym_is] = "is",
  [anon_sym_SEMI] = ";",
  [anon_sym_boolean] = "boolean",
  [anon_sym_integer] = "integer",
  [anon_sym_POUND] = "#",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [anon_sym_LPAREN_STAR] = "(*",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [anon_sym_STAR_RPAREN] = "*)",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_not] = "not",
  [anon_sym_TRUE] = "TRUE",
  [anon_sym_FALSE] = "FALSE",
  [sym_name] = "name",
  [sym_integer] = "integer",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_declaration] = "declaration",
  [sym_type] = "type",
  [sym_value] = "value",
  [sym__expression] = "_expression",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_binary_expression] = "binary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_binary_operator] = "binary_operator",
  [sym_unary_operator] = "unary_operator",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_comment_repeat1] = "block_comment_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_integer] = anon_sym_integer,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [anon_sym_LPAREN_STAR] = anon_sym_LPAREN_STAR,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [anon_sym_STAR_RPAREN] = anon_sym_STAR_RPAREN,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_TRUE] = anon_sym_TRUE,
  [anon_sym_FALSE] = anon_sym_FALSE,
  [sym_name] = sym_name,
  [sym_integer] = sym_integer,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_declaration] = sym_declaration,
  [sym_type] = sym_type,
  [sym_value] = sym_value,
  [sym__expression] = sym__expression,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_binary_expression] = sym_binary_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_binary_operator] = sym_binary_operator,
  [sym_unary_operator] = sym_unary_operator,
  [sym_boolean] = sym_boolean,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_comment_repeat1] = aux_sym_block_comment_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [anon_sym_SEMI] = {
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
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR_RPAREN] = {
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
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
  [anon_sym_TRUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FALSE] = {
    .visible = true,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
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
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_argument = 1,
  field_left = 2,
  field_operator = 3,
  field_right = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_argument, 1},
    {field_operator, 0},
  [2] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
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
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(35);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '*') ADVANCE(59);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == 'F') ADVANCE(7);
      if (lookahead == 'T') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'b') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == 'F') ADVANCE(69);
      if (lookahead == 'T') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '*') ADVANCE(58);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(47);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'E') ADVANCE(65);
      END_STATE();
    case 9:
      if (lookahead == 'E') ADVANCE(67);
      END_STATE();
    case 10:
      if (lookahead == 'L') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'R') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'S') ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == 'U') ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == 'g') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == ')') ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '*') ADVANCE(47);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_STAR_RPAREN);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*') ADVANCE(47);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == ')') ADVANCE(53);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SLASH);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 44},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {(TSStateId)(-1)},
  [34] = {(TSStateId)(-1)},
  [35] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_comment] = STATE(0),
    [sym_block_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_integer] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_STAR_RPAREN] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_TRUE] = ACTIONS(1),
    [anon_sym_FALSE] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(32),
    [sym__statement] = STATE(23),
    [sym_declaration] = STATE(22),
    [sym_line_comment] = STATE(1),
    [sym_block_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      sym_name,
    ACTIONS(19), 1,
      sym_integer,
    STATE(6), 1,
      sym__expression,
    STATE(11), 1,
      sym_unary_operator,
    STATE(25), 1,
      sym_boolean,
    STATE(26), 1,
      sym_value,
    ACTIONS(15), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(2), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(7), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
  [44] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(10), 1,
      sym_binary_operator,
    STATE(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(21), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
  [68] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(10), 1,
      sym_binary_operator,
    STATE(4), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(23), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
  [92] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(25), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      sym_binary_operator,
    STATE(5), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
  [117] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(29), 1,
      anon_sym_SEMI,
    STATE(10), 1,
      sym_binary_operator,
    STATE(6), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
  [142] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(7), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
  [163] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(8), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(33), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
  [184] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      sym_name,
    STATE(5), 1,
      sym__expression,
    STATE(11), 1,
      sym_unary_operator,
    STATE(9), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(7), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
  [215] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      sym_name,
    STATE(3), 1,
      sym__expression,
    STATE(11), 1,
      sym_unary_operator,
    STATE(10), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(7), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
  [246] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      sym_name,
    STATE(4), 1,
      sym__expression,
    STATE(7), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
    STATE(11), 3,
      sym_line_comment,
      sym_block_comment,
      sym_unary_operator,
  [275] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(9), 1,
      anon_sym_const,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      aux_sym_source_file_repeat1,
    STATE(22), 1,
      sym_declaration,
    STATE(23), 1,
      sym__statement,
    STATE(12), 2,
      sym_line_comment,
      sym_block_comment,
  [301] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      anon_sym_const,
    STATE(22), 1,
      sym_declaration,
    STATE(23), 1,
      sym__statement,
    STATE(13), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_source_file_repeat1,
  [325] = 6,
    ACTIONS(42), 1,
      anon_sym_POUND,
    ACTIONS(44), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(46), 1,
      aux_sym_block_comment_token1,
    ACTIONS(48), 1,
      anon_sym_STAR_RPAREN,
    STATE(16), 1,
      aux_sym_block_comment_repeat1,
    STATE(14), 2,
      sym_line_comment,
      sym_block_comment,
  [345] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(15), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(50), 3,
      anon_sym_LPAREN,
      anon_sym_not,
      sym_name,
  [361] = 5,
    ACTIONS(42), 1,
      anon_sym_POUND,
    ACTIONS(44), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(52), 1,
      aux_sym_block_comment_token1,
    ACTIONS(55), 1,
      anon_sym_STAR_RPAREN,
    STATE(16), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [379] = 6,
    ACTIONS(42), 1,
      anon_sym_POUND,
    ACTIONS(44), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(46), 1,
      aux_sym_block_comment_token1,
    ACTIONS(57), 1,
      anon_sym_STAR_RPAREN,
    STATE(14), 1,
      aux_sym_block_comment_repeat1,
    STATE(17), 2,
      sym_line_comment,
      sym_block_comment,
  [399] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(18), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(59), 3,
      anon_sym_LPAREN,
      anon_sym_not,
      sym_name,
  [415] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(30), 1,
      sym_type,
    ACTIONS(61), 2,
      anon_sym_boolean,
      anon_sym_integer,
    STATE(19), 2,
      sym_line_comment,
      sym_block_comment,
  [433] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      anon_sym_const,
    STATE(20), 2,
      sym_line_comment,
      sym_block_comment,
  [448] = 4,
    ACTIONS(42), 1,
      anon_sym_POUND,
    ACTIONS(44), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(65), 2,
      aux_sym_block_comment_token1,
      anon_sym_STAR_RPAREN,
    STATE(21), 2,
      sym_line_comment,
      sym_block_comment,
  [463] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      anon_sym_const,
    STATE(22), 2,
      sym_line_comment,
      sym_block_comment,
  [478] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_const,
    STATE(23), 2,
      sym_line_comment,
      sym_block_comment,
  [493] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(71), 1,
      sym_name,
    STATE(24), 2,
      sym_line_comment,
      sym_block_comment,
  [507] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(29), 1,
      anon_sym_SEMI,
    STATE(25), 2,
      sym_line_comment,
      sym_block_comment,
  [521] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(73), 1,
      anon_sym_SEMI,
    STATE(26), 2,
      sym_line_comment,
      sym_block_comment,
  [535] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(75), 1,
      anon_sym_SEMI,
    STATE(27), 2,
      sym_line_comment,
      sym_block_comment,
  [549] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(77), 1,
      anon_sym_is,
    STATE(28), 2,
      sym_line_comment,
      sym_block_comment,
  [563] = 4,
    ACTIONS(42), 1,
      anon_sym_POUND,
    ACTIONS(44), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(79), 1,
      aux_sym_line_comment_token1,
    STATE(29), 2,
      sym_line_comment,
      sym_block_comment,
  [577] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(81), 1,
      anon_sym_COLON,
    STATE(30), 2,
      sym_line_comment,
      sym_block_comment,
  [591] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(83), 1,
      anon_sym_COLON,
    STATE(31), 2,
      sym_line_comment,
      sym_block_comment,
  [605] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    STATE(32), 2,
      sym_line_comment,
      sym_block_comment,
  [619] = 1,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
  [623] = 1,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
  [627] = 1,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 92,
  [SMALL_STATE(6)] = 117,
  [SMALL_STATE(7)] = 142,
  [SMALL_STATE(8)] = 163,
  [SMALL_STATE(9)] = 184,
  [SMALL_STATE(10)] = 215,
  [SMALL_STATE(11)] = 246,
  [SMALL_STATE(12)] = 275,
  [SMALL_STATE(13)] = 301,
  [SMALL_STATE(14)] = 325,
  [SMALL_STATE(15)] = 345,
  [SMALL_STATE(16)] = 361,
  [SMALL_STATE(17)] = 379,
  [SMALL_STATE(18)] = 399,
  [SMALL_STATE(19)] = 415,
  [SMALL_STATE(20)] = 433,
  [SMALL_STATE(21)] = 448,
  [SMALL_STATE(22)] = 463,
  [SMALL_STATE(23)] = 478,
  [SMALL_STATE(24)] = 493,
  [SMALL_STATE(25)] = 507,
  [SMALL_STATE(26)] = 521,
  [SMALL_STATE(27)] = 535,
  [SMALL_STATE(28)] = 549,
  [SMALL_STATE(29)] = 563,
  [SMALL_STATE(30)] = 577,
  [SMALL_STATE(31)] = 591,
  [SMALL_STATE(32)] = 605,
  [SMALL_STATE(33)] = 619,
  [SMALL_STATE(34)] = 623,
  [SMALL_STATE(35)] = 627,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 1),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(21),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operator, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 7),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [85] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
