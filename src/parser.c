#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 76
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 0
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_DOLLAR = 1,
  anon_sym_include = 2,
  aux_sym_include_statement_token1 = 3,
  anon_sym_SEMI = 4,
  anon_sym_const = 5,
  anon_sym_COLON = 6,
  anon_sym_is = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_COMMA = 10,
  anon_sym_boolean = 11,
  anon_sym_integer = 12,
  anon_sym_bigInteger = 13,
  anon_sym_rational = 14,
  anon_sym_bigRational = 15,
  anon_sym_float = 16,
  anon_sym_complex = 17,
  anon_sym_char = 18,
  anon_sym_string = 19,
  anon_sym_array = 20,
  anon_sym_hash = 21,
  anon_sym_set = 22,
  anon_sym_struct = 23,
  anon_sym_bin64 = 24,
  anon_sym_bin32 = 25,
  anon_sym_bstring = 26,
  anon_sym_color = 27,
  anon_sym_time = 28,
  anon_sym_duration = 29,
  anon_sym_file = 30,
  anon_sym_text = 31,
  anon_sym_fileSys = 32,
  anon_sym_process = 33,
  anon_sym_category = 34,
  anon_sym_reference = 35,
  anon_sym_ref_list = 36,
  anon_sym_program = 37,
  anon_sym_ptr = 38,
  anon_sym_func = 39,
  anon_sym_varfunc = 40,
  anon_sym_void = 41,
  anon_sym_proc = 42,
  anon_sym_type = 43,
  anon_sym_object = 44,
  anon_sym_expr = 45,
  anon_sym_POUND = 46,
  anon_sym_LPAREN_STAR = 47,
  aux_sym_block_comment_token1 = 48,
  anon_sym_STAR_RPAREN = 49,
  anon_sym_PLUS = 50,
  anon_sym_DASH = 51,
  anon_sym_STAR = 52,
  anon_sym_SLASH = 53,
  anon_sym_and = 54,
  anon_sym_or = 55,
  anon_sym_parse = 56,
  anon_sym_not = 57,
  anon_sym_TRUE = 58,
  anon_sym_FALSE = 59,
  sym_name = 60,
  sym_decimalLiteral = 61,
  sym_exponentialLiteral = 62,
  sym_hexLiteral = 63,
  sym_octalLiteral = 64,
  sym_binaryLiteral = 65,
  sym_source_file = 66,
  sym__statement = 67,
  sym_include_statement = 68,
  sym_declaration = 69,
  sym_function_call = 70,
  sym_argument_list = 71,
  sym_type = 72,
  sym_value = 73,
  sym__expression = 74,
  sym_line_comment = 75,
  sym_block_comment = 76,
  sym_binary_expression = 77,
  sym_unary_expression = 78,
  sym_parenthesized_expression = 79,
  sym_binary_operator = 80,
  sym_unary_operator = 81,
  sym_boolean = 82,
  sym_integer = 83,
  sym_cast = 84,
  aux_sym_source_file_repeat1 = 85,
  aux_sym_argument_list_repeat1 = 86,
  aux_sym_block_comment_repeat1 = 87,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_include] = "include",
  [aux_sym_include_statement_token1] = "include_statement_token1",
  [anon_sym_SEMI] = ";",
  [anon_sym_const] = "const",
  [anon_sym_COLON] = ":",
  [anon_sym_is] = "is",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_boolean] = "boolean",
  [anon_sym_integer] = "integer",
  [anon_sym_bigInteger] = "bigInteger",
  [anon_sym_rational] = "rational",
  [anon_sym_bigRational] = "bigRational",
  [anon_sym_float] = "float",
  [anon_sym_complex] = "complex",
  [anon_sym_char] = "char",
  [anon_sym_string] = "string",
  [anon_sym_array] = "array",
  [anon_sym_hash] = "hash",
  [anon_sym_set] = "set",
  [anon_sym_struct] = "struct",
  [anon_sym_bin64] = "bin64",
  [anon_sym_bin32] = "bin32",
  [anon_sym_bstring] = "bstring",
  [anon_sym_color] = "color",
  [anon_sym_time] = "time",
  [anon_sym_duration] = "duration",
  [anon_sym_file] = "file",
  [anon_sym_text] = "text",
  [anon_sym_fileSys] = "fileSys",
  [anon_sym_process] = "process",
  [anon_sym_category] = "category",
  [anon_sym_reference] = "reference",
  [anon_sym_ref_list] = "ref_list",
  [anon_sym_program] = "program",
  [anon_sym_ptr] = "ptr",
  [anon_sym_func] = "func",
  [anon_sym_varfunc] = "varfunc",
  [anon_sym_void] = "void",
  [anon_sym_proc] = "proc",
  [anon_sym_type] = "type",
  [anon_sym_object] = "object",
  [anon_sym_expr] = "expr",
  [anon_sym_POUND] = "#",
  [anon_sym_LPAREN_STAR] = "(*",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [anon_sym_STAR_RPAREN] = "*)",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_parse] = "parse",
  [anon_sym_not] = "not",
  [anon_sym_TRUE] = "TRUE",
  [anon_sym_FALSE] = "FALSE",
  [sym_name] = "name",
  [sym_decimalLiteral] = "decimalLiteral",
  [sym_exponentialLiteral] = "exponentialLiteral",
  [sym_hexLiteral] = "hexLiteral",
  [sym_octalLiteral] = "octalLiteral",
  [sym_binaryLiteral] = "binaryLiteral",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_include_statement] = "include_statement",
  [sym_declaration] = "declaration",
  [sym_function_call] = "function_call",
  [sym_argument_list] = "argument_list",
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
  [sym_integer] = "integer",
  [sym_cast] = "cast",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_block_comment_repeat1] = "block_comment_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_include] = anon_sym_include,
  [aux_sym_include_statement_token1] = aux_sym_include_statement_token1,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_integer] = anon_sym_integer,
  [anon_sym_bigInteger] = anon_sym_bigInteger,
  [anon_sym_rational] = anon_sym_rational,
  [anon_sym_bigRational] = anon_sym_bigRational,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_complex] = anon_sym_complex,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_array] = anon_sym_array,
  [anon_sym_hash] = anon_sym_hash,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_bin64] = anon_sym_bin64,
  [anon_sym_bin32] = anon_sym_bin32,
  [anon_sym_bstring] = anon_sym_bstring,
  [anon_sym_color] = anon_sym_color,
  [anon_sym_time] = anon_sym_time,
  [anon_sym_duration] = anon_sym_duration,
  [anon_sym_file] = anon_sym_file,
  [anon_sym_text] = anon_sym_text,
  [anon_sym_fileSys] = anon_sym_fileSys,
  [anon_sym_process] = anon_sym_process,
  [anon_sym_category] = anon_sym_category,
  [anon_sym_reference] = anon_sym_reference,
  [anon_sym_ref_list] = anon_sym_ref_list,
  [anon_sym_program] = anon_sym_program,
  [anon_sym_ptr] = anon_sym_ptr,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_varfunc] = anon_sym_varfunc,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_proc] = anon_sym_proc,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_object] = anon_sym_object,
  [anon_sym_expr] = anon_sym_expr,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LPAREN_STAR] = anon_sym_LPAREN_STAR,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [anon_sym_STAR_RPAREN] = anon_sym_STAR_RPAREN,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_parse] = anon_sym_parse,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_TRUE] = anon_sym_TRUE,
  [anon_sym_FALSE] = anon_sym_FALSE,
  [sym_name] = sym_name,
  [sym_decimalLiteral] = sym_decimalLiteral,
  [sym_exponentialLiteral] = sym_exponentialLiteral,
  [sym_hexLiteral] = sym_hexLiteral,
  [sym_octalLiteral] = sym_octalLiteral,
  [sym_binaryLiteral] = sym_binaryLiteral,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_include_statement] = sym_include_statement,
  [sym_declaration] = sym_declaration,
  [sym_function_call] = sym_function_call,
  [sym_argument_list] = sym_argument_list,
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
  [sym_integer] = sym_integer,
  [sym_cast] = sym_cast,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_block_comment_repeat1] = aux_sym_block_comment_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_include_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_bigInteger] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rational] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bigRational] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_complex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bin64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bin32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bstring] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_color] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_time] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_duration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_text] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fileSys] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_process] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_category] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reference] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ref_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_program] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ptr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_varfunc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_proc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_expr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
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
  [anon_sym_parse] = {
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
  [sym_decimalLiteral] = {
    .visible = true,
    .named = true,
  },
  [sym_exponentialLiteral] = {
    .visible = true,
    .named = true,
  },
  [sym_hexLiteral] = {
    .visible = true,
    .named = true,
  },
  [sym_octalLiteral] = {
    .visible = true,
    .named = true,
  },
  [sym_binaryLiteral] = {
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
  [sym_include_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
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
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_cast] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
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
  [3] = 2,
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
  [21] = 20,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 22,
  [26] = 26,
  [27] = 24,
  [28] = 28,
  [29] = 28,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 7,
  [36] = 12,
  [37] = 11,
  [38] = 9,
  [39] = 39,
  [40] = 40,
  [41] = 16,
  [42] = 17,
  [43] = 19,
  [44] = 44,
  [45] = 8,
  [46] = 15,
  [47] = 14,
  [48] = 18,
  [49] = 49,
  [50] = 13,
  [51] = 51,
  [52] = 52,
  [53] = 52,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 64,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(168);
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '(') ADVANCE(180);
      if (lookahead == ')') ADVANCE(181);
      if (lookahead == '*') ADVANCE(230);
      if (lookahead == '+') ADVANCE(227);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '/') ADVANCE(231);
      if (lookahead == '1') ADVANCE(274);
      if (lookahead == '2') ADVANCE(271);
      if (lookahead == '8') ADVANCE(272);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == ';') ADVANCE(175);
      if (lookahead == 'F') ADVANCE(9);
      if (lookahead == 'T') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(70);
      if (lookahead == 'c') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == 'f') ADVANCE(71);
      if (lookahead == 'h') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead == 'p') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == 't') ADVANCE(51);
      if (lookahead == 'v') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '(') ADVANCE(225);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(223);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '(') ADVANCE(180);
      if (lookahead == ')') ADVANCE(181);
      if (lookahead == '*') ADVANCE(229);
      if (lookahead == '+') ADVANCE(227);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '/') ADVANCE(231);
      if (lookahead == ';') ADVANCE(175);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead == 'p') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '(') ADVANCE(180);
      if (lookahead == '1') ADVANCE(274);
      if (lookahead == '2') ADVANCE(271);
      if (lookahead == '8') ADVANCE(272);
      if (lookahead == 'F') ADVANCE(244);
      if (lookahead == 'T') ADVANCE(248);
      if (lookahead == 'n') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '(') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(220);
      END_STATE();
    case 6:
      if (lookahead == '2') ADVANCE(197);
      END_STATE();
    case 7:
      if (lookahead == '3') ADVANCE(6);
      if (lookahead == '6') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '4') ADVANCE(196);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(240);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(242);
      END_STATE();
    case 12:
      if (lookahead == 'I') ADVANCE(102);
      if (lookahead == 'R') ADVANCE(32);
      END_STATE();
    case 13:
      if (lookahead == 'L') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'R') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'S') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == 'U') ADVANCE(10);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == 'h') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(211);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(214);
      if (lookahead == 'g') ADVANCE(129);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(212);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(82);
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(145);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(232);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(213);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'y') ADVANCE(112);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 61:
      if (lookahead == 'f') ADVANCE(17);
      END_STATE();
    case 62:
      if (lookahead == 'f') ADVANCE(154);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(191);
      END_STATE();
    case 65:
      if (lookahead == 'g') ADVANCE(198);
      END_STATE();
    case 66:
      if (lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 67:
      if (lookahead == 'g') ADVANCE(108);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(58);
      END_STATE();
    case 69:
      if (lookahead == 'h') ADVANCE(193);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(109);
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 79:
      if (lookahead == 'j') ADVANCE(52);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead == 'm') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(209);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(37);
      if (lookahead == 's') ADVANCE(179);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 112:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 113:
      if (lookahead == 'p') ADVANCE(119);
      END_STATE();
    case 114:
      if (lookahead == 'p') ADVANCE(87);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 152:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 153:
      if (lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 154:
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 155:
      if (lookahead == 'x') ADVANCE(113);
      END_STATE();
    case 156:
      if (lookahead == 'x') ADVANCE(189);
      END_STATE();
    case 157:
      if (lookahead == 'x') ADVANCE(141);
      END_STATE();
    case 158:
      if (lookahead == 'y') ADVANCE(192);
      END_STATE();
    case 159:
      if (lookahead == 'y') ADVANCE(206);
      END_STATE();
    case 160:
      if (lookahead == 'y') ADVANCE(132);
      END_STATE();
    case 161:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 162:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(279);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(278);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 165:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 166:
      if (eof) ADVANCE(168);
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '(') ADVANCE(180);
      if (lookahead == '*') ADVANCE(229);
      if (lookahead == '+') ADVANCE(227);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '/') ADVANCE(231);
      if (lookahead == '1') ADVANCE(274);
      if (lookahead == '2') ADVANCE(271);
      if (lookahead == '8') ADVANCE(272);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == 'F') ADVANCE(244);
      if (lookahead == 'T') ADVANCE(248);
      if (lookahead == 'a') ADVANCE(260);
      if (lookahead == 'c') ADVANCE(262);
      if (lookahead == 'i') ADVANCE(258);
      if (lookahead == 'n') ADVANCE(261);
      if (lookahead == 'o') ADVANCE(263);
      if (lookahead == 'p') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(166)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 167:
      if (eof) ADVANCE(168);
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '(') ADVANCE(180);
      if (lookahead == '1') ADVANCE(274);
      if (lookahead == '2') ADVANCE(271);
      if (lookahead == '8') ADVANCE(272);
      if (lookahead == 'F') ADVANCE(244);
      if (lookahead == 'T') ADVANCE(248);
      if (lookahead == 'c') ADVANCE(262);
      if (lookahead == 'i') ADVANCE(258);
      if (lookahead == 'n') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(167)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_include);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_include_statement_token1);
      if (lookahead == '#') ADVANCE(219);
      if (lookahead == '(') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_include_statement_token1);
      if (lookahead == '*') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_include_statement_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*') ADVANCE(220);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_bigInteger);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_rational);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_bigRational);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_complex);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_hash);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_bin64);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_bin32);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_bstring);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_time);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == 'S') ADVANCE(160);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_fileSys);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_process);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_category);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_reference);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_ref_list);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_program);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_ptr);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_varfunc);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_proc);
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_expr);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '(') ADVANCE(225);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(222);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == ')') ADVANCE(226);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '*') ADVANCE(220);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_STAR_RPAREN);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == ')') ADVANCE(226);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_parse);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_parse);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_decimalLiteral);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_decimalLiteral);
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_decimalLiteral);
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_decimalLiteral);
      if (lookahead == '6') ADVANCE(273);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_decimalLiteral);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_exponentialLiteral);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_hexLiteral);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_octalLiteral);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_binaryLiteral);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(279);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 167},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 167},
  [6] = {.lex_state = 167},
  [7] = {.lex_state = 166},
  [8] = {.lex_state = 166},
  [9] = {.lex_state = 166},
  [10] = {.lex_state = 166},
  [11] = {.lex_state = 166},
  [12] = {.lex_state = 166},
  [13] = {.lex_state = 166},
  [14] = {.lex_state = 166},
  [15] = {.lex_state = 166},
  [16] = {.lex_state = 166},
  [17] = {.lex_state = 166},
  [18] = {.lex_state = 166},
  [19] = {.lex_state = 166},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 167},
  [31] = {.lex_state = 167},
  [32] = {.lex_state = 167},
  [33] = {.lex_state = 167},
  [34] = {.lex_state = 167},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 172},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 172},
  [67] = {.lex_state = 172},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {(TSStateId)(-1)},
  [74] = {(TSStateId)(-1)},
  [75] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_comment] = STATE(0),
    [sym_block_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_integer] = ACTIONS(1),
    [anon_sym_bigInteger] = ACTIONS(1),
    [anon_sym_rational] = ACTIONS(1),
    [anon_sym_bigRational] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_complex] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [anon_sym_hash] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_bin64] = ACTIONS(1),
    [anon_sym_bin32] = ACTIONS(1),
    [anon_sym_bstring] = ACTIONS(1),
    [anon_sym_color] = ACTIONS(1),
    [anon_sym_time] = ACTIONS(1),
    [anon_sym_duration] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [anon_sym_text] = ACTIONS(1),
    [anon_sym_fileSys] = ACTIONS(1),
    [anon_sym_process] = ACTIONS(1),
    [anon_sym_category] = ACTIONS(1),
    [anon_sym_reference] = ACTIONS(1),
    [anon_sym_ref_list] = ACTIONS(1),
    [anon_sym_program] = ACTIONS(1),
    [anon_sym_ptr] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_varfunc] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_proc] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_object] = ACTIONS(1),
    [anon_sym_expr] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_STAR_RPAREN] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_parse] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_TRUE] = ACTIONS(1),
    [anon_sym_FALSE] = ACTIONS(1),
    [sym_decimalLiteral] = ACTIONS(1),
    [sym_exponentialLiteral] = ACTIONS(1),
    [sym_hexLiteral] = ACTIONS(1),
    [sym_octalLiteral] = ACTIONS(1),
    [sym_binaryLiteral] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(63),
    [sym__statement] = STATE(32),
    [sym_include_statement] = STATE(33),
    [sym_declaration] = STATE(33),
    [sym_function_call] = STATE(9),
    [sym_value] = STATE(54),
    [sym__expression] = STATE(10),
    [sym_line_comment] = STATE(1),
    [sym_block_comment] = STATE(1),
    [sym_binary_expression] = STATE(9),
    [sym_unary_expression] = STATE(9),
    [sym_parenthesized_expression] = STATE(9),
    [sym_unary_operator] = STATE(24),
    [sym_boolean] = STATE(50),
    [sym_integer] = STATE(50),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_not] = ACTIONS(17),
    [anon_sym_TRUE] = ACTIONS(19),
    [anon_sym_FALSE] = ACTIONS(19),
    [sym_name] = ACTIONS(21),
    [sym_decimalLiteral] = ACTIONS(23),
    [sym_exponentialLiteral] = ACTIONS(25),
    [sym_hexLiteral] = ACTIONS(25),
    [sym_octalLiteral] = ACTIONS(25),
    [sym_binaryLiteral] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(18), 1,
      sym_type,
    ACTIONS(29), 2,
      anon_sym_file,
      anon_sym_proc,
    STATE(2), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 33,
      anon_sym_boolean,
      anon_sym_integer,
      anon_sym_bigInteger,
      anon_sym_rational,
      anon_sym_bigRational,
      anon_sym_float,
      anon_sym_complex,
      anon_sym_char,
      anon_sym_string,
      anon_sym_array,
      anon_sym_hash,
      anon_sym_set,
      anon_sym_struct,
      anon_sym_bin64,
      anon_sym_bin32,
      anon_sym_bstring,
      anon_sym_color,
      anon_sym_time,
      anon_sym_duration,
      anon_sym_text,
      anon_sym_fileSys,
      anon_sym_process,
      anon_sym_category,
      anon_sym_reference,
      anon_sym_ref_list,
      anon_sym_program,
      anon_sym_ptr,
      anon_sym_func,
      anon_sym_varfunc,
      anon_sym_void,
      anon_sym_type,
      anon_sym_object,
      anon_sym_expr,
  [53] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(48), 1,
      sym_type,
    ACTIONS(33), 2,
      anon_sym_file,
      anon_sym_proc,
    STATE(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 33,
      anon_sym_boolean,
      anon_sym_integer,
      anon_sym_bigInteger,
      anon_sym_rational,
      anon_sym_bigRational,
      anon_sym_float,
      anon_sym_complex,
      anon_sym_char,
      anon_sym_string,
      anon_sym_array,
      anon_sym_hash,
      anon_sym_set,
      anon_sym_struct,
      anon_sym_bin64,
      anon_sym_bin32,
      anon_sym_bstring,
      anon_sym_color,
      anon_sym_time,
      anon_sym_duration,
      anon_sym_text,
      anon_sym_fileSys,
      anon_sym_process,
      anon_sym_category,
      anon_sym_reference,
      anon_sym_ref_list,
      anon_sym_program,
      anon_sym_ptr,
      anon_sym_func,
      anon_sym_varfunc,
      anon_sym_void,
      anon_sym_type,
      anon_sym_object,
      anon_sym_expr,
  [106] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(61), 1,
      sym_type,
    ACTIONS(29), 2,
      anon_sym_file,
      anon_sym_proc,
    STATE(4), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 33,
      anon_sym_boolean,
      anon_sym_integer,
      anon_sym_bigInteger,
      anon_sym_rational,
      anon_sym_bigRational,
      anon_sym_float,
      anon_sym_complex,
      anon_sym_char,
      anon_sym_string,
      anon_sym_array,
      anon_sym_hash,
      anon_sym_set,
      anon_sym_struct,
      anon_sym_bin64,
      anon_sym_bin32,
      anon_sym_bstring,
      anon_sym_color,
      anon_sym_time,
      anon_sym_duration,
      anon_sym_text,
      anon_sym_fileSys,
      anon_sym_process,
      anon_sym_category,
      anon_sym_reference,
      anon_sym_ref_list,
      anon_sym_program,
      anon_sym_ptr,
      anon_sym_func,
      anon_sym_varfunc,
      anon_sym_void,
      anon_sym_type,
      anon_sym_object,
      anon_sym_expr,
  [159] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(40), 1,
      anon_sym_include,
    ACTIONS(43), 1,
      anon_sym_const,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_not,
    ACTIONS(55), 1,
      sym_name,
    ACTIONS(58), 1,
      sym_decimalLiteral,
    STATE(10), 1,
      sym__expression,
    STATE(24), 1,
      sym_unary_operator,
    STATE(32), 1,
      sym__statement,
    STATE(54), 1,
      sym_value,
    ACTIONS(52), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(33), 2,
      sym_include_statement,
      sym_declaration,
    STATE(50), 2,
      sym_boolean,
      sym_integer,
    STATE(5), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(61), 4,
      sym_exponentialLiteral,
      sym_hexLiteral,
      sym_octalLiteral,
      sym_binaryLiteral,
    STATE(9), 4,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
  [231] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_const,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_not,
    ACTIONS(21), 1,
      sym_name,
    ACTIONS(23), 1,
      sym_decimalLiteral,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym_source_file_repeat1,
    STATE(10), 1,
      sym__expression,
    STATE(24), 1,
      sym_unary_operator,
    STATE(32), 1,
      sym__statement,
    STATE(54), 1,
      sym_value,
    ACTIONS(19), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(6), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(33), 2,
      sym_include_statement,
      sym_declaration,
    STATE(50), 2,
      sym_boolean,
      sym_integer,
    ACTIONS(25), 4,
      sym_exponentialLiteral,
      sym_hexLiteral,
      sym_octalLiteral,
      sym_binaryLiteral,
    STATE(9), 4,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
  [305] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      anon_sym_PLUS,
    STATE(16), 1,
      sym_cast,
    STATE(7), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(66), 9,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_exponentialLiteral,
      sym_hexLiteral,
      sym_octalLiteral,
      sym_binaryLiteral,
    ACTIONS(68), 10,
      anon_sym_include,
      anon_sym_const,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_name,
      sym_decimalLiteral,
  [348] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(8), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(74), 11,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_exponentialLiteral,
      sym_hexLiteral,
      sym_octalLiteral,
      sym_binaryLiteral,
    ACTIONS(76), 11,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_name,
      sym_decimalLiteral,
  [385] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(72), 1,
      anon_sym_PLUS,
    STATE(16), 1,
      sym_cast,
    STATE(9), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(66), 9,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_exponentialLiteral,
      sym_hexLiteral,
      sym_octalLiteral,
      sym_binaryLiteral,
    ACTIONS(68), 11,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_name,
      sym_decimalLiteral,
  [426] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(28), 1,
      sym_binary_operator,
    STATE(10), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(84), 3,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
    ACTIONS(82), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(78), 6,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym_exponentialLiteral,
      sym_hexLiteral,
      sym_octalLiteral,
      sym_binaryLiteral,
    ACTIONS(80), 8,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_name,
      sym_decimalLiteral,
  [469] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(28), 1,
      sym_binary_operator,
    STATE(11), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(86), 10,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_exponentialLiteral,
      sym_hexLiteral,
      sym_octalLiteral,
      sym_binaryLiteral,
    ACTIONS(88), 11,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_name,
      sym_decimalLiteral,
  [508] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(28), 1,
      sym_binary_operator,
    STATE(12), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(90), 10,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_exponentialLiteral,
      sym_hexLiteral,
      sym_octalLiteral,
      sym_binaryLiteral,
    ACTIONS(92), 11,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_name,
      sym_decimalLiteral,
  [547] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(13), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(94), 10,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_exponentialLiteral,
      sym_hexLiteral,
      sym_octalLiteral,
      sym_binaryLiteral,
    ACTIONS(96), 11,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_name,
      sym_decimalLiteral,
  [583] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(14), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(98), 10,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_exponentialLiteral,
      sym_hexLiteral,
      sym_octalLiteral,
      sym_binaryLiteral,
    ACTIONS(100), 11,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_name,
      sym_decimalLiteral,
  [619] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(15), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(102), 10,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_exponentialLiteral,
      sym_hexLiteral,
      sym_octalLiteral,
      sym_binaryLiteral,
    ACTIONS(104), 11,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_name,
      sym_decimalLiteral,
  [655] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(16), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(106), 10,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_exponentialLiteral,
      sym_hexLiteral,
      sym_octalLiteral,
      sym_binaryLiteral,
    ACTIONS(108), 11,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_name,
      sym_decimalLiteral,
  [691] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(17), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(110), 10,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_exponentialLiteral,
      sym_hexLiteral,
      sym_octalLiteral,
      sym_binaryLiteral,
    ACTIONS(112), 11,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_name,
      sym_decimalLiteral,
  [727] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(18), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(114), 10,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_exponentialLiteral,
      sym_hexLiteral,
      sym_octalLiteral,
      sym_binaryLiteral,
    ACTIONS(116), 11,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_name,
      sym_decimalLiteral,
  [763] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(19), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(118), 10,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_exponentialLiteral,
      sym_hexLiteral,
      sym_octalLiteral,
      sym_binaryLiteral,
    ACTIONS(120), 11,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_name,
      sym_decimalLiteral,
  [799] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(17), 1,
      anon_sym_not,
    ACTIONS(23), 1,
      sym_decimalLiteral,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      sym_name,
    STATE(27), 1,
      sym_unary_operator,
    STATE(64), 1,
      sym_argument_list,
    ACTIONS(19), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(20), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(39), 2,
      sym_value,
      sym__expression,
    STATE(50), 2,
      sym_boolean,
      sym_integer,
    ACTIONS(25), 4,
      sym_exponentialLiteral,
      sym_hexLiteral,
      sym_octalLiteral,
      sym_binaryLiteral,
    STATE(38), 4,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
  [852] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(17), 1,
      anon_sym_not,
    ACTIONS(23), 1,
      sym_decimalLiteral,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      sym_name,
    STATE(27), 1,
      sym_unary_operator,
    STATE(65), 1,
      sym_argument_list,
    ACTIONS(19), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(21), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(39), 2,
      sym_value,
      sym__expression,
    STATE(50), 2,
      sym_boolean,
      sym_integer,
    ACTIONS(25), 4,
      sym_exponentialLiteral,
      sym_hexLiteral,
      sym_octalLiteral,
      sym_binaryLiteral,
    STATE(38), 4,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
  [905] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(17), 1,
      anon_sym_not,
    ACTIONS(23), 1,
      sym_decimalLiteral,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      sym_name,
    STATE(27), 1,
      sym_unary_operator,
    ACTIONS(19), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(22), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(50), 2,
      sym_boolean,
      sym_integer,
    STATE(52), 2,
      sym_value,
      sym__expression,
    ACTIONS(25), 4,
      sym_exponentialLiteral,
      sym_hexLiteral,
      sym_octalLiteral,
      sym_binaryLiteral,
    STATE(38), 4,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
  [955] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(17), 1,
      anon_sym_not,
    ACTIONS(23), 1,
      sym_decimalLiteral,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      sym_name,
    STATE(27), 1,
      sym_unary_operator,
    ACTIONS(19), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(23), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(49), 2,
      sym_value,
      sym__expression,
    STATE(50), 2,
      sym_boolean,
      sym_integer,
    ACTIONS(25), 4,
      sym_exponentialLiteral,
      sym_hexLiteral,
      sym_octalLiteral,
      sym_binaryLiteral,
    STATE(38), 4,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
  [1005] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_not,
    ACTIONS(21), 1,
      sym_name,
    ACTIONS(128), 1,
      sym_decimalLiteral,
    ACTIONS(126), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(11), 2,
      sym_value,
      sym__expression,
    STATE(13), 2,
      sym_boolean,
      sym_integer,
    STATE(24), 3,
      sym_line_comment,
      sym_block_comment,
      sym_unary_operator,
    ACTIONS(130), 4,
      sym_exponentialLiteral,
      sym_hexLiteral,
      sym_octalLiteral,
      sym_binaryLiteral,
    STATE(9), 4,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
  [1053] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(17), 1,
      anon_sym_not,
    ACTIONS(23), 1,
      sym_decimalLiteral,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      sym_name,
    STATE(27), 1,
      sym_unary_operator,
    ACTIONS(19), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(25), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(50), 2,
      sym_boolean,
      sym_integer,
    STATE(53), 2,
      sym_value,
      sym__expression,
    ACTIONS(25), 4,
      sym_exponentialLiteral,
      sym_hexLiteral,
      sym_octalLiteral,
      sym_binaryLiteral,
    STATE(38), 4,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
  [1103] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(17), 1,
      anon_sym_not,
    ACTIONS(23), 1,
      sym_decimalLiteral,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      sym_name,
    STATE(27), 1,
      sym_unary_operator,
    ACTIONS(19), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(26), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(50), 2,
      sym_boolean,
      sym_integer,
    STATE(51), 2,
      sym_value,
      sym__expression,
    ACTIONS(25), 4,
      sym_exponentialLiteral,
      sym_hexLiteral,
      sym_octalLiteral,
      sym_binaryLiteral,
    STATE(38), 4,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
  [1153] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(17), 1,
      anon_sym_not,
    ACTIONS(23), 1,
      sym_decimalLiteral,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      sym_name,
    ACTIONS(19), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(37), 2,
      sym_value,
      sym__expression,
    STATE(50), 2,
      sym_boolean,
      sym_integer,
    STATE(27), 3,
      sym_line_comment,
      sym_block_comment,
      sym_unary_operator,
    ACTIONS(25), 4,
      sym_exponentialLiteral,
      sym_hexLiteral,
      sym_octalLiteral,
      sym_binaryLiteral,
    STATE(38), 4,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
  [1201] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_not,
    ACTIONS(21), 1,
      sym_name,
    ACTIONS(128), 1,
      sym_decimalLiteral,
    STATE(24), 1,
      sym_unary_operator,
    ACTIONS(126), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(12), 2,
      sym_value,
      sym__expression,
    STATE(13), 2,
      sym_boolean,
      sym_integer,
    STATE(28), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(130), 4,
      sym_exponentialLiteral,
      sym_hexLiteral,
      sym_octalLiteral,
      sym_binaryLiteral,
    STATE(9), 4,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
  [1251] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(17), 1,
      anon_sym_not,
    ACTIONS(23), 1,
      sym_decimalLiteral,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      sym_name,
    STATE(27), 1,
      sym_unary_operator,
    ACTIONS(19), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(29), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(36), 2,
      sym_value,
      sym__expression,
    STATE(50), 2,
      sym_boolean,
      sym_integer,
    ACTIONS(25), 4,
      sym_exponentialLiteral,
      sym_hexLiteral,
      sym_octalLiteral,
      sym_binaryLiteral,
    STATE(38), 4,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
  [1301] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(30), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(132), 6,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym_exponentialLiteral,
      sym_hexLiteral,
      sym_octalLiteral,
      sym_binaryLiteral,
    ACTIONS(134), 8,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_name,
      sym_decimalLiteral,
  [1330] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(31), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(136), 6,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym_exponentialLiteral,
      sym_hexLiteral,
      sym_octalLiteral,
      sym_binaryLiteral,
    ACTIONS(138), 8,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_name,
      sym_decimalLiteral,
  [1359] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(32), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(140), 6,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym_exponentialLiteral,
      sym_hexLiteral,
      sym_octalLiteral,
      sym_binaryLiteral,
    ACTIONS(142), 8,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_name,
      sym_decimalLiteral,
  [1388] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(33), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(78), 6,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym_exponentialLiteral,
      sym_hexLiteral,
      sym_octalLiteral,
      sym_binaryLiteral,
    ACTIONS(80), 8,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_name,
      sym_decimalLiteral,
  [1417] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(34), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(144), 6,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym_exponentialLiteral,
      sym_hexLiteral,
      sym_octalLiteral,
      sym_binaryLiteral,
    ACTIONS(146), 8,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_name,
      sym_decimalLiteral,
  [1446] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 1,
      anon_sym_PLUS,
    STATE(41), 1,
      sym_cast,
    STATE(35), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(66), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
  [1477] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(29), 1,
      sym_binary_operator,
    STATE(36), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(90), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
  [1503] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(29), 1,
      sym_binary_operator,
    STATE(37), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(86), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
  [1529] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(150), 1,
      anon_sym_PLUS,
    STATE(41), 1,
      sym_cast,
    STATE(38), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(66), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
  [1557] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      sym_binary_operator,
    STATE(58), 1,
      aux_sym_argument_list_repeat1,
    STATE(39), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(82), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
  [1589] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(40), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(158), 4,
      sym_exponentialLiteral,
      sym_hexLiteral,
      sym_octalLiteral,
      sym_binaryLiteral,
    ACTIONS(156), 6,
      anon_sym_LPAREN,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_name,
      sym_decimalLiteral,
  [1614] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(41), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(106), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
  [1637] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(42), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(110), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
  [1660] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(43), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(118), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
  [1683] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(44), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(162), 4,
      sym_exponentialLiteral,
      sym_hexLiteral,
      sym_octalLiteral,
      sym_binaryLiteral,
    ACTIONS(160), 6,
      anon_sym_LPAREN,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_name,
      sym_decimalLiteral,
  [1708] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(45), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(74), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
  [1731] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(46), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(102), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
  [1754] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(47), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(98), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
  [1777] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(48), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(114), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
  [1800] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(29), 1,
      sym_binary_operator,
    ACTIONS(164), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(49), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(82), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
  [1827] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(94), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
  [1850] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(166), 1,
      anon_sym_SEMI,
    STATE(29), 1,
      sym_binary_operator,
    STATE(51), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(82), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
  [1876] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym_binary_operator,
    STATE(52), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(82), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
  [1902] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym_binary_operator,
    STATE(53), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(82), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
  [1928] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(28), 1,
      sym_binary_operator,
    STATE(54), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(82), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
  [1951] = 6,
    ACTIONS(172), 1,
      anon_sym_POUND,
    ACTIONS(174), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(176), 1,
      aux_sym_block_comment_token1,
    ACTIONS(178), 1,
      anon_sym_STAR_RPAREN,
    STATE(59), 1,
      aux_sym_block_comment_repeat1,
    STATE(55), 2,
      sym_line_comment,
      sym_block_comment,
  [1971] = 5,
    ACTIONS(172), 1,
      anon_sym_POUND,
    ACTIONS(174), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(180), 1,
      aux_sym_block_comment_token1,
    ACTIONS(183), 1,
      anon_sym_STAR_RPAREN,
    STATE(56), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1989] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    STATE(57), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_argument_list_repeat1,
  [2007] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      aux_sym_argument_list_repeat1,
    STATE(58), 2,
      sym_line_comment,
      sym_block_comment,
  [2027] = 6,
    ACTIONS(172), 1,
      anon_sym_POUND,
    ACTIONS(174), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(176), 1,
      aux_sym_block_comment_token1,
    ACTIONS(190), 1,
      anon_sym_STAR_RPAREN,
    STATE(56), 1,
      aux_sym_block_comment_repeat1,
    STATE(59), 2,
      sym_line_comment,
      sym_block_comment,
  [2047] = 4,
    ACTIONS(172), 1,
      anon_sym_POUND,
    ACTIONS(174), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(192), 2,
      aux_sym_block_comment_token1,
      anon_sym_STAR_RPAREN,
    STATE(60), 2,
      sym_line_comment,
      sym_block_comment,
  [2062] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(194), 1,
      anon_sym_COLON,
    STATE(61), 2,
      sym_line_comment,
      sym_block_comment,
  [2076] = 4,
    ACTIONS(172), 1,
      anon_sym_POUND,
    ACTIONS(174), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(196), 1,
      aux_sym_include_statement_token1,
    STATE(62), 2,
      sym_line_comment,
      sym_block_comment,
  [2090] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    STATE(63), 2,
      sym_line_comment,
      sym_block_comment,
  [2104] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
    STATE(64), 2,
      sym_line_comment,
      sym_block_comment,
  [2118] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    STATE(65), 2,
      sym_line_comment,
      sym_block_comment,
  [2132] = 4,
    ACTIONS(172), 1,
      anon_sym_POUND,
    ACTIONS(174), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(204), 1,
      aux_sym_include_statement_token1,
    STATE(66), 2,
      sym_line_comment,
      sym_block_comment,
  [2146] = 4,
    ACTIONS(172), 1,
      anon_sym_POUND,
    ACTIONS(174), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(206), 1,
      aux_sym_include_statement_token1,
    STATE(67), 2,
      sym_line_comment,
      sym_block_comment,
  [2160] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(208), 1,
      sym_name,
    STATE(68), 2,
      sym_line_comment,
      sym_block_comment,
  [2174] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(210), 1,
      anon_sym_include,
    STATE(69), 2,
      sym_line_comment,
      sym_block_comment,
  [2188] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(212), 1,
      anon_sym_SEMI,
    STATE(70), 2,
      sym_line_comment,
      sym_block_comment,
  [2202] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(214), 1,
      anon_sym_SEMI,
    STATE(71), 2,
      sym_line_comment,
      sym_block_comment,
  [2216] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(216), 1,
      anon_sym_is,
    STATE(72), 2,
      sym_line_comment,
      sym_block_comment,
  [2230] = 1,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
  [2234] = 1,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
  [2238] = 1,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 53,
  [SMALL_STATE(4)] = 106,
  [SMALL_STATE(5)] = 159,
  [SMALL_STATE(6)] = 231,
  [SMALL_STATE(7)] = 305,
  [SMALL_STATE(8)] = 348,
  [SMALL_STATE(9)] = 385,
  [SMALL_STATE(10)] = 426,
  [SMALL_STATE(11)] = 469,
  [SMALL_STATE(12)] = 508,
  [SMALL_STATE(13)] = 547,
  [SMALL_STATE(14)] = 583,
  [SMALL_STATE(15)] = 619,
  [SMALL_STATE(16)] = 655,
  [SMALL_STATE(17)] = 691,
  [SMALL_STATE(18)] = 727,
  [SMALL_STATE(19)] = 763,
  [SMALL_STATE(20)] = 799,
  [SMALL_STATE(21)] = 852,
  [SMALL_STATE(22)] = 905,
  [SMALL_STATE(23)] = 955,
  [SMALL_STATE(24)] = 1005,
  [SMALL_STATE(25)] = 1053,
  [SMALL_STATE(26)] = 1103,
  [SMALL_STATE(27)] = 1153,
  [SMALL_STATE(28)] = 1201,
  [SMALL_STATE(29)] = 1251,
  [SMALL_STATE(30)] = 1301,
  [SMALL_STATE(31)] = 1330,
  [SMALL_STATE(32)] = 1359,
  [SMALL_STATE(33)] = 1388,
  [SMALL_STATE(34)] = 1417,
  [SMALL_STATE(35)] = 1446,
  [SMALL_STATE(36)] = 1477,
  [SMALL_STATE(37)] = 1503,
  [SMALL_STATE(38)] = 1529,
  [SMALL_STATE(39)] = 1557,
  [SMALL_STATE(40)] = 1589,
  [SMALL_STATE(41)] = 1614,
  [SMALL_STATE(42)] = 1637,
  [SMALL_STATE(43)] = 1660,
  [SMALL_STATE(44)] = 1683,
  [SMALL_STATE(45)] = 1708,
  [SMALL_STATE(46)] = 1731,
  [SMALL_STATE(47)] = 1754,
  [SMALL_STATE(48)] = 1777,
  [SMALL_STATE(49)] = 1800,
  [SMALL_STATE(50)] = 1827,
  [SMALL_STATE(51)] = 1850,
  [SMALL_STATE(52)] = 1876,
  [SMALL_STATE(53)] = 1902,
  [SMALL_STATE(54)] = 1928,
  [SMALL_STATE(55)] = 1951,
  [SMALL_STATE(56)] = 1971,
  [SMALL_STATE(57)] = 1989,
  [SMALL_STATE(58)] = 2007,
  [SMALL_STATE(59)] = 2027,
  [SMALL_STATE(60)] = 2047,
  [SMALL_STATE(61)] = 2062,
  [SMALL_STATE(62)] = 2076,
  [SMALL_STATE(63)] = 2090,
  [SMALL_STATE(64)] = 2104,
  [SMALL_STATE(65)] = 2118,
  [SMALL_STATE(66)] = 2132,
  [SMALL_STATE(67)] = 2146,
  [SMALL_STATE(68)] = 2160,
  [SMALL_STATE(69)] = 2174,
  [SMALL_STATE(70)] = 2188,
  [SMALL_STATE(71)] = 2202,
  [SMALL_STATE(72)] = 2216,
  [SMALL_STATE(73)] = 2230,
  [SMALL_STATE(74)] = 2234,
  [SMALL_STATE(75)] = 2238,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 7),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 7),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 4),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 4),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operator, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(60),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(23),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [198] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
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
