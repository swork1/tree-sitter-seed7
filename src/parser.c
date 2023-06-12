#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 116
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 107
#define ALIAS_COUNT 0
#define TOKEN_COUNT 78
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
  anon_sym_NIL = 46,
  anon_sym_POUND = 47,
  anon_sym_LPAREN_STAR = 48,
  aux_sym_block_comment_token1 = 49,
  anon_sym_STAR_RPAREN = 50,
  anon_sym_PLUS = 51,
  anon_sym_DASH = 52,
  anon_sym_STAR = 53,
  anon_sym_SLASH = 54,
  anon_sym_and = 55,
  anon_sym_or = 56,
  anon_sym_parse = 57,
  anon_sym_rem = 58,
  anon_sym_div = 59,
  anon_sym_mdiv = 60,
  anon_sym_mod = 61,
  anon_sym_not = 62,
  anon_sym_TRUE = 63,
  anon_sym_FALSE = 64,
  aux_sym_name_token1 = 65,
  anon_sym_ord = 66,
  sym__decimalLiteral = 67,
  sym__exponentialLiteral = 68,
  sym__negativeExponentialLiteral = 69,
  sym__hexLiteral = 70,
  sym__octalLiteral = 71,
  sym__binaryLiteral = 72,
  anon_sym_DQUOTE = 73,
  anon_sym_SQUOTE = 74,
  anon_sym_DOT = 75,
  anon_sym__SLASH = 76,
  anon_sym__ = 77,
  sym_source_file = 78,
  sym__statement = 79,
  sym_include_statement = 80,
  sym_declaration = 81,
  sym_function_call = 82,
  sym_argument_list = 83,
  sym_type = 84,
  sym_value = 85,
  sym__expression = 86,
  sym_line_comment = 87,
  sym_block_comment = 88,
  sym_binary_expression = 89,
  sym_unary_expression = 90,
  sym_parenthesized_expression = 91,
  sym_binary_operator = 92,
  sym_unary_operator = 93,
  sym_boolean = 94,
  sym_name = 95,
  sym_integer = 96,
  sym_cast = 97,
  sym_castFunction = 98,
  sym_string = 99,
  sym_float = 100,
  sym_bigRational = 101,
  sym_rational = 102,
  sym_bigInteger = 103,
  aux_sym_source_file_repeat1 = 104,
  aux_sym_argument_list_repeat1 = 105,
  aux_sym_block_comment_repeat1 = 106,
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
  [anon_sym_NIL] = "NIL",
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
  [anon_sym_rem] = "rem",
  [anon_sym_div] = "div",
  [anon_sym_mdiv] = "mdiv",
  [anon_sym_mod] = "mod",
  [anon_sym_not] = "not",
  [anon_sym_TRUE] = "TRUE",
  [anon_sym_FALSE] = "FALSE",
  [aux_sym_name_token1] = "name_token1",
  [anon_sym_ord] = "ord",
  [sym__decimalLiteral] = "_decimalLiteral",
  [sym__exponentialLiteral] = "_exponentialLiteral",
  [sym__negativeExponentialLiteral] = "_negativeExponentialLiteral",
  [sym__hexLiteral] = "_hexLiteral",
  [sym__octalLiteral] = "_octalLiteral",
  [sym__binaryLiteral] = "_binaryLiteral",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DOT] = ".",
  [anon_sym__SLASH] = "_/",
  [anon_sym__] = "_",
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
  [sym_name] = "name",
  [sym_integer] = "integer",
  [sym_cast] = "cast",
  [sym_castFunction] = "castFunction",
  [sym_string] = "string",
  [sym_float] = "float",
  [sym_bigRational] = "bigRational",
  [sym_rational] = "rational",
  [sym_bigInteger] = "bigInteger",
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
  [anon_sym_NIL] = anon_sym_NIL,
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
  [anon_sym_rem] = anon_sym_rem,
  [anon_sym_div] = anon_sym_div,
  [anon_sym_mdiv] = anon_sym_mdiv,
  [anon_sym_mod] = anon_sym_mod,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_TRUE] = anon_sym_TRUE,
  [anon_sym_FALSE] = anon_sym_FALSE,
  [aux_sym_name_token1] = aux_sym_name_token1,
  [anon_sym_ord] = anon_sym_ord,
  [sym__decimalLiteral] = sym__decimalLiteral,
  [sym__exponentialLiteral] = sym__exponentialLiteral,
  [sym__negativeExponentialLiteral] = sym__negativeExponentialLiteral,
  [sym__hexLiteral] = sym__hexLiteral,
  [sym__octalLiteral] = sym__octalLiteral,
  [sym__binaryLiteral] = sym__binaryLiteral,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym__SLASH] = anon_sym__SLASH,
  [anon_sym__] = anon_sym__,
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
  [sym_name] = sym_name,
  [sym_integer] = sym_integer,
  [sym_cast] = sym_cast,
  [sym_castFunction] = sym_castFunction,
  [sym_string] = sym_string,
  [sym_float] = sym_float,
  [sym_bigRational] = sym_bigRational,
  [sym_rational] = sym_rational,
  [sym_bigInteger] = sym_bigInteger,
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
  [anon_sym_NIL] = {
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
  [anon_sym_rem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_div] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mdiv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod] = {
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
  [aux_sym_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_ord] = {
    .visible = true,
    .named = false,
  },
  [sym__decimalLiteral] = {
    .visible = false,
    .named = true,
  },
  [sym__exponentialLiteral] = {
    .visible = false,
    .named = true,
  },
  [sym__negativeExponentialLiteral] = {
    .visible = false,
    .named = true,
  },
  [sym__hexLiteral] = {
    .visible = false,
    .named = true,
  },
  [sym__octalLiteral] = {
    .visible = false,
    .named = true,
  },
  [sym__binaryLiteral] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
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
  [sym_name] = {
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
  [sym_castFunction] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_bigRational] = {
    .visible = true,
    .named = true,
  },
  [sym_rational] = {
    .visible = true,
    .named = true,
  },
  [sym_bigInteger] = {
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
  [12] = 10,
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
  [29] = 21,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 23,
  [38] = 27,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 11,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 7,
  [47] = 47,
  [48] = 48,
  [49] = 39,
  [50] = 9,
  [51] = 16,
  [52] = 36,
  [53] = 35,
  [54] = 8,
  [55] = 19,
  [56] = 14,
  [57] = 17,
  [58] = 13,
  [59] = 15,
  [60] = 60,
  [61] = 33,
  [62] = 62,
  [63] = 41,
  [64] = 34,
  [65] = 30,
  [66] = 20,
  [67] = 40,
  [68] = 26,
  [69] = 22,
  [70] = 32,
  [71] = 24,
  [72] = 28,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 74,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 79,
  [82] = 82,
  [83] = 80,
  [84] = 82,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 88,
  [92] = 86,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 94,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 97,
  [108] = 108,
  [109] = 108,
  [110] = 99,
  [111] = 111,
  [112] = 101,
  [113] = 113,
  [114] = 114,
  [115] = 115,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(196);
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\'') ADVANCE(330);
      if (lookahead == '(') ADVANCE(208);
      if (lookahead == ')') ADVANCE(209);
      if (lookahead == '*') ADVANCE(260);
      if (lookahead == '+') ADVANCE(257);
      if (lookahead == ',') ADVANCE(210);
      if (lookahead == '-') ADVANCE(258);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == '1') ADVANCE(321);
      if (lookahead == '2') ADVANCE(318);
      if (lookahead == '8') ADVANCE(319);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == ';') ADVANCE(203);
      if (lookahead == 'F') ADVANCE(13);
      if (lookahead == 'N') ADVANCE(16);
      if (lookahead == 'T') ADVANCE(20);
      if (lookahead == '_') ADVANCE(334);
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == 'b') ADVANCE(84);
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'h') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(41);
      if (lookahead == 'p') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == 's') ADVANCE(69);
      if (lookahead == 't') ADVANCE(63);
      if (lookahead == 'v') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '\'') ADVANCE(330);
      if (lookahead == '(') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(252);
      if (lookahead != 0) ADVANCE(251);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '(') ADVANCE(255);
      if (lookahead == '*') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead != 0) ADVANCE(251);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '\'') ADVANCE(330);
      if (lookahead == '(') ADVANCE(208);
      if (lookahead == '1') ADVANCE(321);
      if (lookahead == '2') ADVANCE(318);
      if (lookahead == '8') ADVANCE(319);
      if (lookahead == 'F') ADVANCE(282);
      if (lookahead == 'T') ADVANCE(286);
      if (lookahead == 'n') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '(') ADVANCE(208);
      if (lookahead == ')') ADVANCE(209);
      if (lookahead == '*') ADVANCE(259);
      if (lookahead == '+') ADVANCE(257);
      if (lookahead == ',') ADVANCE(210);
      if (lookahead == '-') ADVANCE(258);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == ';') ADVANCE(203);
      if (lookahead == '_') ADVANCE(334);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == 'd') ADVANCE(85);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == ')') ADVANCE(209);
      if (lookahead == '*') ADVANCE(259);
      if (lookahead == '+') ADVANCE(257);
      if (lookahead == ',') ADVANCE(210);
      if (lookahead == '-') ADVANCE(258);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == ';') ADVANCE(203);
      if (lookahead == '_') ADVANCE(333);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == 'd') ADVANCE(85);
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(16);
      if (lookahead == '_') ADVANCE(333);
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'b') ADVANCE(84);
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(177);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'h') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(42);
      if (lookahead == 'p') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(32);
      if (lookahead == 's') ADVANCE(69);
      if (lookahead == 't') ADVANCE(63);
      if (lookahead == 'v') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(249);
      END_STATE();
    case 9:
      if (lookahead == '+') ADVANCE(189);
      if (lookahead == '-') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 10:
      if (lookahead == '2') ADVANCE(225);
      END_STATE();
    case 11:
      if (lookahead == '3') ADVANCE(10);
      if (lookahead == '6') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '4') ADVANCE(224);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(278);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(280);
      END_STATE();
    case 16:
      if (lookahead == 'I') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'I') ADVANCE(121);
      if (lookahead == 'R') ADVANCE(40);
      END_STATE();
    case 18:
      if (lookahead == 'L') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'L') ADVANCE(246);
      END_STATE();
    case 20:
      if (lookahead == 'R') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'S') ADVANCE(15);
      END_STATE();
    case 22:
      if (lookahead == 'U') ADVANCE(14);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(103);
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == 'r') ADVANCE(123);
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'h') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'h') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(264);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(239);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'g') ADVANCE(151);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(240);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(167);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(168);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(262);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(274);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(241);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(317);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'y') ADVANCE(132);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(23);
      END_STATE();
    case 75:
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'm') ADVANCE(268);
      END_STATE();
    case 76:
      if (lookahead == 'f') ADVANCE(178);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 78:
      if (lookahead == 'g') ADVANCE(219);
      END_STATE();
    case 79:
      if (lookahead == 'g') ADVANCE(226);
      END_STATE();
    case 80:
      if (lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(128);
      END_STATE();
    case 82:
      if (lookahead == 'g') ADVANCE(71);
      END_STATE();
    case 83:
      if (lookahead == 'h') ADVANCE(221);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead == 's') ADVANCE(171);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(179);
      if (lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 96:
      if (lookahead == 'j') ADVANCE(64);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead == 'm') ADVANCE(134);
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 106:
      if (lookahead == 'm') ADVANCE(268);
      END_STATE();
    case 107:
      if (lookahead == 'm') ADVANCE(237);
      END_STATE();
    case 108:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 132:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 133:
      if (lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 134:
      if (lookahead == 'p') ADVANCE(105);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(264);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(123);
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 153:
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 154:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 155:
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 176:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 177:
      if (lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 178:
      if (lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 179:
      if (lookahead == 'v') ADVANCE(270);
      END_STATE();
    case 180:
      if (lookahead == 'v') ADVANCE(272);
      END_STATE();
    case 181:
      if (lookahead == 'x') ADVANCE(133);
      END_STATE();
    case 182:
      if (lookahead == 'x') ADVANCE(217);
      END_STATE();
    case 183:
      if (lookahead == 'x') ADVANCE(164);
      END_STATE();
    case 184:
      if (lookahead == 'y') ADVANCE(220);
      END_STATE();
    case 185:
      if (lookahead == 'y') ADVANCE(234);
      END_STATE();
    case 186:
      if (lookahead == 'y') ADVANCE(155);
      END_STATE();
    case 187:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(328);
      END_STATE();
    case 188:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(327);
      END_STATE();
    case 189:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(326);
      END_STATE();
    case 192:
      if (eof) ADVANCE(196);
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\'') ADVANCE(330);
      if (lookahead == '(') ADVANCE(208);
      if (lookahead == '*') ADVANCE(259);
      if (lookahead == '+') ADVANCE(257);
      if (lookahead == '-') ADVANCE(258);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == '1') ADVANCE(321);
      if (lookahead == '2') ADVANCE(318);
      if (lookahead == '8') ADVANCE(319);
      if (lookahead == 'F') ADVANCE(282);
      if (lookahead == 'T') ADVANCE(286);
      if (lookahead == '_') ADVANCE(335);
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead == 'c') ADVANCE(306);
      if (lookahead == 'd') ADVANCE(298);
      if (lookahead == 'i') ADVANCE(302);
      if (lookahead == 'm') ADVANCE(294);
      if (lookahead == 'n') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(307);
      if (lookahead == 'p') ADVANCE(289);
      if (lookahead == 'r') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(192)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 193:
      if (eof) ADVANCE(196);
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\'') ADVANCE(330);
      if (lookahead == '(') ADVANCE(208);
      if (lookahead == '*') ADVANCE(259);
      if (lookahead == '+') ADVANCE(257);
      if (lookahead == '-') ADVANCE(258);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == '1') ADVANCE(321);
      if (lookahead == '2') ADVANCE(318);
      if (lookahead == '8') ADVANCE(319);
      if (lookahead == 'F') ADVANCE(282);
      if (lookahead == 'T') ADVANCE(286);
      if (lookahead == '_') ADVANCE(336);
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead == 'c') ADVANCE(306);
      if (lookahead == 'd') ADVANCE(298);
      if (lookahead == 'i') ADVANCE(302);
      if (lookahead == 'm') ADVANCE(294);
      if (lookahead == 'n') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(307);
      if (lookahead == 'p') ADVANCE(289);
      if (lookahead == 'r') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(193)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 194:
      if (eof) ADVANCE(196);
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\'') ADVANCE(330);
      if (lookahead == '(') ADVANCE(208);
      if (lookahead == '*') ADVANCE(259);
      if (lookahead == '+') ADVANCE(257);
      if (lookahead == '-') ADVANCE(258);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == '1') ADVANCE(321);
      if (lookahead == '2') ADVANCE(318);
      if (lookahead == '8') ADVANCE(319);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == 'F') ADVANCE(282);
      if (lookahead == 'T') ADVANCE(286);
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead == 'c') ADVANCE(306);
      if (lookahead == 'd') ADVANCE(298);
      if (lookahead == 'i') ADVANCE(302);
      if (lookahead == 'm') ADVANCE(294);
      if (lookahead == 'n') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(307);
      if (lookahead == 'p') ADVANCE(289);
      if (lookahead == 'r') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(194)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 195:
      if (eof) ADVANCE(196);
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\'') ADVANCE(330);
      if (lookahead == '(') ADVANCE(208);
      if (lookahead == '1') ADVANCE(321);
      if (lookahead == '2') ADVANCE(318);
      if (lookahead == '8') ADVANCE(319);
      if (lookahead == 'F') ADVANCE(282);
      if (lookahead == 'T') ADVANCE(286);
      if (lookahead == 'c') ADVANCE(306);
      if (lookahead == 'i') ADVANCE(302);
      if (lookahead == 'n') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(195)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_include);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_include_statement_token1);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '(') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(202);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_include_statement_token1);
      if (lookahead == '*') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(202);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_include_statement_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*') ADVANCE(249);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_bigInteger);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_rational);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_bigRational);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_complex);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_hash);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_bin64);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_bin32);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_bstring);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_time);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == 'S') ADVANCE(186);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_fileSys);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_process);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_category);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_reference);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_ref_list);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_program);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_ptr);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_varfunc);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_proc);
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_expr);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_NIL);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(202);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(202);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '\'') ADVANCE(330);
      if (lookahead == '(') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(251);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '(') ADVANCE(255);
      if (lookahead == '*') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(251);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == ')') ADVANCE(256);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '*') ADVANCE(249);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_STAR_RPAREN);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == ')') ADVANCE(256);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_parse);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_parse);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_rem);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_rem);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_div);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_mdiv);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_mdiv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_mod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'A') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'E') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'L') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'R') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'S') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'U') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'a') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'c') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'd') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'd') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'd') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'd') ADVANCE(299);
      if (lookahead == 'o') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'e') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'e') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'e') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'i') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'i') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'l') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'm') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'n') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'n') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'n') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'o') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'o') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'r') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'r') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 's') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 's') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 't') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 't') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'u') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'v') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'v') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_ord);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__decimalLiteral);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__decimalLiteral);
      if (lookahead == '#') ADVANCE(188);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__decimalLiteral);
      if (lookahead == '#') ADVANCE(191);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__decimalLiteral);
      if (lookahead == '6') ADVANCE(320);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__decimalLiteral);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__decimalLiteral);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__exponentialLiteral);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__negativeExponentialLiteral);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__hexLiteral);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__octalLiteral);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__binaryLiteral);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym__SLASH);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '/') ADVANCE(332);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '/') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 195},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 195},
  [6] = {.lex_state = 195},
  [7] = {.lex_state = 192},
  [8] = {.lex_state = 193},
  [9] = {.lex_state = 194},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 194},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 194},
  [14] = {.lex_state = 194},
  [15] = {.lex_state = 193},
  [16] = {.lex_state = 194},
  [17] = {.lex_state = 193},
  [18] = {.lex_state = 194},
  [19] = {.lex_state = 194},
  [20] = {.lex_state = 194},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 194},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 194},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 194},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 194},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 194},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 194},
  [33] = {.lex_state = 194},
  [34] = {.lex_state = 194},
  [35] = {.lex_state = 194},
  [36] = {.lex_state = 194},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 194},
  [40] = {.lex_state = 194},
  [41] = {.lex_state = 194},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 195},
  [44] = {.lex_state = 195},
  [45] = {.lex_state = 195},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 195},
  [48] = {.lex_state = 195},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 200},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 200},
  [105] = {.lex_state = 200},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {(TSStateId)(-1)},
  [114] = {(TSStateId)(-1)},
  [115] = {(TSStateId)(-1)},
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
    [anon_sym_NIL] = ACTIONS(1),
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
    [anon_sym_rem] = ACTIONS(1),
    [anon_sym_div] = ACTIONS(1),
    [anon_sym_mdiv] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_TRUE] = ACTIONS(1),
    [anon_sym_FALSE] = ACTIONS(1),
    [sym__decimalLiteral] = ACTIONS(1),
    [sym__exponentialLiteral] = ACTIONS(1),
    [sym__negativeExponentialLiteral] = ACTIONS(1),
    [sym__hexLiteral] = ACTIONS(1),
    [sym__octalLiteral] = ACTIONS(1),
    [sym__binaryLiteral] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym__SLASH] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(100),
    [sym__statement] = STATE(45),
    [sym_include_statement] = STATE(44),
    [sym_declaration] = STATE(44),
    [sym_function_call] = STATE(19),
    [sym_value] = STATE(78),
    [sym__expression] = STATE(18),
    [sym_line_comment] = STATE(1),
    [sym_block_comment] = STATE(1),
    [sym_binary_expression] = STATE(19),
    [sym_unary_expression] = STATE(19),
    [sym_parenthesized_expression] = STATE(19),
    [sym_unary_operator] = STATE(23),
    [sym_boolean] = STATE(64),
    [sym_name] = STATE(9),
    [sym_integer] = STATE(57),
    [sym_string] = STATE(64),
    [sym_float] = STATE(64),
    [sym_bigRational] = STATE(64),
    [sym_rational] = STATE(64),
    [sym_bigInteger] = STATE(64),
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
    [aux_sym_name_token1] = ACTIONS(21),
    [sym__decimalLiteral] = ACTIONS(23),
    [sym__exponentialLiteral] = ACTIONS(25),
    [sym__negativeExponentialLiteral] = ACTIONS(27),
    [sym__hexLiteral] = ACTIONS(29),
    [sym__octalLiteral] = ACTIONS(29),
    [sym__binaryLiteral] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(37), 1,
      anon_sym_ord,
    ACTIONS(35), 2,
      anon_sym_file,
      anon_sym_proc,
    STATE(2), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(35), 2,
      sym_type,
      sym_castFunction,
    ACTIONS(33), 34,
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
      anon_sym_NIL,
  [58] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(43), 1,
      anon_sym_ord,
    ACTIONS(41), 2,
      anon_sym_file,
      anon_sym_proc,
    STATE(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(53), 2,
      sym_type,
      sym_castFunction,
    ACTIONS(39), 34,
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
      anon_sym_NIL,
  [116] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(95), 1,
      sym_type,
    ACTIONS(35), 2,
      anon_sym_file,
      anon_sym_proc,
    STATE(4), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(33), 34,
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
      anon_sym_NIL,
  [170] = 25,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    ACTIONS(50), 1,
      anon_sym_include,
    ACTIONS(53), 1,
      anon_sym_const,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_not,
    ACTIONS(65), 1,
      aux_sym_name_token1,
    ACTIONS(68), 1,
      sym__decimalLiteral,
    ACTIONS(71), 1,
      sym__exponentialLiteral,
    ACTIONS(74), 1,
      sym__negativeExponentialLiteral,
    STATE(9), 1,
      sym_name,
    STATE(18), 1,
      sym__expression,
    STATE(23), 1,
      sym_unary_operator,
    STATE(45), 1,
      sym__statement,
    STATE(57), 1,
      sym_integer,
    STATE(78), 1,
      sym_value,
    ACTIONS(62), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(80), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(44), 2,
      sym_include_statement,
      sym_declaration,
    ACTIONS(77), 3,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
    STATE(5), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_source_file_repeat1,
    STATE(19), 4,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
    STATE(64), 6,
      sym_boolean,
      sym_string,
      sym_float,
      sym_bigRational,
      sym_rational,
      sym_bigInteger,
  [261] = 26,
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
      aux_sym_name_token1,
    ACTIONS(23), 1,
      sym__decimalLiteral,
    ACTIONS(25), 1,
      sym__exponentialLiteral,
    ACTIONS(27), 1,
      sym__negativeExponentialLiteral,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym_source_file_repeat1,
    STATE(9), 1,
      sym_name,
    STATE(18), 1,
      sym__expression,
    STATE(23), 1,
      sym_unary_operator,
    STATE(45), 1,
      sym__statement,
    STATE(57), 1,
      sym_integer,
    STATE(78), 1,
      sym_value,
    ACTIONS(19), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(31), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(6), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(44), 2,
      sym_include_statement,
      sym_declaration,
    ACTIONS(29), 3,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
    STATE(19), 4,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
    STATE(64), 6,
      sym_boolean,
      sym_string,
      sym_float,
      sym_bigRational,
      sym_rational,
      sym_bigInteger,
  [354] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(89), 1,
      anon_sym_SLASH,
    ACTIONS(91), 1,
      anon_sym_DOT,
    ACTIONS(93), 1,
      anon_sym__SLASH,
    STATE(7), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(85), 11,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      sym__exponentialLiteral,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(87), 17,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      aux_sym_name_token1,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
      anon_sym__,
  [406] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(91), 1,
      anon_sym_DOT,
    STATE(8), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(85), 12,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym__exponentialLiteral,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(87), 17,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      aux_sym_name_token1,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
      anon_sym__,
  [453] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    STATE(41), 1,
      sym_cast,
    STATE(9), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(95), 11,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym__exponentialLiteral,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(97), 15,
      anon_sym_include,
      anon_sym_const,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      aux_sym_name_token1,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
  [503] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(17), 1,
      anon_sym_not,
    ACTIONS(23), 1,
      sym__decimalLiteral,
    ACTIONS(25), 1,
      sym__exponentialLiteral,
    ACTIONS(27), 1,
      sym__negativeExponentialLiteral,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      aux_sym_name_token1,
    STATE(37), 1,
      sym_unary_operator,
    STATE(50), 1,
      sym_name,
    STATE(57), 1,
      sym_integer,
    STATE(110), 1,
      sym_argument_list,
    ACTIONS(19), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(31), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(10), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(60), 2,
      sym_value,
      sym__expression,
    ACTIONS(29), 3,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
    STATE(55), 4,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
    STATE(64), 6,
      sym_boolean,
      sym_string,
      sym_float,
      sym_bigRational,
      sym_rational,
      sym_bigInteger,
  [575] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    STATE(36), 1,
      sym_cast,
    STATE(11), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(107), 11,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym__exponentialLiteral,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(109), 16,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      aux_sym_name_token1,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
  [623] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(17), 1,
      anon_sym_not,
    ACTIONS(23), 1,
      sym__decimalLiteral,
    ACTIONS(25), 1,
      sym__exponentialLiteral,
    ACTIONS(27), 1,
      sym__negativeExponentialLiteral,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      aux_sym_name_token1,
    STATE(37), 1,
      sym_unary_operator,
    STATE(50), 1,
      sym_name,
    STATE(57), 1,
      sym_integer,
    STATE(99), 1,
      sym_argument_list,
    ACTIONS(19), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(31), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(12), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(60), 2,
      sym_value,
      sym__expression,
    ACTIONS(29), 3,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
    STATE(55), 4,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
    STATE(64), 6,
      sym_boolean,
      sym_string,
      sym_float,
      sym_bigRational,
      sym_rational,
      sym_bigInteger,
  [695] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(38), 1,
      sym_binary_operator,
    STATE(13), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(111), 12,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym__exponentialLiteral,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(113), 16,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      aux_sym_name_token1,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
  [741] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(38), 1,
      sym_binary_operator,
    STATE(14), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(115), 12,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym__exponentialLiteral,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(117), 16,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      aux_sym_name_token1,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
  [787] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(15), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(85), 12,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym__exponentialLiteral,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(87), 17,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      aux_sym_name_token1,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
      anon_sym__,
  [831] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(16), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(119), 13,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym__exponentialLiteral,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(121), 16,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      aux_sym_name_token1,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
  [875] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(127), 1,
      anon_sym__,
    STATE(17), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(123), 12,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym__exponentialLiteral,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(125), 16,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      aux_sym_name_token1,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
  [921] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(38), 1,
      sym_binary_operator,
    STATE(18), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(133), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(135), 7,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
    ACTIONS(129), 8,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym__exponentialLiteral,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(131), 9,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      aux_sym_name_token1,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
  [971] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    STATE(41), 1,
      sym_cast,
    STATE(19), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(95), 11,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym__exponentialLiteral,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(97), 16,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      aux_sym_name_token1,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
  [1019] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(20), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(137), 12,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym__exponentialLiteral,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(139), 16,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      aux_sym_name_token1,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
  [1062] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(17), 1,
      anon_sym_not,
    ACTIONS(23), 1,
      sym__decimalLiteral,
    ACTIONS(25), 1,
      sym__exponentialLiteral,
    ACTIONS(27), 1,
      sym__negativeExponentialLiteral,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      aux_sym_name_token1,
    STATE(37), 1,
      sym_unary_operator,
    STATE(50), 1,
      sym_name,
    STATE(57), 1,
      sym_integer,
    ACTIONS(19), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(31), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(21), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(74), 2,
      sym_value,
      sym__expression,
    ACTIONS(29), 3,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
    STATE(55), 4,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
    STATE(64), 6,
      sym_boolean,
      sym_string,
      sym_float,
      sym_bigRational,
      sym_rational,
      sym_bigInteger,
  [1131] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(22), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(141), 12,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym__exponentialLiteral,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(143), 16,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      aux_sym_name_token1,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
  [1174] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_not,
    ACTIONS(21), 1,
      aux_sym_name_token1,
    ACTIONS(147), 1,
      sym__decimalLiteral,
    ACTIONS(149), 1,
      sym__exponentialLiteral,
    ACTIONS(151), 1,
      sym__negativeExponentialLiteral,
    STATE(9), 1,
      sym_name,
    STATE(17), 1,
      sym_integer,
    ACTIONS(145), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(155), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(13), 2,
      sym_value,
      sym__expression,
    ACTIONS(153), 3,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
    STATE(23), 3,
      sym_line_comment,
      sym_block_comment,
      sym_unary_operator,
    STATE(19), 4,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
    STATE(34), 6,
      sym_boolean,
      sym_string,
      sym_float,
      sym_bigRational,
      sym_rational,
      sym_bigInteger,
  [1241] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(24), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(157), 12,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym__exponentialLiteral,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(159), 16,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      aux_sym_name_token1,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
  [1284] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(17), 1,
      anon_sym_not,
    ACTIONS(23), 1,
      sym__decimalLiteral,
    ACTIONS(25), 1,
      sym__exponentialLiteral,
    ACTIONS(27), 1,
      sym__negativeExponentialLiteral,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      aux_sym_name_token1,
    STATE(37), 1,
      sym_unary_operator,
    STATE(50), 1,
      sym_name,
    STATE(57), 1,
      sym_integer,
    ACTIONS(19), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(31), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(25), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(73), 2,
      sym_value,
      sym__expression,
    ACTIONS(29), 3,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
    STATE(55), 4,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
    STATE(64), 6,
      sym_boolean,
      sym_string,
      sym_float,
      sym_bigRational,
      sym_rational,
      sym_bigInteger,
  [1353] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(26), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(161), 12,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym__exponentialLiteral,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(163), 16,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      aux_sym_name_token1,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
  [1396] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(17), 1,
      anon_sym_not,
    ACTIONS(23), 1,
      sym__decimalLiteral,
    ACTIONS(25), 1,
      sym__exponentialLiteral,
    ACTIONS(27), 1,
      sym__negativeExponentialLiteral,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      aux_sym_name_token1,
    STATE(37), 1,
      sym_unary_operator,
    STATE(50), 1,
      sym_name,
    STATE(57), 1,
      sym_integer,
    ACTIONS(19), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(31), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(27), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(56), 2,
      sym_value,
      sym__expression,
    ACTIONS(29), 3,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
    STATE(55), 4,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
    STATE(64), 6,
      sym_boolean,
      sym_string,
      sym_float,
      sym_bigRational,
      sym_rational,
      sym_bigInteger,
  [1465] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(28), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(165), 12,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym__exponentialLiteral,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(167), 16,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      aux_sym_name_token1,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
  [1508] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(17), 1,
      anon_sym_not,
    ACTIONS(23), 1,
      sym__decimalLiteral,
    ACTIONS(25), 1,
      sym__exponentialLiteral,
    ACTIONS(27), 1,
      sym__negativeExponentialLiteral,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      aux_sym_name_token1,
    STATE(37), 1,
      sym_unary_operator,
    STATE(50), 1,
      sym_name,
    STATE(57), 1,
      sym_integer,
    ACTIONS(19), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(31), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(29), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(77), 2,
      sym_value,
      sym__expression,
    ACTIONS(29), 3,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
    STATE(55), 4,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
    STATE(64), 6,
      sym_boolean,
      sym_string,
      sym_float,
      sym_bigRational,
      sym_rational,
      sym_bigInteger,
  [1577] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(30), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(169), 12,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym__exponentialLiteral,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(171), 16,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      aux_sym_name_token1,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
  [1620] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(17), 1,
      anon_sym_not,
    ACTIONS(23), 1,
      sym__decimalLiteral,
    ACTIONS(25), 1,
      sym__exponentialLiteral,
    ACTIONS(27), 1,
      sym__negativeExponentialLiteral,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      aux_sym_name_token1,
    STATE(37), 1,
      sym_unary_operator,
    STATE(50), 1,
      sym_name,
    STATE(57), 1,
      sym_integer,
    ACTIONS(19), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(31), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(31), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(62), 2,
      sym_value,
      sym__expression,
    ACTIONS(29), 3,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
    STATE(55), 4,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
    STATE(64), 6,
      sym_boolean,
      sym_string,
      sym_float,
      sym_bigRational,
      sym_rational,
      sym_bigInteger,
  [1689] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(32), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(173), 12,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym__exponentialLiteral,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(175), 16,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      aux_sym_name_token1,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
  [1732] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(33), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(177), 12,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym__exponentialLiteral,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(179), 16,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      aux_sym_name_token1,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
  [1775] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(34), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(123), 12,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym__exponentialLiteral,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(125), 16,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      aux_sym_name_token1,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
  [1818] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(35), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(181), 12,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym__exponentialLiteral,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(183), 16,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      aux_sym_name_token1,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
  [1861] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(36), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(185), 12,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym__exponentialLiteral,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(187), 16,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      aux_sym_name_token1,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
  [1904] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(17), 1,
      anon_sym_not,
    ACTIONS(23), 1,
      sym__decimalLiteral,
    ACTIONS(25), 1,
      sym__exponentialLiteral,
    ACTIONS(27), 1,
      sym__negativeExponentialLiteral,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      aux_sym_name_token1,
    STATE(50), 1,
      sym_name,
    STATE(57), 1,
      sym_integer,
    ACTIONS(19), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(31), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(58), 2,
      sym_value,
      sym__expression,
    ACTIONS(29), 3,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
    STATE(37), 3,
      sym_line_comment,
      sym_block_comment,
      sym_unary_operator,
    STATE(55), 4,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
    STATE(64), 6,
      sym_boolean,
      sym_string,
      sym_float,
      sym_bigRational,
      sym_rational,
      sym_bigInteger,
  [1971] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_not,
    ACTIONS(21), 1,
      aux_sym_name_token1,
    ACTIONS(147), 1,
      sym__decimalLiteral,
    ACTIONS(149), 1,
      sym__exponentialLiteral,
    ACTIONS(151), 1,
      sym__negativeExponentialLiteral,
    STATE(9), 1,
      sym_name,
    STATE(17), 1,
      sym_integer,
    STATE(23), 1,
      sym_unary_operator,
    ACTIONS(145), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(155), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(14), 2,
      sym_value,
      sym__expression,
    STATE(38), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(153), 3,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
    STATE(19), 4,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_parenthesized_expression,
    STATE(34), 6,
      sym_boolean,
      sym_string,
      sym_float,
      sym_bigRational,
      sym_rational,
      sym_bigInteger,
  [2040] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(39), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(189), 12,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym__exponentialLiteral,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(191), 16,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      aux_sym_name_token1,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
  [2083] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(40), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(193), 12,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym__exponentialLiteral,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(195), 16,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      aux_sym_name_token1,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
  [2126] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(41), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(197), 12,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym__exponentialLiteral,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(199), 16,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      aux_sym_name_token1,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
  [2169] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_PLUS,
    STATE(52), 1,
      sym_cast,
    STATE(42), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(107), 14,
      anon_sym_SEMI,
      anon_sym_is,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
  [2205] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(43), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(203), 8,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym__exponentialLiteral,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(205), 9,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      aux_sym_name_token1,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
  [2237] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(44), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(129), 8,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym__exponentialLiteral,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(131), 9,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      aux_sym_name_token1,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
  [2269] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(45), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(207), 8,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym__exponentialLiteral,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(209), 9,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      aux_sym_name_token1,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
  [2301] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(87), 1,
      anon_sym__,
    ACTIONS(211), 1,
      anon_sym_SLASH,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(215), 1,
      anon_sym__SLASH,
    STATE(46), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(85), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
  [2339] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(47), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(217), 8,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym__exponentialLiteral,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(219), 9,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      aux_sym_name_token1,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
  [2371] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(48), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(221), 8,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym__exponentialLiteral,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(223), 9,
      anon_sym_include,
      anon_sym_const,
      anon_sym_LPAREN,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      aux_sym_name_token1,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
  [2403] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    STATE(49), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(189), 15,
      anon_sym_SEMI,
      anon_sym_is,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
  [2434] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(201), 1,
      anon_sym_PLUS,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_cast,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(95), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
  [2469] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    STATE(51), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(119), 15,
      anon_sym_SEMI,
      anon_sym_is,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
  [2500] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    STATE(52), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(185), 15,
      anon_sym_SEMI,
      anon_sym_is,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
  [2531] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    STATE(53), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(181), 15,
      anon_sym_SEMI,
      anon_sym_is,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
  [2562] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(213), 1,
      anon_sym_DOT,
    STATE(54), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(85), 15,
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
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym__,
  [2593] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(201), 1,
      anon_sym_PLUS,
    STATE(63), 1,
      sym_cast,
    STATE(55), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(95), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
  [2625] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(27), 1,
      sym_binary_operator,
    STATE(56), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(115), 14,
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
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
  [2655] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(227), 1,
      anon_sym__,
    STATE(57), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(123), 14,
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
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
  [2685] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(27), 1,
      sym_binary_operator,
    STATE(58), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(111), 14,
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
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
  [2715] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(59), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(85), 15,
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
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym__,
  [2743] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      sym_binary_operator,
    STATE(90), 1,
      aux_sym_argument_list_repeat1,
    STATE(60), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(133), 11,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
  [2779] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(61), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(177), 14,
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
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
  [2806] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(27), 1,
      sym_binary_operator,
    ACTIONS(233), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(62), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(133), 11,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
  [2837] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(63), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(197), 14,
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
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
  [2864] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(64), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(123), 14,
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
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
  [2891] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(65), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(169), 14,
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
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
  [2918] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(66), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(137), 14,
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
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
  [2945] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(67), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(193), 14,
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
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
  [2972] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(68), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(161), 14,
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
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
  [2999] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(69), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(141), 14,
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
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
  [3026] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(70), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(173), 14,
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
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
  [3053] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(71), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(157), 14,
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
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
  [3080] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(72), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(165), 14,
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
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
  [3107] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(235), 1,
      anon_sym_SEMI,
    STATE(27), 1,
      sym_binary_operator,
    STATE(73), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(133), 11,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
  [3137] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      sym_binary_operator,
    STATE(74), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(133), 11,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
  [3167] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(75), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(241), 6,
      sym__exponentialLiteral,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(239), 7,
      anon_sym_LPAREN,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      aux_sym_name_token1,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
  [3195] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(76), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(245), 6,
      sym__exponentialLiteral,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(243), 7,
      anon_sym_LPAREN,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      aux_sym_name_token1,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
  [3223] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      sym_binary_operator,
    STATE(77), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(133), 11,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
  [3253] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(38), 1,
      sym_binary_operator,
    STATE(78), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(133), 11,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
  [3280] = 6,
    ACTIONS(249), 1,
      anon_sym_POUND,
    ACTIONS(251), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(253), 1,
      aux_sym_block_comment_token1,
    STATE(80), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(255), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(79), 2,
      sym_line_comment,
      sym_block_comment,
  [3301] = 6,
    ACTIONS(249), 1,
      anon_sym_POUND,
    ACTIONS(251), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(253), 1,
      aux_sym_block_comment_token1,
    STATE(82), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(257), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(80), 2,
      sym_line_comment,
      sym_block_comment,
  [3322] = 6,
    ACTIONS(249), 1,
      anon_sym_POUND,
    ACTIONS(251), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(253), 1,
      aux_sym_block_comment_token1,
    STATE(83), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(259), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(81), 2,
      sym_line_comment,
      sym_block_comment,
  [3343] = 5,
    ACTIONS(249), 1,
      anon_sym_POUND,
    ACTIONS(251), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(261), 1,
      aux_sym_block_comment_token1,
    ACTIONS(264), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(82), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [3362] = 6,
    ACTIONS(249), 1,
      anon_sym_POUND,
    ACTIONS(251), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(253), 1,
      aux_sym_block_comment_token1,
    STATE(82), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(266), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(83), 2,
      sym_line_comment,
      sym_block_comment,
  [3383] = 5,
    ACTIONS(249), 1,
      anon_sym_POUND,
    ACTIONS(251), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(264), 1,
      anon_sym_STAR_RPAREN,
    ACTIONS(268), 1,
      aux_sym_block_comment_token1,
    STATE(84), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [3401] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    STATE(85), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_argument_list_repeat1,
  [3419] = 4,
    ACTIONS(249), 1,
      anon_sym_POUND,
    ACTIONS(251), 1,
      anon_sym_LPAREN_STAR,
    STATE(86), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(274), 3,
      aux_sym_block_comment_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3435] = 6,
    ACTIONS(249), 1,
      anon_sym_POUND,
    ACTIONS(251), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(276), 1,
      aux_sym_block_comment_token1,
    ACTIONS(278), 1,
      anon_sym_STAR_RPAREN,
    STATE(89), 1,
      aux_sym_block_comment_repeat1,
    STATE(87), 2,
      sym_line_comment,
      sym_block_comment,
  [3455] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(282), 1,
      sym__exponentialLiteral,
    ACTIONS(280), 2,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
    STATE(88), 2,
      sym_line_comment,
      sym_block_comment,
  [3473] = 6,
    ACTIONS(249), 1,
      anon_sym_POUND,
    ACTIONS(251), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(276), 1,
      aux_sym_block_comment_token1,
    ACTIONS(284), 1,
      anon_sym_STAR_RPAREN,
    STATE(84), 1,
      aux_sym_block_comment_repeat1,
    STATE(89), 2,
      sym_line_comment,
      sym_block_comment,
  [3493] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym_argument_list_repeat1,
    STATE(90), 2,
      sym_line_comment,
      sym_block_comment,
  [3513] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(290), 1,
      sym__exponentialLiteral,
    ACTIONS(288), 2,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
    STATE(91), 2,
      sym_line_comment,
      sym_block_comment,
  [3531] = 4,
    ACTIONS(249), 1,
      anon_sym_POUND,
    ACTIONS(251), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(274), 2,
      aux_sym_block_comment_token1,
      anon_sym_STAR_RPAREN,
    STATE(92), 2,
      sym_line_comment,
      sym_block_comment,
  [3546] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(292), 1,
      aux_sym_name_token1,
    STATE(106), 1,
      sym_name,
    STATE(93), 2,
      sym_line_comment,
      sym_block_comment,
  [3563] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(294), 1,
      sym__decimalLiteral,
    STATE(94), 2,
      sym_line_comment,
      sym_block_comment,
  [3577] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(296), 1,
      anon_sym_COLON,
    STATE(95), 2,
      sym_line_comment,
      sym_block_comment,
  [3591] = 4,
    ACTIONS(249), 1,
      anon_sym_POUND,
    ACTIONS(251), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(298), 1,
      aux_sym_include_statement_token1,
    STATE(96), 2,
      sym_line_comment,
      sym_block_comment,
  [3605] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(300), 1,
      sym__decimalLiteral,
    STATE(97), 2,
      sym_line_comment,
      sym_block_comment,
  [3619] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(302), 1,
      sym__decimalLiteral,
    STATE(98), 2,
      sym_line_comment,
      sym_block_comment,
  [3633] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
    STATE(99), 2,
      sym_line_comment,
      sym_block_comment,
  [3647] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(306), 1,
      ts_builtin_sym_end,
    STATE(100), 2,
      sym_line_comment,
      sym_block_comment,
  [3661] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(213), 1,
      anon_sym_DOT,
    STATE(101), 2,
      sym_line_comment,
      sym_block_comment,
  [3675] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(308), 1,
      anon_sym_SEMI,
    STATE(102), 2,
      sym_line_comment,
      sym_block_comment,
  [3689] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    STATE(103), 2,
      sym_line_comment,
      sym_block_comment,
  [3703] = 4,
    ACTIONS(249), 1,
      anon_sym_POUND,
    ACTIONS(251), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(312), 1,
      aux_sym_include_statement_token1,
    STATE(104), 2,
      sym_line_comment,
      sym_block_comment,
  [3717] = 4,
    ACTIONS(249), 1,
      anon_sym_POUND,
    ACTIONS(251), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(314), 1,
      aux_sym_include_statement_token1,
    STATE(105), 2,
      sym_line_comment,
      sym_block_comment,
  [3731] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(316), 1,
      anon_sym_is,
    STATE(106), 2,
      sym_line_comment,
      sym_block_comment,
  [3745] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(318), 1,
      sym__decimalLiteral,
    STATE(107), 2,
      sym_line_comment,
      sym_block_comment,
  [3759] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(320), 1,
      anon_sym__,
    STATE(108), 2,
      sym_line_comment,
      sym_block_comment,
  [3773] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(322), 1,
      anon_sym__,
    STATE(109), 2,
      sym_line_comment,
      sym_block_comment,
  [3787] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    STATE(110), 2,
      sym_line_comment,
      sym_block_comment,
  [3801] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(326), 1,
      anon_sym_include,
    STATE(111), 2,
      sym_line_comment,
      sym_block_comment,
  [3815] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(91), 1,
      anon_sym_DOT,
    STATE(112), 2,
      sym_line_comment,
      sym_block_comment,
  [3829] = 1,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
  [3833] = 1,
    ACTIONS(330), 1,
      ts_builtin_sym_end,
  [3837] = 1,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 58,
  [SMALL_STATE(4)] = 116,
  [SMALL_STATE(5)] = 170,
  [SMALL_STATE(6)] = 261,
  [SMALL_STATE(7)] = 354,
  [SMALL_STATE(8)] = 406,
  [SMALL_STATE(9)] = 453,
  [SMALL_STATE(10)] = 503,
  [SMALL_STATE(11)] = 575,
  [SMALL_STATE(12)] = 623,
  [SMALL_STATE(13)] = 695,
  [SMALL_STATE(14)] = 741,
  [SMALL_STATE(15)] = 787,
  [SMALL_STATE(16)] = 831,
  [SMALL_STATE(17)] = 875,
  [SMALL_STATE(18)] = 921,
  [SMALL_STATE(19)] = 971,
  [SMALL_STATE(20)] = 1019,
  [SMALL_STATE(21)] = 1062,
  [SMALL_STATE(22)] = 1131,
  [SMALL_STATE(23)] = 1174,
  [SMALL_STATE(24)] = 1241,
  [SMALL_STATE(25)] = 1284,
  [SMALL_STATE(26)] = 1353,
  [SMALL_STATE(27)] = 1396,
  [SMALL_STATE(28)] = 1465,
  [SMALL_STATE(29)] = 1508,
  [SMALL_STATE(30)] = 1577,
  [SMALL_STATE(31)] = 1620,
  [SMALL_STATE(32)] = 1689,
  [SMALL_STATE(33)] = 1732,
  [SMALL_STATE(34)] = 1775,
  [SMALL_STATE(35)] = 1818,
  [SMALL_STATE(36)] = 1861,
  [SMALL_STATE(37)] = 1904,
  [SMALL_STATE(38)] = 1971,
  [SMALL_STATE(39)] = 2040,
  [SMALL_STATE(40)] = 2083,
  [SMALL_STATE(41)] = 2126,
  [SMALL_STATE(42)] = 2169,
  [SMALL_STATE(43)] = 2205,
  [SMALL_STATE(44)] = 2237,
  [SMALL_STATE(45)] = 2269,
  [SMALL_STATE(46)] = 2301,
  [SMALL_STATE(47)] = 2339,
  [SMALL_STATE(48)] = 2371,
  [SMALL_STATE(49)] = 2403,
  [SMALL_STATE(50)] = 2434,
  [SMALL_STATE(51)] = 2469,
  [SMALL_STATE(52)] = 2500,
  [SMALL_STATE(53)] = 2531,
  [SMALL_STATE(54)] = 2562,
  [SMALL_STATE(55)] = 2593,
  [SMALL_STATE(56)] = 2625,
  [SMALL_STATE(57)] = 2655,
  [SMALL_STATE(58)] = 2685,
  [SMALL_STATE(59)] = 2715,
  [SMALL_STATE(60)] = 2743,
  [SMALL_STATE(61)] = 2779,
  [SMALL_STATE(62)] = 2806,
  [SMALL_STATE(63)] = 2837,
  [SMALL_STATE(64)] = 2864,
  [SMALL_STATE(65)] = 2891,
  [SMALL_STATE(66)] = 2918,
  [SMALL_STATE(67)] = 2945,
  [SMALL_STATE(68)] = 2972,
  [SMALL_STATE(69)] = 2999,
  [SMALL_STATE(70)] = 3026,
  [SMALL_STATE(71)] = 3053,
  [SMALL_STATE(72)] = 3080,
  [SMALL_STATE(73)] = 3107,
  [SMALL_STATE(74)] = 3137,
  [SMALL_STATE(75)] = 3167,
  [SMALL_STATE(76)] = 3195,
  [SMALL_STATE(77)] = 3223,
  [SMALL_STATE(78)] = 3253,
  [SMALL_STATE(79)] = 3280,
  [SMALL_STATE(80)] = 3301,
  [SMALL_STATE(81)] = 3322,
  [SMALL_STATE(82)] = 3343,
  [SMALL_STATE(83)] = 3362,
  [SMALL_STATE(84)] = 3383,
  [SMALL_STATE(85)] = 3401,
  [SMALL_STATE(86)] = 3419,
  [SMALL_STATE(87)] = 3435,
  [SMALL_STATE(88)] = 3455,
  [SMALL_STATE(89)] = 3473,
  [SMALL_STATE(90)] = 3493,
  [SMALL_STATE(91)] = 3513,
  [SMALL_STATE(92)] = 3531,
  [SMALL_STATE(93)] = 3546,
  [SMALL_STATE(94)] = 3563,
  [SMALL_STATE(95)] = 3577,
  [SMALL_STATE(96)] = 3591,
  [SMALL_STATE(97)] = 3605,
  [SMALL_STATE(98)] = 3619,
  [SMALL_STATE(99)] = 3633,
  [SMALL_STATE(100)] = 3647,
  [SMALL_STATE(101)] = 3661,
  [SMALL_STATE(102)] = 3675,
  [SMALL_STATE(103)] = 3689,
  [SMALL_STATE(104)] = 3703,
  [SMALL_STATE(105)] = 3717,
  [SMALL_STATE(106)] = 3731,
  [SMALL_STATE(107)] = 3745,
  [SMALL_STATE(108)] = 3759,
  [SMALL_STATE(109)] = 3773,
  [SMALL_STATE(110)] = 3787,
  [SMALL_STATE(111)] = 3801,
  [SMALL_STATE(112)] = 3815,
  [SMALL_STATE(113)] = 3829,
  [SMALL_STATE(114)] = 3833,
  [SMALL_STATE(115)] = 3837,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(111),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(104),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(101),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigInteger, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bigInteger, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rational, 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rational, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_castFunction, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_castFunction, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigRational, 4),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bigRational, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 4),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 7),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 7),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operator, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(86),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(92),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(31),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 1),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [306] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2),
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
