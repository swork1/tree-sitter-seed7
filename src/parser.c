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
#define STATE_COUNT 232
#define LARGE_STATE_COUNT 61
#define SYMBOL_COUNT 148
#define ALIAS_COUNT 0
#define TOKEN_COUNT 104
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_DOLLAR = 1,
  anon_sym_include = 2,
  aux_sym_include_statement_token1 = 3,
  anon_sym_SEMI = 4,
  anon_sym_const = 5,
  anon_sym_var = 6,
  anon_sym_COLON = 7,
  anon_sym_is = 8,
  anon_sym_func = 9,
  anon_sym_return = 10,
  anon_sym_LPAREN = 11,
  anon_sym_COMMA = 12,
  anon_sym_RPAREN = 13,
  anon_sym_attr = 14,
  anon_sym_val = 15,
  anon_sym_ref = 16,
  anon_sym_in = 17,
  anon_sym_invar = 18,
  anon_sym_inout = 19,
  anon_sym_array = 20,
  anon_sym_boolean = 21,
  anon_sym_integer = 22,
  anon_sym_bigInteger = 23,
  anon_sym_rational = 24,
  anon_sym_bigRational = 25,
  anon_sym_float = 26,
  anon_sym_complex = 27,
  anon_sym_char = 28,
  anon_sym_string = 29,
  anon_sym_hash = 30,
  anon_sym_set = 31,
  anon_sym_struct = 32,
  anon_sym_bin64 = 33,
  anon_sym_bin32 = 34,
  anon_sym_bstring = 35,
  anon_sym_color = 36,
  anon_sym_time = 37,
  anon_sym_duration = 38,
  anon_sym_file = 39,
  anon_sym_text = 40,
  anon_sym_fileSys = 41,
  anon_sym_process = 42,
  anon_sym_category = 43,
  anon_sym_reference = 44,
  anon_sym_ref_list = 45,
  anon_sym_program = 46,
  anon_sym_ptr = 47,
  anon_sym_varfunc = 48,
  anon_sym_void = 49,
  anon_sym_proc = 50,
  anon_sym_type = 51,
  anon_sym_object = 52,
  anon_sym_expr = 53,
  anon_sym_bitset = 54,
  sym_NIL = 55,
  sym_empty = 56,
  sym_STD_NULL = 57,
  sym_forward = 58,
  anon_sym_POUND = 59,
  anon_sym_LPAREN_STAR = 60,
  aux_sym_block_comment_token1 = 61,
  anon_sym_STAR_RPAREN = 62,
  anon_sym_DOT = 63,
  anon_sym_LBRACE = 64,
  anon_sym_RBRACE = 65,
  anon_sym_setof = 66,
  anon_sym_LBRACK = 67,
  anon_sym_RBRACK = 68,
  anon_sym_newenum = 69,
  anon_sym_endenum = 70,
  anon_sym_new = 71,
  anon_sym_sub = 72,
  anon_sym_endstruct = 73,
  anon_sym_PLUS = 74,
  anon_sym_DASH = 75,
  anon_sym_STAR = 76,
  anon_sym_SLASH = 77,
  anon_sym_and = 78,
  anon_sym_or = 79,
  anon_sym_parse = 80,
  anon_sym_rem = 81,
  anon_sym_div = 82,
  anon_sym_mdiv = 83,
  anon_sym_mod = 84,
  anon_sym_times = 85,
  anon_sym_DOT_DOT = 86,
  anon_sym_STAR_STAR = 87,
  anon_sym_not = 88,
  anon_sym_TRUE = 89,
  anon_sym_FALSE = 90,
  sym_variable = 91,
  anon_sym_ord = 92,
  sym__decimalLiteral = 93,
  sym__exponentialLiteral = 94,
  sym__negativeExponentialLiteral = 95,
  sym__hexLiteral = 96,
  sym__octalLiteral = 97,
  sym__binaryLiteral = 98,
  anon_sym_DQUOTE = 99,
  anon_sym__SLASH = 100,
  anon_sym__ = 101,
  anon_sym_SQUOTE = 102,
  anon_sym_BSLASH = 103,
  sym_source_file = 104,
  sym__statement = 105,
  sym_include_statement = 106,
  sym_declaration = 107,
  sym_func_declaration = 108,
  sym_return_statement = 109,
  sym_parameter_list = 110,
  sym_attr_param = 111,
  sym_param = 112,
  sym_function_call = 113,
  sym_argument_list = 114,
  sym_type = 115,
  sym_value = 116,
  sym__expression = 117,
  sym_line_comment = 118,
  sym_block_comment = 119,
  sym_binary_expression = 120,
  sym_unary_expression = 121,
  sym_value_operator = 122,
  sym_parenthesized_expression = 123,
  sym_set_expression = 124,
  sym_hash_expression = 125,
  sym_enum_expression = 126,
  sym_struct_expression = 127,
  sym_binary_operator = 128,
  sym_unary_operator = 129,
  sym_boolean = 130,
  sym_name = 131,
  sym_integer = 132,
  sym_cast = 133,
  sym_castFunction = 134,
  sym_string = 135,
  sym_float = 136,
  sym_bigRational = 137,
  sym_rational = 138,
  sym_bigInteger = 139,
  sym_char = 140,
  sym_escape_sequence = 141,
  aux_sym_source_file_repeat1 = 142,
  aux_sym_parameter_list_repeat1 = 143,
  aux_sym_argument_list_repeat1 = 144,
  aux_sym_block_comment_repeat1 = 145,
  aux_sym_enum_expression_repeat1 = 146,
  aux_sym_struct_expression_repeat1 = 147,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_include] = "include",
  [aux_sym_include_statement_token1] = "include_statement_token1",
  [anon_sym_SEMI] = ";",
  [anon_sym_const] = "const",
  [anon_sym_var] = "var",
  [anon_sym_COLON] = ":",
  [anon_sym_is] = "is",
  [anon_sym_func] = "func",
  [anon_sym_return] = "return",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_attr] = "attr",
  [anon_sym_val] = "val",
  [anon_sym_ref] = "ref",
  [anon_sym_in] = "in",
  [anon_sym_invar] = "in var",
  [anon_sym_inout] = "inout",
  [anon_sym_array] = "array",
  [anon_sym_boolean] = "boolean",
  [anon_sym_integer] = "integer",
  [anon_sym_bigInteger] = "bigInteger",
  [anon_sym_rational] = "rational",
  [anon_sym_bigRational] = "bigRational",
  [anon_sym_float] = "float",
  [anon_sym_complex] = "complex",
  [anon_sym_char] = "char",
  [anon_sym_string] = "string",
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
  [anon_sym_varfunc] = "varfunc",
  [anon_sym_void] = "void",
  [anon_sym_proc] = "proc",
  [anon_sym_type] = "type",
  [anon_sym_object] = "object",
  [anon_sym_expr] = "expr",
  [anon_sym_bitset] = "bitset",
  [sym_NIL] = "NIL",
  [sym_empty] = "empty",
  [sym_STD_NULL] = "STD_NULL",
  [sym_forward] = "forward",
  [anon_sym_POUND] = "#",
  [anon_sym_LPAREN_STAR] = "(*",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [anon_sym_STAR_RPAREN] = "*)",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_setof] = "set of",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_newenum] = "new enum",
  [anon_sym_endenum] = "end enum",
  [anon_sym_new] = "new",
  [anon_sym_sub] = "sub",
  [anon_sym_endstruct] = "end struct",
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
  [anon_sym_times] = "times",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_not] = "not",
  [anon_sym_TRUE] = "TRUE",
  [anon_sym_FALSE] = "FALSE",
  [sym_variable] = "variable",
  [anon_sym_ord] = "ord",
  [sym__decimalLiteral] = "_decimalLiteral",
  [sym__exponentialLiteral] = "_exponentialLiteral",
  [sym__negativeExponentialLiteral] = "_negativeExponentialLiteral",
  [sym__hexLiteral] = "_hexLiteral",
  [sym__octalLiteral] = "_octalLiteral",
  [sym__binaryLiteral] = "_binaryLiteral",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym__SLASH] = "_/",
  [anon_sym__] = "_",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BSLASH] = "\\",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_include_statement] = "include_statement",
  [sym_declaration] = "declaration",
  [sym_func_declaration] = "func_declaration",
  [sym_return_statement] = "return_statement",
  [sym_parameter_list] = "parameter_list",
  [sym_attr_param] = "attr_param",
  [sym_param] = "param",
  [sym_function_call] = "function_call",
  [sym_argument_list] = "argument_list",
  [sym_type] = "type",
  [sym_value] = "value",
  [sym__expression] = "_expression",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_binary_expression] = "binary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_value_operator] = "value_operator",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_set_expression] = "set_expression",
  [sym_hash_expression] = "hash_expression",
  [sym_enum_expression] = "enum_expression",
  [sym_struct_expression] = "struct_expression",
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
  [sym_char] = "char",
  [sym_escape_sequence] = "escape_sequence",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_block_comment_repeat1] = "block_comment_repeat1",
  [aux_sym_enum_expression_repeat1] = "enum_expression_repeat1",
  [aux_sym_struct_expression_repeat1] = "struct_expression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_include] = anon_sym_include,
  [aux_sym_include_statement_token1] = aux_sym_include_statement_token1,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_attr] = anon_sym_attr,
  [anon_sym_val] = anon_sym_val,
  [anon_sym_ref] = anon_sym_ref,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_invar] = anon_sym_invar,
  [anon_sym_inout] = anon_sym_inout,
  [anon_sym_array] = anon_sym_array,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_integer] = anon_sym_integer,
  [anon_sym_bigInteger] = anon_sym_bigInteger,
  [anon_sym_rational] = anon_sym_rational,
  [anon_sym_bigRational] = anon_sym_bigRational,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_complex] = anon_sym_complex,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_string] = anon_sym_string,
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
  [anon_sym_varfunc] = anon_sym_varfunc,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_proc] = anon_sym_proc,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_object] = anon_sym_object,
  [anon_sym_expr] = anon_sym_expr,
  [anon_sym_bitset] = anon_sym_bitset,
  [sym_NIL] = sym_NIL,
  [sym_empty] = sym_empty,
  [sym_STD_NULL] = sym_STD_NULL,
  [sym_forward] = sym_forward,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LPAREN_STAR] = anon_sym_LPAREN_STAR,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [anon_sym_STAR_RPAREN] = anon_sym_STAR_RPAREN,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_setof] = anon_sym_setof,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_newenum] = anon_sym_newenum,
  [anon_sym_endenum] = anon_sym_endenum,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_endstruct] = anon_sym_endstruct,
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
  [anon_sym_times] = anon_sym_times,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_TRUE] = anon_sym_TRUE,
  [anon_sym_FALSE] = anon_sym_FALSE,
  [sym_variable] = sym_variable,
  [anon_sym_ord] = anon_sym_ord,
  [sym__decimalLiteral] = sym__decimalLiteral,
  [sym__exponentialLiteral] = sym__exponentialLiteral,
  [sym__negativeExponentialLiteral] = sym__negativeExponentialLiteral,
  [sym__hexLiteral] = sym__hexLiteral,
  [sym__octalLiteral] = sym__octalLiteral,
  [sym__binaryLiteral] = sym__binaryLiteral,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym__SLASH] = anon_sym__SLASH,
  [anon_sym__] = anon_sym__,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_include_statement] = sym_include_statement,
  [sym_declaration] = sym_declaration,
  [sym_func_declaration] = sym_func_declaration,
  [sym_return_statement] = sym_return_statement,
  [sym_parameter_list] = sym_parameter_list,
  [sym_attr_param] = sym_attr_param,
  [sym_param] = sym_param,
  [sym_function_call] = sym_function_call,
  [sym_argument_list] = sym_argument_list,
  [sym_type] = sym_type,
  [sym_value] = sym_value,
  [sym__expression] = sym__expression,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_binary_expression] = sym_binary_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_value_operator] = sym_value_operator,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_set_expression] = sym_set_expression,
  [sym_hash_expression] = sym_hash_expression,
  [sym_enum_expression] = sym_enum_expression,
  [sym_struct_expression] = sym_struct_expression,
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
  [sym_char] = sym_char,
  [sym_escape_sequence] = sym_escape_sequence,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_block_comment_repeat1] = aux_sym_block_comment_repeat1,
  [aux_sym_enum_expression_repeat1] = aux_sym_enum_expression_repeat1,
  [aux_sym_struct_expression_repeat1] = aux_sym_struct_expression_repeat1,
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
  [anon_sym_var] = {
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
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_attr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_val] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_array] = {
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
  [anon_sym_bitset] = {
    .visible = true,
    .named = false,
  },
  [sym_NIL] = {
    .visible = true,
    .named = true,
  },
  [sym_empty] = {
    .visible = true,
    .named = true,
  },
  [sym_STD_NULL] = {
    .visible = true,
    .named = true,
  },
  [sym_forward] = {
    .visible = true,
    .named = true,
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_newenum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endenum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endstruct] = {
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
  [anon_sym_times] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
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
  [sym_variable] = {
    .visible = true,
    .named = true,
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
  [anon_sym__SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
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
  [sym_func_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_param] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
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
  [sym_value_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_set_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_hash_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_expression] = {
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
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
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
  [aux_sym_enum_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_argument = 1,
  field_array = 2,
  field_left = 3,
  field_operator = 4,
  field_right = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_array] = "array",
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_array, 0},
    {field_array, 1},
  [2] =
    {field_argument, 1},
    {field_operator, 0},
  [4] =
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
  [8] = 5,
  [9] = 9,
  [10] = 10,
  [11] = 10,
  [12] = 9,
  [13] = 13,
  [14] = 14,
  [15] = 14,
  [16] = 16,
  [17] = 16,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 20,
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
  [36] = 36,
  [37] = 37,
  [38] = 38,
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
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
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
  [64] = 63,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 67,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 70,
  [75] = 69,
  [76] = 76,
  [77] = 77,
  [78] = 66,
  [79] = 76,
  [80] = 77,
  [81] = 81,
  [82] = 6,
  [83] = 4,
  [84] = 13,
  [85] = 18,
  [86] = 25,
  [87] = 26,
  [88] = 23,
  [89] = 24,
  [90] = 31,
  [91] = 34,
  [92] = 33,
  [93] = 27,
  [94] = 43,
  [95] = 54,
  [96] = 46,
  [97] = 45,
  [98] = 37,
  [99] = 30,
  [100] = 29,
  [101] = 28,
  [102] = 53,
  [103] = 52,
  [104] = 50,
  [105] = 42,
  [106] = 35,
  [107] = 51,
  [108] = 108,
  [109] = 39,
  [110] = 49,
  [111] = 38,
  [112] = 48,
  [113] = 113,
  [114] = 44,
  [115] = 41,
  [116] = 36,
  [117] = 117,
  [118] = 113,
  [119] = 40,
  [120] = 47,
  [121] = 121,
  [122] = 121,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 123,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 132,
  [139] = 136,
  [140] = 137,
  [141] = 131,
  [142] = 135,
  [143] = 143,
  [144] = 143,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 150,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 59,
  [163] = 163,
  [164] = 154,
  [165] = 165,
  [166] = 146,
  [167] = 153,
  [168] = 152,
  [169] = 158,
  [170] = 170,
  [171] = 151,
  [172] = 161,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 175,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 174,
  [187] = 187,
  [188] = 173,
  [189] = 189,
  [190] = 189,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 194,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 202,
  [207] = 203,
  [208] = 208,
  [209] = 209,
  [210] = 199,
  [211] = 211,
  [212] = 209,
  [213] = 205,
  [214] = 214,
  [215] = 214,
  [216] = 216,
  [217] = 216,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 211,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 193,
  [228] = 200,
  [229] = 229,
  [230] = 230,
  [231] = 231,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(272);
      if (lookahead == '"') ADVANCE(668);
      if (lookahead == '#') ADVANCE(382);
      if (lookahead == '$') ADVANCE(273);
      if (lookahead == '\'') ADVANCE(674);
      if (lookahead == '(') ADVANCE(291);
      if (lookahead == ')') ADVANCE(293);
      if (lookahead == '*') ADVANCE(422);
      if (lookahead == '+') ADVANCE(420);
      if (lookahead == ',') ADVANCE(292);
      if (lookahead == '-') ADVANCE(421);
      if (lookahead == '.') ADVANCE(406);
      if (lookahead == '/') ADVANCE(424);
      if (lookahead == '1') ADVANCE(658);
      if (lookahead == '2') ADVANCE(652);
      if (lookahead == '8') ADVANCE(654);
      if (lookahead == ':') ADVANCE(285);
      if (lookahead == ';') ADVANCE(279);
      if (lookahead == 'F') ADVANCE(21);
      if (lookahead == 'N') ADVANCE(25);
      if (lookahead == 'S') ADVANCE(34);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == '[') ADVANCE(410);
      if (lookahead == '\\') ADVANCE(675);
      if (lookahead == ']') ADVANCE(411);
      if (lookahead == '_') ADVANCE(671);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'b') ADVANCE(118);
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead == 'd') ADVANCE(120);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == 'h') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead == 'm') ADVANCE(71);
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == 'p') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == 'v') ADVANCE(40);
      if (lookahead == '{') ADVANCE(407);
      if (lookahead == '}') ADVANCE(408);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(660);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(668);
      if (lookahead == '#') ADVANCE(382);
      if (lookahead == '\'') ADVANCE(674);
      if (lookahead == '(') ADVANCE(396);
      if (lookahead == '-') ADVANCE(421);
      if (lookahead == '1') ADVANCE(397);
      if (lookahead == '2') ADVANCE(393);
      if (lookahead == '8') ADVANCE(394);
      if (lookahead == 'F') ADVANCE(398);
      if (lookahead == 'N') ADVANCE(399);
      if (lookahead == 'S') ADVANCE(401);
      if (lookahead == 'T') ADVANCE(400);
      if (lookahead == 'e') ADVANCE(402);
      if (lookahead == 'f') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(404);
      if (lookahead != 0) ADVANCE(386);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(668);
      if (lookahead == '#') ADVANCE(382);
      if (lookahead == '\'') ADVANCE(674);
      if (lookahead == '(') ADVANCE(396);
      if (lookahead == ';') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(388);
      if (lookahead != 0) ADVANCE(386);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '#') ADVANCE(382);
      if (lookahead == '\'') ADVANCE(674);
      if (lookahead == '(') ADVANCE(396);
      if (lookahead == ';') ADVANCE(279);
      if (lookahead == '\\') ADVANCE(675);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(390);
      if (lookahead != 0) ADVANCE(386);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(668);
      if (lookahead == '#') ADVANCE(382);
      if (lookahead == '(') ADVANCE(396);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(389);
      if (lookahead != 0) ADVANCE(386);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '#') ADVANCE(382);
      if (lookahead == '(') ADVANCE(396);
      if (lookahead == '\\') ADVANCE(675);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(392);
      if (lookahead != 0) ADVANCE(386);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '#') ADVANCE(382);
      if (lookahead == '(') ADVANCE(396);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(391);
      if (lookahead != 0) ADVANCE(386);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(96);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(668);
      if (lookahead == '#') ADVANCE(382);
      if (lookahead == '\'') ADVANCE(674);
      if (lookahead == '(') ADVANCE(291);
      if (lookahead == '-') ADVANCE(421);
      if (lookahead == '1') ADVANCE(658);
      if (lookahead == '2') ADVANCE(652);
      if (lookahead == '8') ADVANCE(654);
      if (lookahead == 'F') ADVANCE(452);
      if (lookahead == 'N') ADVANCE(456);
      if (lookahead == 'S') ADVANCE(465);
      if (lookahead == 'T') ADVANCE(463);
      if (lookahead == 'a') ADVANCE(597);
      if (lookahead == 'b') ADVANCE(538);
      if (lookahead == 'c') ADVANCE(473);
      if (lookahead == 'd') ADVANCE(638);
      if (lookahead == 'e') ADVANCE(559);
      if (lookahead == 'f') ADVANCE(539);
      if (lookahead == 'h') ADVANCE(470);
      if (lookahead == 'i') ADVANCE(576);
      if (lookahead == 'n') ADVANCE(505);
      if (lookahead == 'o') ADVANCE(490);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'r') ADVANCE(475);
      if (lookahead == 's') ADVANCE(521);
      if (lookahead == 't') ADVANCE(506);
      if (lookahead == 'v') ADVANCE(486);
      if (lookahead == '{') ADVANCE(407);
      if (lookahead == '}') ADVANCE(408);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(660);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(668);
      if (lookahead == '#') ADVANCE(382);
      if (lookahead == '\'') ADVANCE(674);
      if (lookahead == '(') ADVANCE(291);
      if (lookahead == '-') ADVANCE(421);
      if (lookahead == '1') ADVANCE(658);
      if (lookahead == '2') ADVANCE(652);
      if (lookahead == '8') ADVANCE(654);
      if (lookahead == 'F') ADVANCE(452);
      if (lookahead == 'N') ADVANCE(456);
      if (lookahead == 'S') ADVANCE(465);
      if (lookahead == 'T') ADVANCE(463);
      if (lookahead == 'a') ADVANCE(597);
      if (lookahead == 'b') ADVANCE(538);
      if (lookahead == 'c') ADVANCE(473);
      if (lookahead == 'd') ADVANCE(638);
      if (lookahead == 'e') ADVANCE(559);
      if (lookahead == 'f') ADVANCE(539);
      if (lookahead == 'h') ADVANCE(470);
      if (lookahead == 'i') ADVANCE(576);
      if (lookahead == 'n') ADVANCE(505);
      if (lookahead == 'o') ADVANCE(490);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'r') ADVANCE(477);
      if (lookahead == 's') ADVANCE(521);
      if (lookahead == 't') ADVANCE(506);
      if (lookahead == 'v') ADVANCE(486);
      if (lookahead == '{') ADVANCE(407);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(660);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(668);
      if (lookahead == '#') ADVANCE(382);
      if (lookahead == '\'') ADVANCE(674);
      if (lookahead == '(') ADVANCE(291);
      if (lookahead == '-') ADVANCE(421);
      if (lookahead == '1') ADVANCE(658);
      if (lookahead == '2') ADVANCE(652);
      if (lookahead == '8') ADVANCE(654);
      if (lookahead == 'F') ADVANCE(452);
      if (lookahead == 'N') ADVANCE(456);
      if (lookahead == 'S') ADVANCE(465);
      if (lookahead == 'T') ADVANCE(463);
      if (lookahead == 'a') ADVANCE(597);
      if (lookahead == 'b') ADVANCE(538);
      if (lookahead == 'c') ADVANCE(473);
      if (lookahead == 'd') ADVANCE(638);
      if (lookahead == 'e') ADVANCE(559);
      if (lookahead == 'f') ADVANCE(539);
      if (lookahead == 'h') ADVANCE(470);
      if (lookahead == 'i') ADVANCE(576);
      if (lookahead == 'n') ADVANCE(519);
      if (lookahead == 'o') ADVANCE(490);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'r') ADVANCE(475);
      if (lookahead == 's') ADVANCE(521);
      if (lookahead == 't') ADVANCE(506);
      if (lookahead == 'v') ADVANCE(486);
      if (lookahead == '{') ADVANCE(407);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(660);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(382);
      if (lookahead == '\'') ADVANCE(674);
      if (lookahead == '(') ADVANCE(291);
      if (lookahead == ')') ADVANCE(293);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '+') ADVANCE(420);
      if (lookahead == ',') ADVANCE(292);
      if (lookahead == '-') ADVANCE(421);
      if (lookahead == '.') ADVANCE(406);
      if (lookahead == '/') ADVANCE(424);
      if (lookahead == ';') ADVANCE(279);
      if (lookahead == '_') ADVANCE(671);
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == 'c') ADVANCE(179);
      if (lookahead == 'd') ADVANCE(119);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead == 'm') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(187);
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(90);
      if (lookahead == 's') ADVANCE(240);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == 'v') ADVANCE(45);
      if (lookahead == '}') ADVANCE(408);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(662);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(382);
      if (lookahead == '\'') ADVANCE(674);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(293);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '+') ADVANCE(420);
      if (lookahead == ',') ADVANCE(292);
      if (lookahead == '-') ADVANCE(421);
      if (lookahead == '.') ADVANCE(406);
      if (lookahead == '/') ADVANCE(424);
      if (lookahead == ';') ADVANCE(279);
      if (lookahead == '_') ADVANCE(670);
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead == 'd') ADVANCE(119);
      if (lookahead == 'm') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(187);
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == '}') ADVANCE(408);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(382);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == '1') ADVANCE(659);
      if (lookahead == '2') ADVANCE(653);
      if (lookahead == '8') ADVANCE(655);
      if (lookahead == ':') ADVANCE(285);
      if (lookahead == '_') ADVANCE(670);
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'b') ADVANCE(118);
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 'd') ADVANCE(247);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == 'f') ADVANCE(122);
      if (lookahead == 'h') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead == 'p') ADVANCE(199);
      if (lookahead == 'r') ADVANCE(50);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == 'v') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(661);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(382);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(384);
      END_STATE();
    case 16:
      if (lookahead == '+') ADVANCE(265);
      if (lookahead == '-') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(663);
      END_STATE();
    case 17:
      if (lookahead == '+') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(663);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(330);
      END_STATE();
    case 19:
      if (lookahead == '3') ADVANCE(18);
      if (lookahead == '6') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '4') ADVANCE(328);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'D') ADVANCE(37);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(445);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(447);
      END_STATE();
    case 25:
      if (lookahead == 'I') ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == 'I') ADVANCE(171);
      if (lookahead == 'R') ADVANCE(59);
      END_STATE();
    case 27:
      if (lookahead == 'L') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'L') ADVANCE(374);
      END_STATE();
    case 29:
      if (lookahead == 'L') ADVANCE(378);
      END_STATE();
    case 30:
      if (lookahead == 'L') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'N') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 'R') ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == 'S') ADVANCE(24);
      END_STATE();
    case 34:
      if (lookahead == 'T') ADVANCE(22);
      END_STATE();
    case 35:
      if (lookahead == 'U') ADVANCE(23);
      END_STATE();
    case 36:
      if (lookahead == 'U') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(31);
      END_STATE();
    case 38:
      if (lookahead == '_') ADVANCE(140);
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'h') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'h') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead == 'r') ADVANCE(172);
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(132);
      if (lookahead == 'r') ADVANCE(427);
      END_STATE();
    case 61:
      if (lookahead == 'b') ADVANCE(132);
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 62:
      if (lookahead == 'b') ADVANCE(417);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(287);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(364);
      if (lookahead == 'g') ADVANCE(205);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(360);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(142);
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(228);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(229);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(231);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(425);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(437);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(362);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(380);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(651);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 'y') ADVANCE(182);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead == 'y') ADVANCE(182);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(222);
      if (lookahead == 't') ADVANCE(196);
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 106:
      if (lookahead == 'f') ADVANCE(297);
      if (lookahead == 'm') ADVANCE(431);
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 107:
      if (lookahead == 'f') ADVANCE(409);
      END_STATE();
    case 108:
      if (lookahead == 'f') ADVANCE(38);
      END_STATE();
    case 109:
      if (lookahead == 'f') ADVANCE(296);
      if (lookahead == 'm') ADVANCE(431);
      END_STATE();
    case 110:
      if (lookahead == 'f') ADVANCE(248);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(319);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(332);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(101);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(178);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(103);
      END_STATE();
    case 117:
      if (lookahead == 'h') ADVANCE(321);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(180);
      if (lookahead == 's') ADVANCE(236);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(251);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(251);
      if (lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == 'l') ADVANCE(181);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == 'l') ADVANCE(181);
      if (lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(252);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 132:
      if (lookahead == 'j') ADVANCE(92);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(295);
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(295);
      if (lookahead == 'r') ADVANCE(282);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(309);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(311);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead == 'm') ADVANCE(185);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead == 'm') ADVANCE(185);
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 144:
      if (lookahead == 'm') ADVANCE(183);
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == 'x') ADVANCE(184);
      END_STATE();
    case 145:
      if (lookahead == 'm') ADVANCE(431);
      END_STATE();
    case 146:
      if (lookahead == 'm') ADVANCE(356);
      END_STATE();
    case 147:
      if (lookahead == 'm') ADVANCE(413);
      END_STATE();
    case 148:
      if (lookahead == 'm') ADVANCE(412);
      END_STATE();
    case 149:
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(198);
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(298);
      if (lookahead == 's') ADVANCE(286);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(340);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(243);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 182:
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 183:
      if (lookahead == 'p') ADVANCE(233);
      END_STATE();
    case 184:
      if (lookahead == 'p') ADVANCE(191);
      END_STATE();
    case 185:
      if (lookahead == 'p') ADVANCE(143);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(427);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(358);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(370);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(334);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(299);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(305);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(172);
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(439);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(346);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(348);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 218:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 219:
      if (lookahead == 's') ADVANCE(230);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(443);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(344);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(313);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(372);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(368);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(326);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(419);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 242:
      if (lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 243:
      if (lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 244:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 245:
      if (lookahead == 'u') ADVANCE(226);
      END_STATE();
    case 246:
      if (lookahead == 'u') ADVANCE(207);
      END_STATE();
    case 247:
      if (lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 248:
      if (lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 249:
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 250:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 251:
      if (lookahead == 'v') ADVANCE(433);
      END_STATE();
    case 252:
      if (lookahead == 'v') ADVANCE(435);
      END_STATE();
    case 253:
      if (lookahead == 'v') ADVANCE(56);
      END_STATE();
    case 254:
      if (lookahead == 'w') ADVANCE(414);
      END_STATE();
    case 255:
      if (lookahead == 'w') ADVANCE(55);
      END_STATE();
    case 256:
      if (lookahead == 'x') ADVANCE(315);
      END_STATE();
    case 257:
      if (lookahead == 'x') ADVANCE(184);
      END_STATE();
    case 258:
      if (lookahead == 'x') ADVANCE(223);
      END_STATE();
    case 259:
      if (lookahead == 'y') ADVANCE(301);
      END_STATE();
    case 260:
      if (lookahead == 'y') ADVANCE(376);
      END_STATE();
    case 261:
      if (lookahead == 'y') ADVANCE(350);
      END_STATE();
    case 262:
      if (lookahead == 'y') ADVANCE(213);
      END_STATE();
    case 263:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(667);
      END_STATE();
    case 264:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(666);
      END_STATE();
    case 265:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(663);
      END_STATE();
    case 266:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(664);
      END_STATE();
    case 267:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(665);
      END_STATE();
    case 268:
      if (eof) ADVANCE(272);
      if (lookahead == '"') ADVANCE(668);
      if (lookahead == '#') ADVANCE(382);
      if (lookahead == '$') ADVANCE(273);
      if (lookahead == '\'') ADVANCE(674);
      if (lookahead == '(') ADVANCE(291);
      if (lookahead == ')') ADVANCE(293);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '+') ADVANCE(420);
      if (lookahead == ',') ADVANCE(292);
      if (lookahead == '-') ADVANCE(421);
      if (lookahead == '.') ADVANCE(406);
      if (lookahead == '/') ADVANCE(424);
      if (lookahead == '1') ADVANCE(658);
      if (lookahead == '2') ADVANCE(652);
      if (lookahead == '8') ADVANCE(654);
      if (lookahead == ':') ADVANCE(285);
      if (lookahead == 'F') ADVANCE(452);
      if (lookahead == 'N') ADVANCE(456);
      if (lookahead == 'S') ADVANCE(465);
      if (lookahead == 'T') ADVANCE(463);
      if (lookahead == ']') ADVANCE(411);
      if (lookahead == 'a') ADVANCE(571);
      if (lookahead == 'b') ADVANCE(538);
      if (lookahead == 'c') ADVANCE(472);
      if (lookahead == 'd') ADVANCE(541);
      if (lookahead == 'e') ADVANCE(559);
      if (lookahead == 'f') ADVANCE(539);
      if (lookahead == 'h') ADVANCE(470);
      if (lookahead == 'i') ADVANCE(563);
      if (lookahead == 'm') ADVANCE(503);
      if (lookahead == 'n') ADVANCE(505);
      if (lookahead == 'o') ADVANCE(489);
      if (lookahead == 'p') ADVANCE(485);
      if (lookahead == 'r') ADVANCE(476);
      if (lookahead == 's') ADVANCE(521);
      if (lookahead == 't') ADVANCE(507);
      if (lookahead == 'v') ADVANCE(480);
      if (lookahead == '{') ADVANCE(407);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(268)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(660);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 269:
      if (eof) ADVANCE(272);
      if (lookahead == '"') ADVANCE(668);
      if (lookahead == '#') ADVANCE(382);
      if (lookahead == '$') ADVANCE(273);
      if (lookahead == '\'') ADVANCE(674);
      if (lookahead == '(') ADVANCE(291);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '+') ADVANCE(420);
      if (lookahead == '-') ADVANCE(421);
      if (lookahead == '.') ADVANCE(406);
      if (lookahead == '/') ADVANCE(424);
      if (lookahead == '1') ADVANCE(658);
      if (lookahead == '2') ADVANCE(652);
      if (lookahead == '8') ADVANCE(654);
      if (lookahead == 'F') ADVANCE(452);
      if (lookahead == 'N') ADVANCE(456);
      if (lookahead == 'S') ADVANCE(465);
      if (lookahead == 'T') ADVANCE(463);
      if (lookahead == '_') ADVANCE(672);
      if (lookahead == 'a') ADVANCE(571);
      if (lookahead == 'b') ADVANCE(538);
      if (lookahead == 'c') ADVANCE(472);
      if (lookahead == 'd') ADVANCE(541);
      if (lookahead == 'e') ADVANCE(559);
      if (lookahead == 'f') ADVANCE(539);
      if (lookahead == 'h') ADVANCE(470);
      if (lookahead == 'i') ADVANCE(563);
      if (lookahead == 'm') ADVANCE(503);
      if (lookahead == 'n') ADVANCE(505);
      if (lookahead == 'o') ADVANCE(489);
      if (lookahead == 'p') ADVANCE(485);
      if (lookahead == 'r') ADVANCE(476);
      if (lookahead == 's') ADVANCE(521);
      if (lookahead == 't') ADVANCE(507);
      if (lookahead == 'v') ADVANCE(480);
      if (lookahead == '{') ADVANCE(407);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(269)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(660);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 270:
      if (eof) ADVANCE(272);
      if (lookahead == '"') ADVANCE(668);
      if (lookahead == '#') ADVANCE(382);
      if (lookahead == '$') ADVANCE(273);
      if (lookahead == '\'') ADVANCE(674);
      if (lookahead == '(') ADVANCE(291);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead == '+') ADVANCE(420);
      if (lookahead == '-') ADVANCE(421);
      if (lookahead == '.') ADVANCE(406);
      if (lookahead == '/') ADVANCE(424);
      if (lookahead == '1') ADVANCE(658);
      if (lookahead == '2') ADVANCE(652);
      if (lookahead == '8') ADVANCE(654);
      if (lookahead == 'F') ADVANCE(452);
      if (lookahead == 'N') ADVANCE(456);
      if (lookahead == 'S') ADVANCE(465);
      if (lookahead == 'T') ADVANCE(463);
      if (lookahead == '_') ADVANCE(673);
      if (lookahead == 'a') ADVANCE(571);
      if (lookahead == 'b') ADVANCE(538);
      if (lookahead == 'c') ADVANCE(472);
      if (lookahead == 'd') ADVANCE(541);
      if (lookahead == 'e') ADVANCE(559);
      if (lookahead == 'f') ADVANCE(539);
      if (lookahead == 'h') ADVANCE(470);
      if (lookahead == 'i') ADVANCE(563);
      if (lookahead == 'm') ADVANCE(503);
      if (lookahead == 'n') ADVANCE(505);
      if (lookahead == 'o') ADVANCE(489);
      if (lookahead == 'p') ADVANCE(485);
      if (lookahead == 'r') ADVANCE(476);
      if (lookahead == 's') ADVANCE(521);
      if (lookahead == 't') ADVANCE(507);
      if (lookahead == 'v') ADVANCE(480);
      if (lookahead == '{') ADVANCE(407);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(270)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(660);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 271:
      if (eof) ADVANCE(272);
      if (lookahead == '"') ADVANCE(668);
      if (lookahead == '#') ADVANCE(382);
      if (lookahead == '$') ADVANCE(273);
      if (lookahead == '\'') ADVANCE(674);
      if (lookahead == '(') ADVANCE(291);
      if (lookahead == '-') ADVANCE(421);
      if (lookahead == '1') ADVANCE(658);
      if (lookahead == '2') ADVANCE(652);
      if (lookahead == '8') ADVANCE(654);
      if (lookahead == 'F') ADVANCE(452);
      if (lookahead == 'N') ADVANCE(456);
      if (lookahead == 'S') ADVANCE(465);
      if (lookahead == 'T') ADVANCE(463);
      if (lookahead == 'a') ADVANCE(597);
      if (lookahead == 'b') ADVANCE(538);
      if (lookahead == 'c') ADVANCE(472);
      if (lookahead == 'd') ADVANCE(638);
      if (lookahead == 'e') ADVANCE(559);
      if (lookahead == 'f') ADVANCE(539);
      if (lookahead == 'h') ADVANCE(470);
      if (lookahead == 'i') ADVANCE(563);
      if (lookahead == 'n') ADVANCE(505);
      if (lookahead == 'o') ADVANCE(490);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == 'r') ADVANCE(475);
      if (lookahead == 's') ADVANCE(521);
      if (lookahead == 't') ADVANCE(506);
      if (lookahead == 'v') ADVANCE(480);
      if (lookahead == '{') ADVANCE(407);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(271)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(660);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_include);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_include_statement_token1);
      if (lookahead == '#') ADVANCE(383);
      if (lookahead == '(') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(278);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_include_statement_token1);
      if (lookahead == '*') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(278);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_include_statement_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == 'f') ADVANCE(248);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == 'f') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_func);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*') ADVANCE(384);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_attr);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_val);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_ref);
      if (lookahead == '_') ADVANCE(140);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == ' ') ADVANCE(253);
      if (lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_invar);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_inout);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_bigInteger);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_bigInteger);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_rational);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_rational);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_bigRational);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_bigRational);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_complex);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_complex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_hash);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_hash);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == ' ') ADVANCE(173);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == ' ') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_bin64);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_bin64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_bin32);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_bin32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_bstring);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_bstring);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_time);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_time);
      if (lookahead == 's') ADVANCE(439);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_time);
      if (lookahead == 's') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_time);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_duration);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == 'S') ADVANCE(262);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == 'S') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_fileSys);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_fileSys);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_process);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_process);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_category);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_category);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_reference);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_reference);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_ref_list);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_ref_list);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_program);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_program);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_ptr);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_ptr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_varfunc);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_varfunc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_proc);
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_proc);
      if (lookahead == 'e') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_object);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_expr);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_expr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_bitset);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_bitset);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_NIL);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_NIL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_empty);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_empty);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_STD_NULL);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_STD_NULL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_forward);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_forward);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(278);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(278);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '"') ADVANCE(668);
      if (lookahead == '#') ADVANCE(382);
      if (lookahead == '\'') ADVANCE(674);
      if (lookahead == '(') ADVANCE(396);
      if (lookahead == '-') ADVANCE(421);
      if (lookahead == '1') ADVANCE(397);
      if (lookahead == '2') ADVANCE(393);
      if (lookahead == '8') ADVANCE(394);
      if (lookahead == 'F') ADVANCE(398);
      if (lookahead == 'N') ADVANCE(399);
      if (lookahead == 'S') ADVANCE(401);
      if (lookahead == 'T') ADVANCE(400);
      if (lookahead == 'e') ADVANCE(402);
      if (lookahead == 'f') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(386);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '"') ADVANCE(668);
      if (lookahead == '#') ADVANCE(382);
      if (lookahead == '\'') ADVANCE(674);
      if (lookahead == '(') ADVANCE(396);
      if (lookahead == ';') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(386);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '"') ADVANCE(668);
      if (lookahead == '#') ADVANCE(382);
      if (lookahead == '(') ADVANCE(396);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(386);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '#') ADVANCE(382);
      if (lookahead == '\'') ADVANCE(674);
      if (lookahead == '(') ADVANCE(396);
      if (lookahead == ';') ADVANCE(279);
      if (lookahead == '\\') ADVANCE(675);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(386);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '#') ADVANCE(382);
      if (lookahead == '(') ADVANCE(396);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(386);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '#') ADVANCE(382);
      if (lookahead == '(') ADVANCE(396);
      if (lookahead == '\\') ADVANCE(675);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(386);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(660);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(660);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == ')') ADVANCE(405);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '*') ADVANCE(384);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '6') ADVANCE(656);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(660);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'A') ADVANCE(27);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'I') ADVANCE(28);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'R') ADVANCE(35);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'T') ADVANCE(22);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(183);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(660);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_STAR_RPAREN);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(441);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_setof);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_newenum);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_endenum);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == ' ') ADVANCE(98);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == ' ') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_sub);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_endstruct);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == ')') ADVANCE(405);
      if (lookahead == '*') ADVANCE(442);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(442);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_parse);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_parse);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_rem);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_rem);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_div);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_mdiv);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_mdiv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_mod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_times);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_times);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '2') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '3') ADVANCE(449);
      if (lookahead == '6') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '4') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'A') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'D') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'E') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'E') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'I') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'I') ADVANCE(575);
      if (lookahead == 'R') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'L') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'L') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'L') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'L') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'N') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'R') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'S') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'T') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'U') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'U') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '_') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '_') ADVANCE(556);
      if (lookahead == 'e') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(618);
      if (lookahead == 'h') ADVANCE(481);
      if (lookahead == 'o') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(618);
      if (lookahead == 'h') ADVANCE(481);
      if (lookahead == 'o') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(628);
      if (lookahead == 'e') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(628);
      if (lookahead == 'e') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(628);
      if (lookahead == 'e') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(591);
      if (lookahead == 'o') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(609);
      if (lookahead == 'r') ADVANCE(577);
      if (lookahead == 't') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(599);
      if (lookahead == 'o') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'b') ADVANCE(549);
      if (lookahead == 'r') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'b') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'b') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'c') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'c') ADVANCE(365);
      if (lookahead == 'g') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'c') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'c') ADVANCE(552);
      if (lookahead == 't') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'c') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'c') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'c') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'd') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'd') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'd') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'd') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'd') ADVANCE(542);
      if (lookahead == 'o') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'd') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(641);
      if (lookahead == 'o') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(645);
      if (lookahead == 'i') ADVANCE(561);
      if (lookahead == 'y') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(645);
      if (lookahead == 'i') ADVANCE(562);
      if (lookahead == 'y') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(642);
      if (lookahead == 'o') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(620);
      if (lookahead == 't') ADVANCE(590);
      if (lookahead == 'u') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'f') ADVANCE(469);
      if (lookahead == 'm') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'f') ADVANCE(469);
      if (lookahead == 't') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'f') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'f') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'g') ADVANCE(457);
      if (lookahead == 'n') ADVANCE(450);
      if (lookahead == 't') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'g') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'g') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'g') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'g') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'g') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'h') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(531);
      if (lookahead == 'o') ADVANCE(582);
      if (lookahead == 's') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == 'l') ADVANCE(583);
      if (lookahead == 'o') ADVANCE(598);
      if (lookahead == 'u') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(639);
      if (lookahead == 'u') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(569);
      if (lookahead == 'u') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'j') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'l') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'l') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'l') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'l') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'l') ADVANCE(579);
      if (lookahead == 'm') ADVANCE(588);
      if (lookahead == 'n') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'l') ADVANCE(579);
      if (lookahead == 'm') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'l') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'l') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'l') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'm') ADVANCE(586);
      if (lookahead == 'x') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'm') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'm') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'm') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(501);
      if (lookahead == 'r') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'p') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'p') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'p') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'p') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(577);
      if (lookahead == 't') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 's') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 's') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 's') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 's') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 's') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 's') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 's') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 's') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'u') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'u') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'u') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'u') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'v') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'v') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'w') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'w') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'w') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'x') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'x') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'y') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'y') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'y') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'y') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_ord);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__decimalLiteral);
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(660);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__decimalLiteral);
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(661);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__decimalLiteral);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(660);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__decimalLiteral);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(661);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__decimalLiteral);
      if (lookahead == '#') ADVANCE(267);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(660);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__decimalLiteral);
      if (lookahead == '#') ADVANCE(267);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(661);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__decimalLiteral);
      if (lookahead == '6') ADVANCE(656);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(660);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__decimalLiteral);
      if (lookahead == '6') ADVANCE(657);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(661);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__decimalLiteral);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(660);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__decimalLiteral);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(661);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__decimalLiteral);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(662);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__exponentialLiteral);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(663);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__negativeExponentialLiteral);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(664);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__hexLiteral);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(665);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__octalLiteral);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(666);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__binaryLiteral);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(667);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym__SLASH);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '/') ADVANCE(669);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '/') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 271},
  [2] = {.lex_state = 271},
  [3] = {.lex_state = 271},
  [4] = {.lex_state = 268},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 268},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 268},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 269},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 270},
  [24] = {.lex_state = 268},
  [25] = {.lex_state = 268},
  [26] = {.lex_state = 268},
  [27] = {.lex_state = 270},
  [28] = {.lex_state = 268},
  [29] = {.lex_state = 268},
  [30] = {.lex_state = 268},
  [31] = {.lex_state = 270},
  [32] = {.lex_state = 268},
  [33] = {.lex_state = 270},
  [34] = {.lex_state = 268},
  [35] = {.lex_state = 268},
  [36] = {.lex_state = 268},
  [37] = {.lex_state = 268},
  [38] = {.lex_state = 268},
  [39] = {.lex_state = 268},
  [40] = {.lex_state = 268},
  [41] = {.lex_state = 268},
  [42] = {.lex_state = 268},
  [43] = {.lex_state = 268},
  [44] = {.lex_state = 268},
  [45] = {.lex_state = 268},
  [46] = {.lex_state = 268},
  [47] = {.lex_state = 268},
  [48] = {.lex_state = 268},
  [49] = {.lex_state = 268},
  [50] = {.lex_state = 268},
  [51] = {.lex_state = 268},
  [52] = {.lex_state = 268},
  [53] = {.lex_state = 268},
  [54] = {.lex_state = 268},
  [55] = {.lex_state = 271},
  [56] = {.lex_state = 271},
  [57] = {.lex_state = 271},
  [58] = {.lex_state = 271},
  [59] = {.lex_state = 271},
  [60] = {.lex_state = 271},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 13},
  [64] = {.lex_state = 13},
  [65] = {.lex_state = 13},
  [66] = {.lex_state = 13},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 13},
  [69] = {.lex_state = 13},
  [70] = {.lex_state = 13},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 13},
  [73] = {.lex_state = 13},
  [74] = {.lex_state = 13},
  [75] = {.lex_state = 13},
  [76] = {.lex_state = 13},
  [77] = {.lex_state = 13},
  [78] = {.lex_state = 13},
  [79] = {.lex_state = 13},
  [80] = {.lex_state = 13},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 11},
  [83] = {.lex_state = 11},
  [84] = {.lex_state = 11},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 11},
  [88] = {.lex_state = 12},
  [89] = {.lex_state = 11},
  [90] = {.lex_state = 12},
  [91] = {.lex_state = 11},
  [92] = {.lex_state = 12},
  [93] = {.lex_state = 12},
  [94] = {.lex_state = 11},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 11},
  [97] = {.lex_state = 11},
  [98] = {.lex_state = 11},
  [99] = {.lex_state = 11},
  [100] = {.lex_state = 11},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 11},
  [103] = {.lex_state = 11},
  [104] = {.lex_state = 11},
  [105] = {.lex_state = 11},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 11},
  [109] = {.lex_state = 11},
  [110] = {.lex_state = 11},
  [111] = {.lex_state = 11},
  [112] = {.lex_state = 11},
  [113] = {.lex_state = 11},
  [114] = {.lex_state = 11},
  [115] = {.lex_state = 11},
  [116] = {.lex_state = 11},
  [117] = {.lex_state = 11},
  [118] = {.lex_state = 11},
  [119] = {.lex_state = 11},
  [120] = {.lex_state = 11},
  [121] = {.lex_state = 11},
  [122] = {.lex_state = 11},
  [123] = {.lex_state = 11},
  [124] = {.lex_state = 11},
  [125] = {.lex_state = 11},
  [126] = {.lex_state = 11},
  [127] = {.lex_state = 11},
  [128] = {.lex_state = 11},
  [129] = {.lex_state = 11},
  [130] = {.lex_state = 11},
  [131] = {.lex_state = 13},
  [132] = {.lex_state = 11},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 11},
  [136] = {.lex_state = 11},
  [137] = {.lex_state = 11},
  [138] = {.lex_state = 11},
  [139] = {.lex_state = 11},
  [140] = {.lex_state = 11},
  [141] = {.lex_state = 13},
  [142] = {.lex_state = 11},
  [143] = {.lex_state = 11},
  [144] = {.lex_state = 11},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 11},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 11},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 11},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 11},
  [170] = {.lex_state = 6},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 14},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 14},
  [176] = {.lex_state = 14},
  [177] = {.lex_state = 14},
  [178] = {.lex_state = 14},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 14},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 14},
  [186] = {.lex_state = 6},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 14},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 276},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 11},
  [204] = {.lex_state = 276},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 11},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 13},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 11},
  [212] = {.lex_state = 13},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 11},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 276},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 13},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {(TSStateId)(-1)},
  [230] = {(TSStateId)(-1)},
  [231] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_comment] = STATE(0),
    [sym_block_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_attr] = ACTIONS(1),
    [anon_sym_val] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_invar] = ACTIONS(1),
    [anon_sym_inout] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_bigInteger] = ACTIONS(1),
    [anon_sym_rational] = ACTIONS(1),
    [anon_sym_bigRational] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_complex] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
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
    [anon_sym_ref_list] = ACTIONS(1),
    [anon_sym_program] = ACTIONS(1),
    [anon_sym_ptr] = ACTIONS(1),
    [anon_sym_varfunc] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_proc] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_object] = ACTIONS(1),
    [anon_sym_expr] = ACTIONS(1),
    [anon_sym_bitset] = ACTIONS(1),
    [sym_NIL] = ACTIONS(1),
    [sym_empty] = ACTIONS(1),
    [sym_STD_NULL] = ACTIONS(1),
    [sym_forward] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_STAR_RPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_setof] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_newenum] = ACTIONS(1),
    [anon_sym_endenum] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_endstruct] = ACTIONS(1),
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
    [anon_sym_times] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
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
    [anon_sym__SLASH] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(201),
    [sym__statement] = STATE(55),
    [sym_include_statement] = STATE(58),
    [sym_declaration] = STATE(58),
    [sym_func_declaration] = STATE(58),
    [sym_function_call] = STATE(29),
    [sym_type] = STATE(190),
    [sym_value] = STATE(127),
    [sym__expression] = STATE(32),
    [sym_line_comment] = STATE(1),
    [sym_block_comment] = STATE(1),
    [sym_binary_expression] = STATE(29),
    [sym_unary_expression] = STATE(29),
    [sym_value_operator] = STATE(29),
    [sym_parenthesized_expression] = STATE(29),
    [sym_set_expression] = STATE(29),
    [sym_hash_expression] = STATE(29),
    [sym_struct_expression] = STATE(29),
    [sym_unary_operator] = STATE(15),
    [sym_boolean] = STATE(105),
    [sym_name] = STATE(34),
    [sym_integer] = STATE(92),
    [sym_string] = STATE(105),
    [sym_float] = STATE(105),
    [sym_bigRational] = STATE(105),
    [sym_rational] = STATE(105),
    [sym_bigInteger] = STATE(105),
    [sym_char] = STATE(105),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(13),
    [anon_sym_var] = ACTIONS(15),
    [anon_sym_func] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_array] = ACTIONS(21),
    [anon_sym_boolean] = ACTIONS(17),
    [anon_sym_integer] = ACTIONS(17),
    [anon_sym_bigInteger] = ACTIONS(17),
    [anon_sym_rational] = ACTIONS(17),
    [anon_sym_bigRational] = ACTIONS(17),
    [anon_sym_float] = ACTIONS(17),
    [anon_sym_complex] = ACTIONS(17),
    [anon_sym_char] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [anon_sym_hash] = ACTIONS(23),
    [anon_sym_set] = ACTIONS(17),
    [anon_sym_struct] = ACTIONS(17),
    [anon_sym_bin64] = ACTIONS(17),
    [anon_sym_bin32] = ACTIONS(17),
    [anon_sym_bstring] = ACTIONS(17),
    [anon_sym_color] = ACTIONS(17),
    [anon_sym_time] = ACTIONS(17),
    [anon_sym_duration] = ACTIONS(17),
    [anon_sym_file] = ACTIONS(17),
    [anon_sym_text] = ACTIONS(17),
    [anon_sym_fileSys] = ACTIONS(17),
    [anon_sym_process] = ACTIONS(17),
    [anon_sym_category] = ACTIONS(17),
    [anon_sym_reference] = ACTIONS(17),
    [anon_sym_ref_list] = ACTIONS(17),
    [anon_sym_program] = ACTIONS(17),
    [anon_sym_ptr] = ACTIONS(17),
    [anon_sym_varfunc] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_proc] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_object] = ACTIONS(17),
    [anon_sym_expr] = ACTIONS(17),
    [anon_sym_bitset] = ACTIONS(17),
    [sym_NIL] = ACTIONS(25),
    [sym_empty] = ACTIONS(25),
    [sym_STD_NULL] = ACTIONS(25),
    [sym_forward] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_setof] = ACTIONS(29),
    [anon_sym_new] = ACTIONS(31),
    [anon_sym_sub] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_TRUE] = ACTIONS(37),
    [anon_sym_FALSE] = ACTIONS(37),
    [sym_variable] = ACTIONS(39),
    [sym__decimalLiteral] = ACTIONS(41),
    [sym__exponentialLiteral] = ACTIONS(43),
    [sym__negativeExponentialLiteral] = ACTIONS(45),
    [sym__hexLiteral] = ACTIONS(47),
    [sym__octalLiteral] = ACTIONS(47),
    [sym__binaryLiteral] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
  },
  [2] = {
    [sym__statement] = STATE(55),
    [sym_include_statement] = STATE(58),
    [sym_declaration] = STATE(58),
    [sym_func_declaration] = STATE(58),
    [sym_function_call] = STATE(29),
    [sym_type] = STATE(190),
    [sym_value] = STATE(127),
    [sym__expression] = STATE(32),
    [sym_line_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_binary_expression] = STATE(29),
    [sym_unary_expression] = STATE(29),
    [sym_value_operator] = STATE(29),
    [sym_parenthesized_expression] = STATE(29),
    [sym_set_expression] = STATE(29),
    [sym_hash_expression] = STATE(29),
    [sym_struct_expression] = STATE(29),
    [sym_unary_operator] = STATE(15),
    [sym_boolean] = STATE(105),
    [sym_name] = STATE(34),
    [sym_integer] = STATE(92),
    [sym_string] = STATE(105),
    [sym_float] = STATE(105),
    [sym_bigRational] = STATE(105),
    [sym_rational] = STATE(105),
    [sym_bigInteger] = STATE(105),
    [sym_char] = STATE(105),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(13),
    [anon_sym_var] = ACTIONS(15),
    [anon_sym_func] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_array] = ACTIONS(21),
    [anon_sym_boolean] = ACTIONS(17),
    [anon_sym_integer] = ACTIONS(17),
    [anon_sym_bigInteger] = ACTIONS(17),
    [anon_sym_rational] = ACTIONS(17),
    [anon_sym_bigRational] = ACTIONS(17),
    [anon_sym_float] = ACTIONS(17),
    [anon_sym_complex] = ACTIONS(17),
    [anon_sym_char] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [anon_sym_hash] = ACTIONS(23),
    [anon_sym_set] = ACTIONS(17),
    [anon_sym_struct] = ACTIONS(17),
    [anon_sym_bin64] = ACTIONS(17),
    [anon_sym_bin32] = ACTIONS(17),
    [anon_sym_bstring] = ACTIONS(17),
    [anon_sym_color] = ACTIONS(17),
    [anon_sym_time] = ACTIONS(17),
    [anon_sym_duration] = ACTIONS(17),
    [anon_sym_file] = ACTIONS(17),
    [anon_sym_text] = ACTIONS(17),
    [anon_sym_fileSys] = ACTIONS(17),
    [anon_sym_process] = ACTIONS(17),
    [anon_sym_category] = ACTIONS(17),
    [anon_sym_reference] = ACTIONS(17),
    [anon_sym_ref_list] = ACTIONS(17),
    [anon_sym_program] = ACTIONS(17),
    [anon_sym_ptr] = ACTIONS(17),
    [anon_sym_varfunc] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_proc] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_object] = ACTIONS(17),
    [anon_sym_expr] = ACTIONS(17),
    [anon_sym_bitset] = ACTIONS(17),
    [sym_NIL] = ACTIONS(25),
    [sym_empty] = ACTIONS(25),
    [sym_STD_NULL] = ACTIONS(25),
    [sym_forward] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_setof] = ACTIONS(29),
    [anon_sym_new] = ACTIONS(31),
    [anon_sym_sub] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_TRUE] = ACTIONS(37),
    [anon_sym_FALSE] = ACTIONS(37),
    [sym_variable] = ACTIONS(39),
    [sym__decimalLiteral] = ACTIONS(41),
    [sym__exponentialLiteral] = ACTIONS(43),
    [sym__negativeExponentialLiteral] = ACTIONS(45),
    [sym__hexLiteral] = ACTIONS(47),
    [sym__octalLiteral] = ACTIONS(47),
    [sym__binaryLiteral] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
  },
  [3] = {
    [sym__statement] = STATE(55),
    [sym_include_statement] = STATE(58),
    [sym_declaration] = STATE(58),
    [sym_func_declaration] = STATE(58),
    [sym_function_call] = STATE(29),
    [sym_type] = STATE(190),
    [sym_value] = STATE(127),
    [sym__expression] = STATE(32),
    [sym_line_comment] = STATE(3),
    [sym_block_comment] = STATE(3),
    [sym_binary_expression] = STATE(29),
    [sym_unary_expression] = STATE(29),
    [sym_value_operator] = STATE(29),
    [sym_parenthesized_expression] = STATE(29),
    [sym_set_expression] = STATE(29),
    [sym_hash_expression] = STATE(29),
    [sym_struct_expression] = STATE(29),
    [sym_unary_operator] = STATE(15),
    [sym_boolean] = STATE(105),
    [sym_name] = STATE(34),
    [sym_integer] = STATE(92),
    [sym_string] = STATE(105),
    [sym_float] = STATE(105),
    [sym_bigRational] = STATE(105),
    [sym_rational] = STATE(105),
    [sym_bigInteger] = STATE(105),
    [sym_char] = STATE(105),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_DOLLAR] = ACTIONS(57),
    [anon_sym_include] = ACTIONS(60),
    [anon_sym_const] = ACTIONS(63),
    [anon_sym_var] = ACTIONS(66),
    [anon_sym_func] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_array] = ACTIONS(75),
    [anon_sym_boolean] = ACTIONS(69),
    [anon_sym_integer] = ACTIONS(69),
    [anon_sym_bigInteger] = ACTIONS(69),
    [anon_sym_rational] = ACTIONS(69),
    [anon_sym_bigRational] = ACTIONS(69),
    [anon_sym_float] = ACTIONS(69),
    [anon_sym_complex] = ACTIONS(69),
    [anon_sym_char] = ACTIONS(69),
    [anon_sym_string] = ACTIONS(69),
    [anon_sym_hash] = ACTIONS(78),
    [anon_sym_set] = ACTIONS(69),
    [anon_sym_struct] = ACTIONS(69),
    [anon_sym_bin64] = ACTIONS(69),
    [anon_sym_bin32] = ACTIONS(69),
    [anon_sym_bstring] = ACTIONS(69),
    [anon_sym_color] = ACTIONS(69),
    [anon_sym_time] = ACTIONS(69),
    [anon_sym_duration] = ACTIONS(69),
    [anon_sym_file] = ACTIONS(69),
    [anon_sym_text] = ACTIONS(69),
    [anon_sym_fileSys] = ACTIONS(69),
    [anon_sym_process] = ACTIONS(69),
    [anon_sym_category] = ACTIONS(69),
    [anon_sym_reference] = ACTIONS(69),
    [anon_sym_ref_list] = ACTIONS(69),
    [anon_sym_program] = ACTIONS(69),
    [anon_sym_ptr] = ACTIONS(69),
    [anon_sym_varfunc] = ACTIONS(69),
    [anon_sym_void] = ACTIONS(69),
    [anon_sym_proc] = ACTIONS(69),
    [anon_sym_type] = ACTIONS(69),
    [anon_sym_object] = ACTIONS(69),
    [anon_sym_expr] = ACTIONS(69),
    [anon_sym_bitset] = ACTIONS(69),
    [sym_NIL] = ACTIONS(81),
    [sym_empty] = ACTIONS(81),
    [sym_STD_NULL] = ACTIONS(81),
    [sym_forward] = ACTIONS(81),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(84),
    [anon_sym_setof] = ACTIONS(87),
    [anon_sym_new] = ACTIONS(90),
    [anon_sym_sub] = ACTIONS(90),
    [anon_sym_DASH] = ACTIONS(93),
    [anon_sym_not] = ACTIONS(96),
    [anon_sym_TRUE] = ACTIONS(99),
    [anon_sym_FALSE] = ACTIONS(99),
    [sym_variable] = ACTIONS(102),
    [sym__decimalLiteral] = ACTIONS(105),
    [sym__exponentialLiteral] = ACTIONS(108),
    [sym__negativeExponentialLiteral] = ACTIONS(111),
    [sym__hexLiteral] = ACTIONS(114),
    [sym__octalLiteral] = ACTIONS(114),
    [sym__binaryLiteral] = ACTIONS(114),
    [anon_sym_DQUOTE] = ACTIONS(117),
    [anon_sym_SQUOTE] = ACTIONS(120),
  },
  [4] = {
    [sym_line_comment] = STATE(4),
    [sym_block_comment] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [anon_sym_include] = ACTIONS(125),
    [anon_sym_const] = ACTIONS(125),
    [anon_sym_var] = ACTIONS(125),
    [anon_sym_COLON] = ACTIONS(123),
    [anon_sym_func] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_array] = ACTIONS(125),
    [anon_sym_boolean] = ACTIONS(125),
    [anon_sym_integer] = ACTIONS(125),
    [anon_sym_bigInteger] = ACTIONS(125),
    [anon_sym_rational] = ACTIONS(125),
    [anon_sym_bigRational] = ACTIONS(125),
    [anon_sym_float] = ACTIONS(125),
    [anon_sym_complex] = ACTIONS(125),
    [anon_sym_char] = ACTIONS(125),
    [anon_sym_string] = ACTIONS(125),
    [anon_sym_hash] = ACTIONS(125),
    [anon_sym_set] = ACTIONS(125),
    [anon_sym_struct] = ACTIONS(125),
    [anon_sym_bin64] = ACTIONS(125),
    [anon_sym_bin32] = ACTIONS(125),
    [anon_sym_bstring] = ACTIONS(125),
    [anon_sym_color] = ACTIONS(125),
    [anon_sym_time] = ACTIONS(125),
    [anon_sym_duration] = ACTIONS(125),
    [anon_sym_file] = ACTIONS(125),
    [anon_sym_text] = ACTIONS(125),
    [anon_sym_fileSys] = ACTIONS(125),
    [anon_sym_process] = ACTIONS(125),
    [anon_sym_category] = ACTIONS(125),
    [anon_sym_reference] = ACTIONS(125),
    [anon_sym_ref_list] = ACTIONS(125),
    [anon_sym_program] = ACTIONS(125),
    [anon_sym_ptr] = ACTIONS(125),
    [anon_sym_varfunc] = ACTIONS(125),
    [anon_sym_void] = ACTIONS(125),
    [anon_sym_proc] = ACTIONS(125),
    [anon_sym_type] = ACTIONS(125),
    [anon_sym_object] = ACTIONS(125),
    [anon_sym_expr] = ACTIONS(125),
    [anon_sym_bitset] = ACTIONS(125),
    [sym_NIL] = ACTIONS(125),
    [sym_empty] = ACTIONS(125),
    [sym_STD_NULL] = ACTIONS(125),
    [sym_forward] = ACTIONS(125),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_DOT] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(123),
    [anon_sym_setof] = ACTIONS(123),
    [anon_sym_RBRACK] = ACTIONS(123),
    [anon_sym_new] = ACTIONS(125),
    [anon_sym_sub] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(123),
    [anon_sym_DASH] = ACTIONS(123),
    [anon_sym_STAR] = ACTIONS(125),
    [anon_sym_SLASH] = ACTIONS(123),
    [anon_sym_and] = ACTIONS(125),
    [anon_sym_or] = ACTIONS(125),
    [anon_sym_parse] = ACTIONS(125),
    [anon_sym_rem] = ACTIONS(125),
    [anon_sym_div] = ACTIONS(125),
    [anon_sym_mdiv] = ACTIONS(125),
    [anon_sym_mod] = ACTIONS(125),
    [anon_sym_times] = ACTIONS(125),
    [anon_sym_DOT_DOT] = ACTIONS(123),
    [anon_sym_STAR_STAR] = ACTIONS(123),
    [anon_sym_not] = ACTIONS(125),
    [anon_sym_TRUE] = ACTIONS(125),
    [anon_sym_FALSE] = ACTIONS(125),
    [sym_variable] = ACTIONS(125),
    [sym__decimalLiteral] = ACTIONS(125),
    [sym__exponentialLiteral] = ACTIONS(123),
    [sym__negativeExponentialLiteral] = ACTIONS(125),
    [sym__hexLiteral] = ACTIONS(123),
    [sym__octalLiteral] = ACTIONS(123),
    [sym__binaryLiteral] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [anon_sym_SQUOTE] = ACTIONS(123),
  },
  [5] = {
    [sym_function_call] = STATE(100),
    [sym_type] = STATE(189),
    [sym_value] = STATE(123),
    [sym__expression] = STATE(123),
    [sym_line_comment] = STATE(5),
    [sym_block_comment] = STATE(5),
    [sym_binary_expression] = STATE(100),
    [sym_unary_expression] = STATE(100),
    [sym_value_operator] = STATE(100),
    [sym_parenthesized_expression] = STATE(100),
    [sym_set_expression] = STATE(100),
    [sym_hash_expression] = STATE(100),
    [sym_enum_expression] = STATE(214),
    [sym_struct_expression] = STATE(100),
    [sym_unary_operator] = STATE(14),
    [sym_boolean] = STATE(105),
    [sym_name] = STATE(91),
    [sym_integer] = STATE(92),
    [sym_string] = STATE(105),
    [sym_float] = STATE(105),
    [sym_bigRational] = STATE(105),
    [sym_rational] = STATE(105),
    [sym_bigInteger] = STATE(105),
    [sym_char] = STATE(105),
    [anon_sym_func] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_array] = ACTIONS(21),
    [anon_sym_boolean] = ACTIONS(17),
    [anon_sym_integer] = ACTIONS(17),
    [anon_sym_bigInteger] = ACTIONS(17),
    [anon_sym_rational] = ACTIONS(17),
    [anon_sym_bigRational] = ACTIONS(17),
    [anon_sym_float] = ACTIONS(17),
    [anon_sym_complex] = ACTIONS(17),
    [anon_sym_char] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [anon_sym_hash] = ACTIONS(129),
    [anon_sym_set] = ACTIONS(17),
    [anon_sym_struct] = ACTIONS(17),
    [anon_sym_bin64] = ACTIONS(17),
    [anon_sym_bin32] = ACTIONS(17),
    [anon_sym_bstring] = ACTIONS(17),
    [anon_sym_color] = ACTIONS(17),
    [anon_sym_time] = ACTIONS(17),
    [anon_sym_duration] = ACTIONS(17),
    [anon_sym_file] = ACTIONS(17),
    [anon_sym_text] = ACTIONS(17),
    [anon_sym_fileSys] = ACTIONS(17),
    [anon_sym_process] = ACTIONS(17),
    [anon_sym_category] = ACTIONS(17),
    [anon_sym_reference] = ACTIONS(17),
    [anon_sym_ref_list] = ACTIONS(17),
    [anon_sym_program] = ACTIONS(17),
    [anon_sym_ptr] = ACTIONS(17),
    [anon_sym_varfunc] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_proc] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_object] = ACTIONS(17),
    [anon_sym_expr] = ACTIONS(17),
    [anon_sym_bitset] = ACTIONS(17),
    [sym_NIL] = ACTIONS(25),
    [sym_empty] = ACTIONS(25),
    [sym_STD_NULL] = ACTIONS(25),
    [sym_forward] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_setof] = ACTIONS(133),
    [anon_sym_newenum] = ACTIONS(135),
    [anon_sym_new] = ACTIONS(137),
    [anon_sym_sub] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_TRUE] = ACTIONS(37),
    [anon_sym_FALSE] = ACTIONS(37),
    [sym_variable] = ACTIONS(139),
    [sym__decimalLiteral] = ACTIONS(41),
    [sym__exponentialLiteral] = ACTIONS(43),
    [sym__negativeExponentialLiteral] = ACTIONS(45),
    [sym__hexLiteral] = ACTIONS(47),
    [sym__octalLiteral] = ACTIONS(47),
    [sym__binaryLiteral] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
  },
  [6] = {
    [sym_line_comment] = STATE(6),
    [sym_block_comment] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(141),
    [anon_sym_DOLLAR] = ACTIONS(141),
    [anon_sym_include] = ACTIONS(143),
    [anon_sym_const] = ACTIONS(143),
    [anon_sym_var] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(141),
    [anon_sym_func] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_COMMA] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(141),
    [anon_sym_array] = ACTIONS(143),
    [anon_sym_boolean] = ACTIONS(143),
    [anon_sym_integer] = ACTIONS(143),
    [anon_sym_bigInteger] = ACTIONS(143),
    [anon_sym_rational] = ACTIONS(143),
    [anon_sym_bigRational] = ACTIONS(143),
    [anon_sym_float] = ACTIONS(143),
    [anon_sym_complex] = ACTIONS(143),
    [anon_sym_char] = ACTIONS(143),
    [anon_sym_string] = ACTIONS(143),
    [anon_sym_hash] = ACTIONS(143),
    [anon_sym_set] = ACTIONS(143),
    [anon_sym_struct] = ACTIONS(143),
    [anon_sym_bin64] = ACTIONS(143),
    [anon_sym_bin32] = ACTIONS(143),
    [anon_sym_bstring] = ACTIONS(143),
    [anon_sym_color] = ACTIONS(143),
    [anon_sym_time] = ACTIONS(143),
    [anon_sym_duration] = ACTIONS(143),
    [anon_sym_file] = ACTIONS(143),
    [anon_sym_text] = ACTIONS(143),
    [anon_sym_fileSys] = ACTIONS(143),
    [anon_sym_process] = ACTIONS(143),
    [anon_sym_category] = ACTIONS(143),
    [anon_sym_reference] = ACTIONS(143),
    [anon_sym_ref_list] = ACTIONS(143),
    [anon_sym_program] = ACTIONS(143),
    [anon_sym_ptr] = ACTIONS(143),
    [anon_sym_varfunc] = ACTIONS(143),
    [anon_sym_void] = ACTIONS(143),
    [anon_sym_proc] = ACTIONS(143),
    [anon_sym_type] = ACTIONS(143),
    [anon_sym_object] = ACTIONS(143),
    [anon_sym_expr] = ACTIONS(143),
    [anon_sym_bitset] = ACTIONS(143),
    [sym_NIL] = ACTIONS(143),
    [sym_empty] = ACTIONS(143),
    [sym_STD_NULL] = ACTIONS(143),
    [sym_forward] = ACTIONS(143),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_DOT] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_setof] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(141),
    [anon_sym_new] = ACTIONS(143),
    [anon_sym_sub] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(141),
    [anon_sym_DASH] = ACTIONS(141),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(141),
    [anon_sym_and] = ACTIONS(143),
    [anon_sym_or] = ACTIONS(143),
    [anon_sym_parse] = ACTIONS(143),
    [anon_sym_rem] = ACTIONS(143),
    [anon_sym_div] = ACTIONS(143),
    [anon_sym_mdiv] = ACTIONS(143),
    [anon_sym_mod] = ACTIONS(143),
    [anon_sym_times] = ACTIONS(143),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_STAR_STAR] = ACTIONS(141),
    [anon_sym_not] = ACTIONS(143),
    [anon_sym_TRUE] = ACTIONS(143),
    [anon_sym_FALSE] = ACTIONS(143),
    [sym_variable] = ACTIONS(143),
    [sym__decimalLiteral] = ACTIONS(143),
    [sym__exponentialLiteral] = ACTIONS(141),
    [sym__negativeExponentialLiteral] = ACTIONS(143),
    [sym__hexLiteral] = ACTIONS(141),
    [sym__octalLiteral] = ACTIONS(141),
    [sym__binaryLiteral] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [anon_sym_SQUOTE] = ACTIONS(141),
  },
  [7] = {
    [sym_return_statement] = STATE(225),
    [sym_function_call] = STATE(100),
    [sym_type] = STATE(189),
    [sym_value] = STATE(124),
    [sym__expression] = STATE(124),
    [sym_line_comment] = STATE(7),
    [sym_block_comment] = STATE(7),
    [sym_binary_expression] = STATE(100),
    [sym_unary_expression] = STATE(100),
    [sym_value_operator] = STATE(100),
    [sym_parenthesized_expression] = STATE(100),
    [sym_set_expression] = STATE(100),
    [sym_hash_expression] = STATE(100),
    [sym_struct_expression] = STATE(100),
    [sym_unary_operator] = STATE(14),
    [sym_boolean] = STATE(105),
    [sym_name] = STATE(91),
    [sym_integer] = STATE(92),
    [sym_string] = STATE(105),
    [sym_float] = STATE(105),
    [sym_bigRational] = STATE(105),
    [sym_rational] = STATE(105),
    [sym_bigInteger] = STATE(105),
    [sym_char] = STATE(105),
    [anon_sym_func] = ACTIONS(17),
    [anon_sym_return] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_array] = ACTIONS(21),
    [anon_sym_boolean] = ACTIONS(17),
    [anon_sym_integer] = ACTIONS(17),
    [anon_sym_bigInteger] = ACTIONS(17),
    [anon_sym_rational] = ACTIONS(17),
    [anon_sym_bigRational] = ACTIONS(17),
    [anon_sym_float] = ACTIONS(17),
    [anon_sym_complex] = ACTIONS(17),
    [anon_sym_char] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [anon_sym_hash] = ACTIONS(129),
    [anon_sym_set] = ACTIONS(17),
    [anon_sym_struct] = ACTIONS(17),
    [anon_sym_bin64] = ACTIONS(17),
    [anon_sym_bin32] = ACTIONS(17),
    [anon_sym_bstring] = ACTIONS(17),
    [anon_sym_color] = ACTIONS(17),
    [anon_sym_time] = ACTIONS(17),
    [anon_sym_duration] = ACTIONS(17),
    [anon_sym_file] = ACTIONS(17),
    [anon_sym_text] = ACTIONS(17),
    [anon_sym_fileSys] = ACTIONS(17),
    [anon_sym_process] = ACTIONS(17),
    [anon_sym_category] = ACTIONS(17),
    [anon_sym_reference] = ACTIONS(17),
    [anon_sym_ref_list] = ACTIONS(17),
    [anon_sym_program] = ACTIONS(17),
    [anon_sym_ptr] = ACTIONS(17),
    [anon_sym_varfunc] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_proc] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_object] = ACTIONS(17),
    [anon_sym_expr] = ACTIONS(17),
    [anon_sym_bitset] = ACTIONS(17),
    [sym_NIL] = ACTIONS(25),
    [sym_empty] = ACTIONS(25),
    [sym_STD_NULL] = ACTIONS(25),
    [sym_forward] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_setof] = ACTIONS(133),
    [anon_sym_new] = ACTIONS(137),
    [anon_sym_sub] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_TRUE] = ACTIONS(37),
    [anon_sym_FALSE] = ACTIONS(37),
    [sym_variable] = ACTIONS(139),
    [sym__decimalLiteral] = ACTIONS(41),
    [sym__exponentialLiteral] = ACTIONS(43),
    [sym__negativeExponentialLiteral] = ACTIONS(45),
    [sym__hexLiteral] = ACTIONS(47),
    [sym__octalLiteral] = ACTIONS(47),
    [sym__binaryLiteral] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
  },
  [8] = {
    [sym_function_call] = STATE(100),
    [sym_type] = STATE(189),
    [sym_value] = STATE(126),
    [sym__expression] = STATE(126),
    [sym_line_comment] = STATE(8),
    [sym_block_comment] = STATE(8),
    [sym_binary_expression] = STATE(100),
    [sym_unary_expression] = STATE(100),
    [sym_value_operator] = STATE(100),
    [sym_parenthesized_expression] = STATE(100),
    [sym_set_expression] = STATE(100),
    [sym_hash_expression] = STATE(100),
    [sym_enum_expression] = STATE(215),
    [sym_struct_expression] = STATE(100),
    [sym_unary_operator] = STATE(14),
    [sym_boolean] = STATE(105),
    [sym_name] = STATE(91),
    [sym_integer] = STATE(92),
    [sym_string] = STATE(105),
    [sym_float] = STATE(105),
    [sym_bigRational] = STATE(105),
    [sym_rational] = STATE(105),
    [sym_bigInteger] = STATE(105),
    [sym_char] = STATE(105),
    [anon_sym_func] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_array] = ACTIONS(21),
    [anon_sym_boolean] = ACTIONS(17),
    [anon_sym_integer] = ACTIONS(17),
    [anon_sym_bigInteger] = ACTIONS(17),
    [anon_sym_rational] = ACTIONS(17),
    [anon_sym_bigRational] = ACTIONS(17),
    [anon_sym_float] = ACTIONS(17),
    [anon_sym_complex] = ACTIONS(17),
    [anon_sym_char] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [anon_sym_hash] = ACTIONS(129),
    [anon_sym_set] = ACTIONS(17),
    [anon_sym_struct] = ACTIONS(17),
    [anon_sym_bin64] = ACTIONS(17),
    [anon_sym_bin32] = ACTIONS(17),
    [anon_sym_bstring] = ACTIONS(17),
    [anon_sym_color] = ACTIONS(17),
    [anon_sym_time] = ACTIONS(17),
    [anon_sym_duration] = ACTIONS(17),
    [anon_sym_file] = ACTIONS(17),
    [anon_sym_text] = ACTIONS(17),
    [anon_sym_fileSys] = ACTIONS(17),
    [anon_sym_process] = ACTIONS(17),
    [anon_sym_category] = ACTIONS(17),
    [anon_sym_reference] = ACTIONS(17),
    [anon_sym_ref_list] = ACTIONS(17),
    [anon_sym_program] = ACTIONS(17),
    [anon_sym_ptr] = ACTIONS(17),
    [anon_sym_varfunc] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_proc] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_object] = ACTIONS(17),
    [anon_sym_expr] = ACTIONS(17),
    [anon_sym_bitset] = ACTIONS(17),
    [sym_NIL] = ACTIONS(25),
    [sym_empty] = ACTIONS(25),
    [sym_STD_NULL] = ACTIONS(25),
    [sym_forward] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_setof] = ACTIONS(133),
    [anon_sym_newenum] = ACTIONS(135),
    [anon_sym_new] = ACTIONS(137),
    [anon_sym_sub] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_TRUE] = ACTIONS(37),
    [anon_sym_FALSE] = ACTIONS(37),
    [sym_variable] = ACTIONS(139),
    [sym__decimalLiteral] = ACTIONS(41),
    [sym__exponentialLiteral] = ACTIONS(43),
    [sym__negativeExponentialLiteral] = ACTIONS(45),
    [sym__hexLiteral] = ACTIONS(47),
    [sym__octalLiteral] = ACTIONS(47),
    [sym__binaryLiteral] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
  },
  [9] = {
    [sym_function_call] = STATE(100),
    [sym_type] = STATE(189),
    [sym_value] = STATE(118),
    [sym__expression] = STATE(118),
    [sym_line_comment] = STATE(9),
    [sym_block_comment] = STATE(9),
    [sym_binary_expression] = STATE(100),
    [sym_unary_expression] = STATE(100),
    [sym_value_operator] = STATE(100),
    [sym_parenthesized_expression] = STATE(100),
    [sym_set_expression] = STATE(100),
    [sym_hash_expression] = STATE(100),
    [sym_struct_expression] = STATE(100),
    [sym_unary_operator] = STATE(14),
    [sym_boolean] = STATE(105),
    [sym_name] = STATE(91),
    [sym_integer] = STATE(92),
    [sym_string] = STATE(105),
    [sym_float] = STATE(105),
    [sym_bigRational] = STATE(105),
    [sym_rational] = STATE(105),
    [sym_bigInteger] = STATE(105),
    [sym_char] = STATE(105),
    [anon_sym_func] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_array] = ACTIONS(21),
    [anon_sym_boolean] = ACTIONS(17),
    [anon_sym_integer] = ACTIONS(17),
    [anon_sym_bigInteger] = ACTIONS(17),
    [anon_sym_rational] = ACTIONS(17),
    [anon_sym_bigRational] = ACTIONS(17),
    [anon_sym_float] = ACTIONS(17),
    [anon_sym_complex] = ACTIONS(17),
    [anon_sym_char] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [anon_sym_hash] = ACTIONS(129),
    [anon_sym_set] = ACTIONS(17),
    [anon_sym_struct] = ACTIONS(17),
    [anon_sym_bin64] = ACTIONS(17),
    [anon_sym_bin32] = ACTIONS(17),
    [anon_sym_bstring] = ACTIONS(17),
    [anon_sym_color] = ACTIONS(17),
    [anon_sym_time] = ACTIONS(17),
    [anon_sym_duration] = ACTIONS(17),
    [anon_sym_file] = ACTIONS(17),
    [anon_sym_text] = ACTIONS(17),
    [anon_sym_fileSys] = ACTIONS(17),
    [anon_sym_process] = ACTIONS(17),
    [anon_sym_category] = ACTIONS(17),
    [anon_sym_reference] = ACTIONS(17),
    [anon_sym_ref_list] = ACTIONS(17),
    [anon_sym_program] = ACTIONS(17),
    [anon_sym_ptr] = ACTIONS(17),
    [anon_sym_varfunc] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_proc] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_object] = ACTIONS(17),
    [anon_sym_expr] = ACTIONS(17),
    [anon_sym_bitset] = ACTIONS(17),
    [sym_NIL] = ACTIONS(25),
    [sym_empty] = ACTIONS(25),
    [sym_STD_NULL] = ACTIONS(25),
    [sym_forward] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_setof] = ACTIONS(133),
    [anon_sym_new] = ACTIONS(137),
    [anon_sym_sub] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_TRUE] = ACTIONS(37),
    [anon_sym_FALSE] = ACTIONS(37),
    [sym_variable] = ACTIONS(139),
    [sym__decimalLiteral] = ACTIONS(41),
    [sym__exponentialLiteral] = ACTIONS(43),
    [sym__negativeExponentialLiteral] = ACTIONS(45),
    [sym__hexLiteral] = ACTIONS(47),
    [sym__octalLiteral] = ACTIONS(47),
    [sym__binaryLiteral] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
  },
  [10] = {
    [sym_function_call] = STATE(100),
    [sym_argument_list] = STATE(210),
    [sym_type] = STATE(189),
    [sym_value] = STATE(108),
    [sym__expression] = STATE(108),
    [sym_line_comment] = STATE(10),
    [sym_block_comment] = STATE(10),
    [sym_binary_expression] = STATE(100),
    [sym_unary_expression] = STATE(100),
    [sym_value_operator] = STATE(100),
    [sym_parenthesized_expression] = STATE(100),
    [sym_set_expression] = STATE(100),
    [sym_hash_expression] = STATE(100),
    [sym_struct_expression] = STATE(100),
    [sym_unary_operator] = STATE(14),
    [sym_boolean] = STATE(105),
    [sym_name] = STATE(91),
    [sym_integer] = STATE(92),
    [sym_string] = STATE(105),
    [sym_float] = STATE(105),
    [sym_bigRational] = STATE(105),
    [sym_rational] = STATE(105),
    [sym_bigInteger] = STATE(105),
    [sym_char] = STATE(105),
    [anon_sym_func] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_array] = ACTIONS(21),
    [anon_sym_boolean] = ACTIONS(17),
    [anon_sym_integer] = ACTIONS(17),
    [anon_sym_bigInteger] = ACTIONS(17),
    [anon_sym_rational] = ACTIONS(17),
    [anon_sym_bigRational] = ACTIONS(17),
    [anon_sym_float] = ACTIONS(17),
    [anon_sym_complex] = ACTIONS(17),
    [anon_sym_char] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [anon_sym_hash] = ACTIONS(129),
    [anon_sym_set] = ACTIONS(17),
    [anon_sym_struct] = ACTIONS(17),
    [anon_sym_bin64] = ACTIONS(17),
    [anon_sym_bin32] = ACTIONS(17),
    [anon_sym_bstring] = ACTIONS(17),
    [anon_sym_color] = ACTIONS(17),
    [anon_sym_time] = ACTIONS(17),
    [anon_sym_duration] = ACTIONS(17),
    [anon_sym_file] = ACTIONS(17),
    [anon_sym_text] = ACTIONS(17),
    [anon_sym_fileSys] = ACTIONS(17),
    [anon_sym_process] = ACTIONS(17),
    [anon_sym_category] = ACTIONS(17),
    [anon_sym_reference] = ACTIONS(17),
    [anon_sym_ref_list] = ACTIONS(17),
    [anon_sym_program] = ACTIONS(17),
    [anon_sym_ptr] = ACTIONS(17),
    [anon_sym_varfunc] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_proc] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_object] = ACTIONS(17),
    [anon_sym_expr] = ACTIONS(17),
    [anon_sym_bitset] = ACTIONS(17),
    [sym_NIL] = ACTIONS(25),
    [sym_empty] = ACTIONS(25),
    [sym_STD_NULL] = ACTIONS(25),
    [sym_forward] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_setof] = ACTIONS(133),
    [anon_sym_new] = ACTIONS(137),
    [anon_sym_sub] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_TRUE] = ACTIONS(37),
    [anon_sym_FALSE] = ACTIONS(37),
    [sym_variable] = ACTIONS(139),
    [sym__decimalLiteral] = ACTIONS(41),
    [sym__exponentialLiteral] = ACTIONS(43),
    [sym__negativeExponentialLiteral] = ACTIONS(45),
    [sym__hexLiteral] = ACTIONS(47),
    [sym__octalLiteral] = ACTIONS(47),
    [sym__binaryLiteral] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
  },
  [11] = {
    [sym_function_call] = STATE(100),
    [sym_argument_list] = STATE(199),
    [sym_type] = STATE(189),
    [sym_value] = STATE(108),
    [sym__expression] = STATE(108),
    [sym_line_comment] = STATE(11),
    [sym_block_comment] = STATE(11),
    [sym_binary_expression] = STATE(100),
    [sym_unary_expression] = STATE(100),
    [sym_value_operator] = STATE(100),
    [sym_parenthesized_expression] = STATE(100),
    [sym_set_expression] = STATE(100),
    [sym_hash_expression] = STATE(100),
    [sym_struct_expression] = STATE(100),
    [sym_unary_operator] = STATE(14),
    [sym_boolean] = STATE(105),
    [sym_name] = STATE(91),
    [sym_integer] = STATE(92),
    [sym_string] = STATE(105),
    [sym_float] = STATE(105),
    [sym_bigRational] = STATE(105),
    [sym_rational] = STATE(105),
    [sym_bigInteger] = STATE(105),
    [sym_char] = STATE(105),
    [anon_sym_func] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_array] = ACTIONS(21),
    [anon_sym_boolean] = ACTIONS(17),
    [anon_sym_integer] = ACTIONS(17),
    [anon_sym_bigInteger] = ACTIONS(17),
    [anon_sym_rational] = ACTIONS(17),
    [anon_sym_bigRational] = ACTIONS(17),
    [anon_sym_float] = ACTIONS(17),
    [anon_sym_complex] = ACTIONS(17),
    [anon_sym_char] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [anon_sym_hash] = ACTIONS(129),
    [anon_sym_set] = ACTIONS(17),
    [anon_sym_struct] = ACTIONS(17),
    [anon_sym_bin64] = ACTIONS(17),
    [anon_sym_bin32] = ACTIONS(17),
    [anon_sym_bstring] = ACTIONS(17),
    [anon_sym_color] = ACTIONS(17),
    [anon_sym_time] = ACTIONS(17),
    [anon_sym_duration] = ACTIONS(17),
    [anon_sym_file] = ACTIONS(17),
    [anon_sym_text] = ACTIONS(17),
    [anon_sym_fileSys] = ACTIONS(17),
    [anon_sym_process] = ACTIONS(17),
    [anon_sym_category] = ACTIONS(17),
    [anon_sym_reference] = ACTIONS(17),
    [anon_sym_ref_list] = ACTIONS(17),
    [anon_sym_program] = ACTIONS(17),
    [anon_sym_ptr] = ACTIONS(17),
    [anon_sym_varfunc] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_proc] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_object] = ACTIONS(17),
    [anon_sym_expr] = ACTIONS(17),
    [anon_sym_bitset] = ACTIONS(17),
    [sym_NIL] = ACTIONS(25),
    [sym_empty] = ACTIONS(25),
    [sym_STD_NULL] = ACTIONS(25),
    [sym_forward] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_setof] = ACTIONS(133),
    [anon_sym_new] = ACTIONS(137),
    [anon_sym_sub] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_TRUE] = ACTIONS(37),
    [anon_sym_FALSE] = ACTIONS(37),
    [sym_variable] = ACTIONS(139),
    [sym__decimalLiteral] = ACTIONS(41),
    [sym__exponentialLiteral] = ACTIONS(43),
    [sym__negativeExponentialLiteral] = ACTIONS(45),
    [sym__hexLiteral] = ACTIONS(47),
    [sym__octalLiteral] = ACTIONS(47),
    [sym__binaryLiteral] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
  },
  [12] = {
    [sym_function_call] = STATE(100),
    [sym_type] = STATE(189),
    [sym_value] = STATE(113),
    [sym__expression] = STATE(113),
    [sym_line_comment] = STATE(12),
    [sym_block_comment] = STATE(12),
    [sym_binary_expression] = STATE(100),
    [sym_unary_expression] = STATE(100),
    [sym_value_operator] = STATE(100),
    [sym_parenthesized_expression] = STATE(100),
    [sym_set_expression] = STATE(100),
    [sym_hash_expression] = STATE(100),
    [sym_struct_expression] = STATE(100),
    [sym_unary_operator] = STATE(14),
    [sym_boolean] = STATE(105),
    [sym_name] = STATE(91),
    [sym_integer] = STATE(92),
    [sym_string] = STATE(105),
    [sym_float] = STATE(105),
    [sym_bigRational] = STATE(105),
    [sym_rational] = STATE(105),
    [sym_bigInteger] = STATE(105),
    [sym_char] = STATE(105),
    [anon_sym_func] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_array] = ACTIONS(21),
    [anon_sym_boolean] = ACTIONS(17),
    [anon_sym_integer] = ACTIONS(17),
    [anon_sym_bigInteger] = ACTIONS(17),
    [anon_sym_rational] = ACTIONS(17),
    [anon_sym_bigRational] = ACTIONS(17),
    [anon_sym_float] = ACTIONS(17),
    [anon_sym_complex] = ACTIONS(17),
    [anon_sym_char] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [anon_sym_hash] = ACTIONS(129),
    [anon_sym_set] = ACTIONS(17),
    [anon_sym_struct] = ACTIONS(17),
    [anon_sym_bin64] = ACTIONS(17),
    [anon_sym_bin32] = ACTIONS(17),
    [anon_sym_bstring] = ACTIONS(17),
    [anon_sym_color] = ACTIONS(17),
    [anon_sym_time] = ACTIONS(17),
    [anon_sym_duration] = ACTIONS(17),
    [anon_sym_file] = ACTIONS(17),
    [anon_sym_text] = ACTIONS(17),
    [anon_sym_fileSys] = ACTIONS(17),
    [anon_sym_process] = ACTIONS(17),
    [anon_sym_category] = ACTIONS(17),
    [anon_sym_reference] = ACTIONS(17),
    [anon_sym_ref_list] = ACTIONS(17),
    [anon_sym_program] = ACTIONS(17),
    [anon_sym_ptr] = ACTIONS(17),
    [anon_sym_varfunc] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_proc] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_object] = ACTIONS(17),
    [anon_sym_expr] = ACTIONS(17),
    [anon_sym_bitset] = ACTIONS(17),
    [sym_NIL] = ACTIONS(25),
    [sym_empty] = ACTIONS(25),
    [sym_STD_NULL] = ACTIONS(25),
    [sym_forward] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(149),
    [anon_sym_setof] = ACTIONS(133),
    [anon_sym_new] = ACTIONS(137),
    [anon_sym_sub] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_TRUE] = ACTIONS(37),
    [anon_sym_FALSE] = ACTIONS(37),
    [sym_variable] = ACTIONS(139),
    [sym__decimalLiteral] = ACTIONS(41),
    [sym__exponentialLiteral] = ACTIONS(43),
    [sym__negativeExponentialLiteral] = ACTIONS(45),
    [sym__hexLiteral] = ACTIONS(47),
    [sym__octalLiteral] = ACTIONS(47),
    [sym__binaryLiteral] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
  },
  [13] = {
    [sym_line_comment] = STATE(13),
    [sym_block_comment] = STATE(13),
    [sym_cast] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(151),
    [anon_sym_DOLLAR] = ACTIONS(151),
    [anon_sym_include] = ACTIONS(153),
    [anon_sym_const] = ACTIONS(153),
    [anon_sym_var] = ACTIONS(153),
    [anon_sym_func] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(151),
    [anon_sym_array] = ACTIONS(153),
    [anon_sym_boolean] = ACTIONS(153),
    [anon_sym_integer] = ACTIONS(153),
    [anon_sym_bigInteger] = ACTIONS(153),
    [anon_sym_rational] = ACTIONS(153),
    [anon_sym_bigRational] = ACTIONS(153),
    [anon_sym_float] = ACTIONS(153),
    [anon_sym_complex] = ACTIONS(153),
    [anon_sym_char] = ACTIONS(153),
    [anon_sym_string] = ACTIONS(153),
    [anon_sym_hash] = ACTIONS(153),
    [anon_sym_set] = ACTIONS(153),
    [anon_sym_struct] = ACTIONS(153),
    [anon_sym_bin64] = ACTIONS(153),
    [anon_sym_bin32] = ACTIONS(153),
    [anon_sym_bstring] = ACTIONS(153),
    [anon_sym_color] = ACTIONS(153),
    [anon_sym_time] = ACTIONS(153),
    [anon_sym_duration] = ACTIONS(153),
    [anon_sym_file] = ACTIONS(153),
    [anon_sym_text] = ACTIONS(153),
    [anon_sym_fileSys] = ACTIONS(153),
    [anon_sym_process] = ACTIONS(153),
    [anon_sym_category] = ACTIONS(153),
    [anon_sym_reference] = ACTIONS(153),
    [anon_sym_ref_list] = ACTIONS(153),
    [anon_sym_program] = ACTIONS(153),
    [anon_sym_ptr] = ACTIONS(153),
    [anon_sym_varfunc] = ACTIONS(153),
    [anon_sym_void] = ACTIONS(153),
    [anon_sym_proc] = ACTIONS(153),
    [anon_sym_type] = ACTIONS(153),
    [anon_sym_object] = ACTIONS(153),
    [anon_sym_expr] = ACTIONS(153),
    [anon_sym_bitset] = ACTIONS(153),
    [sym_NIL] = ACTIONS(153),
    [sym_empty] = ACTIONS(153),
    [sym_STD_NULL] = ACTIONS(153),
    [sym_forward] = ACTIONS(153),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(151),
    [anon_sym_setof] = ACTIONS(151),
    [anon_sym_new] = ACTIONS(153),
    [anon_sym_sub] = ACTIONS(153),
    [anon_sym_PLUS] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(151),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_SLASH] = ACTIONS(151),
    [anon_sym_and] = ACTIONS(153),
    [anon_sym_or] = ACTIONS(153),
    [anon_sym_parse] = ACTIONS(153),
    [anon_sym_rem] = ACTIONS(153),
    [anon_sym_div] = ACTIONS(153),
    [anon_sym_mdiv] = ACTIONS(153),
    [anon_sym_mod] = ACTIONS(153),
    [anon_sym_times] = ACTIONS(153),
    [anon_sym_DOT_DOT] = ACTIONS(151),
    [anon_sym_STAR_STAR] = ACTIONS(151),
    [anon_sym_not] = ACTIONS(153),
    [anon_sym_TRUE] = ACTIONS(153),
    [anon_sym_FALSE] = ACTIONS(153),
    [sym_variable] = ACTIONS(153),
    [sym__decimalLiteral] = ACTIONS(153),
    [sym__exponentialLiteral] = ACTIONS(151),
    [sym__negativeExponentialLiteral] = ACTIONS(153),
    [sym__hexLiteral] = ACTIONS(151),
    [sym__octalLiteral] = ACTIONS(151),
    [sym__binaryLiteral] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(151),
    [anon_sym_SQUOTE] = ACTIONS(151),
  },
  [14] = {
    [sym_function_call] = STATE(100),
    [sym_type] = STATE(189),
    [sym_value] = STATE(101),
    [sym__expression] = STATE(101),
    [sym_line_comment] = STATE(14),
    [sym_block_comment] = STATE(14),
    [sym_binary_expression] = STATE(100),
    [sym_unary_expression] = STATE(100),
    [sym_value_operator] = STATE(100),
    [sym_parenthesized_expression] = STATE(100),
    [sym_set_expression] = STATE(100),
    [sym_hash_expression] = STATE(100),
    [sym_struct_expression] = STATE(100),
    [sym_unary_operator] = STATE(14),
    [sym_boolean] = STATE(105),
    [sym_name] = STATE(91),
    [sym_integer] = STATE(92),
    [sym_string] = STATE(105),
    [sym_float] = STATE(105),
    [sym_bigRational] = STATE(105),
    [sym_rational] = STATE(105),
    [sym_bigInteger] = STATE(105),
    [sym_char] = STATE(105),
    [anon_sym_func] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_array] = ACTIONS(21),
    [anon_sym_boolean] = ACTIONS(17),
    [anon_sym_integer] = ACTIONS(17),
    [anon_sym_bigInteger] = ACTIONS(17),
    [anon_sym_rational] = ACTIONS(17),
    [anon_sym_bigRational] = ACTIONS(17),
    [anon_sym_float] = ACTIONS(17),
    [anon_sym_complex] = ACTIONS(17),
    [anon_sym_char] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [anon_sym_hash] = ACTIONS(129),
    [anon_sym_set] = ACTIONS(17),
    [anon_sym_struct] = ACTIONS(17),
    [anon_sym_bin64] = ACTIONS(17),
    [anon_sym_bin32] = ACTIONS(17),
    [anon_sym_bstring] = ACTIONS(17),
    [anon_sym_color] = ACTIONS(17),
    [anon_sym_time] = ACTIONS(17),
    [anon_sym_duration] = ACTIONS(17),
    [anon_sym_file] = ACTIONS(17),
    [anon_sym_text] = ACTIONS(17),
    [anon_sym_fileSys] = ACTIONS(17),
    [anon_sym_process] = ACTIONS(17),
    [anon_sym_category] = ACTIONS(17),
    [anon_sym_reference] = ACTIONS(17),
    [anon_sym_ref_list] = ACTIONS(17),
    [anon_sym_program] = ACTIONS(17),
    [anon_sym_ptr] = ACTIONS(17),
    [anon_sym_varfunc] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_proc] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_object] = ACTIONS(17),
    [anon_sym_expr] = ACTIONS(17),
    [anon_sym_bitset] = ACTIONS(17),
    [sym_NIL] = ACTIONS(25),
    [sym_empty] = ACTIONS(25),
    [sym_STD_NULL] = ACTIONS(25),
    [sym_forward] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_setof] = ACTIONS(133),
    [anon_sym_new] = ACTIONS(137),
    [anon_sym_sub] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_TRUE] = ACTIONS(37),
    [anon_sym_FALSE] = ACTIONS(37),
    [sym_variable] = ACTIONS(139),
    [sym__decimalLiteral] = ACTIONS(41),
    [sym__exponentialLiteral] = ACTIONS(43),
    [sym__negativeExponentialLiteral] = ACTIONS(45),
    [sym__hexLiteral] = ACTIONS(47),
    [sym__octalLiteral] = ACTIONS(47),
    [sym__binaryLiteral] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
  },
  [15] = {
    [sym_function_call] = STATE(29),
    [sym_type] = STATE(190),
    [sym_value] = STATE(28),
    [sym__expression] = STATE(28),
    [sym_line_comment] = STATE(15),
    [sym_block_comment] = STATE(15),
    [sym_binary_expression] = STATE(29),
    [sym_unary_expression] = STATE(29),
    [sym_value_operator] = STATE(29),
    [sym_parenthesized_expression] = STATE(29),
    [sym_set_expression] = STATE(29),
    [sym_hash_expression] = STATE(29),
    [sym_struct_expression] = STATE(29),
    [sym_unary_operator] = STATE(15),
    [sym_boolean] = STATE(42),
    [sym_name] = STATE(34),
    [sym_integer] = STATE(33),
    [sym_string] = STATE(42),
    [sym_float] = STATE(42),
    [sym_bigRational] = STATE(42),
    [sym_rational] = STATE(42),
    [sym_bigInteger] = STATE(42),
    [sym_char] = STATE(42),
    [anon_sym_func] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_array] = ACTIONS(21),
    [anon_sym_boolean] = ACTIONS(17),
    [anon_sym_integer] = ACTIONS(17),
    [anon_sym_bigInteger] = ACTIONS(17),
    [anon_sym_rational] = ACTIONS(17),
    [anon_sym_bigRational] = ACTIONS(17),
    [anon_sym_float] = ACTIONS(17),
    [anon_sym_complex] = ACTIONS(17),
    [anon_sym_char] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [anon_sym_hash] = ACTIONS(23),
    [anon_sym_set] = ACTIONS(17),
    [anon_sym_struct] = ACTIONS(17),
    [anon_sym_bin64] = ACTIONS(17),
    [anon_sym_bin32] = ACTIONS(17),
    [anon_sym_bstring] = ACTIONS(17),
    [anon_sym_color] = ACTIONS(17),
    [anon_sym_time] = ACTIONS(17),
    [anon_sym_duration] = ACTIONS(17),
    [anon_sym_file] = ACTIONS(17),
    [anon_sym_text] = ACTIONS(17),
    [anon_sym_fileSys] = ACTIONS(17),
    [anon_sym_process] = ACTIONS(17),
    [anon_sym_category] = ACTIONS(17),
    [anon_sym_reference] = ACTIONS(17),
    [anon_sym_ref_list] = ACTIONS(17),
    [anon_sym_program] = ACTIONS(17),
    [anon_sym_ptr] = ACTIONS(17),
    [anon_sym_varfunc] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_proc] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_object] = ACTIONS(17),
    [anon_sym_expr] = ACTIONS(17),
    [anon_sym_bitset] = ACTIONS(17),
    [sym_NIL] = ACTIONS(157),
    [sym_empty] = ACTIONS(157),
    [sym_STD_NULL] = ACTIONS(157),
    [sym_forward] = ACTIONS(157),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_setof] = ACTIONS(29),
    [anon_sym_new] = ACTIONS(31),
    [anon_sym_sub] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(159),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_TRUE] = ACTIONS(161),
    [anon_sym_FALSE] = ACTIONS(161),
    [sym_variable] = ACTIONS(39),
    [sym__decimalLiteral] = ACTIONS(163),
    [sym__exponentialLiteral] = ACTIONS(165),
    [sym__negativeExponentialLiteral] = ACTIONS(167),
    [sym__hexLiteral] = ACTIONS(169),
    [sym__octalLiteral] = ACTIONS(169),
    [sym__binaryLiteral] = ACTIONS(169),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [anon_sym_SQUOTE] = ACTIONS(173),
  },
  [16] = {
    [sym_function_call] = STATE(100),
    [sym_type] = STATE(189),
    [sym_value] = STATE(121),
    [sym__expression] = STATE(121),
    [sym_line_comment] = STATE(16),
    [sym_block_comment] = STATE(16),
    [sym_binary_expression] = STATE(100),
    [sym_unary_expression] = STATE(100),
    [sym_value_operator] = STATE(100),
    [sym_parenthesized_expression] = STATE(100),
    [sym_set_expression] = STATE(100),
    [sym_hash_expression] = STATE(100),
    [sym_struct_expression] = STATE(100),
    [sym_unary_operator] = STATE(14),
    [sym_boolean] = STATE(105),
    [sym_name] = STATE(91),
    [sym_integer] = STATE(92),
    [sym_string] = STATE(105),
    [sym_float] = STATE(105),
    [sym_bigRational] = STATE(105),
    [sym_rational] = STATE(105),
    [sym_bigInteger] = STATE(105),
    [sym_char] = STATE(105),
    [anon_sym_func] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_array] = ACTIONS(21),
    [anon_sym_boolean] = ACTIONS(17),
    [anon_sym_integer] = ACTIONS(17),
    [anon_sym_bigInteger] = ACTIONS(17),
    [anon_sym_rational] = ACTIONS(17),
    [anon_sym_bigRational] = ACTIONS(17),
    [anon_sym_float] = ACTIONS(17),
    [anon_sym_complex] = ACTIONS(17),
    [anon_sym_char] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [anon_sym_hash] = ACTIONS(129),
    [anon_sym_set] = ACTIONS(17),
    [anon_sym_struct] = ACTIONS(17),
    [anon_sym_bin64] = ACTIONS(17),
    [anon_sym_bin32] = ACTIONS(17),
    [anon_sym_bstring] = ACTIONS(17),
    [anon_sym_color] = ACTIONS(17),
    [anon_sym_time] = ACTIONS(17),
    [anon_sym_duration] = ACTIONS(17),
    [anon_sym_file] = ACTIONS(17),
    [anon_sym_text] = ACTIONS(17),
    [anon_sym_fileSys] = ACTIONS(17),
    [anon_sym_process] = ACTIONS(17),
    [anon_sym_category] = ACTIONS(17),
    [anon_sym_reference] = ACTIONS(17),
    [anon_sym_ref_list] = ACTIONS(17),
    [anon_sym_program] = ACTIONS(17),
    [anon_sym_ptr] = ACTIONS(17),
    [anon_sym_varfunc] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_proc] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_object] = ACTIONS(17),
    [anon_sym_expr] = ACTIONS(17),
    [anon_sym_bitset] = ACTIONS(17),
    [sym_NIL] = ACTIONS(25),
    [sym_empty] = ACTIONS(25),
    [sym_STD_NULL] = ACTIONS(25),
    [sym_forward] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_setof] = ACTIONS(133),
    [anon_sym_new] = ACTIONS(137),
    [anon_sym_sub] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_TRUE] = ACTIONS(37),
    [anon_sym_FALSE] = ACTIONS(37),
    [sym_variable] = ACTIONS(139),
    [sym__decimalLiteral] = ACTIONS(41),
    [sym__exponentialLiteral] = ACTIONS(43),
    [sym__negativeExponentialLiteral] = ACTIONS(45),
    [sym__hexLiteral] = ACTIONS(47),
    [sym__octalLiteral] = ACTIONS(47),
    [sym__binaryLiteral] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
  },
  [17] = {
    [sym_function_call] = STATE(100),
    [sym_type] = STATE(189),
    [sym_value] = STATE(122),
    [sym__expression] = STATE(122),
    [sym_line_comment] = STATE(17),
    [sym_block_comment] = STATE(17),
    [sym_binary_expression] = STATE(100),
    [sym_unary_expression] = STATE(100),
    [sym_value_operator] = STATE(100),
    [sym_parenthesized_expression] = STATE(100),
    [sym_set_expression] = STATE(100),
    [sym_hash_expression] = STATE(100),
    [sym_struct_expression] = STATE(100),
    [sym_unary_operator] = STATE(14),
    [sym_boolean] = STATE(105),
    [sym_name] = STATE(91),
    [sym_integer] = STATE(92),
    [sym_string] = STATE(105),
    [sym_float] = STATE(105),
    [sym_bigRational] = STATE(105),
    [sym_rational] = STATE(105),
    [sym_bigInteger] = STATE(105),
    [sym_char] = STATE(105),
    [anon_sym_func] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_array] = ACTIONS(21),
    [anon_sym_boolean] = ACTIONS(17),
    [anon_sym_integer] = ACTIONS(17),
    [anon_sym_bigInteger] = ACTIONS(17),
    [anon_sym_rational] = ACTIONS(17),
    [anon_sym_bigRational] = ACTIONS(17),
    [anon_sym_float] = ACTIONS(17),
    [anon_sym_complex] = ACTIONS(17),
    [anon_sym_char] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [anon_sym_hash] = ACTIONS(129),
    [anon_sym_set] = ACTIONS(17),
    [anon_sym_struct] = ACTIONS(17),
    [anon_sym_bin64] = ACTIONS(17),
    [anon_sym_bin32] = ACTIONS(17),
    [anon_sym_bstring] = ACTIONS(17),
    [anon_sym_color] = ACTIONS(17),
    [anon_sym_time] = ACTIONS(17),
    [anon_sym_duration] = ACTIONS(17),
    [anon_sym_file] = ACTIONS(17),
    [anon_sym_text] = ACTIONS(17),
    [anon_sym_fileSys] = ACTIONS(17),
    [anon_sym_process] = ACTIONS(17),
    [anon_sym_category] = ACTIONS(17),
    [anon_sym_reference] = ACTIONS(17),
    [anon_sym_ref_list] = ACTIONS(17),
    [anon_sym_program] = ACTIONS(17),
    [anon_sym_ptr] = ACTIONS(17),
    [anon_sym_varfunc] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_proc] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_object] = ACTIONS(17),
    [anon_sym_expr] = ACTIONS(17),
    [anon_sym_bitset] = ACTIONS(17),
    [sym_NIL] = ACTIONS(25),
    [sym_empty] = ACTIONS(25),
    [sym_STD_NULL] = ACTIONS(25),
    [sym_forward] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_setof] = ACTIONS(133),
    [anon_sym_new] = ACTIONS(137),
    [anon_sym_sub] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_TRUE] = ACTIONS(37),
    [anon_sym_FALSE] = ACTIONS(37),
    [sym_variable] = ACTIONS(139),
    [sym__decimalLiteral] = ACTIONS(41),
    [sym__exponentialLiteral] = ACTIONS(43),
    [sym__negativeExponentialLiteral] = ACTIONS(45),
    [sym__hexLiteral] = ACTIONS(47),
    [sym__octalLiteral] = ACTIONS(47),
    [sym__binaryLiteral] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
  },
  [18] = {
    [sym_line_comment] = STATE(18),
    [sym_block_comment] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_DOLLAR] = ACTIONS(175),
    [anon_sym_include] = ACTIONS(177),
    [anon_sym_const] = ACTIONS(177),
    [anon_sym_var] = ACTIONS(177),
    [anon_sym_func] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_array] = ACTIONS(177),
    [anon_sym_boolean] = ACTIONS(177),
    [anon_sym_integer] = ACTIONS(177),
    [anon_sym_bigInteger] = ACTIONS(177),
    [anon_sym_rational] = ACTIONS(177),
    [anon_sym_bigRational] = ACTIONS(177),
    [anon_sym_float] = ACTIONS(177),
    [anon_sym_complex] = ACTIONS(177),
    [anon_sym_char] = ACTIONS(177),
    [anon_sym_string] = ACTIONS(177),
    [anon_sym_hash] = ACTIONS(177),
    [anon_sym_set] = ACTIONS(177),
    [anon_sym_struct] = ACTIONS(177),
    [anon_sym_bin64] = ACTIONS(177),
    [anon_sym_bin32] = ACTIONS(177),
    [anon_sym_bstring] = ACTIONS(177),
    [anon_sym_color] = ACTIONS(177),
    [anon_sym_time] = ACTIONS(177),
    [anon_sym_duration] = ACTIONS(177),
    [anon_sym_file] = ACTIONS(177),
    [anon_sym_text] = ACTIONS(177),
    [anon_sym_fileSys] = ACTIONS(177),
    [anon_sym_process] = ACTIONS(177),
    [anon_sym_category] = ACTIONS(177),
    [anon_sym_reference] = ACTIONS(177),
    [anon_sym_ref_list] = ACTIONS(177),
    [anon_sym_program] = ACTIONS(177),
    [anon_sym_ptr] = ACTIONS(177),
    [anon_sym_varfunc] = ACTIONS(177),
    [anon_sym_void] = ACTIONS(177),
    [anon_sym_proc] = ACTIONS(177),
    [anon_sym_type] = ACTIONS(177),
    [anon_sym_object] = ACTIONS(177),
    [anon_sym_expr] = ACTIONS(177),
    [anon_sym_bitset] = ACTIONS(177),
    [sym_NIL] = ACTIONS(177),
    [sym_empty] = ACTIONS(177),
    [sym_STD_NULL] = ACTIONS(177),
    [sym_forward] = ACTIONS(177),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_DOT] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(175),
    [anon_sym_setof] = ACTIONS(175),
    [anon_sym_new] = ACTIONS(177),
    [anon_sym_sub] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(175),
    [anon_sym_DASH] = ACTIONS(175),
    [anon_sym_STAR] = ACTIONS(177),
    [anon_sym_SLASH] = ACTIONS(181),
    [anon_sym_and] = ACTIONS(177),
    [anon_sym_or] = ACTIONS(177),
    [anon_sym_parse] = ACTIONS(177),
    [anon_sym_rem] = ACTIONS(177),
    [anon_sym_div] = ACTIONS(177),
    [anon_sym_mdiv] = ACTIONS(177),
    [anon_sym_mod] = ACTIONS(177),
    [anon_sym_times] = ACTIONS(177),
    [anon_sym_DOT_DOT] = ACTIONS(175),
    [anon_sym_STAR_STAR] = ACTIONS(175),
    [anon_sym_not] = ACTIONS(177),
    [anon_sym_TRUE] = ACTIONS(177),
    [anon_sym_FALSE] = ACTIONS(177),
    [sym_variable] = ACTIONS(177),
    [sym__decimalLiteral] = ACTIONS(177),
    [sym__exponentialLiteral] = ACTIONS(175),
    [sym__negativeExponentialLiteral] = ACTIONS(177),
    [sym__hexLiteral] = ACTIONS(175),
    [sym__octalLiteral] = ACTIONS(175),
    [sym__binaryLiteral] = ACTIONS(175),
    [anon_sym_DQUOTE] = ACTIONS(175),
    [anon_sym__SLASH] = ACTIONS(183),
    [anon_sym__] = ACTIONS(177),
    [anon_sym_SQUOTE] = ACTIONS(175),
  },
  [19] = {
    [sym_function_call] = STATE(100),
    [sym_type] = STATE(189),
    [sym_value] = STATE(117),
    [sym__expression] = STATE(117),
    [sym_line_comment] = STATE(19),
    [sym_block_comment] = STATE(19),
    [sym_binary_expression] = STATE(100),
    [sym_unary_expression] = STATE(100),
    [sym_value_operator] = STATE(100),
    [sym_parenthesized_expression] = STATE(100),
    [sym_set_expression] = STATE(100),
    [sym_hash_expression] = STATE(100),
    [sym_struct_expression] = STATE(100),
    [sym_unary_operator] = STATE(14),
    [sym_boolean] = STATE(105),
    [sym_name] = STATE(91),
    [sym_integer] = STATE(92),
    [sym_string] = STATE(105),
    [sym_float] = STATE(105),
    [sym_bigRational] = STATE(105),
    [sym_rational] = STATE(105),
    [sym_bigInteger] = STATE(105),
    [sym_char] = STATE(105),
    [anon_sym_func] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_array] = ACTIONS(21),
    [anon_sym_boolean] = ACTIONS(17),
    [anon_sym_integer] = ACTIONS(17),
    [anon_sym_bigInteger] = ACTIONS(17),
    [anon_sym_rational] = ACTIONS(17),
    [anon_sym_bigRational] = ACTIONS(17),
    [anon_sym_float] = ACTIONS(17),
    [anon_sym_complex] = ACTIONS(17),
    [anon_sym_char] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [anon_sym_hash] = ACTIONS(129),
    [anon_sym_set] = ACTIONS(17),
    [anon_sym_struct] = ACTIONS(17),
    [anon_sym_bin64] = ACTIONS(17),
    [anon_sym_bin32] = ACTIONS(17),
    [anon_sym_bstring] = ACTIONS(17),
    [anon_sym_color] = ACTIONS(17),
    [anon_sym_time] = ACTIONS(17),
    [anon_sym_duration] = ACTIONS(17),
    [anon_sym_file] = ACTIONS(17),
    [anon_sym_text] = ACTIONS(17),
    [anon_sym_fileSys] = ACTIONS(17),
    [anon_sym_process] = ACTIONS(17),
    [anon_sym_category] = ACTIONS(17),
    [anon_sym_reference] = ACTIONS(17),
    [anon_sym_ref_list] = ACTIONS(17),
    [anon_sym_program] = ACTIONS(17),
    [anon_sym_ptr] = ACTIONS(17),
    [anon_sym_varfunc] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_proc] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_object] = ACTIONS(17),
    [anon_sym_expr] = ACTIONS(17),
    [anon_sym_bitset] = ACTIONS(17),
    [sym_NIL] = ACTIONS(25),
    [sym_empty] = ACTIONS(25),
    [sym_STD_NULL] = ACTIONS(25),
    [sym_forward] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_setof] = ACTIONS(133),
    [anon_sym_new] = ACTIONS(137),
    [anon_sym_sub] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_TRUE] = ACTIONS(37),
    [anon_sym_FALSE] = ACTIONS(37),
    [sym_variable] = ACTIONS(139),
    [sym__decimalLiteral] = ACTIONS(41),
    [sym__exponentialLiteral] = ACTIONS(43),
    [sym__negativeExponentialLiteral] = ACTIONS(45),
    [sym__hexLiteral] = ACTIONS(47),
    [sym__octalLiteral] = ACTIONS(47),
    [sym__binaryLiteral] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
  },
  [20] = {
    [sym_function_call] = STATE(100),
    [sym_type] = STATE(189),
    [sym_value] = STATE(99),
    [sym__expression] = STATE(99),
    [sym_line_comment] = STATE(20),
    [sym_block_comment] = STATE(20),
    [sym_binary_expression] = STATE(100),
    [sym_unary_expression] = STATE(100),
    [sym_value_operator] = STATE(100),
    [sym_parenthesized_expression] = STATE(100),
    [sym_set_expression] = STATE(100),
    [sym_hash_expression] = STATE(100),
    [sym_struct_expression] = STATE(100),
    [sym_unary_operator] = STATE(14),
    [sym_boolean] = STATE(105),
    [sym_name] = STATE(91),
    [sym_integer] = STATE(92),
    [sym_string] = STATE(105),
    [sym_float] = STATE(105),
    [sym_bigRational] = STATE(105),
    [sym_rational] = STATE(105),
    [sym_bigInteger] = STATE(105),
    [sym_char] = STATE(105),
    [anon_sym_func] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_array] = ACTIONS(21),
    [anon_sym_boolean] = ACTIONS(17),
    [anon_sym_integer] = ACTIONS(17),
    [anon_sym_bigInteger] = ACTIONS(17),
    [anon_sym_rational] = ACTIONS(17),
    [anon_sym_bigRational] = ACTIONS(17),
    [anon_sym_float] = ACTIONS(17),
    [anon_sym_complex] = ACTIONS(17),
    [anon_sym_char] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [anon_sym_hash] = ACTIONS(129),
    [anon_sym_set] = ACTIONS(17),
    [anon_sym_struct] = ACTIONS(17),
    [anon_sym_bin64] = ACTIONS(17),
    [anon_sym_bin32] = ACTIONS(17),
    [anon_sym_bstring] = ACTIONS(17),
    [anon_sym_color] = ACTIONS(17),
    [anon_sym_time] = ACTIONS(17),
    [anon_sym_duration] = ACTIONS(17),
    [anon_sym_file] = ACTIONS(17),
    [anon_sym_text] = ACTIONS(17),
    [anon_sym_fileSys] = ACTIONS(17),
    [anon_sym_process] = ACTIONS(17),
    [anon_sym_category] = ACTIONS(17),
    [anon_sym_reference] = ACTIONS(17),
    [anon_sym_ref_list] = ACTIONS(17),
    [anon_sym_program] = ACTIONS(17),
    [anon_sym_ptr] = ACTIONS(17),
    [anon_sym_varfunc] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_proc] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_object] = ACTIONS(17),
    [anon_sym_expr] = ACTIONS(17),
    [anon_sym_bitset] = ACTIONS(17),
    [sym_NIL] = ACTIONS(25),
    [sym_empty] = ACTIONS(25),
    [sym_STD_NULL] = ACTIONS(25),
    [sym_forward] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_setof] = ACTIONS(133),
    [anon_sym_new] = ACTIONS(137),
    [anon_sym_sub] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_TRUE] = ACTIONS(37),
    [anon_sym_FALSE] = ACTIONS(37),
    [sym_variable] = ACTIONS(139),
    [sym__decimalLiteral] = ACTIONS(41),
    [sym__exponentialLiteral] = ACTIONS(43),
    [sym__negativeExponentialLiteral] = ACTIONS(45),
    [sym__hexLiteral] = ACTIONS(47),
    [sym__octalLiteral] = ACTIONS(47),
    [sym__binaryLiteral] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
  },
  [21] = {
    [sym_function_call] = STATE(100),
    [sym_type] = STATE(189),
    [sym_value] = STATE(125),
    [sym__expression] = STATE(125),
    [sym_line_comment] = STATE(21),
    [sym_block_comment] = STATE(21),
    [sym_binary_expression] = STATE(100),
    [sym_unary_expression] = STATE(100),
    [sym_value_operator] = STATE(100),
    [sym_parenthesized_expression] = STATE(100),
    [sym_set_expression] = STATE(100),
    [sym_hash_expression] = STATE(100),
    [sym_struct_expression] = STATE(100),
    [sym_unary_operator] = STATE(14),
    [sym_boolean] = STATE(105),
    [sym_name] = STATE(91),
    [sym_integer] = STATE(92),
    [sym_string] = STATE(105),
    [sym_float] = STATE(105),
    [sym_bigRational] = STATE(105),
    [sym_rational] = STATE(105),
    [sym_bigInteger] = STATE(105),
    [sym_char] = STATE(105),
    [anon_sym_func] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_array] = ACTIONS(21),
    [anon_sym_boolean] = ACTIONS(17),
    [anon_sym_integer] = ACTIONS(17),
    [anon_sym_bigInteger] = ACTIONS(17),
    [anon_sym_rational] = ACTIONS(17),
    [anon_sym_bigRational] = ACTIONS(17),
    [anon_sym_float] = ACTIONS(17),
    [anon_sym_complex] = ACTIONS(17),
    [anon_sym_char] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [anon_sym_hash] = ACTIONS(129),
    [anon_sym_set] = ACTIONS(17),
    [anon_sym_struct] = ACTIONS(17),
    [anon_sym_bin64] = ACTIONS(17),
    [anon_sym_bin32] = ACTIONS(17),
    [anon_sym_bstring] = ACTIONS(17),
    [anon_sym_color] = ACTIONS(17),
    [anon_sym_time] = ACTIONS(17),
    [anon_sym_duration] = ACTIONS(17),
    [anon_sym_file] = ACTIONS(17),
    [anon_sym_text] = ACTIONS(17),
    [anon_sym_fileSys] = ACTIONS(17),
    [anon_sym_process] = ACTIONS(17),
    [anon_sym_category] = ACTIONS(17),
    [anon_sym_reference] = ACTIONS(17),
    [anon_sym_ref_list] = ACTIONS(17),
    [anon_sym_program] = ACTIONS(17),
    [anon_sym_ptr] = ACTIONS(17),
    [anon_sym_varfunc] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_proc] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_object] = ACTIONS(17),
    [anon_sym_expr] = ACTIONS(17),
    [anon_sym_bitset] = ACTIONS(17),
    [sym_NIL] = ACTIONS(25),
    [sym_empty] = ACTIONS(25),
    [sym_STD_NULL] = ACTIONS(25),
    [sym_forward] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_setof] = ACTIONS(133),
    [anon_sym_new] = ACTIONS(137),
    [anon_sym_sub] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_TRUE] = ACTIONS(37),
    [anon_sym_FALSE] = ACTIONS(37),
    [sym_variable] = ACTIONS(139),
    [sym__decimalLiteral] = ACTIONS(41),
    [sym__exponentialLiteral] = ACTIONS(43),
    [sym__negativeExponentialLiteral] = ACTIONS(45),
    [sym__hexLiteral] = ACTIONS(47),
    [sym__octalLiteral] = ACTIONS(47),
    [sym__binaryLiteral] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
  },
  [22] = {
    [sym_function_call] = STATE(29),
    [sym_type] = STATE(190),
    [sym_value] = STATE(30),
    [sym__expression] = STATE(30),
    [sym_line_comment] = STATE(22),
    [sym_block_comment] = STATE(22),
    [sym_binary_expression] = STATE(29),
    [sym_unary_expression] = STATE(29),
    [sym_value_operator] = STATE(29),
    [sym_parenthesized_expression] = STATE(29),
    [sym_set_expression] = STATE(29),
    [sym_hash_expression] = STATE(29),
    [sym_struct_expression] = STATE(29),
    [sym_unary_operator] = STATE(15),
    [sym_boolean] = STATE(42),
    [sym_name] = STATE(34),
    [sym_integer] = STATE(33),
    [sym_string] = STATE(42),
    [sym_float] = STATE(42),
    [sym_bigRational] = STATE(42),
    [sym_rational] = STATE(42),
    [sym_bigInteger] = STATE(42),
    [sym_char] = STATE(42),
    [anon_sym_func] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_array] = ACTIONS(21),
    [anon_sym_boolean] = ACTIONS(17),
    [anon_sym_integer] = ACTIONS(17),
    [anon_sym_bigInteger] = ACTIONS(17),
    [anon_sym_rational] = ACTIONS(17),
    [anon_sym_bigRational] = ACTIONS(17),
    [anon_sym_float] = ACTIONS(17),
    [anon_sym_complex] = ACTIONS(17),
    [anon_sym_char] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [anon_sym_hash] = ACTIONS(23),
    [anon_sym_set] = ACTIONS(17),
    [anon_sym_struct] = ACTIONS(17),
    [anon_sym_bin64] = ACTIONS(17),
    [anon_sym_bin32] = ACTIONS(17),
    [anon_sym_bstring] = ACTIONS(17),
    [anon_sym_color] = ACTIONS(17),
    [anon_sym_time] = ACTIONS(17),
    [anon_sym_duration] = ACTIONS(17),
    [anon_sym_file] = ACTIONS(17),
    [anon_sym_text] = ACTIONS(17),
    [anon_sym_fileSys] = ACTIONS(17),
    [anon_sym_process] = ACTIONS(17),
    [anon_sym_category] = ACTIONS(17),
    [anon_sym_reference] = ACTIONS(17),
    [anon_sym_ref_list] = ACTIONS(17),
    [anon_sym_program] = ACTIONS(17),
    [anon_sym_ptr] = ACTIONS(17),
    [anon_sym_varfunc] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_proc] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_object] = ACTIONS(17),
    [anon_sym_expr] = ACTIONS(17),
    [anon_sym_bitset] = ACTIONS(17),
    [sym_NIL] = ACTIONS(157),
    [sym_empty] = ACTIONS(157),
    [sym_STD_NULL] = ACTIONS(157),
    [sym_forward] = ACTIONS(157),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_setof] = ACTIONS(29),
    [anon_sym_new] = ACTIONS(31),
    [anon_sym_sub] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(159),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_TRUE] = ACTIONS(161),
    [anon_sym_FALSE] = ACTIONS(161),
    [sym_variable] = ACTIONS(39),
    [sym__decimalLiteral] = ACTIONS(163),
    [sym__exponentialLiteral] = ACTIONS(165),
    [sym__negativeExponentialLiteral] = ACTIONS(167),
    [sym__hexLiteral] = ACTIONS(169),
    [sym__octalLiteral] = ACTIONS(169),
    [sym__binaryLiteral] = ACTIONS(169),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [anon_sym_SQUOTE] = ACTIONS(173),
  },
  [23] = {
    [sym_line_comment] = STATE(23),
    [sym_block_comment] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_DOLLAR] = ACTIONS(175),
    [anon_sym_include] = ACTIONS(177),
    [anon_sym_const] = ACTIONS(177),
    [anon_sym_var] = ACTIONS(177),
    [anon_sym_func] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_array] = ACTIONS(177),
    [anon_sym_boolean] = ACTIONS(177),
    [anon_sym_integer] = ACTIONS(177),
    [anon_sym_bigInteger] = ACTIONS(177),
    [anon_sym_rational] = ACTIONS(177),
    [anon_sym_bigRational] = ACTIONS(177),
    [anon_sym_float] = ACTIONS(177),
    [anon_sym_complex] = ACTIONS(177),
    [anon_sym_char] = ACTIONS(177),
    [anon_sym_string] = ACTIONS(177),
    [anon_sym_hash] = ACTIONS(177),
    [anon_sym_set] = ACTIONS(177),
    [anon_sym_struct] = ACTIONS(177),
    [anon_sym_bin64] = ACTIONS(177),
    [anon_sym_bin32] = ACTIONS(177),
    [anon_sym_bstring] = ACTIONS(177),
    [anon_sym_color] = ACTIONS(177),
    [anon_sym_time] = ACTIONS(177),
    [anon_sym_duration] = ACTIONS(177),
    [anon_sym_file] = ACTIONS(177),
    [anon_sym_text] = ACTIONS(177),
    [anon_sym_fileSys] = ACTIONS(177),
    [anon_sym_process] = ACTIONS(177),
    [anon_sym_category] = ACTIONS(177),
    [anon_sym_reference] = ACTIONS(177),
    [anon_sym_ref_list] = ACTIONS(177),
    [anon_sym_program] = ACTIONS(177),
    [anon_sym_ptr] = ACTIONS(177),
    [anon_sym_varfunc] = ACTIONS(177),
    [anon_sym_void] = ACTIONS(177),
    [anon_sym_proc] = ACTIONS(177),
    [anon_sym_type] = ACTIONS(177),
    [anon_sym_object] = ACTIONS(177),
    [anon_sym_expr] = ACTIONS(177),
    [anon_sym_bitset] = ACTIONS(177),
    [sym_NIL] = ACTIONS(177),
    [sym_empty] = ACTIONS(177),
    [sym_STD_NULL] = ACTIONS(177),
    [sym_forward] = ACTIONS(177),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_DOT] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(175),
    [anon_sym_setof] = ACTIONS(175),
    [anon_sym_new] = ACTIONS(177),
    [anon_sym_sub] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(175),
    [anon_sym_DASH] = ACTIONS(175),
    [anon_sym_STAR] = ACTIONS(177),
    [anon_sym_SLASH] = ACTIONS(175),
    [anon_sym_and] = ACTIONS(177),
    [anon_sym_or] = ACTIONS(177),
    [anon_sym_parse] = ACTIONS(177),
    [anon_sym_rem] = ACTIONS(177),
    [anon_sym_div] = ACTIONS(177),
    [anon_sym_mdiv] = ACTIONS(177),
    [anon_sym_mod] = ACTIONS(177),
    [anon_sym_times] = ACTIONS(177),
    [anon_sym_DOT_DOT] = ACTIONS(175),
    [anon_sym_STAR_STAR] = ACTIONS(175),
    [anon_sym_not] = ACTIONS(177),
    [anon_sym_TRUE] = ACTIONS(177),
    [anon_sym_FALSE] = ACTIONS(177),
    [sym_variable] = ACTIONS(177),
    [sym__decimalLiteral] = ACTIONS(177),
    [sym__exponentialLiteral] = ACTIONS(175),
    [sym__negativeExponentialLiteral] = ACTIONS(177),
    [sym__hexLiteral] = ACTIONS(175),
    [sym__octalLiteral] = ACTIONS(175),
    [sym__binaryLiteral] = ACTIONS(175),
    [anon_sym_DQUOTE] = ACTIONS(175),
    [anon_sym__] = ACTIONS(177),
    [anon_sym_SQUOTE] = ACTIONS(175),
  },
  [24] = {
    [sym_line_comment] = STATE(24),
    [sym_block_comment] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(185),
    [anon_sym_DOLLAR] = ACTIONS(185),
    [anon_sym_include] = ACTIONS(187),
    [anon_sym_const] = ACTIONS(187),
    [anon_sym_var] = ACTIONS(187),
    [anon_sym_func] = ACTIONS(187),
    [anon_sym_LPAREN] = ACTIONS(187),
    [anon_sym_COMMA] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_array] = ACTIONS(187),
    [anon_sym_boolean] = ACTIONS(187),
    [anon_sym_integer] = ACTIONS(187),
    [anon_sym_bigInteger] = ACTIONS(187),
    [anon_sym_rational] = ACTIONS(187),
    [anon_sym_bigRational] = ACTIONS(187),
    [anon_sym_float] = ACTIONS(187),
    [anon_sym_complex] = ACTIONS(187),
    [anon_sym_char] = ACTIONS(187),
    [anon_sym_string] = ACTIONS(187),
    [anon_sym_hash] = ACTIONS(187),
    [anon_sym_set] = ACTIONS(187),
    [anon_sym_struct] = ACTIONS(187),
    [anon_sym_bin64] = ACTIONS(187),
    [anon_sym_bin32] = ACTIONS(187),
    [anon_sym_bstring] = ACTIONS(187),
    [anon_sym_color] = ACTIONS(187),
    [anon_sym_time] = ACTIONS(187),
    [anon_sym_duration] = ACTIONS(187),
    [anon_sym_file] = ACTIONS(187),
    [anon_sym_text] = ACTIONS(187),
    [anon_sym_fileSys] = ACTIONS(187),
    [anon_sym_process] = ACTIONS(187),
    [anon_sym_category] = ACTIONS(187),
    [anon_sym_reference] = ACTIONS(187),
    [anon_sym_ref_list] = ACTIONS(187),
    [anon_sym_program] = ACTIONS(187),
    [anon_sym_ptr] = ACTIONS(187),
    [anon_sym_varfunc] = ACTIONS(187),
    [anon_sym_void] = ACTIONS(187),
    [anon_sym_proc] = ACTIONS(187),
    [anon_sym_type] = ACTIONS(187),
    [anon_sym_object] = ACTIONS(187),
    [anon_sym_expr] = ACTIONS(187),
    [anon_sym_bitset] = ACTIONS(187),
    [sym_NIL] = ACTIONS(187),
    [sym_empty] = ACTIONS(187),
    [sym_STD_NULL] = ACTIONS(187),
    [sym_forward] = ACTIONS(187),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_setof] = ACTIONS(185),
    [anon_sym_new] = ACTIONS(187),
    [anon_sym_sub] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(185),
    [anon_sym_DASH] = ACTIONS(185),
    [anon_sym_STAR] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(185),
    [anon_sym_and] = ACTIONS(187),
    [anon_sym_or] = ACTIONS(187),
    [anon_sym_parse] = ACTIONS(187),
    [anon_sym_rem] = ACTIONS(187),
    [anon_sym_div] = ACTIONS(187),
    [anon_sym_mdiv] = ACTIONS(187),
    [anon_sym_mod] = ACTIONS(187),
    [anon_sym_times] = ACTIONS(187),
    [anon_sym_DOT_DOT] = ACTIONS(185),
    [anon_sym_STAR_STAR] = ACTIONS(185),
    [anon_sym_not] = ACTIONS(187),
    [anon_sym_TRUE] = ACTIONS(187),
    [anon_sym_FALSE] = ACTIONS(187),
    [sym_variable] = ACTIONS(187),
    [sym__decimalLiteral] = ACTIONS(187),
    [sym__exponentialLiteral] = ACTIONS(185),
    [sym__negativeExponentialLiteral] = ACTIONS(187),
    [sym__hexLiteral] = ACTIONS(185),
    [sym__octalLiteral] = ACTIONS(185),
    [sym__binaryLiteral] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(185),
    [anon_sym_SQUOTE] = ACTIONS(185),
  },
  [25] = {
    [sym_line_comment] = STATE(25),
    [sym_block_comment] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(189),
    [anon_sym_DOLLAR] = ACTIONS(189),
    [anon_sym_include] = ACTIONS(191),
    [anon_sym_const] = ACTIONS(191),
    [anon_sym_var] = ACTIONS(191),
    [anon_sym_func] = ACTIONS(191),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(189),
    [anon_sym_array] = ACTIONS(191),
    [anon_sym_boolean] = ACTIONS(191),
    [anon_sym_integer] = ACTIONS(191),
    [anon_sym_bigInteger] = ACTIONS(191),
    [anon_sym_rational] = ACTIONS(191),
    [anon_sym_bigRational] = ACTIONS(191),
    [anon_sym_float] = ACTIONS(191),
    [anon_sym_complex] = ACTIONS(191),
    [anon_sym_char] = ACTIONS(191),
    [anon_sym_string] = ACTIONS(191),
    [anon_sym_hash] = ACTIONS(191),
    [anon_sym_set] = ACTIONS(191),
    [anon_sym_struct] = ACTIONS(191),
    [anon_sym_bin64] = ACTIONS(191),
    [anon_sym_bin32] = ACTIONS(191),
    [anon_sym_bstring] = ACTIONS(191),
    [anon_sym_color] = ACTIONS(191),
    [anon_sym_time] = ACTIONS(191),
    [anon_sym_duration] = ACTIONS(191),
    [anon_sym_file] = ACTIONS(191),
    [anon_sym_text] = ACTIONS(191),
    [anon_sym_fileSys] = ACTIONS(191),
    [anon_sym_process] = ACTIONS(191),
    [anon_sym_category] = ACTIONS(191),
    [anon_sym_reference] = ACTIONS(191),
    [anon_sym_ref_list] = ACTIONS(191),
    [anon_sym_program] = ACTIONS(191),
    [anon_sym_ptr] = ACTIONS(191),
    [anon_sym_varfunc] = ACTIONS(191),
    [anon_sym_void] = ACTIONS(191),
    [anon_sym_proc] = ACTIONS(191),
    [anon_sym_type] = ACTIONS(191),
    [anon_sym_object] = ACTIONS(191),
    [anon_sym_expr] = ACTIONS(191),
    [anon_sym_bitset] = ACTIONS(191),
    [sym_NIL] = ACTIONS(191),
    [sym_empty] = ACTIONS(191),
    [sym_STD_NULL] = ACTIONS(191),
    [sym_forward] = ACTIONS(191),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_setof] = ACTIONS(189),
    [anon_sym_new] = ACTIONS(191),
    [anon_sym_sub] = ACTIONS(191),
    [anon_sym_PLUS] = ACTIONS(189),
    [anon_sym_DASH] = ACTIONS(189),
    [anon_sym_STAR] = ACTIONS(191),
    [anon_sym_SLASH] = ACTIONS(189),
    [anon_sym_and] = ACTIONS(191),
    [anon_sym_or] = ACTIONS(191),
    [anon_sym_parse] = ACTIONS(191),
    [anon_sym_rem] = ACTIONS(191),
    [anon_sym_div] = ACTIONS(191),
    [anon_sym_mdiv] = ACTIONS(191),
    [anon_sym_mod] = ACTIONS(191),
    [anon_sym_times] = ACTIONS(191),
    [anon_sym_DOT_DOT] = ACTIONS(189),
    [anon_sym_STAR_STAR] = ACTIONS(189),
    [anon_sym_not] = ACTIONS(191),
    [anon_sym_TRUE] = ACTIONS(191),
    [anon_sym_FALSE] = ACTIONS(191),
    [sym_variable] = ACTIONS(191),
    [sym__decimalLiteral] = ACTIONS(191),
    [sym__exponentialLiteral] = ACTIONS(189),
    [sym__negativeExponentialLiteral] = ACTIONS(191),
    [sym__hexLiteral] = ACTIONS(189),
    [sym__octalLiteral] = ACTIONS(189),
    [sym__binaryLiteral] = ACTIONS(189),
    [anon_sym_DQUOTE] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(189),
  },
  [26] = {
    [sym_line_comment] = STATE(26),
    [sym_block_comment] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(193),
    [anon_sym_DOLLAR] = ACTIONS(193),
    [anon_sym_include] = ACTIONS(195),
    [anon_sym_const] = ACTIONS(195),
    [anon_sym_var] = ACTIONS(195),
    [anon_sym_func] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(195),
    [anon_sym_COMMA] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(193),
    [anon_sym_array] = ACTIONS(195),
    [anon_sym_boolean] = ACTIONS(195),
    [anon_sym_integer] = ACTIONS(195),
    [anon_sym_bigInteger] = ACTIONS(195),
    [anon_sym_rational] = ACTIONS(195),
    [anon_sym_bigRational] = ACTIONS(195),
    [anon_sym_float] = ACTIONS(195),
    [anon_sym_complex] = ACTIONS(195),
    [anon_sym_char] = ACTIONS(195),
    [anon_sym_string] = ACTIONS(195),
    [anon_sym_hash] = ACTIONS(195),
    [anon_sym_set] = ACTIONS(195),
    [anon_sym_struct] = ACTIONS(195),
    [anon_sym_bin64] = ACTIONS(195),
    [anon_sym_bin32] = ACTIONS(195),
    [anon_sym_bstring] = ACTIONS(195),
    [anon_sym_color] = ACTIONS(195),
    [anon_sym_time] = ACTIONS(195),
    [anon_sym_duration] = ACTIONS(195),
    [anon_sym_file] = ACTIONS(195),
    [anon_sym_text] = ACTIONS(195),
    [anon_sym_fileSys] = ACTIONS(195),
    [anon_sym_process] = ACTIONS(195),
    [anon_sym_category] = ACTIONS(195),
    [anon_sym_reference] = ACTIONS(195),
    [anon_sym_ref_list] = ACTIONS(195),
    [anon_sym_program] = ACTIONS(195),
    [anon_sym_ptr] = ACTIONS(195),
    [anon_sym_varfunc] = ACTIONS(195),
    [anon_sym_void] = ACTIONS(195),
    [anon_sym_proc] = ACTIONS(195),
    [anon_sym_type] = ACTIONS(195),
    [anon_sym_object] = ACTIONS(195),
    [anon_sym_expr] = ACTIONS(195),
    [anon_sym_bitset] = ACTIONS(195),
    [sym_NIL] = ACTIONS(195),
    [sym_empty] = ACTIONS(195),
    [sym_STD_NULL] = ACTIONS(195),
    [sym_forward] = ACTIONS(195),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(193),
    [anon_sym_setof] = ACTIONS(193),
    [anon_sym_new] = ACTIONS(195),
    [anon_sym_sub] = ACTIONS(195),
    [anon_sym_PLUS] = ACTIONS(193),
    [anon_sym_DASH] = ACTIONS(193),
    [anon_sym_STAR] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(193),
    [anon_sym_and] = ACTIONS(195),
    [anon_sym_or] = ACTIONS(195),
    [anon_sym_parse] = ACTIONS(195),
    [anon_sym_rem] = ACTIONS(195),
    [anon_sym_div] = ACTIONS(195),
    [anon_sym_mdiv] = ACTIONS(195),
    [anon_sym_mod] = ACTIONS(195),
    [anon_sym_times] = ACTIONS(195),
    [anon_sym_DOT_DOT] = ACTIONS(193),
    [anon_sym_STAR_STAR] = ACTIONS(193),
    [anon_sym_not] = ACTIONS(195),
    [anon_sym_TRUE] = ACTIONS(195),
    [anon_sym_FALSE] = ACTIONS(195),
    [sym_variable] = ACTIONS(195),
    [sym__decimalLiteral] = ACTIONS(195),
    [sym__exponentialLiteral] = ACTIONS(193),
    [sym__negativeExponentialLiteral] = ACTIONS(195),
    [sym__hexLiteral] = ACTIONS(193),
    [sym__octalLiteral] = ACTIONS(193),
    [sym__binaryLiteral] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(193),
    [anon_sym_SQUOTE] = ACTIONS(193),
  },
  [27] = {
    [sym_line_comment] = STATE(27),
    [sym_block_comment] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(197),
    [anon_sym_DOLLAR] = ACTIONS(197),
    [anon_sym_include] = ACTIONS(199),
    [anon_sym_const] = ACTIONS(199),
    [anon_sym_var] = ACTIONS(199),
    [anon_sym_func] = ACTIONS(199),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_array] = ACTIONS(199),
    [anon_sym_boolean] = ACTIONS(199),
    [anon_sym_integer] = ACTIONS(199),
    [anon_sym_bigInteger] = ACTIONS(199),
    [anon_sym_rational] = ACTIONS(199),
    [anon_sym_bigRational] = ACTIONS(199),
    [anon_sym_float] = ACTIONS(199),
    [anon_sym_complex] = ACTIONS(199),
    [anon_sym_char] = ACTIONS(199),
    [anon_sym_string] = ACTIONS(199),
    [anon_sym_hash] = ACTIONS(199),
    [anon_sym_set] = ACTIONS(199),
    [anon_sym_struct] = ACTIONS(199),
    [anon_sym_bin64] = ACTIONS(199),
    [anon_sym_bin32] = ACTIONS(199),
    [anon_sym_bstring] = ACTIONS(199),
    [anon_sym_color] = ACTIONS(199),
    [anon_sym_time] = ACTIONS(199),
    [anon_sym_duration] = ACTIONS(199),
    [anon_sym_file] = ACTIONS(199),
    [anon_sym_text] = ACTIONS(199),
    [anon_sym_fileSys] = ACTIONS(199),
    [anon_sym_process] = ACTIONS(199),
    [anon_sym_category] = ACTIONS(199),
    [anon_sym_reference] = ACTIONS(199),
    [anon_sym_ref_list] = ACTIONS(199),
    [anon_sym_program] = ACTIONS(199),
    [anon_sym_ptr] = ACTIONS(199),
    [anon_sym_varfunc] = ACTIONS(199),
    [anon_sym_void] = ACTIONS(199),
    [anon_sym_proc] = ACTIONS(199),
    [anon_sym_type] = ACTIONS(199),
    [anon_sym_object] = ACTIONS(199),
    [anon_sym_expr] = ACTIONS(199),
    [anon_sym_bitset] = ACTIONS(199),
    [sym_NIL] = ACTIONS(199),
    [sym_empty] = ACTIONS(199),
    [sym_STD_NULL] = ACTIONS(199),
    [sym_forward] = ACTIONS(199),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(197),
    [anon_sym_setof] = ACTIONS(197),
    [anon_sym_new] = ACTIONS(199),
    [anon_sym_sub] = ACTIONS(199),
    [anon_sym_PLUS] = ACTIONS(197),
    [anon_sym_DASH] = ACTIONS(197),
    [anon_sym_STAR] = ACTIONS(199),
    [anon_sym_SLASH] = ACTIONS(197),
    [anon_sym_and] = ACTIONS(199),
    [anon_sym_or] = ACTIONS(199),
    [anon_sym_parse] = ACTIONS(199),
    [anon_sym_rem] = ACTIONS(199),
    [anon_sym_div] = ACTIONS(199),
    [anon_sym_mdiv] = ACTIONS(199),
    [anon_sym_mod] = ACTIONS(199),
    [anon_sym_times] = ACTIONS(199),
    [anon_sym_DOT_DOT] = ACTIONS(197),
    [anon_sym_STAR_STAR] = ACTIONS(197),
    [anon_sym_not] = ACTIONS(199),
    [anon_sym_TRUE] = ACTIONS(199),
    [anon_sym_FALSE] = ACTIONS(199),
    [sym_variable] = ACTIONS(199),
    [sym__decimalLiteral] = ACTIONS(199),
    [sym__exponentialLiteral] = ACTIONS(197),
    [sym__negativeExponentialLiteral] = ACTIONS(199),
    [sym__hexLiteral] = ACTIONS(197),
    [sym__octalLiteral] = ACTIONS(197),
    [sym__binaryLiteral] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym__] = ACTIONS(199),
    [anon_sym_SQUOTE] = ACTIONS(197),
  },
  [28] = {
    [sym_line_comment] = STATE(28),
    [sym_block_comment] = STATE(28),
    [sym_binary_operator] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(201),
    [anon_sym_DOLLAR] = ACTIONS(201),
    [anon_sym_include] = ACTIONS(203),
    [anon_sym_const] = ACTIONS(203),
    [anon_sym_var] = ACTIONS(203),
    [anon_sym_func] = ACTIONS(203),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_array] = ACTIONS(203),
    [anon_sym_boolean] = ACTIONS(203),
    [anon_sym_integer] = ACTIONS(203),
    [anon_sym_bigInteger] = ACTIONS(203),
    [anon_sym_rational] = ACTIONS(203),
    [anon_sym_bigRational] = ACTIONS(203),
    [anon_sym_float] = ACTIONS(203),
    [anon_sym_complex] = ACTIONS(203),
    [anon_sym_char] = ACTIONS(203),
    [anon_sym_string] = ACTIONS(203),
    [anon_sym_hash] = ACTIONS(203),
    [anon_sym_set] = ACTIONS(203),
    [anon_sym_struct] = ACTIONS(203),
    [anon_sym_bin64] = ACTIONS(203),
    [anon_sym_bin32] = ACTIONS(203),
    [anon_sym_bstring] = ACTIONS(203),
    [anon_sym_color] = ACTIONS(203),
    [anon_sym_time] = ACTIONS(203),
    [anon_sym_duration] = ACTIONS(203),
    [anon_sym_file] = ACTIONS(203),
    [anon_sym_text] = ACTIONS(203),
    [anon_sym_fileSys] = ACTIONS(203),
    [anon_sym_process] = ACTIONS(203),
    [anon_sym_category] = ACTIONS(203),
    [anon_sym_reference] = ACTIONS(203),
    [anon_sym_ref_list] = ACTIONS(203),
    [anon_sym_program] = ACTIONS(203),
    [anon_sym_ptr] = ACTIONS(203),
    [anon_sym_varfunc] = ACTIONS(203),
    [anon_sym_void] = ACTIONS(203),
    [anon_sym_proc] = ACTIONS(203),
    [anon_sym_type] = ACTIONS(203),
    [anon_sym_object] = ACTIONS(203),
    [anon_sym_expr] = ACTIONS(203),
    [anon_sym_bitset] = ACTIONS(203),
    [sym_NIL] = ACTIONS(203),
    [sym_empty] = ACTIONS(203),
    [sym_STD_NULL] = ACTIONS(203),
    [sym_forward] = ACTIONS(203),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(201),
    [anon_sym_setof] = ACTIONS(201),
    [anon_sym_new] = ACTIONS(203),
    [anon_sym_sub] = ACTIONS(203),
    [anon_sym_PLUS] = ACTIONS(201),
    [anon_sym_DASH] = ACTIONS(201),
    [anon_sym_STAR] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(201),
    [anon_sym_and] = ACTIONS(203),
    [anon_sym_or] = ACTIONS(203),
    [anon_sym_parse] = ACTIONS(203),
    [anon_sym_rem] = ACTIONS(203),
    [anon_sym_div] = ACTIONS(203),
    [anon_sym_mdiv] = ACTIONS(203),
    [anon_sym_mod] = ACTIONS(203),
    [anon_sym_times] = ACTIONS(203),
    [anon_sym_DOT_DOT] = ACTIONS(201),
    [anon_sym_STAR_STAR] = ACTIONS(201),
    [anon_sym_not] = ACTIONS(203),
    [anon_sym_TRUE] = ACTIONS(203),
    [anon_sym_FALSE] = ACTIONS(203),
    [sym_variable] = ACTIONS(203),
    [sym__decimalLiteral] = ACTIONS(203),
    [sym__exponentialLiteral] = ACTIONS(201),
    [sym__negativeExponentialLiteral] = ACTIONS(203),
    [sym__hexLiteral] = ACTIONS(201),
    [sym__octalLiteral] = ACTIONS(201),
    [sym__binaryLiteral] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(201),
  },
  [29] = {
    [sym_line_comment] = STATE(29),
    [sym_block_comment] = STATE(29),
    [sym_cast] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(205),
    [anon_sym_DOLLAR] = ACTIONS(205),
    [anon_sym_include] = ACTIONS(207),
    [anon_sym_const] = ACTIONS(207),
    [anon_sym_var] = ACTIONS(207),
    [anon_sym_func] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(207),
    [anon_sym_array] = ACTIONS(207),
    [anon_sym_boolean] = ACTIONS(207),
    [anon_sym_integer] = ACTIONS(207),
    [anon_sym_bigInteger] = ACTIONS(207),
    [anon_sym_rational] = ACTIONS(207),
    [anon_sym_bigRational] = ACTIONS(207),
    [anon_sym_float] = ACTIONS(207),
    [anon_sym_complex] = ACTIONS(207),
    [anon_sym_char] = ACTIONS(207),
    [anon_sym_string] = ACTIONS(207),
    [anon_sym_hash] = ACTIONS(207),
    [anon_sym_set] = ACTIONS(207),
    [anon_sym_struct] = ACTIONS(207),
    [anon_sym_bin64] = ACTIONS(207),
    [anon_sym_bin32] = ACTIONS(207),
    [anon_sym_bstring] = ACTIONS(207),
    [anon_sym_color] = ACTIONS(207),
    [anon_sym_time] = ACTIONS(207),
    [anon_sym_duration] = ACTIONS(207),
    [anon_sym_file] = ACTIONS(207),
    [anon_sym_text] = ACTIONS(207),
    [anon_sym_fileSys] = ACTIONS(207),
    [anon_sym_process] = ACTIONS(207),
    [anon_sym_category] = ACTIONS(207),
    [anon_sym_reference] = ACTIONS(207),
    [anon_sym_ref_list] = ACTIONS(207),
    [anon_sym_program] = ACTIONS(207),
    [anon_sym_ptr] = ACTIONS(207),
    [anon_sym_varfunc] = ACTIONS(207),
    [anon_sym_void] = ACTIONS(207),
    [anon_sym_proc] = ACTIONS(207),
    [anon_sym_type] = ACTIONS(207),
    [anon_sym_object] = ACTIONS(207),
    [anon_sym_expr] = ACTIONS(207),
    [anon_sym_bitset] = ACTIONS(207),
    [sym_NIL] = ACTIONS(207),
    [sym_empty] = ACTIONS(207),
    [sym_STD_NULL] = ACTIONS(207),
    [sym_forward] = ACTIONS(207),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_setof] = ACTIONS(205),
    [anon_sym_new] = ACTIONS(207),
    [anon_sym_sub] = ACTIONS(207),
    [anon_sym_PLUS] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(205),
    [anon_sym_STAR] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(205),
    [anon_sym_and] = ACTIONS(207),
    [anon_sym_or] = ACTIONS(207),
    [anon_sym_parse] = ACTIONS(207),
    [anon_sym_rem] = ACTIONS(207),
    [anon_sym_div] = ACTIONS(207),
    [anon_sym_mdiv] = ACTIONS(207),
    [anon_sym_mod] = ACTIONS(207),
    [anon_sym_times] = ACTIONS(207),
    [anon_sym_DOT_DOT] = ACTIONS(205),
    [anon_sym_STAR_STAR] = ACTIONS(205),
    [anon_sym_not] = ACTIONS(207),
    [anon_sym_TRUE] = ACTIONS(207),
    [anon_sym_FALSE] = ACTIONS(207),
    [sym_variable] = ACTIONS(207),
    [sym__decimalLiteral] = ACTIONS(207),
    [sym__exponentialLiteral] = ACTIONS(205),
    [sym__negativeExponentialLiteral] = ACTIONS(207),
    [sym__hexLiteral] = ACTIONS(205),
    [sym__octalLiteral] = ACTIONS(205),
    [sym__binaryLiteral] = ACTIONS(205),
    [anon_sym_DQUOTE] = ACTIONS(205),
    [anon_sym_SQUOTE] = ACTIONS(205),
  },
  [30] = {
    [sym_line_comment] = STATE(30),
    [sym_block_comment] = STATE(30),
    [sym_binary_operator] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(209),
    [anon_sym_DOLLAR] = ACTIONS(209),
    [anon_sym_include] = ACTIONS(211),
    [anon_sym_const] = ACTIONS(211),
    [anon_sym_var] = ACTIONS(211),
    [anon_sym_func] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_array] = ACTIONS(211),
    [anon_sym_boolean] = ACTIONS(211),
    [anon_sym_integer] = ACTIONS(211),
    [anon_sym_bigInteger] = ACTIONS(211),
    [anon_sym_rational] = ACTIONS(211),
    [anon_sym_bigRational] = ACTIONS(211),
    [anon_sym_float] = ACTIONS(211),
    [anon_sym_complex] = ACTIONS(211),
    [anon_sym_char] = ACTIONS(211),
    [anon_sym_string] = ACTIONS(211),
    [anon_sym_hash] = ACTIONS(211),
    [anon_sym_set] = ACTIONS(211),
    [anon_sym_struct] = ACTIONS(211),
    [anon_sym_bin64] = ACTIONS(211),
    [anon_sym_bin32] = ACTIONS(211),
    [anon_sym_bstring] = ACTIONS(211),
    [anon_sym_color] = ACTIONS(211),
    [anon_sym_time] = ACTIONS(211),
    [anon_sym_duration] = ACTIONS(211),
    [anon_sym_file] = ACTIONS(211),
    [anon_sym_text] = ACTIONS(211),
    [anon_sym_fileSys] = ACTIONS(211),
    [anon_sym_process] = ACTIONS(211),
    [anon_sym_category] = ACTIONS(211),
    [anon_sym_reference] = ACTIONS(211),
    [anon_sym_ref_list] = ACTIONS(211),
    [anon_sym_program] = ACTIONS(211),
    [anon_sym_ptr] = ACTIONS(211),
    [anon_sym_varfunc] = ACTIONS(211),
    [anon_sym_void] = ACTIONS(211),
    [anon_sym_proc] = ACTIONS(211),
    [anon_sym_type] = ACTIONS(211),
    [anon_sym_object] = ACTIONS(211),
    [anon_sym_expr] = ACTIONS(211),
    [anon_sym_bitset] = ACTIONS(211),
    [sym_NIL] = ACTIONS(211),
    [sym_empty] = ACTIONS(211),
    [sym_STD_NULL] = ACTIONS(211),
    [sym_forward] = ACTIONS(211),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_setof] = ACTIONS(209),
    [anon_sym_new] = ACTIONS(211),
    [anon_sym_sub] = ACTIONS(211),
    [anon_sym_PLUS] = ACTIONS(209),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_and] = ACTIONS(211),
    [anon_sym_or] = ACTIONS(211),
    [anon_sym_parse] = ACTIONS(211),
    [anon_sym_rem] = ACTIONS(211),
    [anon_sym_div] = ACTIONS(211),
    [anon_sym_mdiv] = ACTIONS(211),
    [anon_sym_mod] = ACTIONS(211),
    [anon_sym_times] = ACTIONS(211),
    [anon_sym_DOT_DOT] = ACTIONS(209),
    [anon_sym_STAR_STAR] = ACTIONS(209),
    [anon_sym_not] = ACTIONS(211),
    [anon_sym_TRUE] = ACTIONS(211),
    [anon_sym_FALSE] = ACTIONS(211),
    [sym_variable] = ACTIONS(211),
    [sym__decimalLiteral] = ACTIONS(211),
    [sym__exponentialLiteral] = ACTIONS(209),
    [sym__negativeExponentialLiteral] = ACTIONS(211),
    [sym__hexLiteral] = ACTIONS(209),
    [sym__octalLiteral] = ACTIONS(209),
    [sym__binaryLiteral] = ACTIONS(209),
    [anon_sym_DQUOTE] = ACTIONS(209),
    [anon_sym_SQUOTE] = ACTIONS(209),
  },
  [31] = {
    [sym_line_comment] = STATE(31),
    [sym_block_comment] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_DOLLAR] = ACTIONS(175),
    [anon_sym_include] = ACTIONS(177),
    [anon_sym_const] = ACTIONS(177),
    [anon_sym_var] = ACTIONS(177),
    [anon_sym_func] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_array] = ACTIONS(177),
    [anon_sym_boolean] = ACTIONS(177),
    [anon_sym_integer] = ACTIONS(177),
    [anon_sym_bigInteger] = ACTIONS(177),
    [anon_sym_rational] = ACTIONS(177),
    [anon_sym_bigRational] = ACTIONS(177),
    [anon_sym_float] = ACTIONS(177),
    [anon_sym_complex] = ACTIONS(177),
    [anon_sym_char] = ACTIONS(177),
    [anon_sym_string] = ACTIONS(177),
    [anon_sym_hash] = ACTIONS(177),
    [anon_sym_set] = ACTIONS(177),
    [anon_sym_struct] = ACTIONS(177),
    [anon_sym_bin64] = ACTIONS(177),
    [anon_sym_bin32] = ACTIONS(177),
    [anon_sym_bstring] = ACTIONS(177),
    [anon_sym_color] = ACTIONS(177),
    [anon_sym_time] = ACTIONS(177),
    [anon_sym_duration] = ACTIONS(177),
    [anon_sym_file] = ACTIONS(177),
    [anon_sym_text] = ACTIONS(177),
    [anon_sym_fileSys] = ACTIONS(177),
    [anon_sym_process] = ACTIONS(177),
    [anon_sym_category] = ACTIONS(177),
    [anon_sym_reference] = ACTIONS(177),
    [anon_sym_ref_list] = ACTIONS(177),
    [anon_sym_program] = ACTIONS(177),
    [anon_sym_ptr] = ACTIONS(177),
    [anon_sym_varfunc] = ACTIONS(177),
    [anon_sym_void] = ACTIONS(177),
    [anon_sym_proc] = ACTIONS(177),
    [anon_sym_type] = ACTIONS(177),
    [anon_sym_object] = ACTIONS(177),
    [anon_sym_expr] = ACTIONS(177),
    [anon_sym_bitset] = ACTIONS(177),
    [sym_NIL] = ACTIONS(177),
    [sym_empty] = ACTIONS(177),
    [sym_STD_NULL] = ACTIONS(177),
    [sym_forward] = ACTIONS(177),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(175),
    [anon_sym_setof] = ACTIONS(175),
    [anon_sym_new] = ACTIONS(177),
    [anon_sym_sub] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(175),
    [anon_sym_DASH] = ACTIONS(175),
    [anon_sym_STAR] = ACTIONS(177),
    [anon_sym_SLASH] = ACTIONS(175),
    [anon_sym_and] = ACTIONS(177),
    [anon_sym_or] = ACTIONS(177),
    [anon_sym_parse] = ACTIONS(177),
    [anon_sym_rem] = ACTIONS(177),
    [anon_sym_div] = ACTIONS(177),
    [anon_sym_mdiv] = ACTIONS(177),
    [anon_sym_mod] = ACTIONS(177),
    [anon_sym_times] = ACTIONS(177),
    [anon_sym_DOT_DOT] = ACTIONS(175),
    [anon_sym_STAR_STAR] = ACTIONS(175),
    [anon_sym_not] = ACTIONS(177),
    [anon_sym_TRUE] = ACTIONS(177),
    [anon_sym_FALSE] = ACTIONS(177),
    [sym_variable] = ACTIONS(177),
    [sym__decimalLiteral] = ACTIONS(177),
    [sym__exponentialLiteral] = ACTIONS(175),
    [sym__negativeExponentialLiteral] = ACTIONS(177),
    [sym__hexLiteral] = ACTIONS(175),
    [sym__octalLiteral] = ACTIONS(175),
    [sym__binaryLiteral] = ACTIONS(175),
    [anon_sym_DQUOTE] = ACTIONS(175),
    [anon_sym__] = ACTIONS(177),
    [anon_sym_SQUOTE] = ACTIONS(175),
  },
  [32] = {
    [sym_line_comment] = STATE(32),
    [sym_block_comment] = STATE(32),
    [sym_binary_operator] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(213),
    [anon_sym_DOLLAR] = ACTIONS(213),
    [anon_sym_include] = ACTIONS(215),
    [anon_sym_const] = ACTIONS(215),
    [anon_sym_var] = ACTIONS(215),
    [anon_sym_func] = ACTIONS(215),
    [anon_sym_LPAREN] = ACTIONS(215),
    [anon_sym_array] = ACTIONS(215),
    [anon_sym_boolean] = ACTIONS(215),
    [anon_sym_integer] = ACTIONS(215),
    [anon_sym_bigInteger] = ACTIONS(215),
    [anon_sym_rational] = ACTIONS(215),
    [anon_sym_bigRational] = ACTIONS(215),
    [anon_sym_float] = ACTIONS(215),
    [anon_sym_complex] = ACTIONS(215),
    [anon_sym_char] = ACTIONS(215),
    [anon_sym_string] = ACTIONS(215),
    [anon_sym_hash] = ACTIONS(215),
    [anon_sym_set] = ACTIONS(215),
    [anon_sym_struct] = ACTIONS(215),
    [anon_sym_bin64] = ACTIONS(215),
    [anon_sym_bin32] = ACTIONS(215),
    [anon_sym_bstring] = ACTIONS(215),
    [anon_sym_color] = ACTIONS(215),
    [anon_sym_time] = ACTIONS(215),
    [anon_sym_duration] = ACTIONS(215),
    [anon_sym_file] = ACTIONS(215),
    [anon_sym_text] = ACTIONS(215),
    [anon_sym_fileSys] = ACTIONS(215),
    [anon_sym_process] = ACTIONS(215),
    [anon_sym_category] = ACTIONS(215),
    [anon_sym_reference] = ACTIONS(215),
    [anon_sym_ref_list] = ACTIONS(215),
    [anon_sym_program] = ACTIONS(215),
    [anon_sym_ptr] = ACTIONS(215),
    [anon_sym_varfunc] = ACTIONS(215),
    [anon_sym_void] = ACTIONS(215),
    [anon_sym_proc] = ACTIONS(215),
    [anon_sym_type] = ACTIONS(215),
    [anon_sym_object] = ACTIONS(215),
    [anon_sym_expr] = ACTIONS(215),
    [anon_sym_bitset] = ACTIONS(215),
    [sym_NIL] = ACTIONS(215),
    [sym_empty] = ACTIONS(215),
    [sym_STD_NULL] = ACTIONS(215),
    [sym_forward] = ACTIONS(215),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(213),
    [anon_sym_setof] = ACTIONS(213),
    [anon_sym_new] = ACTIONS(215),
    [anon_sym_sub] = ACTIONS(215),
    [anon_sym_PLUS] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(219),
    [anon_sym_SLASH] = ACTIONS(217),
    [anon_sym_and] = ACTIONS(219),
    [anon_sym_or] = ACTIONS(219),
    [anon_sym_parse] = ACTIONS(219),
    [anon_sym_rem] = ACTIONS(219),
    [anon_sym_div] = ACTIONS(219),
    [anon_sym_mdiv] = ACTIONS(219),
    [anon_sym_mod] = ACTIONS(219),
    [anon_sym_times] = ACTIONS(219),
    [anon_sym_DOT_DOT] = ACTIONS(217),
    [anon_sym_STAR_STAR] = ACTIONS(217),
    [anon_sym_not] = ACTIONS(215),
    [anon_sym_TRUE] = ACTIONS(215),
    [anon_sym_FALSE] = ACTIONS(215),
    [sym_variable] = ACTIONS(215),
    [sym__decimalLiteral] = ACTIONS(215),
    [sym__exponentialLiteral] = ACTIONS(213),
    [sym__negativeExponentialLiteral] = ACTIONS(215),
    [sym__hexLiteral] = ACTIONS(213),
    [sym__octalLiteral] = ACTIONS(213),
    [sym__binaryLiteral] = ACTIONS(213),
    [anon_sym_DQUOTE] = ACTIONS(213),
    [anon_sym_SQUOTE] = ACTIONS(213),
  },
  [33] = {
    [sym_line_comment] = STATE(33),
    [sym_block_comment] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(221),
    [anon_sym_DOLLAR] = ACTIONS(221),
    [anon_sym_include] = ACTIONS(223),
    [anon_sym_const] = ACTIONS(223),
    [anon_sym_var] = ACTIONS(223),
    [anon_sym_func] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_array] = ACTIONS(223),
    [anon_sym_boolean] = ACTIONS(223),
    [anon_sym_integer] = ACTIONS(223),
    [anon_sym_bigInteger] = ACTIONS(223),
    [anon_sym_rational] = ACTIONS(223),
    [anon_sym_bigRational] = ACTIONS(223),
    [anon_sym_float] = ACTIONS(223),
    [anon_sym_complex] = ACTIONS(223),
    [anon_sym_char] = ACTIONS(223),
    [anon_sym_string] = ACTIONS(223),
    [anon_sym_hash] = ACTIONS(223),
    [anon_sym_set] = ACTIONS(223),
    [anon_sym_struct] = ACTIONS(223),
    [anon_sym_bin64] = ACTIONS(223),
    [anon_sym_bin32] = ACTIONS(223),
    [anon_sym_bstring] = ACTIONS(223),
    [anon_sym_color] = ACTIONS(223),
    [anon_sym_time] = ACTIONS(223),
    [anon_sym_duration] = ACTIONS(223),
    [anon_sym_file] = ACTIONS(223),
    [anon_sym_text] = ACTIONS(223),
    [anon_sym_fileSys] = ACTIONS(223),
    [anon_sym_process] = ACTIONS(223),
    [anon_sym_category] = ACTIONS(223),
    [anon_sym_reference] = ACTIONS(223),
    [anon_sym_ref_list] = ACTIONS(223),
    [anon_sym_program] = ACTIONS(223),
    [anon_sym_ptr] = ACTIONS(223),
    [anon_sym_varfunc] = ACTIONS(223),
    [anon_sym_void] = ACTIONS(223),
    [anon_sym_proc] = ACTIONS(223),
    [anon_sym_type] = ACTIONS(223),
    [anon_sym_object] = ACTIONS(223),
    [anon_sym_expr] = ACTIONS(223),
    [anon_sym_bitset] = ACTIONS(223),
    [sym_NIL] = ACTIONS(223),
    [sym_empty] = ACTIONS(223),
    [sym_STD_NULL] = ACTIONS(223),
    [sym_forward] = ACTIONS(223),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(221),
    [anon_sym_setof] = ACTIONS(221),
    [anon_sym_new] = ACTIONS(223),
    [anon_sym_sub] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(221),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(221),
    [anon_sym_and] = ACTIONS(223),
    [anon_sym_or] = ACTIONS(223),
    [anon_sym_parse] = ACTIONS(223),
    [anon_sym_rem] = ACTIONS(223),
    [anon_sym_div] = ACTIONS(223),
    [anon_sym_mdiv] = ACTIONS(223),
    [anon_sym_mod] = ACTIONS(223),
    [anon_sym_times] = ACTIONS(223),
    [anon_sym_DOT_DOT] = ACTIONS(221),
    [anon_sym_STAR_STAR] = ACTIONS(221),
    [anon_sym_not] = ACTIONS(223),
    [anon_sym_TRUE] = ACTIONS(223),
    [anon_sym_FALSE] = ACTIONS(223),
    [sym_variable] = ACTIONS(223),
    [sym__decimalLiteral] = ACTIONS(223),
    [sym__exponentialLiteral] = ACTIONS(221),
    [sym__negativeExponentialLiteral] = ACTIONS(223),
    [sym__hexLiteral] = ACTIONS(221),
    [sym__octalLiteral] = ACTIONS(221),
    [sym__binaryLiteral] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(221),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_SQUOTE] = ACTIONS(221),
  },
  [34] = {
    [sym_line_comment] = STATE(34),
    [sym_block_comment] = STATE(34),
    [sym_cast] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(205),
    [anon_sym_DOLLAR] = ACTIONS(205),
    [anon_sym_include] = ACTIONS(207),
    [anon_sym_const] = ACTIONS(207),
    [anon_sym_var] = ACTIONS(207),
    [anon_sym_func] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(227),
    [anon_sym_array] = ACTIONS(207),
    [anon_sym_boolean] = ACTIONS(207),
    [anon_sym_integer] = ACTIONS(207),
    [anon_sym_bigInteger] = ACTIONS(207),
    [anon_sym_rational] = ACTIONS(207),
    [anon_sym_bigRational] = ACTIONS(207),
    [anon_sym_float] = ACTIONS(207),
    [anon_sym_complex] = ACTIONS(207),
    [anon_sym_char] = ACTIONS(207),
    [anon_sym_string] = ACTIONS(207),
    [anon_sym_hash] = ACTIONS(207),
    [anon_sym_set] = ACTIONS(207),
    [anon_sym_struct] = ACTIONS(207),
    [anon_sym_bin64] = ACTIONS(207),
    [anon_sym_bin32] = ACTIONS(207),
    [anon_sym_bstring] = ACTIONS(207),
    [anon_sym_color] = ACTIONS(207),
    [anon_sym_time] = ACTIONS(207),
    [anon_sym_duration] = ACTIONS(207),
    [anon_sym_file] = ACTIONS(207),
    [anon_sym_text] = ACTIONS(207),
    [anon_sym_fileSys] = ACTIONS(207),
    [anon_sym_process] = ACTIONS(207),
    [anon_sym_category] = ACTIONS(207),
    [anon_sym_reference] = ACTIONS(207),
    [anon_sym_ref_list] = ACTIONS(207),
    [anon_sym_program] = ACTIONS(207),
    [anon_sym_ptr] = ACTIONS(207),
    [anon_sym_varfunc] = ACTIONS(207),
    [anon_sym_void] = ACTIONS(207),
    [anon_sym_proc] = ACTIONS(207),
    [anon_sym_type] = ACTIONS(207),
    [anon_sym_object] = ACTIONS(207),
    [anon_sym_expr] = ACTIONS(207),
    [anon_sym_bitset] = ACTIONS(207),
    [sym_NIL] = ACTIONS(207),
    [sym_empty] = ACTIONS(207),
    [sym_STD_NULL] = ACTIONS(207),
    [sym_forward] = ACTIONS(207),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_setof] = ACTIONS(205),
    [anon_sym_new] = ACTIONS(207),
    [anon_sym_sub] = ACTIONS(207),
    [anon_sym_PLUS] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(205),
    [anon_sym_STAR] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(205),
    [anon_sym_and] = ACTIONS(207),
    [anon_sym_or] = ACTIONS(207),
    [anon_sym_parse] = ACTIONS(207),
    [anon_sym_rem] = ACTIONS(207),
    [anon_sym_div] = ACTIONS(207),
    [anon_sym_mdiv] = ACTIONS(207),
    [anon_sym_mod] = ACTIONS(207),
    [anon_sym_times] = ACTIONS(207),
    [anon_sym_DOT_DOT] = ACTIONS(205),
    [anon_sym_STAR_STAR] = ACTIONS(205),
    [anon_sym_not] = ACTIONS(207),
    [anon_sym_TRUE] = ACTIONS(207),
    [anon_sym_FALSE] = ACTIONS(207),
    [sym_variable] = ACTIONS(207),
    [sym__decimalLiteral] = ACTIONS(207),
    [sym__exponentialLiteral] = ACTIONS(205),
    [sym__negativeExponentialLiteral] = ACTIONS(207),
    [sym__hexLiteral] = ACTIONS(205),
    [sym__octalLiteral] = ACTIONS(205),
    [sym__binaryLiteral] = ACTIONS(205),
    [anon_sym_DQUOTE] = ACTIONS(205),
    [anon_sym_SQUOTE] = ACTIONS(205),
  },
  [35] = {
    [sym_line_comment] = STATE(35),
    [sym_block_comment] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(229),
    [anon_sym_DOLLAR] = ACTIONS(229),
    [anon_sym_include] = ACTIONS(231),
    [anon_sym_const] = ACTIONS(231),
    [anon_sym_var] = ACTIONS(231),
    [anon_sym_func] = ACTIONS(231),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_array] = ACTIONS(231),
    [anon_sym_boolean] = ACTIONS(231),
    [anon_sym_integer] = ACTIONS(231),
    [anon_sym_bigInteger] = ACTIONS(231),
    [anon_sym_rational] = ACTIONS(231),
    [anon_sym_bigRational] = ACTIONS(231),
    [anon_sym_float] = ACTIONS(231),
    [anon_sym_complex] = ACTIONS(231),
    [anon_sym_char] = ACTIONS(231),
    [anon_sym_string] = ACTIONS(231),
    [anon_sym_hash] = ACTIONS(231),
    [anon_sym_set] = ACTIONS(231),
    [anon_sym_struct] = ACTIONS(231),
    [anon_sym_bin64] = ACTIONS(231),
    [anon_sym_bin32] = ACTIONS(231),
    [anon_sym_bstring] = ACTIONS(231),
    [anon_sym_color] = ACTIONS(231),
    [anon_sym_time] = ACTIONS(231),
    [anon_sym_duration] = ACTIONS(231),
    [anon_sym_file] = ACTIONS(231),
    [anon_sym_text] = ACTIONS(231),
    [anon_sym_fileSys] = ACTIONS(231),
    [anon_sym_process] = ACTIONS(231),
    [anon_sym_category] = ACTIONS(231),
    [anon_sym_reference] = ACTIONS(231),
    [anon_sym_ref_list] = ACTIONS(231),
    [anon_sym_program] = ACTIONS(231),
    [anon_sym_ptr] = ACTIONS(231),
    [anon_sym_varfunc] = ACTIONS(231),
    [anon_sym_void] = ACTIONS(231),
    [anon_sym_proc] = ACTIONS(231),
    [anon_sym_type] = ACTIONS(231),
    [anon_sym_object] = ACTIONS(231),
    [anon_sym_expr] = ACTIONS(231),
    [anon_sym_bitset] = ACTIONS(231),
    [sym_NIL] = ACTIONS(231),
    [sym_empty] = ACTIONS(231),
    [sym_STD_NULL] = ACTIONS(231),
    [sym_forward] = ACTIONS(231),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(229),
    [anon_sym_setof] = ACTIONS(229),
    [anon_sym_new] = ACTIONS(231),
    [anon_sym_sub] = ACTIONS(231),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym_STAR] = ACTIONS(231),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_and] = ACTIONS(231),
    [anon_sym_or] = ACTIONS(231),
    [anon_sym_parse] = ACTIONS(231),
    [anon_sym_rem] = ACTIONS(231),
    [anon_sym_div] = ACTIONS(231),
    [anon_sym_mdiv] = ACTIONS(231),
    [anon_sym_mod] = ACTIONS(231),
    [anon_sym_times] = ACTIONS(231),
    [anon_sym_DOT_DOT] = ACTIONS(229),
    [anon_sym_STAR_STAR] = ACTIONS(229),
    [anon_sym_not] = ACTIONS(231),
    [anon_sym_TRUE] = ACTIONS(231),
    [anon_sym_FALSE] = ACTIONS(231),
    [sym_variable] = ACTIONS(231),
    [sym__decimalLiteral] = ACTIONS(231),
    [sym__exponentialLiteral] = ACTIONS(229),
    [sym__negativeExponentialLiteral] = ACTIONS(231),
    [sym__hexLiteral] = ACTIONS(229),
    [sym__octalLiteral] = ACTIONS(229),
    [sym__binaryLiteral] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE] = ACTIONS(229),
  },
  [36] = {
    [sym_line_comment] = STATE(36),
    [sym_block_comment] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(233),
    [anon_sym_DOLLAR] = ACTIONS(233),
    [anon_sym_include] = ACTIONS(235),
    [anon_sym_const] = ACTIONS(235),
    [anon_sym_var] = ACTIONS(235),
    [anon_sym_func] = ACTIONS(235),
    [anon_sym_LPAREN] = ACTIONS(235),
    [anon_sym_array] = ACTIONS(235),
    [anon_sym_boolean] = ACTIONS(235),
    [anon_sym_integer] = ACTIONS(235),
    [anon_sym_bigInteger] = ACTIONS(235),
    [anon_sym_rational] = ACTIONS(235),
    [anon_sym_bigRational] = ACTIONS(235),
    [anon_sym_float] = ACTIONS(235),
    [anon_sym_complex] = ACTIONS(235),
    [anon_sym_char] = ACTIONS(235),
    [anon_sym_string] = ACTIONS(235),
    [anon_sym_hash] = ACTIONS(235),
    [anon_sym_set] = ACTIONS(235),
    [anon_sym_struct] = ACTIONS(235),
    [anon_sym_bin64] = ACTIONS(235),
    [anon_sym_bin32] = ACTIONS(235),
    [anon_sym_bstring] = ACTIONS(235),
    [anon_sym_color] = ACTIONS(235),
    [anon_sym_time] = ACTIONS(235),
    [anon_sym_duration] = ACTIONS(235),
    [anon_sym_file] = ACTIONS(235),
    [anon_sym_text] = ACTIONS(235),
    [anon_sym_fileSys] = ACTIONS(235),
    [anon_sym_process] = ACTIONS(235),
    [anon_sym_category] = ACTIONS(235),
    [anon_sym_reference] = ACTIONS(235),
    [anon_sym_ref_list] = ACTIONS(235),
    [anon_sym_program] = ACTIONS(235),
    [anon_sym_ptr] = ACTIONS(235),
    [anon_sym_varfunc] = ACTIONS(235),
    [anon_sym_void] = ACTIONS(235),
    [anon_sym_proc] = ACTIONS(235),
    [anon_sym_type] = ACTIONS(235),
    [anon_sym_object] = ACTIONS(235),
    [anon_sym_expr] = ACTIONS(235),
    [anon_sym_bitset] = ACTIONS(235),
    [sym_NIL] = ACTIONS(235),
    [sym_empty] = ACTIONS(235),
    [sym_STD_NULL] = ACTIONS(235),
    [sym_forward] = ACTIONS(235),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(233),
    [anon_sym_setof] = ACTIONS(233),
    [anon_sym_new] = ACTIONS(235),
    [anon_sym_sub] = ACTIONS(235),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym_STAR] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_parse] = ACTIONS(235),
    [anon_sym_rem] = ACTIONS(235),
    [anon_sym_div] = ACTIONS(235),
    [anon_sym_mdiv] = ACTIONS(235),
    [anon_sym_mod] = ACTIONS(235),
    [anon_sym_times] = ACTIONS(235),
    [anon_sym_DOT_DOT] = ACTIONS(233),
    [anon_sym_STAR_STAR] = ACTIONS(233),
    [anon_sym_not] = ACTIONS(235),
    [anon_sym_TRUE] = ACTIONS(235),
    [anon_sym_FALSE] = ACTIONS(235),
    [sym_variable] = ACTIONS(235),
    [sym__decimalLiteral] = ACTIONS(235),
    [sym__exponentialLiteral] = ACTIONS(233),
    [sym__negativeExponentialLiteral] = ACTIONS(235),
    [sym__hexLiteral] = ACTIONS(233),
    [sym__octalLiteral] = ACTIONS(233),
    [sym__binaryLiteral] = ACTIONS(233),
    [anon_sym_DQUOTE] = ACTIONS(233),
    [anon_sym_SQUOTE] = ACTIONS(233),
  },
  [37] = {
    [sym_line_comment] = STATE(37),
    [sym_block_comment] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(237),
    [anon_sym_DOLLAR] = ACTIONS(237),
    [anon_sym_include] = ACTIONS(239),
    [anon_sym_const] = ACTIONS(239),
    [anon_sym_var] = ACTIONS(239),
    [anon_sym_func] = ACTIONS(239),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_array] = ACTIONS(239),
    [anon_sym_boolean] = ACTIONS(239),
    [anon_sym_integer] = ACTIONS(239),
    [anon_sym_bigInteger] = ACTIONS(239),
    [anon_sym_rational] = ACTIONS(239),
    [anon_sym_bigRational] = ACTIONS(239),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_complex] = ACTIONS(239),
    [anon_sym_char] = ACTIONS(239),
    [anon_sym_string] = ACTIONS(239),
    [anon_sym_hash] = ACTIONS(239),
    [anon_sym_set] = ACTIONS(239),
    [anon_sym_struct] = ACTIONS(239),
    [anon_sym_bin64] = ACTIONS(239),
    [anon_sym_bin32] = ACTIONS(239),
    [anon_sym_bstring] = ACTIONS(239),
    [anon_sym_color] = ACTIONS(239),
    [anon_sym_time] = ACTIONS(239),
    [anon_sym_duration] = ACTIONS(239),
    [anon_sym_file] = ACTIONS(239),
    [anon_sym_text] = ACTIONS(239),
    [anon_sym_fileSys] = ACTIONS(239),
    [anon_sym_process] = ACTIONS(239),
    [anon_sym_category] = ACTIONS(239),
    [anon_sym_reference] = ACTIONS(239),
    [anon_sym_ref_list] = ACTIONS(239),
    [anon_sym_program] = ACTIONS(239),
    [anon_sym_ptr] = ACTIONS(239),
    [anon_sym_varfunc] = ACTIONS(239),
    [anon_sym_void] = ACTIONS(239),
    [anon_sym_proc] = ACTIONS(239),
    [anon_sym_type] = ACTIONS(239),
    [anon_sym_object] = ACTIONS(239),
    [anon_sym_expr] = ACTIONS(239),
    [anon_sym_bitset] = ACTIONS(239),
    [sym_NIL] = ACTIONS(239),
    [sym_empty] = ACTIONS(239),
    [sym_STD_NULL] = ACTIONS(239),
    [sym_forward] = ACTIONS(239),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(237),
    [anon_sym_setof] = ACTIONS(237),
    [anon_sym_new] = ACTIONS(239),
    [anon_sym_sub] = ACTIONS(239),
    [anon_sym_PLUS] = ACTIONS(237),
    [anon_sym_DASH] = ACTIONS(237),
    [anon_sym_STAR] = ACTIONS(239),
    [anon_sym_SLASH] = ACTIONS(237),
    [anon_sym_and] = ACTIONS(239),
    [anon_sym_or] = ACTIONS(239),
    [anon_sym_parse] = ACTIONS(239),
    [anon_sym_rem] = ACTIONS(239),
    [anon_sym_div] = ACTIONS(239),
    [anon_sym_mdiv] = ACTIONS(239),
    [anon_sym_mod] = ACTIONS(239),
    [anon_sym_times] = ACTIONS(239),
    [anon_sym_DOT_DOT] = ACTIONS(237),
    [anon_sym_STAR_STAR] = ACTIONS(237),
    [anon_sym_not] = ACTIONS(239),
    [anon_sym_TRUE] = ACTIONS(239),
    [anon_sym_FALSE] = ACTIONS(239),
    [sym_variable] = ACTIONS(239),
    [sym__decimalLiteral] = ACTIONS(239),
    [sym__exponentialLiteral] = ACTIONS(237),
    [sym__negativeExponentialLiteral] = ACTIONS(239),
    [sym__hexLiteral] = ACTIONS(237),
    [sym__octalLiteral] = ACTIONS(237),
    [sym__binaryLiteral] = ACTIONS(237),
    [anon_sym_DQUOTE] = ACTIONS(237),
    [anon_sym_SQUOTE] = ACTIONS(237),
  },
  [38] = {
    [sym_line_comment] = STATE(38),
    [sym_block_comment] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(241),
    [anon_sym_DOLLAR] = ACTIONS(241),
    [anon_sym_include] = ACTIONS(243),
    [anon_sym_const] = ACTIONS(243),
    [anon_sym_var] = ACTIONS(243),
    [anon_sym_func] = ACTIONS(243),
    [anon_sym_LPAREN] = ACTIONS(243),
    [anon_sym_array] = ACTIONS(243),
    [anon_sym_boolean] = ACTIONS(243),
    [anon_sym_integer] = ACTIONS(243),
    [anon_sym_bigInteger] = ACTIONS(243),
    [anon_sym_rational] = ACTIONS(243),
    [anon_sym_bigRational] = ACTIONS(243),
    [anon_sym_float] = ACTIONS(243),
    [anon_sym_complex] = ACTIONS(243),
    [anon_sym_char] = ACTIONS(243),
    [anon_sym_string] = ACTIONS(243),
    [anon_sym_hash] = ACTIONS(243),
    [anon_sym_set] = ACTIONS(243),
    [anon_sym_struct] = ACTIONS(243),
    [anon_sym_bin64] = ACTIONS(243),
    [anon_sym_bin32] = ACTIONS(243),
    [anon_sym_bstring] = ACTIONS(243),
    [anon_sym_color] = ACTIONS(243),
    [anon_sym_time] = ACTIONS(243),
    [anon_sym_duration] = ACTIONS(243),
    [anon_sym_file] = ACTIONS(243),
    [anon_sym_text] = ACTIONS(243),
    [anon_sym_fileSys] = ACTIONS(243),
    [anon_sym_process] = ACTIONS(243),
    [anon_sym_category] = ACTIONS(243),
    [anon_sym_reference] = ACTIONS(243),
    [anon_sym_ref_list] = ACTIONS(243),
    [anon_sym_program] = ACTIONS(243),
    [anon_sym_ptr] = ACTIONS(243),
    [anon_sym_varfunc] = ACTIONS(243),
    [anon_sym_void] = ACTIONS(243),
    [anon_sym_proc] = ACTIONS(243),
    [anon_sym_type] = ACTIONS(243),
    [anon_sym_object] = ACTIONS(243),
    [anon_sym_expr] = ACTIONS(243),
    [anon_sym_bitset] = ACTIONS(243),
    [sym_NIL] = ACTIONS(243),
    [sym_empty] = ACTIONS(243),
    [sym_STD_NULL] = ACTIONS(243),
    [sym_forward] = ACTIONS(243),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(241),
    [anon_sym_setof] = ACTIONS(241),
    [anon_sym_new] = ACTIONS(243),
    [anon_sym_sub] = ACTIONS(243),
    [anon_sym_PLUS] = ACTIONS(241),
    [anon_sym_DASH] = ACTIONS(241),
    [anon_sym_STAR] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(241),
    [anon_sym_and] = ACTIONS(243),
    [anon_sym_or] = ACTIONS(243),
    [anon_sym_parse] = ACTIONS(243),
    [anon_sym_rem] = ACTIONS(243),
    [anon_sym_div] = ACTIONS(243),
    [anon_sym_mdiv] = ACTIONS(243),
    [anon_sym_mod] = ACTIONS(243),
    [anon_sym_times] = ACTIONS(243),
    [anon_sym_DOT_DOT] = ACTIONS(241),
    [anon_sym_STAR_STAR] = ACTIONS(241),
    [anon_sym_not] = ACTIONS(243),
    [anon_sym_TRUE] = ACTIONS(243),
    [anon_sym_FALSE] = ACTIONS(243),
    [sym_variable] = ACTIONS(243),
    [sym__decimalLiteral] = ACTIONS(243),
    [sym__exponentialLiteral] = ACTIONS(241),
    [sym__negativeExponentialLiteral] = ACTIONS(243),
    [sym__hexLiteral] = ACTIONS(241),
    [sym__octalLiteral] = ACTIONS(241),
    [sym__binaryLiteral] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [anon_sym_SQUOTE] = ACTIONS(241),
  },
  [39] = {
    [sym_line_comment] = STATE(39),
    [sym_block_comment] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(245),
    [anon_sym_DOLLAR] = ACTIONS(245),
    [anon_sym_include] = ACTIONS(247),
    [anon_sym_const] = ACTIONS(247),
    [anon_sym_var] = ACTIONS(247),
    [anon_sym_func] = ACTIONS(247),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_array] = ACTIONS(247),
    [anon_sym_boolean] = ACTIONS(247),
    [anon_sym_integer] = ACTIONS(247),
    [anon_sym_bigInteger] = ACTIONS(247),
    [anon_sym_rational] = ACTIONS(247),
    [anon_sym_bigRational] = ACTIONS(247),
    [anon_sym_float] = ACTIONS(247),
    [anon_sym_complex] = ACTIONS(247),
    [anon_sym_char] = ACTIONS(247),
    [anon_sym_string] = ACTIONS(247),
    [anon_sym_hash] = ACTIONS(247),
    [anon_sym_set] = ACTIONS(247),
    [anon_sym_struct] = ACTIONS(247),
    [anon_sym_bin64] = ACTIONS(247),
    [anon_sym_bin32] = ACTIONS(247),
    [anon_sym_bstring] = ACTIONS(247),
    [anon_sym_color] = ACTIONS(247),
    [anon_sym_time] = ACTIONS(247),
    [anon_sym_duration] = ACTIONS(247),
    [anon_sym_file] = ACTIONS(247),
    [anon_sym_text] = ACTIONS(247),
    [anon_sym_fileSys] = ACTIONS(247),
    [anon_sym_process] = ACTIONS(247),
    [anon_sym_category] = ACTIONS(247),
    [anon_sym_reference] = ACTIONS(247),
    [anon_sym_ref_list] = ACTIONS(247),
    [anon_sym_program] = ACTIONS(247),
    [anon_sym_ptr] = ACTIONS(247),
    [anon_sym_varfunc] = ACTIONS(247),
    [anon_sym_void] = ACTIONS(247),
    [anon_sym_proc] = ACTIONS(247),
    [anon_sym_type] = ACTIONS(247),
    [anon_sym_object] = ACTIONS(247),
    [anon_sym_expr] = ACTIONS(247),
    [anon_sym_bitset] = ACTIONS(247),
    [sym_NIL] = ACTIONS(247),
    [sym_empty] = ACTIONS(247),
    [sym_STD_NULL] = ACTIONS(247),
    [sym_forward] = ACTIONS(247),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(245),
    [anon_sym_setof] = ACTIONS(245),
    [anon_sym_new] = ACTIONS(247),
    [anon_sym_sub] = ACTIONS(247),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(245),
    [anon_sym_and] = ACTIONS(247),
    [anon_sym_or] = ACTIONS(247),
    [anon_sym_parse] = ACTIONS(247),
    [anon_sym_rem] = ACTIONS(247),
    [anon_sym_div] = ACTIONS(247),
    [anon_sym_mdiv] = ACTIONS(247),
    [anon_sym_mod] = ACTIONS(247),
    [anon_sym_times] = ACTIONS(247),
    [anon_sym_DOT_DOT] = ACTIONS(245),
    [anon_sym_STAR_STAR] = ACTIONS(245),
    [anon_sym_not] = ACTIONS(247),
    [anon_sym_TRUE] = ACTIONS(247),
    [anon_sym_FALSE] = ACTIONS(247),
    [sym_variable] = ACTIONS(247),
    [sym__decimalLiteral] = ACTIONS(247),
    [sym__exponentialLiteral] = ACTIONS(245),
    [sym__negativeExponentialLiteral] = ACTIONS(247),
    [sym__hexLiteral] = ACTIONS(245),
    [sym__octalLiteral] = ACTIONS(245),
    [sym__binaryLiteral] = ACTIONS(245),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [anon_sym_SQUOTE] = ACTIONS(245),
  },
  [40] = {
    [sym_line_comment] = STATE(40),
    [sym_block_comment] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(249),
    [anon_sym_DOLLAR] = ACTIONS(249),
    [anon_sym_include] = ACTIONS(251),
    [anon_sym_const] = ACTIONS(251),
    [anon_sym_var] = ACTIONS(251),
    [anon_sym_func] = ACTIONS(251),
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym_array] = ACTIONS(251),
    [anon_sym_boolean] = ACTIONS(251),
    [anon_sym_integer] = ACTIONS(251),
    [anon_sym_bigInteger] = ACTIONS(251),
    [anon_sym_rational] = ACTIONS(251),
    [anon_sym_bigRational] = ACTIONS(251),
    [anon_sym_float] = ACTIONS(251),
    [anon_sym_complex] = ACTIONS(251),
    [anon_sym_char] = ACTIONS(251),
    [anon_sym_string] = ACTIONS(251),
    [anon_sym_hash] = ACTIONS(251),
    [anon_sym_set] = ACTIONS(251),
    [anon_sym_struct] = ACTIONS(251),
    [anon_sym_bin64] = ACTIONS(251),
    [anon_sym_bin32] = ACTIONS(251),
    [anon_sym_bstring] = ACTIONS(251),
    [anon_sym_color] = ACTIONS(251),
    [anon_sym_time] = ACTIONS(251),
    [anon_sym_duration] = ACTIONS(251),
    [anon_sym_file] = ACTIONS(251),
    [anon_sym_text] = ACTIONS(251),
    [anon_sym_fileSys] = ACTIONS(251),
    [anon_sym_process] = ACTIONS(251),
    [anon_sym_category] = ACTIONS(251),
    [anon_sym_reference] = ACTIONS(251),
    [anon_sym_ref_list] = ACTIONS(251),
    [anon_sym_program] = ACTIONS(251),
    [anon_sym_ptr] = ACTIONS(251),
    [anon_sym_varfunc] = ACTIONS(251),
    [anon_sym_void] = ACTIONS(251),
    [anon_sym_proc] = ACTIONS(251),
    [anon_sym_type] = ACTIONS(251),
    [anon_sym_object] = ACTIONS(251),
    [anon_sym_expr] = ACTIONS(251),
    [anon_sym_bitset] = ACTIONS(251),
    [sym_NIL] = ACTIONS(251),
    [sym_empty] = ACTIONS(251),
    [sym_STD_NULL] = ACTIONS(251),
    [sym_forward] = ACTIONS(251),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(249),
    [anon_sym_setof] = ACTIONS(249),
    [anon_sym_new] = ACTIONS(251),
    [anon_sym_sub] = ACTIONS(251),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(251),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(251),
    [anon_sym_or] = ACTIONS(251),
    [anon_sym_parse] = ACTIONS(251),
    [anon_sym_rem] = ACTIONS(251),
    [anon_sym_div] = ACTIONS(251),
    [anon_sym_mdiv] = ACTIONS(251),
    [anon_sym_mod] = ACTIONS(251),
    [anon_sym_times] = ACTIONS(251),
    [anon_sym_DOT_DOT] = ACTIONS(249),
    [anon_sym_STAR_STAR] = ACTIONS(249),
    [anon_sym_not] = ACTIONS(251),
    [anon_sym_TRUE] = ACTIONS(251),
    [anon_sym_FALSE] = ACTIONS(251),
    [sym_variable] = ACTIONS(251),
    [sym__decimalLiteral] = ACTIONS(251),
    [sym__exponentialLiteral] = ACTIONS(249),
    [sym__negativeExponentialLiteral] = ACTIONS(251),
    [sym__hexLiteral] = ACTIONS(249),
    [sym__octalLiteral] = ACTIONS(249),
    [sym__binaryLiteral] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(249),
    [anon_sym_SQUOTE] = ACTIONS(249),
  },
  [41] = {
    [sym_line_comment] = STATE(41),
    [sym_block_comment] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(253),
    [anon_sym_DOLLAR] = ACTIONS(253),
    [anon_sym_include] = ACTIONS(255),
    [anon_sym_const] = ACTIONS(255),
    [anon_sym_var] = ACTIONS(255),
    [anon_sym_func] = ACTIONS(255),
    [anon_sym_LPAREN] = ACTIONS(255),
    [anon_sym_array] = ACTIONS(255),
    [anon_sym_boolean] = ACTIONS(255),
    [anon_sym_integer] = ACTIONS(255),
    [anon_sym_bigInteger] = ACTIONS(255),
    [anon_sym_rational] = ACTIONS(255),
    [anon_sym_bigRational] = ACTIONS(255),
    [anon_sym_float] = ACTIONS(255),
    [anon_sym_complex] = ACTIONS(255),
    [anon_sym_char] = ACTIONS(255),
    [anon_sym_string] = ACTIONS(255),
    [anon_sym_hash] = ACTIONS(255),
    [anon_sym_set] = ACTIONS(255),
    [anon_sym_struct] = ACTIONS(255),
    [anon_sym_bin64] = ACTIONS(255),
    [anon_sym_bin32] = ACTIONS(255),
    [anon_sym_bstring] = ACTIONS(255),
    [anon_sym_color] = ACTIONS(255),
    [anon_sym_time] = ACTIONS(255),
    [anon_sym_duration] = ACTIONS(255),
    [anon_sym_file] = ACTIONS(255),
    [anon_sym_text] = ACTIONS(255),
    [anon_sym_fileSys] = ACTIONS(255),
    [anon_sym_process] = ACTIONS(255),
    [anon_sym_category] = ACTIONS(255),
    [anon_sym_reference] = ACTIONS(255),
    [anon_sym_ref_list] = ACTIONS(255),
    [anon_sym_program] = ACTIONS(255),
    [anon_sym_ptr] = ACTIONS(255),
    [anon_sym_varfunc] = ACTIONS(255),
    [anon_sym_void] = ACTIONS(255),
    [anon_sym_proc] = ACTIONS(255),
    [anon_sym_type] = ACTIONS(255),
    [anon_sym_object] = ACTIONS(255),
    [anon_sym_expr] = ACTIONS(255),
    [anon_sym_bitset] = ACTIONS(255),
    [sym_NIL] = ACTIONS(255),
    [sym_empty] = ACTIONS(255),
    [sym_STD_NULL] = ACTIONS(255),
    [sym_forward] = ACTIONS(255),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(253),
    [anon_sym_setof] = ACTIONS(253),
    [anon_sym_new] = ACTIONS(255),
    [anon_sym_sub] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(255),
    [anon_sym_SLASH] = ACTIONS(253),
    [anon_sym_and] = ACTIONS(255),
    [anon_sym_or] = ACTIONS(255),
    [anon_sym_parse] = ACTIONS(255),
    [anon_sym_rem] = ACTIONS(255),
    [anon_sym_div] = ACTIONS(255),
    [anon_sym_mdiv] = ACTIONS(255),
    [anon_sym_mod] = ACTIONS(255),
    [anon_sym_times] = ACTIONS(255),
    [anon_sym_DOT_DOT] = ACTIONS(253),
    [anon_sym_STAR_STAR] = ACTIONS(253),
    [anon_sym_not] = ACTIONS(255),
    [anon_sym_TRUE] = ACTIONS(255),
    [anon_sym_FALSE] = ACTIONS(255),
    [sym_variable] = ACTIONS(255),
    [sym__decimalLiteral] = ACTIONS(255),
    [sym__exponentialLiteral] = ACTIONS(253),
    [sym__negativeExponentialLiteral] = ACTIONS(255),
    [sym__hexLiteral] = ACTIONS(253),
    [sym__octalLiteral] = ACTIONS(253),
    [sym__binaryLiteral] = ACTIONS(253),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [anon_sym_SQUOTE] = ACTIONS(253),
  },
  [42] = {
    [sym_line_comment] = STATE(42),
    [sym_block_comment] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(221),
    [anon_sym_DOLLAR] = ACTIONS(221),
    [anon_sym_include] = ACTIONS(223),
    [anon_sym_const] = ACTIONS(223),
    [anon_sym_var] = ACTIONS(223),
    [anon_sym_func] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_array] = ACTIONS(223),
    [anon_sym_boolean] = ACTIONS(223),
    [anon_sym_integer] = ACTIONS(223),
    [anon_sym_bigInteger] = ACTIONS(223),
    [anon_sym_rational] = ACTIONS(223),
    [anon_sym_bigRational] = ACTIONS(223),
    [anon_sym_float] = ACTIONS(223),
    [anon_sym_complex] = ACTIONS(223),
    [anon_sym_char] = ACTIONS(223),
    [anon_sym_string] = ACTIONS(223),
    [anon_sym_hash] = ACTIONS(223),
    [anon_sym_set] = ACTIONS(223),
    [anon_sym_struct] = ACTIONS(223),
    [anon_sym_bin64] = ACTIONS(223),
    [anon_sym_bin32] = ACTIONS(223),
    [anon_sym_bstring] = ACTIONS(223),
    [anon_sym_color] = ACTIONS(223),
    [anon_sym_time] = ACTIONS(223),
    [anon_sym_duration] = ACTIONS(223),
    [anon_sym_file] = ACTIONS(223),
    [anon_sym_text] = ACTIONS(223),
    [anon_sym_fileSys] = ACTIONS(223),
    [anon_sym_process] = ACTIONS(223),
    [anon_sym_category] = ACTIONS(223),
    [anon_sym_reference] = ACTIONS(223),
    [anon_sym_ref_list] = ACTIONS(223),
    [anon_sym_program] = ACTIONS(223),
    [anon_sym_ptr] = ACTIONS(223),
    [anon_sym_varfunc] = ACTIONS(223),
    [anon_sym_void] = ACTIONS(223),
    [anon_sym_proc] = ACTIONS(223),
    [anon_sym_type] = ACTIONS(223),
    [anon_sym_object] = ACTIONS(223),
    [anon_sym_expr] = ACTIONS(223),
    [anon_sym_bitset] = ACTIONS(223),
    [sym_NIL] = ACTIONS(223),
    [sym_empty] = ACTIONS(223),
    [sym_STD_NULL] = ACTIONS(223),
    [sym_forward] = ACTIONS(223),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(221),
    [anon_sym_setof] = ACTIONS(221),
    [anon_sym_new] = ACTIONS(223),
    [anon_sym_sub] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(221),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(221),
    [anon_sym_and] = ACTIONS(223),
    [anon_sym_or] = ACTIONS(223),
    [anon_sym_parse] = ACTIONS(223),
    [anon_sym_rem] = ACTIONS(223),
    [anon_sym_div] = ACTIONS(223),
    [anon_sym_mdiv] = ACTIONS(223),
    [anon_sym_mod] = ACTIONS(223),
    [anon_sym_times] = ACTIONS(223),
    [anon_sym_DOT_DOT] = ACTIONS(221),
    [anon_sym_STAR_STAR] = ACTIONS(221),
    [anon_sym_not] = ACTIONS(223),
    [anon_sym_TRUE] = ACTIONS(223),
    [anon_sym_FALSE] = ACTIONS(223),
    [sym_variable] = ACTIONS(223),
    [sym__decimalLiteral] = ACTIONS(223),
    [sym__exponentialLiteral] = ACTIONS(221),
    [sym__negativeExponentialLiteral] = ACTIONS(223),
    [sym__hexLiteral] = ACTIONS(221),
    [sym__octalLiteral] = ACTIONS(221),
    [sym__binaryLiteral] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(221),
    [anon_sym_SQUOTE] = ACTIONS(221),
  },
  [43] = {
    [sym_line_comment] = STATE(43),
    [sym_block_comment] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(257),
    [anon_sym_DOLLAR] = ACTIONS(257),
    [anon_sym_include] = ACTIONS(259),
    [anon_sym_const] = ACTIONS(259),
    [anon_sym_var] = ACTIONS(259),
    [anon_sym_func] = ACTIONS(259),
    [anon_sym_LPAREN] = ACTIONS(259),
    [anon_sym_array] = ACTIONS(259),
    [anon_sym_boolean] = ACTIONS(259),
    [anon_sym_integer] = ACTIONS(259),
    [anon_sym_bigInteger] = ACTIONS(259),
    [anon_sym_rational] = ACTIONS(259),
    [anon_sym_bigRational] = ACTIONS(259),
    [anon_sym_float] = ACTIONS(259),
    [anon_sym_complex] = ACTIONS(259),
    [anon_sym_char] = ACTIONS(259),
    [anon_sym_string] = ACTIONS(259),
    [anon_sym_hash] = ACTIONS(259),
    [anon_sym_set] = ACTIONS(259),
    [anon_sym_struct] = ACTIONS(259),
    [anon_sym_bin64] = ACTIONS(259),
    [anon_sym_bin32] = ACTIONS(259),
    [anon_sym_bstring] = ACTIONS(259),
    [anon_sym_color] = ACTIONS(259),
    [anon_sym_time] = ACTIONS(259),
    [anon_sym_duration] = ACTIONS(259),
    [anon_sym_file] = ACTIONS(259),
    [anon_sym_text] = ACTIONS(259),
    [anon_sym_fileSys] = ACTIONS(259),
    [anon_sym_process] = ACTIONS(259),
    [anon_sym_category] = ACTIONS(259),
    [anon_sym_reference] = ACTIONS(259),
    [anon_sym_ref_list] = ACTIONS(259),
    [anon_sym_program] = ACTIONS(259),
    [anon_sym_ptr] = ACTIONS(259),
    [anon_sym_varfunc] = ACTIONS(259),
    [anon_sym_void] = ACTIONS(259),
    [anon_sym_proc] = ACTIONS(259),
    [anon_sym_type] = ACTIONS(259),
    [anon_sym_object] = ACTIONS(259),
    [anon_sym_expr] = ACTIONS(259),
    [anon_sym_bitset] = ACTIONS(259),
    [sym_NIL] = ACTIONS(259),
    [sym_empty] = ACTIONS(259),
    [sym_STD_NULL] = ACTIONS(259),
    [sym_forward] = ACTIONS(259),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(257),
    [anon_sym_setof] = ACTIONS(257),
    [anon_sym_new] = ACTIONS(259),
    [anon_sym_sub] = ACTIONS(259),
    [anon_sym_PLUS] = ACTIONS(257),
    [anon_sym_DASH] = ACTIONS(257),
    [anon_sym_STAR] = ACTIONS(259),
    [anon_sym_SLASH] = ACTIONS(257),
    [anon_sym_and] = ACTIONS(259),
    [anon_sym_or] = ACTIONS(259),
    [anon_sym_parse] = ACTIONS(259),
    [anon_sym_rem] = ACTIONS(259),
    [anon_sym_div] = ACTIONS(259),
    [anon_sym_mdiv] = ACTIONS(259),
    [anon_sym_mod] = ACTIONS(259),
    [anon_sym_times] = ACTIONS(259),
    [anon_sym_DOT_DOT] = ACTIONS(257),
    [anon_sym_STAR_STAR] = ACTIONS(257),
    [anon_sym_not] = ACTIONS(259),
    [anon_sym_TRUE] = ACTIONS(259),
    [anon_sym_FALSE] = ACTIONS(259),
    [sym_variable] = ACTIONS(259),
    [sym__decimalLiteral] = ACTIONS(259),
    [sym__exponentialLiteral] = ACTIONS(257),
    [sym__negativeExponentialLiteral] = ACTIONS(259),
    [sym__hexLiteral] = ACTIONS(257),
    [sym__octalLiteral] = ACTIONS(257),
    [sym__binaryLiteral] = ACTIONS(257),
    [anon_sym_DQUOTE] = ACTIONS(257),
    [anon_sym_SQUOTE] = ACTIONS(257),
  },
  [44] = {
    [sym_line_comment] = STATE(44),
    [sym_block_comment] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(261),
    [anon_sym_DOLLAR] = ACTIONS(261),
    [anon_sym_include] = ACTIONS(263),
    [anon_sym_const] = ACTIONS(263),
    [anon_sym_var] = ACTIONS(263),
    [anon_sym_func] = ACTIONS(263),
    [anon_sym_LPAREN] = ACTIONS(263),
    [anon_sym_array] = ACTIONS(263),
    [anon_sym_boolean] = ACTIONS(263),
    [anon_sym_integer] = ACTIONS(263),
    [anon_sym_bigInteger] = ACTIONS(263),
    [anon_sym_rational] = ACTIONS(263),
    [anon_sym_bigRational] = ACTIONS(263),
    [anon_sym_float] = ACTIONS(263),
    [anon_sym_complex] = ACTIONS(263),
    [anon_sym_char] = ACTIONS(263),
    [anon_sym_string] = ACTIONS(263),
    [anon_sym_hash] = ACTIONS(263),
    [anon_sym_set] = ACTIONS(263),
    [anon_sym_struct] = ACTIONS(263),
    [anon_sym_bin64] = ACTIONS(263),
    [anon_sym_bin32] = ACTIONS(263),
    [anon_sym_bstring] = ACTIONS(263),
    [anon_sym_color] = ACTIONS(263),
    [anon_sym_time] = ACTIONS(263),
    [anon_sym_duration] = ACTIONS(263),
    [anon_sym_file] = ACTIONS(263),
    [anon_sym_text] = ACTIONS(263),
    [anon_sym_fileSys] = ACTIONS(263),
    [anon_sym_process] = ACTIONS(263),
    [anon_sym_category] = ACTIONS(263),
    [anon_sym_reference] = ACTIONS(263),
    [anon_sym_ref_list] = ACTIONS(263),
    [anon_sym_program] = ACTIONS(263),
    [anon_sym_ptr] = ACTIONS(263),
    [anon_sym_varfunc] = ACTIONS(263),
    [anon_sym_void] = ACTIONS(263),
    [anon_sym_proc] = ACTIONS(263),
    [anon_sym_type] = ACTIONS(263),
    [anon_sym_object] = ACTIONS(263),
    [anon_sym_expr] = ACTIONS(263),
    [anon_sym_bitset] = ACTIONS(263),
    [sym_NIL] = ACTIONS(263),
    [sym_empty] = ACTIONS(263),
    [sym_STD_NULL] = ACTIONS(263),
    [sym_forward] = ACTIONS(263),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(261),
    [anon_sym_setof] = ACTIONS(261),
    [anon_sym_new] = ACTIONS(263),
    [anon_sym_sub] = ACTIONS(263),
    [anon_sym_PLUS] = ACTIONS(261),
    [anon_sym_DASH] = ACTIONS(261),
    [anon_sym_STAR] = ACTIONS(263),
    [anon_sym_SLASH] = ACTIONS(261),
    [anon_sym_and] = ACTIONS(263),
    [anon_sym_or] = ACTIONS(263),
    [anon_sym_parse] = ACTIONS(263),
    [anon_sym_rem] = ACTIONS(263),
    [anon_sym_div] = ACTIONS(263),
    [anon_sym_mdiv] = ACTIONS(263),
    [anon_sym_mod] = ACTIONS(263),
    [anon_sym_times] = ACTIONS(263),
    [anon_sym_DOT_DOT] = ACTIONS(261),
    [anon_sym_STAR_STAR] = ACTIONS(261),
    [anon_sym_not] = ACTIONS(263),
    [anon_sym_TRUE] = ACTIONS(263),
    [anon_sym_FALSE] = ACTIONS(263),
    [sym_variable] = ACTIONS(263),
    [sym__decimalLiteral] = ACTIONS(263),
    [sym__exponentialLiteral] = ACTIONS(261),
    [sym__negativeExponentialLiteral] = ACTIONS(263),
    [sym__hexLiteral] = ACTIONS(261),
    [sym__octalLiteral] = ACTIONS(261),
    [sym__binaryLiteral] = ACTIONS(261),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [anon_sym_SQUOTE] = ACTIONS(261),
  },
  [45] = {
    [sym_line_comment] = STATE(45),
    [sym_block_comment] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(265),
    [anon_sym_DOLLAR] = ACTIONS(265),
    [anon_sym_include] = ACTIONS(267),
    [anon_sym_const] = ACTIONS(267),
    [anon_sym_var] = ACTIONS(267),
    [anon_sym_func] = ACTIONS(267),
    [anon_sym_LPAREN] = ACTIONS(267),
    [anon_sym_array] = ACTIONS(267),
    [anon_sym_boolean] = ACTIONS(267),
    [anon_sym_integer] = ACTIONS(267),
    [anon_sym_bigInteger] = ACTIONS(267),
    [anon_sym_rational] = ACTIONS(267),
    [anon_sym_bigRational] = ACTIONS(267),
    [anon_sym_float] = ACTIONS(267),
    [anon_sym_complex] = ACTIONS(267),
    [anon_sym_char] = ACTIONS(267),
    [anon_sym_string] = ACTIONS(267),
    [anon_sym_hash] = ACTIONS(267),
    [anon_sym_set] = ACTIONS(267),
    [anon_sym_struct] = ACTIONS(267),
    [anon_sym_bin64] = ACTIONS(267),
    [anon_sym_bin32] = ACTIONS(267),
    [anon_sym_bstring] = ACTIONS(267),
    [anon_sym_color] = ACTIONS(267),
    [anon_sym_time] = ACTIONS(267),
    [anon_sym_duration] = ACTIONS(267),
    [anon_sym_file] = ACTIONS(267),
    [anon_sym_text] = ACTIONS(267),
    [anon_sym_fileSys] = ACTIONS(267),
    [anon_sym_process] = ACTIONS(267),
    [anon_sym_category] = ACTIONS(267),
    [anon_sym_reference] = ACTIONS(267),
    [anon_sym_ref_list] = ACTIONS(267),
    [anon_sym_program] = ACTIONS(267),
    [anon_sym_ptr] = ACTIONS(267),
    [anon_sym_varfunc] = ACTIONS(267),
    [anon_sym_void] = ACTIONS(267),
    [anon_sym_proc] = ACTIONS(267),
    [anon_sym_type] = ACTIONS(267),
    [anon_sym_object] = ACTIONS(267),
    [anon_sym_expr] = ACTIONS(267),
    [anon_sym_bitset] = ACTIONS(267),
    [sym_NIL] = ACTIONS(267),
    [sym_empty] = ACTIONS(267),
    [sym_STD_NULL] = ACTIONS(267),
    [sym_forward] = ACTIONS(267),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(265),
    [anon_sym_setof] = ACTIONS(265),
    [anon_sym_new] = ACTIONS(267),
    [anon_sym_sub] = ACTIONS(267),
    [anon_sym_PLUS] = ACTIONS(265),
    [anon_sym_DASH] = ACTIONS(265),
    [anon_sym_STAR] = ACTIONS(267),
    [anon_sym_SLASH] = ACTIONS(265),
    [anon_sym_and] = ACTIONS(267),
    [anon_sym_or] = ACTIONS(267),
    [anon_sym_parse] = ACTIONS(267),
    [anon_sym_rem] = ACTIONS(267),
    [anon_sym_div] = ACTIONS(267),
    [anon_sym_mdiv] = ACTIONS(267),
    [anon_sym_mod] = ACTIONS(267),
    [anon_sym_times] = ACTIONS(267),
    [anon_sym_DOT_DOT] = ACTIONS(265),
    [anon_sym_STAR_STAR] = ACTIONS(265),
    [anon_sym_not] = ACTIONS(267),
    [anon_sym_TRUE] = ACTIONS(267),
    [anon_sym_FALSE] = ACTIONS(267),
    [sym_variable] = ACTIONS(267),
    [sym__decimalLiteral] = ACTIONS(267),
    [sym__exponentialLiteral] = ACTIONS(265),
    [sym__negativeExponentialLiteral] = ACTIONS(267),
    [sym__hexLiteral] = ACTIONS(265),
    [sym__octalLiteral] = ACTIONS(265),
    [sym__binaryLiteral] = ACTIONS(265),
    [anon_sym_DQUOTE] = ACTIONS(265),
    [anon_sym_SQUOTE] = ACTIONS(265),
  },
  [46] = {
    [sym_line_comment] = STATE(46),
    [sym_block_comment] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(269),
    [anon_sym_DOLLAR] = ACTIONS(269),
    [anon_sym_include] = ACTIONS(271),
    [anon_sym_const] = ACTIONS(271),
    [anon_sym_var] = ACTIONS(271),
    [anon_sym_func] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_array] = ACTIONS(271),
    [anon_sym_boolean] = ACTIONS(271),
    [anon_sym_integer] = ACTIONS(271),
    [anon_sym_bigInteger] = ACTIONS(271),
    [anon_sym_rational] = ACTIONS(271),
    [anon_sym_bigRational] = ACTIONS(271),
    [anon_sym_float] = ACTIONS(271),
    [anon_sym_complex] = ACTIONS(271),
    [anon_sym_char] = ACTIONS(271),
    [anon_sym_string] = ACTIONS(271),
    [anon_sym_hash] = ACTIONS(271),
    [anon_sym_set] = ACTIONS(271),
    [anon_sym_struct] = ACTIONS(271),
    [anon_sym_bin64] = ACTIONS(271),
    [anon_sym_bin32] = ACTIONS(271),
    [anon_sym_bstring] = ACTIONS(271),
    [anon_sym_color] = ACTIONS(271),
    [anon_sym_time] = ACTIONS(271),
    [anon_sym_duration] = ACTIONS(271),
    [anon_sym_file] = ACTIONS(271),
    [anon_sym_text] = ACTIONS(271),
    [anon_sym_fileSys] = ACTIONS(271),
    [anon_sym_process] = ACTIONS(271),
    [anon_sym_category] = ACTIONS(271),
    [anon_sym_reference] = ACTIONS(271),
    [anon_sym_ref_list] = ACTIONS(271),
    [anon_sym_program] = ACTIONS(271),
    [anon_sym_ptr] = ACTIONS(271),
    [anon_sym_varfunc] = ACTIONS(271),
    [anon_sym_void] = ACTIONS(271),
    [anon_sym_proc] = ACTIONS(271),
    [anon_sym_type] = ACTIONS(271),
    [anon_sym_object] = ACTIONS(271),
    [anon_sym_expr] = ACTIONS(271),
    [anon_sym_bitset] = ACTIONS(271),
    [sym_NIL] = ACTIONS(271),
    [sym_empty] = ACTIONS(271),
    [sym_STD_NULL] = ACTIONS(271),
    [sym_forward] = ACTIONS(271),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(269),
    [anon_sym_setof] = ACTIONS(269),
    [anon_sym_new] = ACTIONS(271),
    [anon_sym_sub] = ACTIONS(271),
    [anon_sym_PLUS] = ACTIONS(269),
    [anon_sym_DASH] = ACTIONS(269),
    [anon_sym_STAR] = ACTIONS(271),
    [anon_sym_SLASH] = ACTIONS(269),
    [anon_sym_and] = ACTIONS(271),
    [anon_sym_or] = ACTIONS(271),
    [anon_sym_parse] = ACTIONS(271),
    [anon_sym_rem] = ACTIONS(271),
    [anon_sym_div] = ACTIONS(271),
    [anon_sym_mdiv] = ACTIONS(271),
    [anon_sym_mod] = ACTIONS(271),
    [anon_sym_times] = ACTIONS(271),
    [anon_sym_DOT_DOT] = ACTIONS(269),
    [anon_sym_STAR_STAR] = ACTIONS(269),
    [anon_sym_not] = ACTIONS(271),
    [anon_sym_TRUE] = ACTIONS(271),
    [anon_sym_FALSE] = ACTIONS(271),
    [sym_variable] = ACTIONS(271),
    [sym__decimalLiteral] = ACTIONS(271),
    [sym__exponentialLiteral] = ACTIONS(269),
    [sym__negativeExponentialLiteral] = ACTIONS(271),
    [sym__hexLiteral] = ACTIONS(269),
    [sym__octalLiteral] = ACTIONS(269),
    [sym__binaryLiteral] = ACTIONS(269),
    [anon_sym_DQUOTE] = ACTIONS(269),
    [anon_sym_SQUOTE] = ACTIONS(269),
  },
  [47] = {
    [sym_line_comment] = STATE(47),
    [sym_block_comment] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(273),
    [anon_sym_DOLLAR] = ACTIONS(273),
    [anon_sym_include] = ACTIONS(275),
    [anon_sym_const] = ACTIONS(275),
    [anon_sym_var] = ACTIONS(275),
    [anon_sym_func] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(275),
    [anon_sym_array] = ACTIONS(275),
    [anon_sym_boolean] = ACTIONS(275),
    [anon_sym_integer] = ACTIONS(275),
    [anon_sym_bigInteger] = ACTIONS(275),
    [anon_sym_rational] = ACTIONS(275),
    [anon_sym_bigRational] = ACTIONS(275),
    [anon_sym_float] = ACTIONS(275),
    [anon_sym_complex] = ACTIONS(275),
    [anon_sym_char] = ACTIONS(275),
    [anon_sym_string] = ACTIONS(275),
    [anon_sym_hash] = ACTIONS(275),
    [anon_sym_set] = ACTIONS(275),
    [anon_sym_struct] = ACTIONS(275),
    [anon_sym_bin64] = ACTIONS(275),
    [anon_sym_bin32] = ACTIONS(275),
    [anon_sym_bstring] = ACTIONS(275),
    [anon_sym_color] = ACTIONS(275),
    [anon_sym_time] = ACTIONS(275),
    [anon_sym_duration] = ACTIONS(275),
    [anon_sym_file] = ACTIONS(275),
    [anon_sym_text] = ACTIONS(275),
    [anon_sym_fileSys] = ACTIONS(275),
    [anon_sym_process] = ACTIONS(275),
    [anon_sym_category] = ACTIONS(275),
    [anon_sym_reference] = ACTIONS(275),
    [anon_sym_ref_list] = ACTIONS(275),
    [anon_sym_program] = ACTIONS(275),
    [anon_sym_ptr] = ACTIONS(275),
    [anon_sym_varfunc] = ACTIONS(275),
    [anon_sym_void] = ACTIONS(275),
    [anon_sym_proc] = ACTIONS(275),
    [anon_sym_type] = ACTIONS(275),
    [anon_sym_object] = ACTIONS(275),
    [anon_sym_expr] = ACTIONS(275),
    [anon_sym_bitset] = ACTIONS(275),
    [sym_NIL] = ACTIONS(275),
    [sym_empty] = ACTIONS(275),
    [sym_STD_NULL] = ACTIONS(275),
    [sym_forward] = ACTIONS(275),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(273),
    [anon_sym_setof] = ACTIONS(273),
    [anon_sym_new] = ACTIONS(275),
    [anon_sym_sub] = ACTIONS(275),
    [anon_sym_PLUS] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(273),
    [anon_sym_STAR] = ACTIONS(275),
    [anon_sym_SLASH] = ACTIONS(273),
    [anon_sym_and] = ACTIONS(275),
    [anon_sym_or] = ACTIONS(275),
    [anon_sym_parse] = ACTIONS(275),
    [anon_sym_rem] = ACTIONS(275),
    [anon_sym_div] = ACTIONS(275),
    [anon_sym_mdiv] = ACTIONS(275),
    [anon_sym_mod] = ACTIONS(275),
    [anon_sym_times] = ACTIONS(275),
    [anon_sym_DOT_DOT] = ACTIONS(273),
    [anon_sym_STAR_STAR] = ACTIONS(273),
    [anon_sym_not] = ACTIONS(275),
    [anon_sym_TRUE] = ACTIONS(275),
    [anon_sym_FALSE] = ACTIONS(275),
    [sym_variable] = ACTIONS(275),
    [sym__decimalLiteral] = ACTIONS(275),
    [sym__exponentialLiteral] = ACTIONS(273),
    [sym__negativeExponentialLiteral] = ACTIONS(275),
    [sym__hexLiteral] = ACTIONS(273),
    [sym__octalLiteral] = ACTIONS(273),
    [sym__binaryLiteral] = ACTIONS(273),
    [anon_sym_DQUOTE] = ACTIONS(273),
    [anon_sym_SQUOTE] = ACTIONS(273),
  },
  [48] = {
    [sym_line_comment] = STATE(48),
    [sym_block_comment] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(277),
    [anon_sym_DOLLAR] = ACTIONS(277),
    [anon_sym_include] = ACTIONS(279),
    [anon_sym_const] = ACTIONS(279),
    [anon_sym_var] = ACTIONS(279),
    [anon_sym_func] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(279),
    [anon_sym_array] = ACTIONS(279),
    [anon_sym_boolean] = ACTIONS(279),
    [anon_sym_integer] = ACTIONS(279),
    [anon_sym_bigInteger] = ACTIONS(279),
    [anon_sym_rational] = ACTIONS(279),
    [anon_sym_bigRational] = ACTIONS(279),
    [anon_sym_float] = ACTIONS(279),
    [anon_sym_complex] = ACTIONS(279),
    [anon_sym_char] = ACTIONS(279),
    [anon_sym_string] = ACTIONS(279),
    [anon_sym_hash] = ACTIONS(279),
    [anon_sym_set] = ACTIONS(279),
    [anon_sym_struct] = ACTIONS(279),
    [anon_sym_bin64] = ACTIONS(279),
    [anon_sym_bin32] = ACTIONS(279),
    [anon_sym_bstring] = ACTIONS(279),
    [anon_sym_color] = ACTIONS(279),
    [anon_sym_time] = ACTIONS(279),
    [anon_sym_duration] = ACTIONS(279),
    [anon_sym_file] = ACTIONS(279),
    [anon_sym_text] = ACTIONS(279),
    [anon_sym_fileSys] = ACTIONS(279),
    [anon_sym_process] = ACTIONS(279),
    [anon_sym_category] = ACTIONS(279),
    [anon_sym_reference] = ACTIONS(279),
    [anon_sym_ref_list] = ACTIONS(279),
    [anon_sym_program] = ACTIONS(279),
    [anon_sym_ptr] = ACTIONS(279),
    [anon_sym_varfunc] = ACTIONS(279),
    [anon_sym_void] = ACTIONS(279),
    [anon_sym_proc] = ACTIONS(279),
    [anon_sym_type] = ACTIONS(279),
    [anon_sym_object] = ACTIONS(279),
    [anon_sym_expr] = ACTIONS(279),
    [anon_sym_bitset] = ACTIONS(279),
    [sym_NIL] = ACTIONS(279),
    [sym_empty] = ACTIONS(279),
    [sym_STD_NULL] = ACTIONS(279),
    [sym_forward] = ACTIONS(279),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(277),
    [anon_sym_setof] = ACTIONS(277),
    [anon_sym_new] = ACTIONS(279),
    [anon_sym_sub] = ACTIONS(279),
    [anon_sym_PLUS] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(277),
    [anon_sym_STAR] = ACTIONS(279),
    [anon_sym_SLASH] = ACTIONS(277),
    [anon_sym_and] = ACTIONS(279),
    [anon_sym_or] = ACTIONS(279),
    [anon_sym_parse] = ACTIONS(279),
    [anon_sym_rem] = ACTIONS(279),
    [anon_sym_div] = ACTIONS(279),
    [anon_sym_mdiv] = ACTIONS(279),
    [anon_sym_mod] = ACTIONS(279),
    [anon_sym_times] = ACTIONS(279),
    [anon_sym_DOT_DOT] = ACTIONS(277),
    [anon_sym_STAR_STAR] = ACTIONS(277),
    [anon_sym_not] = ACTIONS(279),
    [anon_sym_TRUE] = ACTIONS(279),
    [anon_sym_FALSE] = ACTIONS(279),
    [sym_variable] = ACTIONS(279),
    [sym__decimalLiteral] = ACTIONS(279),
    [sym__exponentialLiteral] = ACTIONS(277),
    [sym__negativeExponentialLiteral] = ACTIONS(279),
    [sym__hexLiteral] = ACTIONS(277),
    [sym__octalLiteral] = ACTIONS(277),
    [sym__binaryLiteral] = ACTIONS(277),
    [anon_sym_DQUOTE] = ACTIONS(277),
    [anon_sym_SQUOTE] = ACTIONS(277),
  },
  [49] = {
    [sym_line_comment] = STATE(49),
    [sym_block_comment] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(281),
    [anon_sym_DOLLAR] = ACTIONS(281),
    [anon_sym_include] = ACTIONS(283),
    [anon_sym_const] = ACTIONS(283),
    [anon_sym_var] = ACTIONS(283),
    [anon_sym_func] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(283),
    [anon_sym_array] = ACTIONS(283),
    [anon_sym_boolean] = ACTIONS(283),
    [anon_sym_integer] = ACTIONS(283),
    [anon_sym_bigInteger] = ACTIONS(283),
    [anon_sym_rational] = ACTIONS(283),
    [anon_sym_bigRational] = ACTIONS(283),
    [anon_sym_float] = ACTIONS(283),
    [anon_sym_complex] = ACTIONS(283),
    [anon_sym_char] = ACTIONS(283),
    [anon_sym_string] = ACTIONS(283),
    [anon_sym_hash] = ACTIONS(283),
    [anon_sym_set] = ACTIONS(283),
    [anon_sym_struct] = ACTIONS(283),
    [anon_sym_bin64] = ACTIONS(283),
    [anon_sym_bin32] = ACTIONS(283),
    [anon_sym_bstring] = ACTIONS(283),
    [anon_sym_color] = ACTIONS(283),
    [anon_sym_time] = ACTIONS(283),
    [anon_sym_duration] = ACTIONS(283),
    [anon_sym_file] = ACTIONS(283),
    [anon_sym_text] = ACTIONS(283),
    [anon_sym_fileSys] = ACTIONS(283),
    [anon_sym_process] = ACTIONS(283),
    [anon_sym_category] = ACTIONS(283),
    [anon_sym_reference] = ACTIONS(283),
    [anon_sym_ref_list] = ACTIONS(283),
    [anon_sym_program] = ACTIONS(283),
    [anon_sym_ptr] = ACTIONS(283),
    [anon_sym_varfunc] = ACTIONS(283),
    [anon_sym_void] = ACTIONS(283),
    [anon_sym_proc] = ACTIONS(283),
    [anon_sym_type] = ACTIONS(283),
    [anon_sym_object] = ACTIONS(283),
    [anon_sym_expr] = ACTIONS(283),
    [anon_sym_bitset] = ACTIONS(283),
    [sym_NIL] = ACTIONS(283),
    [sym_empty] = ACTIONS(283),
    [sym_STD_NULL] = ACTIONS(283),
    [sym_forward] = ACTIONS(283),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(281),
    [anon_sym_setof] = ACTIONS(281),
    [anon_sym_new] = ACTIONS(283),
    [anon_sym_sub] = ACTIONS(283),
    [anon_sym_PLUS] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(281),
    [anon_sym_STAR] = ACTIONS(283),
    [anon_sym_SLASH] = ACTIONS(281),
    [anon_sym_and] = ACTIONS(283),
    [anon_sym_or] = ACTIONS(283),
    [anon_sym_parse] = ACTIONS(283),
    [anon_sym_rem] = ACTIONS(283),
    [anon_sym_div] = ACTIONS(283),
    [anon_sym_mdiv] = ACTIONS(283),
    [anon_sym_mod] = ACTIONS(283),
    [anon_sym_times] = ACTIONS(283),
    [anon_sym_DOT_DOT] = ACTIONS(281),
    [anon_sym_STAR_STAR] = ACTIONS(281),
    [anon_sym_not] = ACTIONS(283),
    [anon_sym_TRUE] = ACTIONS(283),
    [anon_sym_FALSE] = ACTIONS(283),
    [sym_variable] = ACTIONS(283),
    [sym__decimalLiteral] = ACTIONS(283),
    [sym__exponentialLiteral] = ACTIONS(281),
    [sym__negativeExponentialLiteral] = ACTIONS(283),
    [sym__hexLiteral] = ACTIONS(281),
    [sym__octalLiteral] = ACTIONS(281),
    [sym__binaryLiteral] = ACTIONS(281),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(281),
  },
  [50] = {
    [sym_line_comment] = STATE(50),
    [sym_block_comment] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(285),
    [anon_sym_DOLLAR] = ACTIONS(285),
    [anon_sym_include] = ACTIONS(287),
    [anon_sym_const] = ACTIONS(287),
    [anon_sym_var] = ACTIONS(287),
    [anon_sym_func] = ACTIONS(287),
    [anon_sym_LPAREN] = ACTIONS(287),
    [anon_sym_array] = ACTIONS(287),
    [anon_sym_boolean] = ACTIONS(287),
    [anon_sym_integer] = ACTIONS(287),
    [anon_sym_bigInteger] = ACTIONS(287),
    [anon_sym_rational] = ACTIONS(287),
    [anon_sym_bigRational] = ACTIONS(287),
    [anon_sym_float] = ACTIONS(287),
    [anon_sym_complex] = ACTIONS(287),
    [anon_sym_char] = ACTIONS(287),
    [anon_sym_string] = ACTIONS(287),
    [anon_sym_hash] = ACTIONS(287),
    [anon_sym_set] = ACTIONS(287),
    [anon_sym_struct] = ACTIONS(287),
    [anon_sym_bin64] = ACTIONS(287),
    [anon_sym_bin32] = ACTIONS(287),
    [anon_sym_bstring] = ACTIONS(287),
    [anon_sym_color] = ACTIONS(287),
    [anon_sym_time] = ACTIONS(287),
    [anon_sym_duration] = ACTIONS(287),
    [anon_sym_file] = ACTIONS(287),
    [anon_sym_text] = ACTIONS(287),
    [anon_sym_fileSys] = ACTIONS(287),
    [anon_sym_process] = ACTIONS(287),
    [anon_sym_category] = ACTIONS(287),
    [anon_sym_reference] = ACTIONS(287),
    [anon_sym_ref_list] = ACTIONS(287),
    [anon_sym_program] = ACTIONS(287),
    [anon_sym_ptr] = ACTIONS(287),
    [anon_sym_varfunc] = ACTIONS(287),
    [anon_sym_void] = ACTIONS(287),
    [anon_sym_proc] = ACTIONS(287),
    [anon_sym_type] = ACTIONS(287),
    [anon_sym_object] = ACTIONS(287),
    [anon_sym_expr] = ACTIONS(287),
    [anon_sym_bitset] = ACTIONS(287),
    [sym_NIL] = ACTIONS(287),
    [sym_empty] = ACTIONS(287),
    [sym_STD_NULL] = ACTIONS(287),
    [sym_forward] = ACTIONS(287),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(285),
    [anon_sym_setof] = ACTIONS(285),
    [anon_sym_new] = ACTIONS(287),
    [anon_sym_sub] = ACTIONS(287),
    [anon_sym_PLUS] = ACTIONS(285),
    [anon_sym_DASH] = ACTIONS(285),
    [anon_sym_STAR] = ACTIONS(287),
    [anon_sym_SLASH] = ACTIONS(285),
    [anon_sym_and] = ACTIONS(287),
    [anon_sym_or] = ACTIONS(287),
    [anon_sym_parse] = ACTIONS(287),
    [anon_sym_rem] = ACTIONS(287),
    [anon_sym_div] = ACTIONS(287),
    [anon_sym_mdiv] = ACTIONS(287),
    [anon_sym_mod] = ACTIONS(287),
    [anon_sym_times] = ACTIONS(287),
    [anon_sym_DOT_DOT] = ACTIONS(285),
    [anon_sym_STAR_STAR] = ACTIONS(285),
    [anon_sym_not] = ACTIONS(287),
    [anon_sym_TRUE] = ACTIONS(287),
    [anon_sym_FALSE] = ACTIONS(287),
    [sym_variable] = ACTIONS(287),
    [sym__decimalLiteral] = ACTIONS(287),
    [sym__exponentialLiteral] = ACTIONS(285),
    [sym__negativeExponentialLiteral] = ACTIONS(287),
    [sym__hexLiteral] = ACTIONS(285),
    [sym__octalLiteral] = ACTIONS(285),
    [sym__binaryLiteral] = ACTIONS(285),
    [anon_sym_DQUOTE] = ACTIONS(285),
    [anon_sym_SQUOTE] = ACTIONS(285),
  },
  [51] = {
    [sym_line_comment] = STATE(51),
    [sym_block_comment] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(289),
    [anon_sym_DOLLAR] = ACTIONS(289),
    [anon_sym_include] = ACTIONS(291),
    [anon_sym_const] = ACTIONS(291),
    [anon_sym_var] = ACTIONS(291),
    [anon_sym_func] = ACTIONS(291),
    [anon_sym_LPAREN] = ACTIONS(291),
    [anon_sym_array] = ACTIONS(291),
    [anon_sym_boolean] = ACTIONS(291),
    [anon_sym_integer] = ACTIONS(291),
    [anon_sym_bigInteger] = ACTIONS(291),
    [anon_sym_rational] = ACTIONS(291),
    [anon_sym_bigRational] = ACTIONS(291),
    [anon_sym_float] = ACTIONS(291),
    [anon_sym_complex] = ACTIONS(291),
    [anon_sym_char] = ACTIONS(291),
    [anon_sym_string] = ACTIONS(291),
    [anon_sym_hash] = ACTIONS(291),
    [anon_sym_set] = ACTIONS(291),
    [anon_sym_struct] = ACTIONS(291),
    [anon_sym_bin64] = ACTIONS(291),
    [anon_sym_bin32] = ACTIONS(291),
    [anon_sym_bstring] = ACTIONS(291),
    [anon_sym_color] = ACTIONS(291),
    [anon_sym_time] = ACTIONS(291),
    [anon_sym_duration] = ACTIONS(291),
    [anon_sym_file] = ACTIONS(291),
    [anon_sym_text] = ACTIONS(291),
    [anon_sym_fileSys] = ACTIONS(291),
    [anon_sym_process] = ACTIONS(291),
    [anon_sym_category] = ACTIONS(291),
    [anon_sym_reference] = ACTIONS(291),
    [anon_sym_ref_list] = ACTIONS(291),
    [anon_sym_program] = ACTIONS(291),
    [anon_sym_ptr] = ACTIONS(291),
    [anon_sym_varfunc] = ACTIONS(291),
    [anon_sym_void] = ACTIONS(291),
    [anon_sym_proc] = ACTIONS(291),
    [anon_sym_type] = ACTIONS(291),
    [anon_sym_object] = ACTIONS(291),
    [anon_sym_expr] = ACTIONS(291),
    [anon_sym_bitset] = ACTIONS(291),
    [sym_NIL] = ACTIONS(291),
    [sym_empty] = ACTIONS(291),
    [sym_STD_NULL] = ACTIONS(291),
    [sym_forward] = ACTIONS(291),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(289),
    [anon_sym_setof] = ACTIONS(289),
    [anon_sym_new] = ACTIONS(291),
    [anon_sym_sub] = ACTIONS(291),
    [anon_sym_PLUS] = ACTIONS(289),
    [anon_sym_DASH] = ACTIONS(289),
    [anon_sym_STAR] = ACTIONS(291),
    [anon_sym_SLASH] = ACTIONS(289),
    [anon_sym_and] = ACTIONS(291),
    [anon_sym_or] = ACTIONS(291),
    [anon_sym_parse] = ACTIONS(291),
    [anon_sym_rem] = ACTIONS(291),
    [anon_sym_div] = ACTIONS(291),
    [anon_sym_mdiv] = ACTIONS(291),
    [anon_sym_mod] = ACTIONS(291),
    [anon_sym_times] = ACTIONS(291),
    [anon_sym_DOT_DOT] = ACTIONS(289),
    [anon_sym_STAR_STAR] = ACTIONS(289),
    [anon_sym_not] = ACTIONS(291),
    [anon_sym_TRUE] = ACTIONS(291),
    [anon_sym_FALSE] = ACTIONS(291),
    [sym_variable] = ACTIONS(291),
    [sym__decimalLiteral] = ACTIONS(291),
    [sym__exponentialLiteral] = ACTIONS(289),
    [sym__negativeExponentialLiteral] = ACTIONS(291),
    [sym__hexLiteral] = ACTIONS(289),
    [sym__octalLiteral] = ACTIONS(289),
    [sym__binaryLiteral] = ACTIONS(289),
    [anon_sym_DQUOTE] = ACTIONS(289),
    [anon_sym_SQUOTE] = ACTIONS(289),
  },
  [52] = {
    [sym_line_comment] = STATE(52),
    [sym_block_comment] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(293),
    [anon_sym_DOLLAR] = ACTIONS(293),
    [anon_sym_include] = ACTIONS(295),
    [anon_sym_const] = ACTIONS(295),
    [anon_sym_var] = ACTIONS(295),
    [anon_sym_func] = ACTIONS(295),
    [anon_sym_LPAREN] = ACTIONS(295),
    [anon_sym_array] = ACTIONS(295),
    [anon_sym_boolean] = ACTIONS(295),
    [anon_sym_integer] = ACTIONS(295),
    [anon_sym_bigInteger] = ACTIONS(295),
    [anon_sym_rational] = ACTIONS(295),
    [anon_sym_bigRational] = ACTIONS(295),
    [anon_sym_float] = ACTIONS(295),
    [anon_sym_complex] = ACTIONS(295),
    [anon_sym_char] = ACTIONS(295),
    [anon_sym_string] = ACTIONS(295),
    [anon_sym_hash] = ACTIONS(295),
    [anon_sym_set] = ACTIONS(295),
    [anon_sym_struct] = ACTIONS(295),
    [anon_sym_bin64] = ACTIONS(295),
    [anon_sym_bin32] = ACTIONS(295),
    [anon_sym_bstring] = ACTIONS(295),
    [anon_sym_color] = ACTIONS(295),
    [anon_sym_time] = ACTIONS(295),
    [anon_sym_duration] = ACTIONS(295),
    [anon_sym_file] = ACTIONS(295),
    [anon_sym_text] = ACTIONS(295),
    [anon_sym_fileSys] = ACTIONS(295),
    [anon_sym_process] = ACTIONS(295),
    [anon_sym_category] = ACTIONS(295),
    [anon_sym_reference] = ACTIONS(295),
    [anon_sym_ref_list] = ACTIONS(295),
    [anon_sym_program] = ACTIONS(295),
    [anon_sym_ptr] = ACTIONS(295),
    [anon_sym_varfunc] = ACTIONS(295),
    [anon_sym_void] = ACTIONS(295),
    [anon_sym_proc] = ACTIONS(295),
    [anon_sym_type] = ACTIONS(295),
    [anon_sym_object] = ACTIONS(295),
    [anon_sym_expr] = ACTIONS(295),
    [anon_sym_bitset] = ACTIONS(295),
    [sym_NIL] = ACTIONS(295),
    [sym_empty] = ACTIONS(295),
    [sym_STD_NULL] = ACTIONS(295),
    [sym_forward] = ACTIONS(295),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(293),
    [anon_sym_setof] = ACTIONS(293),
    [anon_sym_new] = ACTIONS(295),
    [anon_sym_sub] = ACTIONS(295),
    [anon_sym_PLUS] = ACTIONS(293),
    [anon_sym_DASH] = ACTIONS(293),
    [anon_sym_STAR] = ACTIONS(295),
    [anon_sym_SLASH] = ACTIONS(293),
    [anon_sym_and] = ACTIONS(295),
    [anon_sym_or] = ACTIONS(295),
    [anon_sym_parse] = ACTIONS(295),
    [anon_sym_rem] = ACTIONS(295),
    [anon_sym_div] = ACTIONS(295),
    [anon_sym_mdiv] = ACTIONS(295),
    [anon_sym_mod] = ACTIONS(295),
    [anon_sym_times] = ACTIONS(295),
    [anon_sym_DOT_DOT] = ACTIONS(293),
    [anon_sym_STAR_STAR] = ACTIONS(293),
    [anon_sym_not] = ACTIONS(295),
    [anon_sym_TRUE] = ACTIONS(295),
    [anon_sym_FALSE] = ACTIONS(295),
    [sym_variable] = ACTIONS(295),
    [sym__decimalLiteral] = ACTIONS(295),
    [sym__exponentialLiteral] = ACTIONS(293),
    [sym__negativeExponentialLiteral] = ACTIONS(295),
    [sym__hexLiteral] = ACTIONS(293),
    [sym__octalLiteral] = ACTIONS(293),
    [sym__binaryLiteral] = ACTIONS(293),
    [anon_sym_DQUOTE] = ACTIONS(293),
    [anon_sym_SQUOTE] = ACTIONS(293),
  },
  [53] = {
    [sym_line_comment] = STATE(53),
    [sym_block_comment] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(297),
    [anon_sym_DOLLAR] = ACTIONS(297),
    [anon_sym_include] = ACTIONS(299),
    [anon_sym_const] = ACTIONS(299),
    [anon_sym_var] = ACTIONS(299),
    [anon_sym_func] = ACTIONS(299),
    [anon_sym_LPAREN] = ACTIONS(299),
    [anon_sym_array] = ACTIONS(299),
    [anon_sym_boolean] = ACTIONS(299),
    [anon_sym_integer] = ACTIONS(299),
    [anon_sym_bigInteger] = ACTIONS(299),
    [anon_sym_rational] = ACTIONS(299),
    [anon_sym_bigRational] = ACTIONS(299),
    [anon_sym_float] = ACTIONS(299),
    [anon_sym_complex] = ACTIONS(299),
    [anon_sym_char] = ACTIONS(299),
    [anon_sym_string] = ACTIONS(299),
    [anon_sym_hash] = ACTIONS(299),
    [anon_sym_set] = ACTIONS(299),
    [anon_sym_struct] = ACTIONS(299),
    [anon_sym_bin64] = ACTIONS(299),
    [anon_sym_bin32] = ACTIONS(299),
    [anon_sym_bstring] = ACTIONS(299),
    [anon_sym_color] = ACTIONS(299),
    [anon_sym_time] = ACTIONS(299),
    [anon_sym_duration] = ACTIONS(299),
    [anon_sym_file] = ACTIONS(299),
    [anon_sym_text] = ACTIONS(299),
    [anon_sym_fileSys] = ACTIONS(299),
    [anon_sym_process] = ACTIONS(299),
    [anon_sym_category] = ACTIONS(299),
    [anon_sym_reference] = ACTIONS(299),
    [anon_sym_ref_list] = ACTIONS(299),
    [anon_sym_program] = ACTIONS(299),
    [anon_sym_ptr] = ACTIONS(299),
    [anon_sym_varfunc] = ACTIONS(299),
    [anon_sym_void] = ACTIONS(299),
    [anon_sym_proc] = ACTIONS(299),
    [anon_sym_type] = ACTIONS(299),
    [anon_sym_object] = ACTIONS(299),
    [anon_sym_expr] = ACTIONS(299),
    [anon_sym_bitset] = ACTIONS(299),
    [sym_NIL] = ACTIONS(299),
    [sym_empty] = ACTIONS(299),
    [sym_STD_NULL] = ACTIONS(299),
    [sym_forward] = ACTIONS(299),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(297),
    [anon_sym_setof] = ACTIONS(297),
    [anon_sym_new] = ACTIONS(299),
    [anon_sym_sub] = ACTIONS(299),
    [anon_sym_PLUS] = ACTIONS(297),
    [anon_sym_DASH] = ACTIONS(297),
    [anon_sym_STAR] = ACTIONS(299),
    [anon_sym_SLASH] = ACTIONS(297),
    [anon_sym_and] = ACTIONS(299),
    [anon_sym_or] = ACTIONS(299),
    [anon_sym_parse] = ACTIONS(299),
    [anon_sym_rem] = ACTIONS(299),
    [anon_sym_div] = ACTIONS(299),
    [anon_sym_mdiv] = ACTIONS(299),
    [anon_sym_mod] = ACTIONS(299),
    [anon_sym_times] = ACTIONS(299),
    [anon_sym_DOT_DOT] = ACTIONS(297),
    [anon_sym_STAR_STAR] = ACTIONS(297),
    [anon_sym_not] = ACTIONS(299),
    [anon_sym_TRUE] = ACTIONS(299),
    [anon_sym_FALSE] = ACTIONS(299),
    [sym_variable] = ACTIONS(299),
    [sym__decimalLiteral] = ACTIONS(299),
    [sym__exponentialLiteral] = ACTIONS(297),
    [sym__negativeExponentialLiteral] = ACTIONS(299),
    [sym__hexLiteral] = ACTIONS(297),
    [sym__octalLiteral] = ACTIONS(297),
    [sym__binaryLiteral] = ACTIONS(297),
    [anon_sym_DQUOTE] = ACTIONS(297),
    [anon_sym_SQUOTE] = ACTIONS(297),
  },
  [54] = {
    [sym_line_comment] = STATE(54),
    [sym_block_comment] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(301),
    [anon_sym_DOLLAR] = ACTIONS(301),
    [anon_sym_include] = ACTIONS(303),
    [anon_sym_const] = ACTIONS(303),
    [anon_sym_var] = ACTIONS(303),
    [anon_sym_func] = ACTIONS(303),
    [anon_sym_LPAREN] = ACTIONS(303),
    [anon_sym_array] = ACTIONS(303),
    [anon_sym_boolean] = ACTIONS(303),
    [anon_sym_integer] = ACTIONS(303),
    [anon_sym_bigInteger] = ACTIONS(303),
    [anon_sym_rational] = ACTIONS(303),
    [anon_sym_bigRational] = ACTIONS(303),
    [anon_sym_float] = ACTIONS(303),
    [anon_sym_complex] = ACTIONS(303),
    [anon_sym_char] = ACTIONS(303),
    [anon_sym_string] = ACTIONS(303),
    [anon_sym_hash] = ACTIONS(303),
    [anon_sym_set] = ACTIONS(303),
    [anon_sym_struct] = ACTIONS(303),
    [anon_sym_bin64] = ACTIONS(303),
    [anon_sym_bin32] = ACTIONS(303),
    [anon_sym_bstring] = ACTIONS(303),
    [anon_sym_color] = ACTIONS(303),
    [anon_sym_time] = ACTIONS(303),
    [anon_sym_duration] = ACTIONS(303),
    [anon_sym_file] = ACTIONS(303),
    [anon_sym_text] = ACTIONS(303),
    [anon_sym_fileSys] = ACTIONS(303),
    [anon_sym_process] = ACTIONS(303),
    [anon_sym_category] = ACTIONS(303),
    [anon_sym_reference] = ACTIONS(303),
    [anon_sym_ref_list] = ACTIONS(303),
    [anon_sym_program] = ACTIONS(303),
    [anon_sym_ptr] = ACTIONS(303),
    [anon_sym_varfunc] = ACTIONS(303),
    [anon_sym_void] = ACTIONS(303),
    [anon_sym_proc] = ACTIONS(303),
    [anon_sym_type] = ACTIONS(303),
    [anon_sym_object] = ACTIONS(303),
    [anon_sym_expr] = ACTIONS(303),
    [anon_sym_bitset] = ACTIONS(303),
    [sym_NIL] = ACTIONS(303),
    [sym_empty] = ACTIONS(303),
    [sym_STD_NULL] = ACTIONS(303),
    [sym_forward] = ACTIONS(303),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(301),
    [anon_sym_setof] = ACTIONS(301),
    [anon_sym_new] = ACTIONS(303),
    [anon_sym_sub] = ACTIONS(303),
    [anon_sym_PLUS] = ACTIONS(301),
    [anon_sym_DASH] = ACTIONS(301),
    [anon_sym_STAR] = ACTIONS(303),
    [anon_sym_SLASH] = ACTIONS(301),
    [anon_sym_and] = ACTIONS(303),
    [anon_sym_or] = ACTIONS(303),
    [anon_sym_parse] = ACTIONS(303),
    [anon_sym_rem] = ACTIONS(303),
    [anon_sym_div] = ACTIONS(303),
    [anon_sym_mdiv] = ACTIONS(303),
    [anon_sym_mod] = ACTIONS(303),
    [anon_sym_times] = ACTIONS(303),
    [anon_sym_DOT_DOT] = ACTIONS(301),
    [anon_sym_STAR_STAR] = ACTIONS(301),
    [anon_sym_not] = ACTIONS(303),
    [anon_sym_TRUE] = ACTIONS(303),
    [anon_sym_FALSE] = ACTIONS(303),
    [sym_variable] = ACTIONS(303),
    [sym__decimalLiteral] = ACTIONS(303),
    [sym__exponentialLiteral] = ACTIONS(301),
    [sym__negativeExponentialLiteral] = ACTIONS(303),
    [sym__hexLiteral] = ACTIONS(301),
    [sym__octalLiteral] = ACTIONS(301),
    [sym__binaryLiteral] = ACTIONS(301),
    [anon_sym_DQUOTE] = ACTIONS(301),
    [anon_sym_SQUOTE] = ACTIONS(301),
  },
  [55] = {
    [sym_line_comment] = STATE(55),
    [sym_block_comment] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(305),
    [anon_sym_DOLLAR] = ACTIONS(305),
    [anon_sym_include] = ACTIONS(307),
    [anon_sym_const] = ACTIONS(307),
    [anon_sym_var] = ACTIONS(307),
    [anon_sym_func] = ACTIONS(307),
    [anon_sym_LPAREN] = ACTIONS(307),
    [anon_sym_array] = ACTIONS(307),
    [anon_sym_boolean] = ACTIONS(307),
    [anon_sym_integer] = ACTIONS(307),
    [anon_sym_bigInteger] = ACTIONS(307),
    [anon_sym_rational] = ACTIONS(307),
    [anon_sym_bigRational] = ACTIONS(307),
    [anon_sym_float] = ACTIONS(307),
    [anon_sym_complex] = ACTIONS(307),
    [anon_sym_char] = ACTIONS(307),
    [anon_sym_string] = ACTIONS(307),
    [anon_sym_hash] = ACTIONS(307),
    [anon_sym_set] = ACTIONS(307),
    [anon_sym_struct] = ACTIONS(307),
    [anon_sym_bin64] = ACTIONS(307),
    [anon_sym_bin32] = ACTIONS(307),
    [anon_sym_bstring] = ACTIONS(307),
    [anon_sym_color] = ACTIONS(307),
    [anon_sym_time] = ACTIONS(307),
    [anon_sym_duration] = ACTIONS(307),
    [anon_sym_file] = ACTIONS(307),
    [anon_sym_text] = ACTIONS(307),
    [anon_sym_fileSys] = ACTIONS(307),
    [anon_sym_process] = ACTIONS(307),
    [anon_sym_category] = ACTIONS(307),
    [anon_sym_reference] = ACTIONS(307),
    [anon_sym_ref_list] = ACTIONS(307),
    [anon_sym_program] = ACTIONS(307),
    [anon_sym_ptr] = ACTIONS(307),
    [anon_sym_varfunc] = ACTIONS(307),
    [anon_sym_void] = ACTIONS(307),
    [anon_sym_proc] = ACTIONS(307),
    [anon_sym_type] = ACTIONS(307),
    [anon_sym_object] = ACTIONS(307),
    [anon_sym_expr] = ACTIONS(307),
    [anon_sym_bitset] = ACTIONS(307),
    [sym_NIL] = ACTIONS(307),
    [sym_empty] = ACTIONS(307),
    [sym_STD_NULL] = ACTIONS(307),
    [sym_forward] = ACTIONS(307),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(305),
    [anon_sym_setof] = ACTIONS(305),
    [anon_sym_new] = ACTIONS(307),
    [anon_sym_sub] = ACTIONS(307),
    [anon_sym_DASH] = ACTIONS(305),
    [anon_sym_not] = ACTIONS(307),
    [anon_sym_TRUE] = ACTIONS(307),
    [anon_sym_FALSE] = ACTIONS(307),
    [sym_variable] = ACTIONS(307),
    [sym__decimalLiteral] = ACTIONS(307),
    [sym__exponentialLiteral] = ACTIONS(305),
    [sym__negativeExponentialLiteral] = ACTIONS(307),
    [sym__hexLiteral] = ACTIONS(305),
    [sym__octalLiteral] = ACTIONS(305),
    [sym__binaryLiteral] = ACTIONS(305),
    [anon_sym_DQUOTE] = ACTIONS(305),
    [anon_sym_SQUOTE] = ACTIONS(305),
  },
  [56] = {
    [sym_line_comment] = STATE(56),
    [sym_block_comment] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(309),
    [anon_sym_DOLLAR] = ACTIONS(309),
    [anon_sym_include] = ACTIONS(311),
    [anon_sym_const] = ACTIONS(311),
    [anon_sym_var] = ACTIONS(311),
    [anon_sym_func] = ACTIONS(311),
    [anon_sym_LPAREN] = ACTIONS(311),
    [anon_sym_array] = ACTIONS(311),
    [anon_sym_boolean] = ACTIONS(311),
    [anon_sym_integer] = ACTIONS(311),
    [anon_sym_bigInteger] = ACTIONS(311),
    [anon_sym_rational] = ACTIONS(311),
    [anon_sym_bigRational] = ACTIONS(311),
    [anon_sym_float] = ACTIONS(311),
    [anon_sym_complex] = ACTIONS(311),
    [anon_sym_char] = ACTIONS(311),
    [anon_sym_string] = ACTIONS(311),
    [anon_sym_hash] = ACTIONS(311),
    [anon_sym_set] = ACTIONS(311),
    [anon_sym_struct] = ACTIONS(311),
    [anon_sym_bin64] = ACTIONS(311),
    [anon_sym_bin32] = ACTIONS(311),
    [anon_sym_bstring] = ACTIONS(311),
    [anon_sym_color] = ACTIONS(311),
    [anon_sym_time] = ACTIONS(311),
    [anon_sym_duration] = ACTIONS(311),
    [anon_sym_file] = ACTIONS(311),
    [anon_sym_text] = ACTIONS(311),
    [anon_sym_fileSys] = ACTIONS(311),
    [anon_sym_process] = ACTIONS(311),
    [anon_sym_category] = ACTIONS(311),
    [anon_sym_reference] = ACTIONS(311),
    [anon_sym_ref_list] = ACTIONS(311),
    [anon_sym_program] = ACTIONS(311),
    [anon_sym_ptr] = ACTIONS(311),
    [anon_sym_varfunc] = ACTIONS(311),
    [anon_sym_void] = ACTIONS(311),
    [anon_sym_proc] = ACTIONS(311),
    [anon_sym_type] = ACTIONS(311),
    [anon_sym_object] = ACTIONS(311),
    [anon_sym_expr] = ACTIONS(311),
    [anon_sym_bitset] = ACTIONS(311),
    [sym_NIL] = ACTIONS(311),
    [sym_empty] = ACTIONS(311),
    [sym_STD_NULL] = ACTIONS(311),
    [sym_forward] = ACTIONS(311),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(309),
    [anon_sym_setof] = ACTIONS(309),
    [anon_sym_new] = ACTIONS(311),
    [anon_sym_sub] = ACTIONS(311),
    [anon_sym_DASH] = ACTIONS(309),
    [anon_sym_not] = ACTIONS(311),
    [anon_sym_TRUE] = ACTIONS(311),
    [anon_sym_FALSE] = ACTIONS(311),
    [sym_variable] = ACTIONS(311),
    [sym__decimalLiteral] = ACTIONS(311),
    [sym__exponentialLiteral] = ACTIONS(309),
    [sym__negativeExponentialLiteral] = ACTIONS(311),
    [sym__hexLiteral] = ACTIONS(309),
    [sym__octalLiteral] = ACTIONS(309),
    [sym__binaryLiteral] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(309),
    [anon_sym_SQUOTE] = ACTIONS(309),
  },
  [57] = {
    [sym_line_comment] = STATE(57),
    [sym_block_comment] = STATE(57),
    [ts_builtin_sym_end] = ACTIONS(313),
    [anon_sym_DOLLAR] = ACTIONS(313),
    [anon_sym_include] = ACTIONS(315),
    [anon_sym_const] = ACTIONS(315),
    [anon_sym_var] = ACTIONS(315),
    [anon_sym_func] = ACTIONS(315),
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_array] = ACTIONS(315),
    [anon_sym_boolean] = ACTIONS(315),
    [anon_sym_integer] = ACTIONS(315),
    [anon_sym_bigInteger] = ACTIONS(315),
    [anon_sym_rational] = ACTIONS(315),
    [anon_sym_bigRational] = ACTIONS(315),
    [anon_sym_float] = ACTIONS(315),
    [anon_sym_complex] = ACTIONS(315),
    [anon_sym_char] = ACTIONS(315),
    [anon_sym_string] = ACTIONS(315),
    [anon_sym_hash] = ACTIONS(315),
    [anon_sym_set] = ACTIONS(315),
    [anon_sym_struct] = ACTIONS(315),
    [anon_sym_bin64] = ACTIONS(315),
    [anon_sym_bin32] = ACTIONS(315),
    [anon_sym_bstring] = ACTIONS(315),
    [anon_sym_color] = ACTIONS(315),
    [anon_sym_time] = ACTIONS(315),
    [anon_sym_duration] = ACTIONS(315),
    [anon_sym_file] = ACTIONS(315),
    [anon_sym_text] = ACTIONS(315),
    [anon_sym_fileSys] = ACTIONS(315),
    [anon_sym_process] = ACTIONS(315),
    [anon_sym_category] = ACTIONS(315),
    [anon_sym_reference] = ACTIONS(315),
    [anon_sym_ref_list] = ACTIONS(315),
    [anon_sym_program] = ACTIONS(315),
    [anon_sym_ptr] = ACTIONS(315),
    [anon_sym_varfunc] = ACTIONS(315),
    [anon_sym_void] = ACTIONS(315),
    [anon_sym_proc] = ACTIONS(315),
    [anon_sym_type] = ACTIONS(315),
    [anon_sym_object] = ACTIONS(315),
    [anon_sym_expr] = ACTIONS(315),
    [anon_sym_bitset] = ACTIONS(315),
    [sym_NIL] = ACTIONS(315),
    [sym_empty] = ACTIONS(315),
    [sym_STD_NULL] = ACTIONS(315),
    [sym_forward] = ACTIONS(315),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(313),
    [anon_sym_setof] = ACTIONS(313),
    [anon_sym_new] = ACTIONS(315),
    [anon_sym_sub] = ACTIONS(315),
    [anon_sym_DASH] = ACTIONS(313),
    [anon_sym_not] = ACTIONS(315),
    [anon_sym_TRUE] = ACTIONS(315),
    [anon_sym_FALSE] = ACTIONS(315),
    [sym_variable] = ACTIONS(315),
    [sym__decimalLiteral] = ACTIONS(315),
    [sym__exponentialLiteral] = ACTIONS(313),
    [sym__negativeExponentialLiteral] = ACTIONS(315),
    [sym__hexLiteral] = ACTIONS(313),
    [sym__octalLiteral] = ACTIONS(313),
    [sym__binaryLiteral] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(313),
    [anon_sym_SQUOTE] = ACTIONS(313),
  },
  [58] = {
    [sym_line_comment] = STATE(58),
    [sym_block_comment] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(213),
    [anon_sym_DOLLAR] = ACTIONS(213),
    [anon_sym_include] = ACTIONS(215),
    [anon_sym_const] = ACTIONS(215),
    [anon_sym_var] = ACTIONS(215),
    [anon_sym_func] = ACTIONS(215),
    [anon_sym_LPAREN] = ACTIONS(215),
    [anon_sym_array] = ACTIONS(215),
    [anon_sym_boolean] = ACTIONS(215),
    [anon_sym_integer] = ACTIONS(215),
    [anon_sym_bigInteger] = ACTIONS(215),
    [anon_sym_rational] = ACTIONS(215),
    [anon_sym_bigRational] = ACTIONS(215),
    [anon_sym_float] = ACTIONS(215),
    [anon_sym_complex] = ACTIONS(215),
    [anon_sym_char] = ACTIONS(215),
    [anon_sym_string] = ACTIONS(215),
    [anon_sym_hash] = ACTIONS(215),
    [anon_sym_set] = ACTIONS(215),
    [anon_sym_struct] = ACTIONS(215),
    [anon_sym_bin64] = ACTIONS(215),
    [anon_sym_bin32] = ACTIONS(215),
    [anon_sym_bstring] = ACTIONS(215),
    [anon_sym_color] = ACTIONS(215),
    [anon_sym_time] = ACTIONS(215),
    [anon_sym_duration] = ACTIONS(215),
    [anon_sym_file] = ACTIONS(215),
    [anon_sym_text] = ACTIONS(215),
    [anon_sym_fileSys] = ACTIONS(215),
    [anon_sym_process] = ACTIONS(215),
    [anon_sym_category] = ACTIONS(215),
    [anon_sym_reference] = ACTIONS(215),
    [anon_sym_ref_list] = ACTIONS(215),
    [anon_sym_program] = ACTIONS(215),
    [anon_sym_ptr] = ACTIONS(215),
    [anon_sym_varfunc] = ACTIONS(215),
    [anon_sym_void] = ACTIONS(215),
    [anon_sym_proc] = ACTIONS(215),
    [anon_sym_type] = ACTIONS(215),
    [anon_sym_object] = ACTIONS(215),
    [anon_sym_expr] = ACTIONS(215),
    [anon_sym_bitset] = ACTIONS(215),
    [sym_NIL] = ACTIONS(215),
    [sym_empty] = ACTIONS(215),
    [sym_STD_NULL] = ACTIONS(215),
    [sym_forward] = ACTIONS(215),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(213),
    [anon_sym_setof] = ACTIONS(213),
    [anon_sym_new] = ACTIONS(215),
    [anon_sym_sub] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(213),
    [anon_sym_not] = ACTIONS(215),
    [anon_sym_TRUE] = ACTIONS(215),
    [anon_sym_FALSE] = ACTIONS(215),
    [sym_variable] = ACTIONS(215),
    [sym__decimalLiteral] = ACTIONS(215),
    [sym__exponentialLiteral] = ACTIONS(213),
    [sym__negativeExponentialLiteral] = ACTIONS(215),
    [sym__hexLiteral] = ACTIONS(213),
    [sym__octalLiteral] = ACTIONS(213),
    [sym__binaryLiteral] = ACTIONS(213),
    [anon_sym_DQUOTE] = ACTIONS(213),
    [anon_sym_SQUOTE] = ACTIONS(213),
  },
  [59] = {
    [sym_line_comment] = STATE(59),
    [sym_block_comment] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(317),
    [anon_sym_DOLLAR] = ACTIONS(317),
    [anon_sym_include] = ACTIONS(319),
    [anon_sym_const] = ACTIONS(319),
    [anon_sym_var] = ACTIONS(319),
    [anon_sym_func] = ACTIONS(319),
    [anon_sym_LPAREN] = ACTIONS(319),
    [anon_sym_array] = ACTIONS(319),
    [anon_sym_boolean] = ACTIONS(319),
    [anon_sym_integer] = ACTIONS(319),
    [anon_sym_bigInteger] = ACTIONS(319),
    [anon_sym_rational] = ACTIONS(319),
    [anon_sym_bigRational] = ACTIONS(319),
    [anon_sym_float] = ACTIONS(319),
    [anon_sym_complex] = ACTIONS(319),
    [anon_sym_char] = ACTIONS(319),
    [anon_sym_string] = ACTIONS(319),
    [anon_sym_hash] = ACTIONS(319),
    [anon_sym_set] = ACTIONS(319),
    [anon_sym_struct] = ACTIONS(319),
    [anon_sym_bin64] = ACTIONS(319),
    [anon_sym_bin32] = ACTIONS(319),
    [anon_sym_bstring] = ACTIONS(319),
    [anon_sym_color] = ACTIONS(319),
    [anon_sym_time] = ACTIONS(319),
    [anon_sym_duration] = ACTIONS(319),
    [anon_sym_file] = ACTIONS(319),
    [anon_sym_text] = ACTIONS(319),
    [anon_sym_fileSys] = ACTIONS(319),
    [anon_sym_process] = ACTIONS(319),
    [anon_sym_category] = ACTIONS(319),
    [anon_sym_reference] = ACTIONS(319),
    [anon_sym_ref_list] = ACTIONS(319),
    [anon_sym_program] = ACTIONS(319),
    [anon_sym_ptr] = ACTIONS(319),
    [anon_sym_varfunc] = ACTIONS(319),
    [anon_sym_void] = ACTIONS(319),
    [anon_sym_proc] = ACTIONS(319),
    [anon_sym_type] = ACTIONS(319),
    [anon_sym_object] = ACTIONS(319),
    [anon_sym_expr] = ACTIONS(319),
    [anon_sym_bitset] = ACTIONS(319),
    [sym_NIL] = ACTIONS(319),
    [sym_empty] = ACTIONS(319),
    [sym_STD_NULL] = ACTIONS(319),
    [sym_forward] = ACTIONS(319),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_setof] = ACTIONS(317),
    [anon_sym_new] = ACTIONS(319),
    [anon_sym_sub] = ACTIONS(319),
    [anon_sym_DASH] = ACTIONS(317),
    [anon_sym_not] = ACTIONS(319),
    [anon_sym_TRUE] = ACTIONS(319),
    [anon_sym_FALSE] = ACTIONS(319),
    [sym_variable] = ACTIONS(319),
    [sym__decimalLiteral] = ACTIONS(319),
    [sym__exponentialLiteral] = ACTIONS(317),
    [sym__negativeExponentialLiteral] = ACTIONS(319),
    [sym__hexLiteral] = ACTIONS(317),
    [sym__octalLiteral] = ACTIONS(317),
    [sym__binaryLiteral] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(317),
    [anon_sym_SQUOTE] = ACTIONS(317),
  },
  [60] = {
    [sym_line_comment] = STATE(60),
    [sym_block_comment] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(321),
    [anon_sym_DOLLAR] = ACTIONS(321),
    [anon_sym_include] = ACTIONS(323),
    [anon_sym_const] = ACTIONS(323),
    [anon_sym_var] = ACTIONS(323),
    [anon_sym_func] = ACTIONS(323),
    [anon_sym_LPAREN] = ACTIONS(323),
    [anon_sym_array] = ACTIONS(323),
    [anon_sym_boolean] = ACTIONS(323),
    [anon_sym_integer] = ACTIONS(323),
    [anon_sym_bigInteger] = ACTIONS(323),
    [anon_sym_rational] = ACTIONS(323),
    [anon_sym_bigRational] = ACTIONS(323),
    [anon_sym_float] = ACTIONS(323),
    [anon_sym_complex] = ACTIONS(323),
    [anon_sym_char] = ACTIONS(323),
    [anon_sym_string] = ACTIONS(323),
    [anon_sym_hash] = ACTIONS(323),
    [anon_sym_set] = ACTIONS(323),
    [anon_sym_struct] = ACTIONS(323),
    [anon_sym_bin64] = ACTIONS(323),
    [anon_sym_bin32] = ACTIONS(323),
    [anon_sym_bstring] = ACTIONS(323),
    [anon_sym_color] = ACTIONS(323),
    [anon_sym_time] = ACTIONS(323),
    [anon_sym_duration] = ACTIONS(323),
    [anon_sym_file] = ACTIONS(323),
    [anon_sym_text] = ACTIONS(323),
    [anon_sym_fileSys] = ACTIONS(323),
    [anon_sym_process] = ACTIONS(323),
    [anon_sym_category] = ACTIONS(323),
    [anon_sym_reference] = ACTIONS(323),
    [anon_sym_ref_list] = ACTIONS(323),
    [anon_sym_program] = ACTIONS(323),
    [anon_sym_ptr] = ACTIONS(323),
    [anon_sym_varfunc] = ACTIONS(323),
    [anon_sym_void] = ACTIONS(323),
    [anon_sym_proc] = ACTIONS(323),
    [anon_sym_type] = ACTIONS(323),
    [anon_sym_object] = ACTIONS(323),
    [anon_sym_expr] = ACTIONS(323),
    [anon_sym_bitset] = ACTIONS(323),
    [sym_NIL] = ACTIONS(323),
    [sym_empty] = ACTIONS(323),
    [sym_STD_NULL] = ACTIONS(323),
    [sym_forward] = ACTIONS(323),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(321),
    [anon_sym_setof] = ACTIONS(321),
    [anon_sym_new] = ACTIONS(323),
    [anon_sym_sub] = ACTIONS(323),
    [anon_sym_DASH] = ACTIONS(321),
    [anon_sym_not] = ACTIONS(323),
    [anon_sym_TRUE] = ACTIONS(323),
    [anon_sym_FALSE] = ACTIONS(323),
    [sym_variable] = ACTIONS(323),
    [sym__decimalLiteral] = ACTIONS(323),
    [sym__exponentialLiteral] = ACTIONS(321),
    [sym__negativeExponentialLiteral] = ACTIONS(323),
    [sym__hexLiteral] = ACTIONS(321),
    [sym__octalLiteral] = ACTIONS(321),
    [sym__binaryLiteral] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(321),
    [anon_sym_SQUOTE] = ACTIONS(321),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(61), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(327), 9,
      anon_sym_LBRACE,
      anon_sym_setof,
      anon_sym_DASH,
      sym__exponentialLiteral,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(325), 49,
      anon_sym_func,
      anon_sym_LPAREN,
      anon_sym_array,
      anon_sym_boolean,
      anon_sym_integer,
      anon_sym_bigInteger,
      anon_sym_rational,
      anon_sym_bigRational,
      anon_sym_float,
      anon_sym_complex,
      anon_sym_char,
      anon_sym_string,
      anon_sym_hash,
      anon_sym_set,
      anon_sym_struct,
      anon_sym_bin64,
      anon_sym_bin32,
      anon_sym_bstring,
      anon_sym_color,
      anon_sym_time,
      anon_sym_duration,
      anon_sym_file,
      anon_sym_text,
      anon_sym_fileSys,
      anon_sym_process,
      anon_sym_category,
      anon_sym_reference,
      anon_sym_ref_list,
      anon_sym_program,
      anon_sym_ptr,
      anon_sym_varfunc,
      anon_sym_void,
      anon_sym_proc,
      anon_sym_type,
      anon_sym_object,
      anon_sym_expr,
      anon_sym_bitset,
      sym_NIL,
      sym_empty,
      sym_STD_NULL,
      sym_forward,
      anon_sym_new,
      anon_sym_sub,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_variable,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
  [73] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(62), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 9,
      anon_sym_LBRACE,
      anon_sym_setof,
      anon_sym_DASH,
      sym__exponentialLiteral,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(329), 49,
      anon_sym_func,
      anon_sym_LPAREN,
      anon_sym_array,
      anon_sym_boolean,
      anon_sym_integer,
      anon_sym_bigInteger,
      anon_sym_rational,
      anon_sym_bigRational,
      anon_sym_float,
      anon_sym_complex,
      anon_sym_char,
      anon_sym_string,
      anon_sym_hash,
      anon_sym_set,
      anon_sym_struct,
      anon_sym_bin64,
      anon_sym_bin32,
      anon_sym_bstring,
      anon_sym_color,
      anon_sym_time,
      anon_sym_duration,
      anon_sym_file,
      anon_sym_text,
      anon_sym_fileSys,
      anon_sym_process,
      anon_sym_category,
      anon_sym_reference,
      anon_sym_ref_list,
      anon_sym_program,
      anon_sym_ptr,
      anon_sym_varfunc,
      anon_sym_void,
      anon_sym_proc,
      anon_sym_type,
      anon_sym_object,
      anon_sym_expr,
      anon_sym_bitset,
      sym_NIL,
      sym_empty,
      sym_STD_NULL,
      sym_forward,
      anon_sym_new,
      anon_sym_sub,
      anon_sym_not,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_variable,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
  [146] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(335), 1,
      anon_sym_array,
    ACTIONS(337), 1,
      anon_sym_ord,
    ACTIONS(17), 2,
      anon_sym_file,
      anon_sym_proc,
    STATE(24), 2,
      sym_type,
      sym_castFunction,
    STATE(63), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(333), 33,
      anon_sym_func,
      anon_sym_boolean,
      anon_sym_integer,
      anon_sym_bigInteger,
      anon_sym_rational,
      anon_sym_bigRational,
      anon_sym_float,
      anon_sym_complex,
      anon_sym_char,
      anon_sym_string,
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
      anon_sym_varfunc,
      anon_sym_void,
      anon_sym_type,
      anon_sym_object,
      anon_sym_expr,
      anon_sym_bitset,
  [206] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(341), 1,
      anon_sym_array,
    ACTIONS(345), 1,
      anon_sym_ord,
    ACTIONS(343), 2,
      anon_sym_file,
      anon_sym_proc,
    STATE(64), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(89), 2,
      sym_type,
      sym_castFunction,
    ACTIONS(339), 33,
      anon_sym_func,
      anon_sym_boolean,
      anon_sym_integer,
      anon_sym_bigInteger,
      anon_sym_rational,
      anon_sym_bigRational,
      anon_sym_float,
      anon_sym_complex,
      anon_sym_char,
      anon_sym_string,
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
      anon_sym_varfunc,
      anon_sym_void,
      anon_sym_type,
      anon_sym_object,
      anon_sym_expr,
      anon_sym_bitset,
  [266] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(123), 1,
      anon_sym_COLON,
    ACTIONS(335), 1,
      anon_sym_array,
    STATE(220), 1,
      sym_type,
    ACTIONS(17), 2,
      anon_sym_file,
      anon_sym_proc,
    STATE(65), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(333), 33,
      anon_sym_func,
      anon_sym_boolean,
      anon_sym_integer,
      anon_sym_bigInteger,
      anon_sym_rational,
      anon_sym_bigRational,
      anon_sym_float,
      anon_sym_complex,
      anon_sym_char,
      anon_sym_string,
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
      anon_sym_varfunc,
      anon_sym_void,
      anon_sym_type,
      anon_sym_object,
      anon_sym_expr,
      anon_sym_bitset,
  [325] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(335), 1,
      anon_sym_array,
    STATE(206), 1,
      sym_type,
    ACTIONS(17), 2,
      anon_sym_file,
      anon_sym_proc,
    STATE(66), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(333), 33,
      anon_sym_func,
      anon_sym_boolean,
      anon_sym_integer,
      anon_sym_bigInteger,
      anon_sym_rational,
      anon_sym_bigRational,
      anon_sym_float,
      anon_sym_complex,
      anon_sym_char,
      anon_sym_string,
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
      anon_sym_varfunc,
      anon_sym_void,
      anon_sym_type,
      anon_sym_object,
      anon_sym_expr,
      anon_sym_bitset,
  [381] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(341), 1,
      anon_sym_array,
    ACTIONS(347), 1,
      anon_sym_struct,
    STATE(227), 1,
      sym_type,
    ACTIONS(343), 2,
      anon_sym_file,
      anon_sym_proc,
    STATE(67), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(339), 32,
      anon_sym_func,
      anon_sym_boolean,
      anon_sym_integer,
      anon_sym_bigInteger,
      anon_sym_rational,
      anon_sym_bigRational,
      anon_sym_float,
      anon_sym_complex,
      anon_sym_char,
      anon_sym_string,
      anon_sym_hash,
      anon_sym_set,
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
      anon_sym_varfunc,
      anon_sym_void,
      anon_sym_type,
      anon_sym_object,
      anon_sym_expr,
      anon_sym_bitset,
  [439] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(341), 1,
      anon_sym_array,
    ACTIONS(349), 1,
      anon_sym_struct,
    STATE(193), 1,
      sym_type,
    ACTIONS(343), 2,
      anon_sym_file,
      anon_sym_proc,
    STATE(68), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(339), 32,
      anon_sym_func,
      anon_sym_boolean,
      anon_sym_integer,
      anon_sym_bigInteger,
      anon_sym_rational,
      anon_sym_bigRational,
      anon_sym_float,
      anon_sym_complex,
      anon_sym_char,
      anon_sym_string,
      anon_sym_hash,
      anon_sym_set,
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
      anon_sym_varfunc,
      anon_sym_void,
      anon_sym_type,
      anon_sym_object,
      anon_sym_expr,
      anon_sym_bitset,
  [497] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(341), 1,
      anon_sym_array,
    STATE(82), 1,
      sym_type,
    ACTIONS(343), 2,
      anon_sym_file,
      anon_sym_proc,
    STATE(69), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(339), 33,
      anon_sym_func,
      anon_sym_boolean,
      anon_sym_integer,
      anon_sym_bigInteger,
      anon_sym_rational,
      anon_sym_bigRational,
      anon_sym_float,
      anon_sym_complex,
      anon_sym_char,
      anon_sym_string,
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
      anon_sym_varfunc,
      anon_sym_void,
      anon_sym_type,
      anon_sym_object,
      anon_sym_expr,
      anon_sym_bitset,
  [553] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(335), 1,
      anon_sym_array,
    STATE(198), 1,
      sym_type,
    ACTIONS(17), 2,
      anon_sym_file,
      anon_sym_proc,
    STATE(70), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(333), 33,
      anon_sym_func,
      anon_sym_boolean,
      anon_sym_integer,
      anon_sym_bigInteger,
      anon_sym_rational,
      anon_sym_bigRational,
      anon_sym_float,
      anon_sym_complex,
      anon_sym_char,
      anon_sym_string,
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
      anon_sym_varfunc,
      anon_sym_void,
      anon_sym_type,
      anon_sym_object,
      anon_sym_expr,
      anon_sym_bitset,
  [609] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(335), 1,
      anon_sym_array,
    ACTIONS(351), 1,
      anon_sym_func,
    STATE(194), 1,
      sym_type,
    ACTIONS(17), 2,
      anon_sym_file,
      anon_sym_proc,
    STATE(71), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(333), 32,
      anon_sym_boolean,
      anon_sym_integer,
      anon_sym_bigInteger,
      anon_sym_rational,
      anon_sym_bigRational,
      anon_sym_float,
      anon_sym_complex,
      anon_sym_char,
      anon_sym_string,
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
      anon_sym_varfunc,
      anon_sym_void,
      anon_sym_type,
      anon_sym_object,
      anon_sym_expr,
      anon_sym_bitset,
  [667] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(335), 1,
      anon_sym_array,
    STATE(219), 1,
      sym_type,
    ACTIONS(17), 2,
      anon_sym_file,
      anon_sym_proc,
    STATE(72), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(333), 33,
      anon_sym_func,
      anon_sym_boolean,
      anon_sym_integer,
      anon_sym_bigInteger,
      anon_sym_rational,
      anon_sym_bigRational,
      anon_sym_float,
      anon_sym_complex,
      anon_sym_char,
      anon_sym_string,
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
      anon_sym_varfunc,
      anon_sym_void,
      anon_sym_type,
      anon_sym_object,
      anon_sym_expr,
      anon_sym_bitset,
  [723] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(335), 1,
      anon_sym_array,
    STATE(183), 1,
      sym_type,
    ACTIONS(17), 2,
      anon_sym_file,
      anon_sym_proc,
    STATE(73), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(333), 33,
      anon_sym_func,
      anon_sym_boolean,
      anon_sym_integer,
      anon_sym_bigInteger,
      anon_sym_rational,
      anon_sym_bigRational,
      anon_sym_float,
      anon_sym_complex,
      anon_sym_char,
      anon_sym_string,
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
      anon_sym_varfunc,
      anon_sym_void,
      anon_sym_type,
      anon_sym_object,
      anon_sym_expr,
      anon_sym_bitset,
  [779] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(335), 1,
      anon_sym_array,
    STATE(194), 1,
      sym_type,
    ACTIONS(17), 2,
      anon_sym_file,
      anon_sym_proc,
    STATE(74), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(333), 33,
      anon_sym_func,
      anon_sym_boolean,
      anon_sym_integer,
      anon_sym_bigInteger,
      anon_sym_rational,
      anon_sym_bigRational,
      anon_sym_float,
      anon_sym_complex,
      anon_sym_char,
      anon_sym_string,
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
      anon_sym_varfunc,
      anon_sym_void,
      anon_sym_type,
      anon_sym_object,
      anon_sym_expr,
      anon_sym_bitset,
  [835] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(335), 1,
      anon_sym_array,
    STATE(6), 1,
      sym_type,
    ACTIONS(17), 2,
      anon_sym_file,
      anon_sym_proc,
    STATE(75), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(333), 33,
      anon_sym_func,
      anon_sym_boolean,
      anon_sym_integer,
      anon_sym_bigInteger,
      anon_sym_rational,
      anon_sym_bigRational,
      anon_sym_float,
      anon_sym_complex,
      anon_sym_char,
      anon_sym_string,
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
      anon_sym_varfunc,
      anon_sym_void,
      anon_sym_type,
      anon_sym_object,
      anon_sym_expr,
      anon_sym_bitset,
  [891] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(341), 1,
      anon_sym_array,
    STATE(116), 1,
      sym_type,
    ACTIONS(343), 2,
      anon_sym_file,
      anon_sym_proc,
    STATE(76), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(339), 33,
      anon_sym_func,
      anon_sym_boolean,
      anon_sym_integer,
      anon_sym_bigInteger,
      anon_sym_rational,
      anon_sym_bigRational,
      anon_sym_float,
      anon_sym_complex,
      anon_sym_char,
      anon_sym_string,
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
      anon_sym_varfunc,
      anon_sym_void,
      anon_sym_type,
      anon_sym_object,
      anon_sym_expr,
      anon_sym_bitset,
  [947] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(341), 1,
      anon_sym_array,
    STATE(115), 1,
      sym_type,
    ACTIONS(343), 2,
      anon_sym_file,
      anon_sym_proc,
    STATE(77), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(339), 33,
      anon_sym_func,
      anon_sym_boolean,
      anon_sym_integer,
      anon_sym_bigInteger,
      anon_sym_rational,
      anon_sym_bigRational,
      anon_sym_float,
      anon_sym_complex,
      anon_sym_char,
      anon_sym_string,
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
      anon_sym_varfunc,
      anon_sym_void,
      anon_sym_type,
      anon_sym_object,
      anon_sym_expr,
      anon_sym_bitset,
  [1003] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(335), 1,
      anon_sym_array,
    STATE(202), 1,
      sym_type,
    ACTIONS(17), 2,
      anon_sym_file,
      anon_sym_proc,
    STATE(78), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(333), 33,
      anon_sym_func,
      anon_sym_boolean,
      anon_sym_integer,
      anon_sym_bigInteger,
      anon_sym_rational,
      anon_sym_bigRational,
      anon_sym_float,
      anon_sym_complex,
      anon_sym_char,
      anon_sym_string,
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
      anon_sym_varfunc,
      anon_sym_void,
      anon_sym_type,
      anon_sym_object,
      anon_sym_expr,
      anon_sym_bitset,
  [1059] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(335), 1,
      anon_sym_array,
    STATE(36), 1,
      sym_type,
    ACTIONS(17), 2,
      anon_sym_file,
      anon_sym_proc,
    STATE(79), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(333), 33,
      anon_sym_func,
      anon_sym_boolean,
      anon_sym_integer,
      anon_sym_bigInteger,
      anon_sym_rational,
      anon_sym_bigRational,
      anon_sym_float,
      anon_sym_complex,
      anon_sym_char,
      anon_sym_string,
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
      anon_sym_varfunc,
      anon_sym_void,
      anon_sym_type,
      anon_sym_object,
      anon_sym_expr,
      anon_sym_bitset,
  [1115] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(335), 1,
      anon_sym_array,
    STATE(41), 1,
      sym_type,
    ACTIONS(17), 2,
      anon_sym_file,
      anon_sym_proc,
    STATE(80), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(333), 33,
      anon_sym_func,
      anon_sym_boolean,
      anon_sym_integer,
      anon_sym_bigInteger,
      anon_sym_rational,
      anon_sym_bigRational,
      anon_sym_float,
      anon_sym_complex,
      anon_sym_char,
      anon_sym_string,
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
      anon_sym_varfunc,
      anon_sym_void,
      anon_sym_type,
      anon_sym_object,
      anon_sym_expr,
      anon_sym_bitset,
  [1171] = 16,
    ACTIONS(41), 1,
      sym__decimalLiteral,
    ACTIONS(45), 1,
      sym__negativeExponentialLiteral,
    ACTIONS(353), 1,
      anon_sym_POUND,
    ACTIONS(355), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(357), 1,
      aux_sym_block_comment_token1,
    ACTIONS(359), 1,
      anon_sym_DASH,
    ACTIONS(361), 1,
      sym__exponentialLiteral,
    ACTIONS(365), 1,
      anon_sym_DQUOTE,
    ACTIONS(367), 1,
      anon_sym_SQUOTE,
    STATE(92), 1,
      sym_integer,
    STATE(187), 1,
      sym_value,
    ACTIONS(37), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(81), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(363), 3,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
    ACTIONS(25), 4,
      sym_NIL,
      sym_empty,
      sym_STD_NULL,
      sym_forward,
    STATE(105), 7,
      sym_boolean,
      sym_string,
      sym_float,
      sym_bigRational,
      sym_rational,
      sym_bigInteger,
      sym_char,
  [1233] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(143), 2,
      anon_sym_LPAREN,
      anon_sym_STAR,
    STATE(82), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(141), 20,
      anon_sym_SEMI,
      anon_sym_is,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_struct,
      anon_sym_RBRACE,
      anon_sym_endenum,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
  [1270] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(125), 2,
      anon_sym_LPAREN,
      anon_sym_STAR,
    STATE(83), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(123), 20,
      anon_sym_SEMI,
      anon_sym_is,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_struct,
      anon_sym_RBRACE,
      anon_sym_endenum,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
  [1307] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(369), 1,
      anon_sym_PLUS,
    STATE(87), 1,
      sym_cast,
    ACTIONS(153), 2,
      anon_sym_LPAREN,
      anon_sym_STAR,
    STATE(84), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(151), 18,
      anon_sym_SEMI,
      anon_sym_is,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_endenum,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
  [1348] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(371), 1,
      anon_sym_DOT,
    ACTIONS(373), 1,
      anon_sym_SLASH,
    ACTIONS(375), 1,
      anon_sym__SLASH,
    ACTIONS(177), 2,
      anon_sym_STAR,
      anon_sym__,
    STATE(85), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(175), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
      anon_sym_SQUOTE,
  [1391] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(191), 2,
      anon_sym_LPAREN,
      anon_sym_STAR,
    STATE(86), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(189), 19,
      anon_sym_SEMI,
      anon_sym_is,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_endenum,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
  [1427] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(195), 2,
      anon_sym_LPAREN,
      anon_sym_STAR,
    STATE(87), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(193), 19,
      anon_sym_SEMI,
      anon_sym_is,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_endenum,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
  [1463] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(177), 1,
      anon_sym_STAR,
    ACTIONS(371), 1,
      anon_sym_DOT,
    STATE(88), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(175), 19,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
      anon_sym__,
      anon_sym_SQUOTE,
  [1501] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(187), 2,
      anon_sym_LPAREN,
      anon_sym_STAR,
    STATE(89), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(185), 19,
      anon_sym_SEMI,
      anon_sym_is,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_endenum,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
  [1537] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(177), 1,
      anon_sym_STAR,
    STATE(90), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(175), 19,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
      anon_sym__,
      anon_sym_SQUOTE,
  [1572] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(207), 1,
      anon_sym_STAR,
    ACTIONS(369), 1,
      anon_sym_PLUS,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    STATE(111), 1,
      sym_cast,
    STATE(91), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(205), 16,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
  [1613] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(223), 1,
      anon_sym_STAR,
    ACTIONS(379), 1,
      anon_sym__,
    STATE(92), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(221), 18,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
      anon_sym_SQUOTE,
  [1650] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(199), 1,
      anon_sym_STAR,
    STATE(93), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(197), 19,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
      anon_sym__,
      anon_sym_SQUOTE,
  [1685] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(259), 1,
      anon_sym_STAR,
    STATE(94), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(257), 18,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
      anon_sym_SQUOTE,
  [1719] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(303), 1,
      anon_sym_STAR,
    STATE(95), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(301), 18,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
      anon_sym_SQUOTE,
  [1753] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(271), 1,
      anon_sym_STAR,
    STATE(96), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(269), 18,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
      anon_sym_SQUOTE,
  [1787] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(267), 1,
      anon_sym_STAR,
    STATE(97), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(265), 18,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
      anon_sym_SQUOTE,
  [1821] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(239), 1,
      anon_sym_STAR,
    STATE(98), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(237), 18,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
      anon_sym_SQUOTE,
  [1855] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(211), 1,
      anon_sym_STAR,
    STATE(20), 1,
      sym_binary_operator,
    STATE(99), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(209), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
  [1891] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(207), 1,
      anon_sym_STAR,
    ACTIONS(369), 1,
      anon_sym_PLUS,
    STATE(111), 1,
      sym_cast,
    STATE(100), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(205), 16,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
  [1929] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(203), 1,
      anon_sym_STAR,
    STATE(20), 1,
      sym_binary_operator,
    STATE(101), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(201), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
  [1965] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(299), 1,
      anon_sym_STAR,
    STATE(102), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(297), 18,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
      anon_sym_SQUOTE,
  [1999] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(295), 1,
      anon_sym_STAR,
    STATE(103), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(293), 18,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
      anon_sym_SQUOTE,
  [2033] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(287), 1,
      anon_sym_STAR,
    STATE(104), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(285), 18,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
      anon_sym_SQUOTE,
  [2067] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(223), 1,
      anon_sym_STAR,
    STATE(105), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(221), 18,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
      anon_sym_SQUOTE,
  [2101] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(231), 1,
      anon_sym_STAR,
    STATE(106), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(229), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
  [2134] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(291), 1,
      anon_sym_STAR,
    STATE(107), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(289), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
  [2167] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(219), 1,
      anon_sym_STAR,
    ACTIONS(381), 1,
      anon_sym_COMMA,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      sym_binary_operator,
    STATE(155), 1,
      aux_sym_argument_list_repeat1,
    STATE(108), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(217), 13,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
  [2208] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(247), 1,
      anon_sym_STAR,
    STATE(109), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(245), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
  [2241] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(283), 1,
      anon_sym_STAR,
    STATE(110), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(281), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
  [2274] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(243), 1,
      anon_sym_STAR,
    STATE(111), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(241), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
  [2307] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(279), 1,
      anon_sym_STAR,
    STATE(112), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(277), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
  [2340] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(219), 1,
      anon_sym_STAR,
    ACTIONS(381), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_binary_operator,
    STATE(151), 1,
      aux_sym_argument_list_repeat1,
    STATE(113), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(217), 13,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
  [2381] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(263), 1,
      anon_sym_STAR,
    STATE(114), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(261), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
  [2414] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(255), 1,
      anon_sym_STAR,
    STATE(115), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(253), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
  [2447] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(235), 1,
      anon_sym_STAR,
    STATE(116), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(233), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
  [2480] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(219), 1,
      anon_sym_STAR,
    STATE(20), 1,
      sym_binary_operator,
    STATE(117), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(387), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(217), 13,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
  [2517] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(219), 1,
      anon_sym_STAR,
    ACTIONS(381), 1,
      anon_sym_COMMA,
    ACTIONS(389), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_binary_operator,
    STATE(171), 1,
      aux_sym_argument_list_repeat1,
    STATE(118), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(217), 13,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
  [2558] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(251), 1,
      anon_sym_STAR,
    STATE(119), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(249), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
  [2591] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(275), 1,
      anon_sym_STAR,
    STATE(120), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(273), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
  [2624] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(219), 1,
      anon_sym_STAR,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      sym_binary_operator,
    STATE(121), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(217), 13,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
  [2659] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(219), 1,
      anon_sym_STAR,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      sym_binary_operator,
    STATE(122), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(217), 13,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
  [2694] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(219), 1,
      anon_sym_STAR,
    ACTIONS(395), 1,
      anon_sym_SEMI,
    STATE(20), 1,
      sym_binary_operator,
    STATE(123), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(217), 13,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
  [2729] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(219), 1,
      anon_sym_STAR,
    ACTIONS(397), 1,
      anon_sym_SEMI,
    STATE(20), 1,
      sym_binary_operator,
    STATE(124), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(217), 13,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
  [2764] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(219), 1,
      anon_sym_STAR,
    ACTIONS(399), 1,
      anon_sym_SEMI,
    STATE(20), 1,
      sym_binary_operator,
    STATE(125), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(217), 13,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
  [2799] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(219), 1,
      anon_sym_STAR,
    ACTIONS(401), 1,
      anon_sym_SEMI,
    STATE(20), 1,
      sym_binary_operator,
    STATE(126), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(217), 13,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
  [2834] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(219), 1,
      anon_sym_STAR,
    STATE(22), 1,
      sym_binary_operator,
    STATE(127), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(217), 13,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_and,
      anon_sym_or,
      anon_sym_parse,
      anon_sym_rem,
      anon_sym_div,
      anon_sym_mdiv,
      anon_sym_mod,
      anon_sym_times,
      anon_sym_DOT_DOT,
      anon_sym_STAR_STAR,
  [2866] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(403), 1,
      anon_sym_attr,
    ACTIONS(407), 1,
      anon_sym_in,
    STATE(128), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(179), 2,
      sym_attr_param,
      sym_param,
    ACTIONS(405), 4,
      anon_sym_val,
      anon_sym_ref,
      anon_sym_invar,
      anon_sym_inout,
  [2893] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(403), 1,
      anon_sym_attr,
    ACTIONS(407), 1,
      anon_sym_in,
    STATE(129), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(157), 2,
      sym_attr_param,
      sym_param,
    ACTIONS(405), 4,
      anon_sym_val,
      anon_sym_ref,
      anon_sym_invar,
      anon_sym_inout,
  [2920] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(412), 1,
      anon_sym_endstruct,
    STATE(147), 1,
      sym_declaration,
    ACTIONS(409), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(130), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_struct_expression_repeat1,
  [2942] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(414), 1,
      sym__decimalLiteral,
    STATE(131), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(416), 4,
      sym__exponentialLiteral,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
  [2962] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(420), 1,
      anon_sym_endstruct,
    STATE(136), 1,
      aux_sym_struct_expression_repeat1,
    STATE(147), 1,
      sym_declaration,
    ACTIONS(418), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(132), 2,
      sym_line_comment,
      sym_block_comment,
  [2986] = 8,
    ACTIONS(353), 1,
      anon_sym_POUND,
    ACTIONS(355), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(422), 1,
      anon_sym_SEMI,
    ACTIONS(424), 1,
      aux_sym_block_comment_token1,
    ACTIONS(426), 1,
      anon_sym_DQUOTE,
    ACTIONS(428), 1,
      anon_sym_SQUOTE,
    STATE(168), 1,
      aux_sym_block_comment_repeat1,
    STATE(133), 2,
      sym_line_comment,
      sym_block_comment,
  [3012] = 8,
    ACTIONS(353), 1,
      anon_sym_POUND,
    ACTIONS(355), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(422), 1,
      anon_sym_SEMI,
    ACTIONS(428), 1,
      anon_sym_SQUOTE,
    ACTIONS(430), 1,
      aux_sym_block_comment_token1,
    ACTIONS(432), 1,
      anon_sym_BSLASH,
    STATE(213), 1,
      sym_escape_sequence,
    STATE(134), 2,
      sym_line_comment,
      sym_block_comment,
  [3038] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(434), 1,
      anon_sym_endstruct,
    STATE(130), 1,
      aux_sym_struct_expression_repeat1,
    STATE(147), 1,
      sym_declaration,
    ACTIONS(418), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(135), 2,
      sym_line_comment,
      sym_block_comment,
  [3062] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(436), 1,
      anon_sym_endstruct,
    STATE(130), 1,
      aux_sym_struct_expression_repeat1,
    STATE(147), 1,
      sym_declaration,
    ACTIONS(418), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(136), 2,
      sym_line_comment,
      sym_block_comment,
  [3086] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(436), 1,
      anon_sym_endstruct,
    STATE(135), 1,
      aux_sym_struct_expression_repeat1,
    STATE(147), 1,
      sym_declaration,
    ACTIONS(418), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(137), 2,
      sym_line_comment,
      sym_block_comment,
  [3110] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(438), 1,
      anon_sym_endstruct,
    STATE(139), 1,
      aux_sym_struct_expression_repeat1,
    STATE(147), 1,
      sym_declaration,
    ACTIONS(418), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(138), 2,
      sym_line_comment,
      sym_block_comment,
  [3134] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(440), 1,
      anon_sym_endstruct,
    STATE(130), 1,
      aux_sym_struct_expression_repeat1,
    STATE(147), 1,
      sym_declaration,
    ACTIONS(418), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(139), 2,
      sym_line_comment,
      sym_block_comment,
  [3158] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(440), 1,
      anon_sym_endstruct,
    STATE(142), 1,
      aux_sym_struct_expression_repeat1,
    STATE(147), 1,
      sym_declaration,
    ACTIONS(418), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(140), 2,
      sym_line_comment,
      sym_block_comment,
  [3182] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(442), 1,
      sym__decimalLiteral,
    STATE(141), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(444), 4,
      sym__exponentialLiteral,
      sym__hexLiteral,
      sym__octalLiteral,
      sym__binaryLiteral,
  [3202] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(446), 1,
      anon_sym_endstruct,
    STATE(130), 1,
      aux_sym_struct_expression_repeat1,
    STATE(147), 1,
      sym_declaration,
    ACTIONS(418), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(142), 2,
      sym_line_comment,
      sym_block_comment,
  [3226] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(123), 1,
      anon_sym_struct,
    STATE(138), 1,
      sym_declaration,
    ACTIONS(418), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(143), 2,
      sym_line_comment,
      sym_block_comment,
  [3247] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(123), 1,
      anon_sym_struct,
    STATE(132), 1,
      sym_declaration,
    ACTIONS(418), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(144), 2,
      sym_line_comment,
      sym_block_comment,
  [3268] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(448), 1,
      anon_sym_COMMA,
    ACTIONS(387), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    STATE(145), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_argument_list_repeat1,
  [3287] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(123), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(451), 1,
      anon_sym_LBRACK,
    STATE(146), 2,
      sym_line_comment,
      sym_block_comment,
  [3307] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(147), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(453), 3,
      anon_sym_const,
      anon_sym_var,
      anon_sym_endstruct,
  [3323] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    ACTIONS(457), 1,
      anon_sym_endenum,
    STATE(149), 1,
      aux_sym_enum_expression_repeat1,
    STATE(148), 2,
      sym_line_comment,
      sym_block_comment,
  [3343] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(459), 1,
      anon_sym_COMMA,
    ACTIONS(462), 1,
      anon_sym_endenum,
    STATE(149), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_enum_expression_repeat1,
  [3361] = 6,
    ACTIONS(353), 1,
      anon_sym_POUND,
    ACTIONS(355), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(424), 1,
      aux_sym_block_comment_token1,
    ACTIONS(426), 1,
      anon_sym_DQUOTE,
    STATE(168), 1,
      aux_sym_block_comment_repeat1,
    STATE(150), 2,
      sym_line_comment,
      sym_block_comment,
  [3381] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(381), 1,
      anon_sym_COMMA,
    ACTIONS(464), 1,
      anon_sym_RBRACE,
    STATE(145), 1,
      aux_sym_argument_list_repeat1,
    STATE(151), 2,
      sym_line_comment,
      sym_block_comment,
  [3401] = 6,
    ACTIONS(353), 1,
      anon_sym_POUND,
    ACTIONS(355), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(424), 1,
      aux_sym_block_comment_token1,
    ACTIONS(466), 1,
      anon_sym_DQUOTE,
    STATE(172), 1,
      aux_sym_block_comment_repeat1,
    STATE(152), 2,
      sym_line_comment,
      sym_block_comment,
  [3421] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(470), 1,
      sym__exponentialLiteral,
    ACTIONS(468), 2,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
    STATE(153), 2,
      sym_line_comment,
      sym_block_comment,
  [3439] = 6,
    ACTIONS(353), 1,
      anon_sym_POUND,
    ACTIONS(355), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(430), 1,
      aux_sym_block_comment_token1,
    ACTIONS(432), 1,
      anon_sym_BSLASH,
    STATE(213), 1,
      sym_escape_sequence,
    STATE(154), 2,
      sym_line_comment,
      sym_block_comment,
  [3459] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(381), 1,
      anon_sym_COMMA,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      aux_sym_argument_list_repeat1,
    STATE(155), 2,
      sym_line_comment,
      sym_block_comment,
  [3479] = 6,
    ACTIONS(353), 1,
      anon_sym_POUND,
    ACTIONS(355), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(424), 1,
      aux_sym_block_comment_token1,
    ACTIONS(474), 1,
      anon_sym_DQUOTE,
    STATE(152), 1,
      aux_sym_block_comment_repeat1,
    STATE(156), 2,
      sym_line_comment,
      sym_block_comment,
  [3499] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
    STATE(165), 1,
      aux_sym_parameter_list_repeat1,
    STATE(157), 2,
      sym_line_comment,
      sym_block_comment,
  [3519] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(140), 1,
      sym_declaration,
    ACTIONS(418), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(158), 2,
      sym_line_comment,
      sym_block_comment,
  [3537] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    ACTIONS(480), 1,
      anon_sym_endenum,
    STATE(148), 1,
      aux_sym_enum_expression_repeat1,
    STATE(159), 2,
      sym_line_comment,
      sym_block_comment,
  [3557] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
    STATE(160), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_parameter_list_repeat1,
  [3575] = 5,
    ACTIONS(353), 1,
      anon_sym_POUND,
    ACTIONS(355), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(487), 1,
      aux_sym_block_comment_token1,
    ACTIONS(490), 1,
      anon_sym_STAR_RPAREN,
    STATE(161), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [3593] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(162), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(317), 3,
      anon_sym_const,
      anon_sym_var,
      anon_sym_endstruct,
  [3609] = 6,
    ACTIONS(353), 1,
      anon_sym_POUND,
    ACTIONS(355), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(492), 1,
      aux_sym_block_comment_token1,
    ACTIONS(494), 1,
      anon_sym_STAR_RPAREN,
    STATE(161), 1,
      aux_sym_block_comment_repeat1,
    STATE(163), 2,
      sym_line_comment,
      sym_block_comment,
  [3629] = 6,
    ACTIONS(353), 1,
      anon_sym_POUND,
    ACTIONS(355), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(432), 1,
      anon_sym_BSLASH,
    ACTIONS(496), 1,
      aux_sym_block_comment_token1,
    STATE(205), 1,
      sym_escape_sequence,
    STATE(164), 2,
      sym_line_comment,
      sym_block_comment,
  [3649] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    ACTIONS(498), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      aux_sym_parameter_list_repeat1,
    STATE(165), 2,
      sym_line_comment,
      sym_block_comment,
  [3669] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(123), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      anon_sym_LBRACK,
    STATE(166), 2,
      sym_line_comment,
      sym_block_comment,
  [3689] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(504), 1,
      sym__exponentialLiteral,
    ACTIONS(502), 2,
      sym__decimalLiteral,
      sym__negativeExponentialLiteral,
    STATE(167), 2,
      sym_line_comment,
      sym_block_comment,
  [3707] = 6,
    ACTIONS(353), 1,
      anon_sym_POUND,
    ACTIONS(355), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(424), 1,
      aux_sym_block_comment_token1,
    ACTIONS(506), 1,
      anon_sym_DQUOTE,
    STATE(172), 1,
      aux_sym_block_comment_repeat1,
    STATE(168), 2,
      sym_line_comment,
      sym_block_comment,
  [3727] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(137), 1,
      sym_declaration,
    ACTIONS(418), 2,
      anon_sym_const,
      anon_sym_var,
    STATE(169), 2,
      sym_line_comment,
      sym_block_comment,
  [3745] = 6,
    ACTIONS(353), 1,
      anon_sym_POUND,
    ACTIONS(355), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(492), 1,
      aux_sym_block_comment_token1,
    ACTIONS(508), 1,
      anon_sym_STAR_RPAREN,
    STATE(163), 1,
      aux_sym_block_comment_repeat1,
    STATE(170), 2,
      sym_line_comment,
      sym_block_comment,
  [3765] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(381), 1,
      anon_sym_COMMA,
    ACTIONS(510), 1,
      anon_sym_RBRACE,
    STATE(145), 1,
      aux_sym_argument_list_repeat1,
    STATE(171), 2,
      sym_line_comment,
      sym_block_comment,
  [3785] = 5,
    ACTIONS(353), 1,
      anon_sym_POUND,
    ACTIONS(355), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(490), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      aux_sym_block_comment_token1,
    STATE(172), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [3803] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(515), 1,
      sym_variable,
    STATE(35), 1,
      sym_name,
    STATE(173), 2,
      sym_line_comment,
      sym_block_comment,
  [3820] = 4,
    ACTIONS(353), 1,
      anon_sym_POUND,
    ACTIONS(355), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(517), 2,
      aux_sym_block_comment_token1,
      anon_sym_DQUOTE,
    STATE(174), 2,
      sym_line_comment,
      sym_block_comment,
  [3835] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(519), 1,
      sym_variable,
    STATE(228), 1,
      sym_name,
    STATE(175), 2,
      sym_line_comment,
      sym_block_comment,
  [3852] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(519), 1,
      sym_variable,
    STATE(200), 1,
      sym_name,
    STATE(176), 2,
      sym_line_comment,
      sym_block_comment,
  [3869] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(519), 1,
      sym_variable,
    STATE(180), 1,
      sym_name,
    STATE(177), 2,
      sym_line_comment,
      sym_block_comment,
  [3886] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(515), 1,
      sym_variable,
    STATE(181), 1,
      sym_name,
    STATE(178), 2,
      sym_line_comment,
      sym_block_comment,
  [3903] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(485), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(179), 2,
      sym_line_comment,
      sym_block_comment,
  [3918] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(462), 2,
      anon_sym_COMMA,
      anon_sym_endenum,
    STATE(180), 2,
      sym_line_comment,
      sym_block_comment,
  [3933] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(521), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(181), 2,
      sym_line_comment,
      sym_block_comment,
  [3948] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(519), 1,
      sym_variable,
    STATE(159), 1,
      sym_name,
    STATE(182), 2,
      sym_line_comment,
      sym_block_comment,
  [3965] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(523), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(183), 2,
      sym_line_comment,
      sym_block_comment,
  [3980] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(525), 1,
      anon_sym_LPAREN,
    STATE(208), 1,
      sym_parameter_list,
    STATE(184), 2,
      sym_line_comment,
      sym_block_comment,
  [3997] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(515), 1,
      sym_variable,
    STATE(184), 1,
      sym_name,
    STATE(185), 2,
      sym_line_comment,
      sym_block_comment,
  [4014] = 4,
    ACTIONS(353), 1,
      anon_sym_POUND,
    ACTIONS(355), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(517), 2,
      aux_sym_block_comment_token1,
      anon_sym_STAR_RPAREN,
    STATE(186), 2,
      sym_line_comment,
      sym_block_comment,
  [4029] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(527), 1,
      anon_sym_SEMI,
    ACTIONS(529), 1,
      anon_sym_SQUOTE,
    STATE(187), 2,
      sym_line_comment,
      sym_block_comment,
  [4046] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(519), 1,
      sym_variable,
    STATE(106), 1,
      sym_name,
    STATE(188), 2,
      sym_line_comment,
      sym_block_comment,
  [4063] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_DOT,
    STATE(189), 2,
      sym_line_comment,
      sym_block_comment,
  [4080] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_DOT,
    STATE(190), 2,
      sym_line_comment,
      sym_block_comment,
  [4097] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(535), 1,
      anon_sym_SQUOTE,
    STATE(191), 2,
      sym_line_comment,
      sym_block_comment,
  [4111] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(537), 1,
      anon_sym_SEMI,
    STATE(192), 2,
      sym_line_comment,
      sym_block_comment,
  [4125] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(539), 1,
      anon_sym_struct,
    STATE(193), 2,
      sym_line_comment,
      sym_block_comment,
  [4139] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(541), 1,
      anon_sym_COLON,
    STATE(194), 2,
      sym_line_comment,
      sym_block_comment,
  [4153] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(543), 1,
      anon_sym_SEMI,
    STATE(195), 2,
      sym_line_comment,
      sym_block_comment,
  [4167] = 4,
    ACTIONS(353), 1,
      anon_sym_POUND,
    ACTIONS(355), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(545), 1,
      aux_sym_include_statement_token1,
    STATE(196), 2,
      sym_line_comment,
      sym_block_comment,
  [4181] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(547), 1,
      anon_sym_is,
    STATE(197), 2,
      sym_line_comment,
      sym_block_comment,
  [4195] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(549), 1,
      anon_sym_COLON,
    STATE(198), 2,
      sym_line_comment,
      sym_block_comment,
  [4209] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(551), 1,
      anon_sym_RPAREN,
    STATE(199), 2,
      sym_line_comment,
      sym_block_comment,
  [4223] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(553), 1,
      anon_sym_is,
    STATE(200), 2,
      sym_line_comment,
      sym_block_comment,
  [4237] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(555), 1,
      ts_builtin_sym_end,
    STATE(201), 2,
      sym_line_comment,
      sym_block_comment,
  [4251] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(557), 1,
      anon_sym_RBRACK,
    STATE(202), 2,
      sym_line_comment,
      sym_block_comment,
  [4265] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(559), 1,
      sym__decimalLiteral,
    STATE(203), 2,
      sym_line_comment,
      sym_block_comment,
  [4279] = 4,
    ACTIONS(353), 1,
      anon_sym_POUND,
    ACTIONS(355), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(561), 1,
      aux_sym_include_statement_token1,
    STATE(204), 2,
      sym_line_comment,
      sym_block_comment,
  [4293] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(563), 1,
      anon_sym_SQUOTE,
    STATE(205), 2,
      sym_line_comment,
      sym_block_comment,
  [4307] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(565), 1,
      anon_sym_RBRACK,
    STATE(206), 2,
      sym_line_comment,
      sym_block_comment,
  [4321] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(567), 1,
      sym__decimalLiteral,
    STATE(207), 2,
      sym_line_comment,
      sym_block_comment,
  [4335] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(569), 1,
      anon_sym_is,
    STATE(208), 2,
      sym_line_comment,
      sym_block_comment,
  [4349] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(571), 1,
      anon_sym__,
    STATE(209), 2,
      sym_line_comment,
      sym_block_comment,
  [4363] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
    STATE(210), 2,
      sym_line_comment,
      sym_block_comment,
  [4377] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(575), 1,
      sym__decimalLiteral,
    STATE(211), 2,
      sym_line_comment,
      sym_block_comment,
  [4391] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(577), 1,
      anon_sym__,
    STATE(212), 2,
      sym_line_comment,
      sym_block_comment,
  [4405] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    STATE(213), 2,
      sym_line_comment,
      sym_block_comment,
  [4419] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(395), 1,
      anon_sym_SEMI,
    STATE(214), 2,
      sym_line_comment,
      sym_block_comment,
  [4433] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(401), 1,
      anon_sym_SEMI,
    STATE(215), 2,
      sym_line_comment,
      sym_block_comment,
  [4447] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(581), 1,
      anon_sym_DOT,
    STATE(216), 2,
      sym_line_comment,
      sym_block_comment,
  [4461] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(583), 1,
      anon_sym_DOT,
    STATE(217), 2,
      sym_line_comment,
      sym_block_comment,
  [4475] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(585), 1,
      anon_sym_is,
    STATE(218), 2,
      sym_line_comment,
      sym_block_comment,
  [4489] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(587), 1,
      anon_sym_COLON,
    STATE(219), 2,
      sym_line_comment,
      sym_block_comment,
  [4503] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(589), 1,
      anon_sym_COLON,
    STATE(220), 2,
      sym_line_comment,
      sym_block_comment,
  [4517] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(591), 1,
      sym__decimalLiteral,
    STATE(221), 2,
      sym_line_comment,
      sym_block_comment,
  [4531] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(593), 1,
      anon_sym_SEMI,
    STATE(222), 2,
      sym_line_comment,
      sym_block_comment,
  [4545] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(595), 1,
      anon_sym_SEMI,
    STATE(223), 2,
      sym_line_comment,
      sym_block_comment,
  [4559] = 4,
    ACTIONS(353), 1,
      anon_sym_POUND,
    ACTIONS(355), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(597), 1,
      aux_sym_include_statement_token1,
    STATE(224), 2,
      sym_line_comment,
      sym_block_comment,
  [4573] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(599), 1,
      anon_sym_SEMI,
    STATE(225), 2,
      sym_line_comment,
      sym_block_comment,
  [4587] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(601), 1,
      anon_sym_include,
    STATE(226), 2,
      sym_line_comment,
      sym_block_comment,
  [4601] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(603), 1,
      anon_sym_struct,
    STATE(227), 2,
      sym_line_comment,
      sym_block_comment,
  [4615] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(605), 1,
      anon_sym_is,
    STATE(228), 2,
      sym_line_comment,
      sym_block_comment,
  [4629] = 1,
    ACTIONS(607), 1,
      ts_builtin_sym_end,
  [4633] = 1,
    ACTIONS(609), 1,
      ts_builtin_sym_end,
  [4637] = 1,
    ACTIONS(611), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(61)] = 0,
  [SMALL_STATE(62)] = 73,
  [SMALL_STATE(63)] = 146,
  [SMALL_STATE(64)] = 206,
  [SMALL_STATE(65)] = 266,
  [SMALL_STATE(66)] = 325,
  [SMALL_STATE(67)] = 381,
  [SMALL_STATE(68)] = 439,
  [SMALL_STATE(69)] = 497,
  [SMALL_STATE(70)] = 553,
  [SMALL_STATE(71)] = 609,
  [SMALL_STATE(72)] = 667,
  [SMALL_STATE(73)] = 723,
  [SMALL_STATE(74)] = 779,
  [SMALL_STATE(75)] = 835,
  [SMALL_STATE(76)] = 891,
  [SMALL_STATE(77)] = 947,
  [SMALL_STATE(78)] = 1003,
  [SMALL_STATE(79)] = 1059,
  [SMALL_STATE(80)] = 1115,
  [SMALL_STATE(81)] = 1171,
  [SMALL_STATE(82)] = 1233,
  [SMALL_STATE(83)] = 1270,
  [SMALL_STATE(84)] = 1307,
  [SMALL_STATE(85)] = 1348,
  [SMALL_STATE(86)] = 1391,
  [SMALL_STATE(87)] = 1427,
  [SMALL_STATE(88)] = 1463,
  [SMALL_STATE(89)] = 1501,
  [SMALL_STATE(90)] = 1537,
  [SMALL_STATE(91)] = 1572,
  [SMALL_STATE(92)] = 1613,
  [SMALL_STATE(93)] = 1650,
  [SMALL_STATE(94)] = 1685,
  [SMALL_STATE(95)] = 1719,
  [SMALL_STATE(96)] = 1753,
  [SMALL_STATE(97)] = 1787,
  [SMALL_STATE(98)] = 1821,
  [SMALL_STATE(99)] = 1855,
  [SMALL_STATE(100)] = 1891,
  [SMALL_STATE(101)] = 1929,
  [SMALL_STATE(102)] = 1965,
  [SMALL_STATE(103)] = 1999,
  [SMALL_STATE(104)] = 2033,
  [SMALL_STATE(105)] = 2067,
  [SMALL_STATE(106)] = 2101,
  [SMALL_STATE(107)] = 2134,
  [SMALL_STATE(108)] = 2167,
  [SMALL_STATE(109)] = 2208,
  [SMALL_STATE(110)] = 2241,
  [SMALL_STATE(111)] = 2274,
  [SMALL_STATE(112)] = 2307,
  [SMALL_STATE(113)] = 2340,
  [SMALL_STATE(114)] = 2381,
  [SMALL_STATE(115)] = 2414,
  [SMALL_STATE(116)] = 2447,
  [SMALL_STATE(117)] = 2480,
  [SMALL_STATE(118)] = 2517,
  [SMALL_STATE(119)] = 2558,
  [SMALL_STATE(120)] = 2591,
  [SMALL_STATE(121)] = 2624,
  [SMALL_STATE(122)] = 2659,
  [SMALL_STATE(123)] = 2694,
  [SMALL_STATE(124)] = 2729,
  [SMALL_STATE(125)] = 2764,
  [SMALL_STATE(126)] = 2799,
  [SMALL_STATE(127)] = 2834,
  [SMALL_STATE(128)] = 2866,
  [SMALL_STATE(129)] = 2893,
  [SMALL_STATE(130)] = 2920,
  [SMALL_STATE(131)] = 2942,
  [SMALL_STATE(132)] = 2962,
  [SMALL_STATE(133)] = 2986,
  [SMALL_STATE(134)] = 3012,
  [SMALL_STATE(135)] = 3038,
  [SMALL_STATE(136)] = 3062,
  [SMALL_STATE(137)] = 3086,
  [SMALL_STATE(138)] = 3110,
  [SMALL_STATE(139)] = 3134,
  [SMALL_STATE(140)] = 3158,
  [SMALL_STATE(141)] = 3182,
  [SMALL_STATE(142)] = 3202,
  [SMALL_STATE(143)] = 3226,
  [SMALL_STATE(144)] = 3247,
  [SMALL_STATE(145)] = 3268,
  [SMALL_STATE(146)] = 3287,
  [SMALL_STATE(147)] = 3307,
  [SMALL_STATE(148)] = 3323,
  [SMALL_STATE(149)] = 3343,
  [SMALL_STATE(150)] = 3361,
  [SMALL_STATE(151)] = 3381,
  [SMALL_STATE(152)] = 3401,
  [SMALL_STATE(153)] = 3421,
  [SMALL_STATE(154)] = 3439,
  [SMALL_STATE(155)] = 3459,
  [SMALL_STATE(156)] = 3479,
  [SMALL_STATE(157)] = 3499,
  [SMALL_STATE(158)] = 3519,
  [SMALL_STATE(159)] = 3537,
  [SMALL_STATE(160)] = 3557,
  [SMALL_STATE(161)] = 3575,
  [SMALL_STATE(162)] = 3593,
  [SMALL_STATE(163)] = 3609,
  [SMALL_STATE(164)] = 3629,
  [SMALL_STATE(165)] = 3649,
  [SMALL_STATE(166)] = 3669,
  [SMALL_STATE(167)] = 3689,
  [SMALL_STATE(168)] = 3707,
  [SMALL_STATE(169)] = 3727,
  [SMALL_STATE(170)] = 3745,
  [SMALL_STATE(171)] = 3765,
  [SMALL_STATE(172)] = 3785,
  [SMALL_STATE(173)] = 3803,
  [SMALL_STATE(174)] = 3820,
  [SMALL_STATE(175)] = 3835,
  [SMALL_STATE(176)] = 3852,
  [SMALL_STATE(177)] = 3869,
  [SMALL_STATE(178)] = 3886,
  [SMALL_STATE(179)] = 3903,
  [SMALL_STATE(180)] = 3918,
  [SMALL_STATE(181)] = 3933,
  [SMALL_STATE(182)] = 3948,
  [SMALL_STATE(183)] = 3965,
  [SMALL_STATE(184)] = 3980,
  [SMALL_STATE(185)] = 3997,
  [SMALL_STATE(186)] = 4014,
  [SMALL_STATE(187)] = 4029,
  [SMALL_STATE(188)] = 4046,
  [SMALL_STATE(189)] = 4063,
  [SMALL_STATE(190)] = 4080,
  [SMALL_STATE(191)] = 4097,
  [SMALL_STATE(192)] = 4111,
  [SMALL_STATE(193)] = 4125,
  [SMALL_STATE(194)] = 4139,
  [SMALL_STATE(195)] = 4153,
  [SMALL_STATE(196)] = 4167,
  [SMALL_STATE(197)] = 4181,
  [SMALL_STATE(198)] = 4195,
  [SMALL_STATE(199)] = 4209,
  [SMALL_STATE(200)] = 4223,
  [SMALL_STATE(201)] = 4237,
  [SMALL_STATE(202)] = 4251,
  [SMALL_STATE(203)] = 4265,
  [SMALL_STATE(204)] = 4279,
  [SMALL_STATE(205)] = 4293,
  [SMALL_STATE(206)] = 4307,
  [SMALL_STATE(207)] = 4321,
  [SMALL_STATE(208)] = 4335,
  [SMALL_STATE(209)] = 4349,
  [SMALL_STATE(210)] = 4363,
  [SMALL_STATE(211)] = 4377,
  [SMALL_STATE(212)] = 4391,
  [SMALL_STATE(213)] = 4405,
  [SMALL_STATE(214)] = 4419,
  [SMALL_STATE(215)] = 4433,
  [SMALL_STATE(216)] = 4447,
  [SMALL_STATE(217)] = 4461,
  [SMALL_STATE(218)] = 4475,
  [SMALL_STATE(219)] = 4489,
  [SMALL_STATE(220)] = 4503,
  [SMALL_STATE(221)] = 4517,
  [SMALL_STATE(222)] = 4531,
  [SMALL_STATE(223)] = 4545,
  [SMALL_STATE(224)] = 4559,
  [SMALL_STATE(225)] = 4573,
  [SMALL_STATE(226)] = 4587,
  [SMALL_STATE(227)] = 4601,
  [SMALL_STATE(228)] = 4615,
  [SMALL_STATE(229)] = 4629,
  [SMALL_STATE(230)] = 4633,
  [SMALL_STATE(231)] = 4637,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(226),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(224),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(146),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(105),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(141),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(85),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(88),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(216),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(150),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(154),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, .production_id = 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2, .production_id = 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_castFunction, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_castFunction, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_operator, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_operator, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_expression, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_expression, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigInteger, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bigInteger, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 6),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 6),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 5),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 5),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_expression, 5),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash_expression, 5),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bigRational, 4),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bigRational, 4),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 4),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 4),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_expression, 4),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_expression, 4),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 3),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_expression, 3),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_expression, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rational, 3),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rational, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 4),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 4),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 7),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 7),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_declaration, 9),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_declaration, 9),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operator, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 1),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_expression_repeat1, 2), SHIFT_REPEAT(70),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_expression_repeat1, 2),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 2),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(19),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_expression_repeat1, 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_expression_repeat1, 2), SHIFT_REPEAT(177),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_expression_repeat1, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(128),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [487] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(186),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(174),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_param, 2),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 3),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_expression, 4),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [555] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_expression, 3),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
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
