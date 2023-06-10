#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 23
#define SYMBOL_COUNT 127
#define ALIAS_COUNT 0
#define TOKEN_COUNT 101
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_ = 1,
  anon_sym_TAB = 2,
  anon_sym_CR = 3,
  anon_sym_LF = 4,
  anon_sym_boolean = 5,
  anon_sym_integer = 6,
  anon_sym_float = 7,
  anon_sym_const = 8,
  anon_sym_COLON = 9,
  anon_sym_is = 10,
  aux_sym_statement_token1 = 11,
  anon_sym_SEMI = 12,
  anon_sym_POUND = 13,
  aux_sym_line_comment_token1 = 14,
  anon_sym_SLASHn = 15,
  anon_sym_LPAREN_STAR = 16,
  anon_sym_STAR_RPAREN = 17,
  anon_sym_A = 18,
  anon_sym_B = 19,
  anon_sym_C = 20,
  anon_sym_D = 21,
  anon_sym_E = 22,
  anon_sym_F = 23,
  anon_sym_G = 24,
  anon_sym_H = 25,
  anon_sym_I = 26,
  anon_sym_J = 27,
  anon_sym_K = 28,
  anon_sym_L = 29,
  anon_sym_M = 30,
  anon_sym_N = 31,
  anon_sym_O = 32,
  anon_sym_P = 33,
  anon_sym_Q = 34,
  anon_sym_R = 35,
  anon_sym_S = 36,
  anon_sym_T = 37,
  anon_sym_U = 38,
  anon_sym_V = 39,
  anon_sym_W = 40,
  anon_sym_X = 41,
  anon_sym_Y = 42,
  anon_sym_Z = 43,
  anon_sym_a = 44,
  anon_sym_b = 45,
  anon_sym_c = 46,
  anon_sym_d = 47,
  anon_sym_e = 48,
  anon_sym_f = 49,
  anon_sym_g = 50,
  anon_sym_h = 51,
  anon_sym_i = 52,
  anon_sym_j = 53,
  anon_sym_k = 54,
  anon_sym_l = 55,
  anon_sym_m = 56,
  anon_sym_n = 57,
  anon_sym_o = 58,
  anon_sym_p = 59,
  anon_sym_q = 60,
  anon_sym_r = 61,
  anon_sym_s = 62,
  anon_sym_t = 63,
  anon_sym_u = 64,
  anon_sym_v = 65,
  anon_sym_w = 66,
  anon_sym_x = 67,
  anon_sym_y = 68,
  anon_sym_z = 69,
  anon_sym_0 = 70,
  anon_sym_1 = 71,
  anon_sym_2 = 72,
  anon_sym_3 = 73,
  anon_sym_4 = 74,
  anon_sym_5 = 75,
  anon_sym_6 = 76,
  anon_sym_7 = 77,
  anon_sym_8 = 78,
  anon_sym_9 = 79,
  anon_sym_BANG = 80,
  anon_sym_DOLLAR = 81,
  anon_sym_PERCENT = 82,
  anon_sym_AMP = 83,
  anon_sym_STAR = 84,
  anon_sym_PLUS = 85,
  anon_sym_COMMA = 86,
  anon_sym_DASH = 87,
  anon_sym_DOT = 88,
  anon_sym_SLASH = 89,
  anon_sym_LT = 90,
  anon_sym_EQ = 91,
  anon_sym_GT = 92,
  anon_sym_QMARK = 93,
  anon_sym_AT = 94,
  anon_sym_BSLASH = 95,
  anon_sym_CARET = 96,
  anon_sym_BQUOTE = 97,
  anon_sym_PIPE = 98,
  anon_sym_TILDE = 99,
  anon_sym__ = 100,
  sym_source_file = 101,
  sym__program = 102,
  sym__white_space = 103,
  sym__space = 104,
  sym__token = 105,
  sym__identifier = 106,
  sym__expression = 107,
  sym_type = 108,
  sym__declaration = 109,
  sym_normal_declaration = 110,
  sym_statement = 111,
  sym__comment = 112,
  sym_line_comment = 113,
  sym_block_comment = 114,
  sym_name_identifier = 115,
  sym__letter = 116,
  sym__upper_case_letter = 117,
  sym__lower_case_letter = 118,
  sym_digit = 119,
  sym_special_character = 120,
  sym_underscore = 121,
  aux_sym_source_file_repeat1 = 122,
  aux_sym_statement_repeat1 = 123,
  aux_sym_line_comment_repeat1 = 124,
  aux_sym_block_comment_repeat1 = 125,
  aux_sym_name_identifier_repeat1 = 126,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_] = " ",
  [anon_sym_TAB] = "\t",
  [anon_sym_CR] = "\r",
  [anon_sym_LF] = "\n",
  [anon_sym_boolean] = "boolean",
  [anon_sym_integer] = "integer",
  [anon_sym_float] = "float",
  [anon_sym_const] = "const",
  [anon_sym_COLON] = ":",
  [anon_sym_is] = "is",
  [aux_sym_statement_token1] = "statement_token1",
  [anon_sym_SEMI] = ";",
  [anon_sym_POUND] = "#",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [anon_sym_SLASHn] = "/n",
  [anon_sym_LPAREN_STAR] = "(*",
  [anon_sym_STAR_RPAREN] = "*)",
  [anon_sym_A] = "A",
  [anon_sym_B] = "B",
  [anon_sym_C] = "C",
  [anon_sym_D] = "D",
  [anon_sym_E] = "E",
  [anon_sym_F] = "F",
  [anon_sym_G] = "G",
  [anon_sym_H] = "H",
  [anon_sym_I] = "I",
  [anon_sym_J] = "J",
  [anon_sym_K] = "K",
  [anon_sym_L] = "L",
  [anon_sym_M] = "M",
  [anon_sym_N] = "N",
  [anon_sym_O] = "O",
  [anon_sym_P] = "P",
  [anon_sym_Q] = "Q",
  [anon_sym_R] = "R",
  [anon_sym_S] = "S",
  [anon_sym_T] = "T",
  [anon_sym_U] = "U",
  [anon_sym_V] = "V",
  [anon_sym_W] = "W",
  [anon_sym_X] = "X",
  [anon_sym_Y] = "Y",
  [anon_sym_Z] = "Z",
  [anon_sym_a] = "a",
  [anon_sym_b] = "b",
  [anon_sym_c] = "c",
  [anon_sym_d] = "d",
  [anon_sym_e] = "e",
  [anon_sym_f] = "f",
  [anon_sym_g] = "g",
  [anon_sym_h] = "h",
  [anon_sym_i] = "i",
  [anon_sym_j] = "j",
  [anon_sym_k] = "k",
  [anon_sym_l] = "l",
  [anon_sym_m] = "m",
  [anon_sym_n] = "n",
  [anon_sym_o] = "o",
  [anon_sym_p] = "p",
  [anon_sym_q] = "q",
  [anon_sym_r] = "r",
  [anon_sym_s] = "s",
  [anon_sym_t] = "t",
  [anon_sym_u] = "u",
  [anon_sym_v] = "v",
  [anon_sym_w] = "w",
  [anon_sym_x] = "x",
  [anon_sym_y] = "y",
  [anon_sym_z] = "z",
  [anon_sym_0] = "0",
  [anon_sym_1] = "1",
  [anon_sym_2] = "2",
  [anon_sym_3] = "3",
  [anon_sym_4] = "4",
  [anon_sym_5] = "5",
  [anon_sym_6] = "6",
  [anon_sym_7] = "7",
  [anon_sym_8] = "8",
  [anon_sym_9] = "9",
  [anon_sym_BANG] = "!",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_PERCENT] = "%",
  [anon_sym_AMP] = "&",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_COMMA] = ",",
  [anon_sym_DASH] = "-",
  [anon_sym_DOT] = ".",
  [anon_sym_SLASH] = "/",
  [anon_sym_LT] = "<",
  [anon_sym_EQ] = "=",
  [anon_sym_GT] = ">",
  [anon_sym_QMARK] = "\?",
  [anon_sym_AT] = "@",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_CARET] = "^",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_PIPE] = "|",
  [anon_sym_TILDE] = "~",
  [anon_sym__] = "_",
  [sym_source_file] = "source_file",
  [sym__program] = "_program",
  [sym__white_space] = "_white_space",
  [sym__space] = "_space",
  [sym__token] = "_token",
  [sym__identifier] = "_identifier",
  [sym__expression] = "_expression",
  [sym_type] = "type",
  [sym__declaration] = "_declaration",
  [sym_normal_declaration] = "normal_declaration",
  [sym_statement] = "statement",
  [sym__comment] = "_comment",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_name_identifier] = "name_identifier",
  [sym__letter] = "_letter",
  [sym__upper_case_letter] = "_upper_case_letter",
  [sym__lower_case_letter] = "_lower_case_letter",
  [sym_digit] = "digit",
  [sym_special_character] = "special_character",
  [sym_underscore] = "underscore",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_statement_repeat1] = "statement_repeat1",
  [aux_sym_line_comment_repeat1] = "line_comment_repeat1",
  [aux_sym_block_comment_repeat1] = "block_comment_repeat1",
  [aux_sym_name_identifier_repeat1] = "name_identifier_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_] = anon_sym_,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_CR] = anon_sym_CR,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_integer] = anon_sym_integer,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_is] = anon_sym_is,
  [aux_sym_statement_token1] = aux_sym_statement_token1,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [anon_sym_SLASHn] = anon_sym_SLASHn,
  [anon_sym_LPAREN_STAR] = anon_sym_LPAREN_STAR,
  [anon_sym_STAR_RPAREN] = anon_sym_STAR_RPAREN,
  [anon_sym_A] = anon_sym_A,
  [anon_sym_B] = anon_sym_B,
  [anon_sym_C] = anon_sym_C,
  [anon_sym_D] = anon_sym_D,
  [anon_sym_E] = anon_sym_E,
  [anon_sym_F] = anon_sym_F,
  [anon_sym_G] = anon_sym_G,
  [anon_sym_H] = anon_sym_H,
  [anon_sym_I] = anon_sym_I,
  [anon_sym_J] = anon_sym_J,
  [anon_sym_K] = anon_sym_K,
  [anon_sym_L] = anon_sym_L,
  [anon_sym_M] = anon_sym_M,
  [anon_sym_N] = anon_sym_N,
  [anon_sym_O] = anon_sym_O,
  [anon_sym_P] = anon_sym_P,
  [anon_sym_Q] = anon_sym_Q,
  [anon_sym_R] = anon_sym_R,
  [anon_sym_S] = anon_sym_S,
  [anon_sym_T] = anon_sym_T,
  [anon_sym_U] = anon_sym_U,
  [anon_sym_V] = anon_sym_V,
  [anon_sym_W] = anon_sym_W,
  [anon_sym_X] = anon_sym_X,
  [anon_sym_Y] = anon_sym_Y,
  [anon_sym_Z] = anon_sym_Z,
  [anon_sym_a] = anon_sym_a,
  [anon_sym_b] = anon_sym_b,
  [anon_sym_c] = anon_sym_c,
  [anon_sym_d] = anon_sym_d,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_f] = anon_sym_f,
  [anon_sym_g] = anon_sym_g,
  [anon_sym_h] = anon_sym_h,
  [anon_sym_i] = anon_sym_i,
  [anon_sym_j] = anon_sym_j,
  [anon_sym_k] = anon_sym_k,
  [anon_sym_l] = anon_sym_l,
  [anon_sym_m] = anon_sym_m,
  [anon_sym_n] = anon_sym_n,
  [anon_sym_o] = anon_sym_o,
  [anon_sym_p] = anon_sym_p,
  [anon_sym_q] = anon_sym_q,
  [anon_sym_r] = anon_sym_r,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_t] = anon_sym_t,
  [anon_sym_u] = anon_sym_u,
  [anon_sym_v] = anon_sym_v,
  [anon_sym_w] = anon_sym_w,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_y] = anon_sym_y,
  [anon_sym_z] = anon_sym_z,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_1] = anon_sym_1,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_3] = anon_sym_3,
  [anon_sym_4] = anon_sym_4,
  [anon_sym_5] = anon_sym_5,
  [anon_sym_6] = anon_sym_6,
  [anon_sym_7] = anon_sym_7,
  [anon_sym_8] = anon_sym_8,
  [anon_sym_9] = anon_sym_9,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym__] = anon_sym__,
  [sym_source_file] = sym_source_file,
  [sym__program] = sym__program,
  [sym__white_space] = sym__white_space,
  [sym__space] = sym__space,
  [sym__token] = sym__token,
  [sym__identifier] = sym__identifier,
  [sym__expression] = sym__expression,
  [sym_type] = sym_type,
  [sym__declaration] = sym__declaration,
  [sym_normal_declaration] = sym_normal_declaration,
  [sym_statement] = sym_statement,
  [sym__comment] = sym__comment,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_name_identifier] = sym_name_identifier,
  [sym__letter] = sym__letter,
  [sym__upper_case_letter] = sym__upper_case_letter,
  [sym__lower_case_letter] = sym__lower_case_letter,
  [sym_digit] = sym_digit,
  [sym_special_character] = sym_special_character,
  [sym_underscore] = sym_underscore,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_statement_repeat1] = aux_sym_statement_repeat1,
  [aux_sym_line_comment_repeat1] = aux_sym_line_comment_repeat1,
  [aux_sym_block_comment_repeat1] = aux_sym_block_comment_repeat1,
  [aux_sym_name_identifier_repeat1] = aux_sym_name_identifier_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
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
  [anon_sym_float] = {
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
  [aux_sym_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SEMI] = {
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
  [anon_sym_SLASHn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_A] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_B] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_C] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_E] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_F] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_G] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_I] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_J] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_K] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_L] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_M] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_N] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_O] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_P] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Q] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_R] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_S] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_T] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_U] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_V] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_W] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_X] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Y] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Z] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_a] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_g] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_h] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_j] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_k] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_l] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_m] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_n] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_p] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_q] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_v] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_w] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_y] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_z] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1] = {
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
  [anon_sym_4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
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
  [sym__program] = {
    .visible = false,
    .named = true,
  },
  [sym__white_space] = {
    .visible = false,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym__token] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_normal_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__comment] = {
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
  [sym_name_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__letter] = {
    .visible = false,
    .named = true,
  },
  [sym__upper_case_letter] = {
    .visible = false,
    .named = true,
  },
  [sym__lower_case_letter] = {
    .visible = false,
    .named = true,
  },
  [sym_digit] = {
    .visible = true,
    .named = true,
  },
  [sym_special_character] = {
    .visible = true,
    .named = true,
  },
  [sym_underscore] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_name_identifier_repeat1] = {
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
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 4,
  [19] = 5,
  [20] = 6,
  [21] = 8,
  [22] = 7,
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
  [35] = 10,
  [36] = 36,
  [37] = 37,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      if (lookahead == '!') ADVANCE(115);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '$') ADVANCE(116);
      if (lookahead == '%') ADVANCE(117);
      if (lookahead == '&') ADVANCE(118);
      if (lookahead == '(') ADVANCE(3);
      if (lookahead == '*') ADVANCE(120);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == ',') ADVANCE(122);
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '0') ADVANCE(105);
      if (lookahead == '1') ADVANCE(106);
      if (lookahead == '2') ADVANCE(107);
      if (lookahead == '3') ADVANCE(108);
      if (lookahead == '4') ADVANCE(109);
      if (lookahead == '5') ADVANCE(110);
      if (lookahead == '6') ADVANCE(111);
      if (lookahead == '7') ADVANCE(112);
      if (lookahead == '8') ADVANCE(113);
      if (lookahead == '9') ADVANCE(114);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '<') ADVANCE(126);
      if (lookahead == '=') ADVANCE(127);
      if (lookahead == '>') ADVANCE(128);
      if (lookahead == '?') ADVANCE(129);
      if (lookahead == '@') ADVANCE(130);
      if (lookahead == 'A') ADVANCE(47);
      if (lookahead == 'B') ADVANCE(48);
      if (lookahead == 'C') ADVANCE(49);
      if (lookahead == 'D') ADVANCE(50);
      if (lookahead == 'E') ADVANCE(51);
      if (lookahead == 'F') ADVANCE(52);
      if (lookahead == 'G') ADVANCE(53);
      if (lookahead == 'H') ADVANCE(54);
      if (lookahead == 'I') ADVANCE(55);
      if (lookahead == 'J') ADVANCE(56);
      if (lookahead == 'K') ADVANCE(57);
      if (lookahead == 'L') ADVANCE(58);
      if (lookahead == 'M') ADVANCE(59);
      if (lookahead == 'N') ADVANCE(60);
      if (lookahead == 'O') ADVANCE(61);
      if (lookahead == 'P') ADVANCE(62);
      if (lookahead == 'Q') ADVANCE(63);
      if (lookahead == 'R') ADVANCE(64);
      if (lookahead == 'S') ADVANCE(65);
      if (lookahead == 'T') ADVANCE(66);
      if (lookahead == 'U') ADVANCE(67);
      if (lookahead == 'V') ADVANCE(68);
      if (lookahead == 'W') ADVANCE(69);
      if (lookahead == 'X') ADVANCE(70);
      if (lookahead == 'Y') ADVANCE(71);
      if (lookahead == 'Z') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(131);
      if (lookahead == '^') ADVANCE(132);
      if (lookahead == '_') ADVANCE(136);
      if (lookahead == '`') ADVANCE(133);
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'b') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 'g') ADVANCE(82);
      if (lookahead == 'h') ADVANCE(83);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'j') ADVANCE(88);
      if (lookahead == 'k') ADVANCE(89);
      if (lookahead == 'l') ADVANCE(90);
      if (lookahead == 'm') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(93);
      if (lookahead == 'p') ADVANCE(94);
      if (lookahead == 'q') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(99);
      if (lookahead == 'v') ADVANCE(100);
      if (lookahead == 'w') ADVANCE(101);
      if (lookahead == 'x') ADVANCE(102);
      if (lookahead == 'y') ADVANCE(103);
      if (lookahead == 'z') ADVANCE(104);
      if (lookahead == '|') ADVANCE(134);
      if (lookahead == '~') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(45);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(105);
      if (lookahead == '1') ADVANCE(106);
      if (lookahead == '2') ADVANCE(107);
      if (lookahead == '3') ADVANCE(108);
      if (lookahead == '4') ADVANCE(109);
      if (lookahead == '5') ADVANCE(110);
      if (lookahead == '6') ADVANCE(111);
      if (lookahead == '7') ADVANCE(112);
      if (lookahead == '8') ADVANCE(113);
      if (lookahead == '9') ADVANCE(114);
      if (lookahead == 'A') ADVANCE(47);
      if (lookahead == 'B') ADVANCE(48);
      if (lookahead == 'C') ADVANCE(49);
      if (lookahead == 'D') ADVANCE(50);
      if (lookahead == 'E') ADVANCE(51);
      if (lookahead == 'F') ADVANCE(52);
      if (lookahead == 'G') ADVANCE(53);
      if (lookahead == 'H') ADVANCE(54);
      if (lookahead == 'I') ADVANCE(55);
      if (lookahead == 'J') ADVANCE(56);
      if (lookahead == 'K') ADVANCE(57);
      if (lookahead == 'L') ADVANCE(58);
      if (lookahead == 'M') ADVANCE(59);
      if (lookahead == 'N') ADVANCE(60);
      if (lookahead == 'O') ADVANCE(61);
      if (lookahead == 'P') ADVANCE(62);
      if (lookahead == 'Q') ADVANCE(63);
      if (lookahead == 'R') ADVANCE(64);
      if (lookahead == 'S') ADVANCE(65);
      if (lookahead == 'T') ADVANCE(66);
      if (lookahead == 'U') ADVANCE(67);
      if (lookahead == 'V') ADVANCE(68);
      if (lookahead == 'W') ADVANCE(69);
      if (lookahead == 'X') ADVANCE(70);
      if (lookahead == 'Y') ADVANCE(71);
      if (lookahead == 'Z') ADVANCE(72);
      if (lookahead == '_') ADVANCE(136);
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'b') ADVANCE(74);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == 'g') ADVANCE(82);
      if (lookahead == 'h') ADVANCE(83);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'j') ADVANCE(88);
      if (lookahead == 'k') ADVANCE(89);
      if (lookahead == 'l') ADVANCE(90);
      if (lookahead == 'm') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(93);
      if (lookahead == 'p') ADVANCE(94);
      if (lookahead == 'q') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(99);
      if (lookahead == 'v') ADVANCE(100);
      if (lookahead == 'w') ADVANCE(101);
      if (lookahead == 'x') ADVANCE(102);
      if (lookahead == 'y') ADVANCE(103);
      if (lookahead == 'z') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(47);
      if (lookahead == 'B') ADVANCE(48);
      if (lookahead == 'C') ADVANCE(49);
      if (lookahead == 'D') ADVANCE(50);
      if (lookahead == 'E') ADVANCE(51);
      if (lookahead == 'F') ADVANCE(52);
      if (lookahead == 'G') ADVANCE(53);
      if (lookahead == 'H') ADVANCE(54);
      if (lookahead == 'I') ADVANCE(55);
      if (lookahead == 'J') ADVANCE(56);
      if (lookahead == 'K') ADVANCE(57);
      if (lookahead == 'L') ADVANCE(58);
      if (lookahead == 'M') ADVANCE(59);
      if (lookahead == 'N') ADVANCE(60);
      if (lookahead == 'O') ADVANCE(61);
      if (lookahead == 'P') ADVANCE(62);
      if (lookahead == 'Q') ADVANCE(63);
      if (lookahead == 'R') ADVANCE(64);
      if (lookahead == 'S') ADVANCE(65);
      if (lookahead == 'T') ADVANCE(66);
      if (lookahead == 'U') ADVANCE(67);
      if (lookahead == 'V') ADVANCE(68);
      if (lookahead == 'W') ADVANCE(69);
      if (lookahead == 'X') ADVANCE(70);
      if (lookahead == 'Y') ADVANCE(71);
      if (lookahead == 'Z') ADVANCE(72);
      if (lookahead == '_') ADVANCE(136);
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'b') ADVANCE(74);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == 'g') ADVANCE(82);
      if (lookahead == 'h') ADVANCE(83);
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead == 'j') ADVANCE(88);
      if (lookahead == 'k') ADVANCE(89);
      if (lookahead == 'l') ADVANCE(90);
      if (lookahead == 'm') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(93);
      if (lookahead == 'p') ADVANCE(94);
      if (lookahead == 'q') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(99);
      if (lookahead == 'v') ADVANCE(100);
      if (lookahead == 'w') ADVANCE(101);
      if (lookahead == 'x') ADVANCE(102);
      if (lookahead == 'y') ADVANCE(103);
      if (lookahead == 'z') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 12:
      if (lookahead == 'g') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (lookahead == '\t') ADVANCE(26);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '!') ADVANCE(115);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '$') ADVANCE(116);
      if (lookahead == '%') ADVANCE(117);
      if (lookahead == '&') ADVANCE(118);
      if (lookahead == '(') ADVANCE(3);
      if (lookahead == '*') ADVANCE(119);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == ',') ADVANCE(122);
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '0') ADVANCE(105);
      if (lookahead == '1') ADVANCE(106);
      if (lookahead == '2') ADVANCE(107);
      if (lookahead == '3') ADVANCE(108);
      if (lookahead == '4') ADVANCE(109);
      if (lookahead == '5') ADVANCE(110);
      if (lookahead == '6') ADVANCE(111);
      if (lookahead == '7') ADVANCE(112);
      if (lookahead == '8') ADVANCE(113);
      if (lookahead == '9') ADVANCE(114);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '<') ADVANCE(126);
      if (lookahead == '=') ADVANCE(127);
      if (lookahead == '>') ADVANCE(128);
      if (lookahead == '?') ADVANCE(129);
      if (lookahead == '@') ADVANCE(130);
      if (lookahead == 'A') ADVANCE(47);
      if (lookahead == 'B') ADVANCE(48);
      if (lookahead == 'C') ADVANCE(49);
      if (lookahead == 'D') ADVANCE(50);
      if (lookahead == 'E') ADVANCE(51);
      if (lookahead == 'F') ADVANCE(52);
      if (lookahead == 'G') ADVANCE(53);
      if (lookahead == 'H') ADVANCE(54);
      if (lookahead == 'I') ADVANCE(55);
      if (lookahead == 'J') ADVANCE(56);
      if (lookahead == 'K') ADVANCE(57);
      if (lookahead == 'L') ADVANCE(58);
      if (lookahead == 'M') ADVANCE(59);
      if (lookahead == 'N') ADVANCE(60);
      if (lookahead == 'O') ADVANCE(61);
      if (lookahead == 'P') ADVANCE(62);
      if (lookahead == 'Q') ADVANCE(63);
      if (lookahead == 'R') ADVANCE(64);
      if (lookahead == 'S') ADVANCE(65);
      if (lookahead == 'T') ADVANCE(66);
      if (lookahead == 'U') ADVANCE(67);
      if (lookahead == 'V') ADVANCE(68);
      if (lookahead == 'W') ADVANCE(69);
      if (lookahead == 'X') ADVANCE(70);
      if (lookahead == 'Y') ADVANCE(71);
      if (lookahead == 'Z') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(131);
      if (lookahead == '^') ADVANCE(132);
      if (lookahead == '_') ADVANCE(136);
      if (lookahead == '`') ADVANCE(133);
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'b') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 'g') ADVANCE(82);
      if (lookahead == 'h') ADVANCE(83);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == 'j') ADVANCE(88);
      if (lookahead == 'k') ADVANCE(89);
      if (lookahead == 'l') ADVANCE(90);
      if (lookahead == 'm') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(93);
      if (lookahead == 'p') ADVANCE(94);
      if (lookahead == 'q') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(99);
      if (lookahead == 'v') ADVANCE(100);
      if (lookahead == 'w') ADVANCE(101);
      if (lookahead == 'x') ADVANCE(102);
      if (lookahead == 'y') ADVANCE(103);
      if (lookahead == 'z') ADVANCE(104);
      if (lookahead == '|') ADVANCE(134);
      if (lookahead == '~') ADVANCE(135);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(26);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(26);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t') ADVANCE(26);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(26);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_statement_token1);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_statement_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(35);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == ')') ADVANCE(46);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SLASHn);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_STAR_RPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_G);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_H);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_J);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_K);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_L);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_M);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_Q);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_R);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_S);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_U);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_V);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_W);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_c);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_g);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_h);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_i);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_j);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_k);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_m);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_q);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_v);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_w);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_z);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == ')') ADVANCE(46);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 23},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 23},
  [4] = {.lex_state = 23},
  [5] = {.lex_state = 23},
  [6] = {.lex_state = 23},
  [7] = {.lex_state = 23},
  [8] = {.lex_state = 23},
  [9] = {.lex_state = 23},
  [10] = {.lex_state = 23},
  [11] = {.lex_state = 23},
  [12] = {.lex_state = 23},
  [13] = {.lex_state = 23},
  [14] = {.lex_state = 23},
  [15] = {.lex_state = 23},
  [16] = {.lex_state = 23},
  [17] = {.lex_state = 23},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_integer] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LPAREN_STAR] = ACTIONS(1),
    [anon_sym_STAR_RPAREN] = ACTIONS(1),
    [anon_sym_A] = ACTIONS(1),
    [anon_sym_B] = ACTIONS(1),
    [anon_sym_C] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym_F] = ACTIONS(1),
    [anon_sym_G] = ACTIONS(1),
    [anon_sym_H] = ACTIONS(1),
    [anon_sym_I] = ACTIONS(1),
    [anon_sym_J] = ACTIONS(1),
    [anon_sym_K] = ACTIONS(1),
    [anon_sym_L] = ACTIONS(1),
    [anon_sym_M] = ACTIONS(1),
    [anon_sym_N] = ACTIONS(1),
    [anon_sym_O] = ACTIONS(1),
    [anon_sym_P] = ACTIONS(1),
    [anon_sym_Q] = ACTIONS(1),
    [anon_sym_R] = ACTIONS(1),
    [anon_sym_S] = ACTIONS(1),
    [anon_sym_T] = ACTIONS(1),
    [anon_sym_U] = ACTIONS(1),
    [anon_sym_V] = ACTIONS(1),
    [anon_sym_W] = ACTIONS(1),
    [anon_sym_X] = ACTIONS(1),
    [anon_sym_Y] = ACTIONS(1),
    [anon_sym_Z] = ACTIONS(1),
    [anon_sym_a] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
    [anon_sym_c] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [anon_sym_g] = ACTIONS(1),
    [anon_sym_h] = ACTIONS(1),
    [anon_sym_i] = ACTIONS(1),
    [anon_sym_j] = ACTIONS(1),
    [anon_sym_k] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_m] = ACTIONS(1),
    [anon_sym_n] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [anon_sym_p] = ACTIONS(1),
    [anon_sym_q] = ACTIONS(1),
    [anon_sym_r] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_t] = ACTIONS(1),
    [anon_sym_u] = ACTIONS(1),
    [anon_sym_v] = ACTIONS(1),
    [anon_sym_w] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_y] = ACTIONS(1),
    [anon_sym_z] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
    [anon_sym_6] = ACTIONS(1),
    [anon_sym_7] = ACTIONS(1),
    [anon_sym_8] = ACTIONS(1),
    [anon_sym_9] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(37),
    [sym__program] = STATE(3),
    [sym__white_space] = STATE(3),
    [sym__space] = STATE(3),
    [sym__token] = STATE(3),
    [sym__identifier] = STATE(3),
    [sym__expression] = STATE(3),
    [sym_type] = STATE(3),
    [sym__declaration] = STATE(3),
    [sym_normal_declaration] = STATE(3),
    [sym__comment] = STATE(3),
    [sym_line_comment] = STATE(3),
    [sym_block_comment] = STATE(3),
    [sym_name_identifier] = STATE(3),
    [sym__letter] = STATE(4),
    [sym__upper_case_letter] = STATE(4),
    [sym__lower_case_letter] = STATE(4),
    [sym_special_character] = STATE(3),
    [sym_underscore] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_TAB] = ACTIONS(5),
    [anon_sym_CR] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_boolean] = ACTIONS(7),
    [anon_sym_integer] = ACTIONS(7),
    [anon_sym_float] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(13),
    [anon_sym_LPAREN_STAR] = ACTIONS(15),
    [anon_sym_A] = ACTIONS(17),
    [anon_sym_B] = ACTIONS(17),
    [anon_sym_C] = ACTIONS(17),
    [anon_sym_D] = ACTIONS(17),
    [anon_sym_E] = ACTIONS(17),
    [anon_sym_F] = ACTIONS(17),
    [anon_sym_G] = ACTIONS(17),
    [anon_sym_H] = ACTIONS(17),
    [anon_sym_I] = ACTIONS(17),
    [anon_sym_J] = ACTIONS(17),
    [anon_sym_K] = ACTIONS(17),
    [anon_sym_L] = ACTIONS(17),
    [anon_sym_M] = ACTIONS(17),
    [anon_sym_N] = ACTIONS(17),
    [anon_sym_O] = ACTIONS(17),
    [anon_sym_P] = ACTIONS(17),
    [anon_sym_Q] = ACTIONS(17),
    [anon_sym_R] = ACTIONS(17),
    [anon_sym_S] = ACTIONS(17),
    [anon_sym_T] = ACTIONS(17),
    [anon_sym_U] = ACTIONS(17),
    [anon_sym_V] = ACTIONS(17),
    [anon_sym_W] = ACTIONS(17),
    [anon_sym_X] = ACTIONS(17),
    [anon_sym_Y] = ACTIONS(17),
    [anon_sym_Z] = ACTIONS(17),
    [anon_sym_a] = ACTIONS(17),
    [anon_sym_b] = ACTIONS(17),
    [anon_sym_c] = ACTIONS(17),
    [anon_sym_d] = ACTIONS(17),
    [anon_sym_e] = ACTIONS(17),
    [anon_sym_f] = ACTIONS(17),
    [anon_sym_g] = ACTIONS(17),
    [anon_sym_h] = ACTIONS(17),
    [anon_sym_i] = ACTIONS(17),
    [anon_sym_j] = ACTIONS(17),
    [anon_sym_k] = ACTIONS(17),
    [anon_sym_l] = ACTIONS(17),
    [anon_sym_m] = ACTIONS(17),
    [anon_sym_n] = ACTIONS(17),
    [anon_sym_o] = ACTIONS(17),
    [anon_sym_p] = ACTIONS(17),
    [anon_sym_q] = ACTIONS(17),
    [anon_sym_r] = ACTIONS(17),
    [anon_sym_s] = ACTIONS(17),
    [anon_sym_t] = ACTIONS(17),
    [anon_sym_u] = ACTIONS(17),
    [anon_sym_v] = ACTIONS(17),
    [anon_sym_w] = ACTIONS(17),
    [anon_sym_x] = ACTIONS(17),
    [anon_sym_y] = ACTIONS(17),
    [anon_sym_z] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_PERCENT] = ACTIONS(11),
    [anon_sym_AMP] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_SLASH] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_EQ] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_QMARK] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(11),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym__] = ACTIONS(19),
  },
  [2] = {
    [sym__program] = STATE(2),
    [sym__white_space] = STATE(2),
    [sym__space] = STATE(2),
    [sym__token] = STATE(2),
    [sym__identifier] = STATE(2),
    [sym__expression] = STATE(2),
    [sym_type] = STATE(2),
    [sym__declaration] = STATE(2),
    [sym_normal_declaration] = STATE(2),
    [sym__comment] = STATE(2),
    [sym_line_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_name_identifier] = STATE(2),
    [sym__letter] = STATE(4),
    [sym__upper_case_letter] = STATE(4),
    [sym__lower_case_letter] = STATE(4),
    [sym_special_character] = STATE(2),
    [sym_underscore] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_] = ACTIONS(23),
    [anon_sym_TAB] = ACTIONS(23),
    [anon_sym_CR] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(23),
    [anon_sym_boolean] = ACTIONS(26),
    [anon_sym_integer] = ACTIONS(26),
    [anon_sym_float] = ACTIONS(26),
    [anon_sym_const] = ACTIONS(29),
    [anon_sym_COLON] = ACTIONS(32),
    [anon_sym_SEMI] = ACTIONS(32),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_LPAREN_STAR] = ACTIONS(38),
    [anon_sym_A] = ACTIONS(41),
    [anon_sym_B] = ACTIONS(41),
    [anon_sym_C] = ACTIONS(41),
    [anon_sym_D] = ACTIONS(41),
    [anon_sym_E] = ACTIONS(41),
    [anon_sym_F] = ACTIONS(41),
    [anon_sym_G] = ACTIONS(41),
    [anon_sym_H] = ACTIONS(41),
    [anon_sym_I] = ACTIONS(41),
    [anon_sym_J] = ACTIONS(41),
    [anon_sym_K] = ACTIONS(41),
    [anon_sym_L] = ACTIONS(41),
    [anon_sym_M] = ACTIONS(41),
    [anon_sym_N] = ACTIONS(41),
    [anon_sym_O] = ACTIONS(41),
    [anon_sym_P] = ACTIONS(41),
    [anon_sym_Q] = ACTIONS(41),
    [anon_sym_R] = ACTIONS(41),
    [anon_sym_S] = ACTIONS(41),
    [anon_sym_T] = ACTIONS(41),
    [anon_sym_U] = ACTIONS(41),
    [anon_sym_V] = ACTIONS(41),
    [anon_sym_W] = ACTIONS(41),
    [anon_sym_X] = ACTIONS(41),
    [anon_sym_Y] = ACTIONS(41),
    [anon_sym_Z] = ACTIONS(41),
    [anon_sym_a] = ACTIONS(41),
    [anon_sym_b] = ACTIONS(41),
    [anon_sym_c] = ACTIONS(41),
    [anon_sym_d] = ACTIONS(41),
    [anon_sym_e] = ACTIONS(41),
    [anon_sym_f] = ACTIONS(41),
    [anon_sym_g] = ACTIONS(41),
    [anon_sym_h] = ACTIONS(41),
    [anon_sym_i] = ACTIONS(41),
    [anon_sym_j] = ACTIONS(41),
    [anon_sym_k] = ACTIONS(41),
    [anon_sym_l] = ACTIONS(41),
    [anon_sym_m] = ACTIONS(41),
    [anon_sym_n] = ACTIONS(41),
    [anon_sym_o] = ACTIONS(41),
    [anon_sym_p] = ACTIONS(41),
    [anon_sym_q] = ACTIONS(41),
    [anon_sym_r] = ACTIONS(41),
    [anon_sym_s] = ACTIONS(41),
    [anon_sym_t] = ACTIONS(41),
    [anon_sym_u] = ACTIONS(41),
    [anon_sym_v] = ACTIONS(41),
    [anon_sym_w] = ACTIONS(41),
    [anon_sym_x] = ACTIONS(41),
    [anon_sym_y] = ACTIONS(41),
    [anon_sym_z] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(32),
    [anon_sym_DOLLAR] = ACTIONS(32),
    [anon_sym_PERCENT] = ACTIONS(32),
    [anon_sym_AMP] = ACTIONS(32),
    [anon_sym_STAR] = ACTIONS(32),
    [anon_sym_PLUS] = ACTIONS(32),
    [anon_sym_COMMA] = ACTIONS(32),
    [anon_sym_DASH] = ACTIONS(32),
    [anon_sym_DOT] = ACTIONS(32),
    [anon_sym_SLASH] = ACTIONS(32),
    [anon_sym_LT] = ACTIONS(32),
    [anon_sym_EQ] = ACTIONS(32),
    [anon_sym_GT] = ACTIONS(32),
    [anon_sym_QMARK] = ACTIONS(32),
    [anon_sym_AT] = ACTIONS(32),
    [anon_sym_BSLASH] = ACTIONS(32),
    [anon_sym_CARET] = ACTIONS(32),
    [anon_sym_BQUOTE] = ACTIONS(32),
    [anon_sym_PIPE] = ACTIONS(32),
    [anon_sym_TILDE] = ACTIONS(32),
    [anon_sym__] = ACTIONS(44),
  },
  [3] = {
    [sym__program] = STATE(2),
    [sym__white_space] = STATE(2),
    [sym__space] = STATE(2),
    [sym__token] = STATE(2),
    [sym__identifier] = STATE(2),
    [sym__expression] = STATE(2),
    [sym_type] = STATE(2),
    [sym__declaration] = STATE(2),
    [sym_normal_declaration] = STATE(2),
    [sym__comment] = STATE(2),
    [sym_line_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_name_identifier] = STATE(2),
    [sym__letter] = STATE(4),
    [sym__upper_case_letter] = STATE(4),
    [sym__lower_case_letter] = STATE(4),
    [sym_special_character] = STATE(2),
    [sym_underscore] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_] = ACTIONS(49),
    [anon_sym_TAB] = ACTIONS(49),
    [anon_sym_CR] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_boolean] = ACTIONS(7),
    [anon_sym_integer] = ACTIONS(7),
    [anon_sym_float] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(13),
    [anon_sym_LPAREN_STAR] = ACTIONS(15),
    [anon_sym_A] = ACTIONS(17),
    [anon_sym_B] = ACTIONS(17),
    [anon_sym_C] = ACTIONS(17),
    [anon_sym_D] = ACTIONS(17),
    [anon_sym_E] = ACTIONS(17),
    [anon_sym_F] = ACTIONS(17),
    [anon_sym_G] = ACTIONS(17),
    [anon_sym_H] = ACTIONS(17),
    [anon_sym_I] = ACTIONS(17),
    [anon_sym_J] = ACTIONS(17),
    [anon_sym_K] = ACTIONS(17),
    [anon_sym_L] = ACTIONS(17),
    [anon_sym_M] = ACTIONS(17),
    [anon_sym_N] = ACTIONS(17),
    [anon_sym_O] = ACTIONS(17),
    [anon_sym_P] = ACTIONS(17),
    [anon_sym_Q] = ACTIONS(17),
    [anon_sym_R] = ACTIONS(17),
    [anon_sym_S] = ACTIONS(17),
    [anon_sym_T] = ACTIONS(17),
    [anon_sym_U] = ACTIONS(17),
    [anon_sym_V] = ACTIONS(17),
    [anon_sym_W] = ACTIONS(17),
    [anon_sym_X] = ACTIONS(17),
    [anon_sym_Y] = ACTIONS(17),
    [anon_sym_Z] = ACTIONS(17),
    [anon_sym_a] = ACTIONS(17),
    [anon_sym_b] = ACTIONS(17),
    [anon_sym_c] = ACTIONS(17),
    [anon_sym_d] = ACTIONS(17),
    [anon_sym_e] = ACTIONS(17),
    [anon_sym_f] = ACTIONS(17),
    [anon_sym_g] = ACTIONS(17),
    [anon_sym_h] = ACTIONS(17),
    [anon_sym_i] = ACTIONS(17),
    [anon_sym_j] = ACTIONS(17),
    [anon_sym_k] = ACTIONS(17),
    [anon_sym_l] = ACTIONS(17),
    [anon_sym_m] = ACTIONS(17),
    [anon_sym_n] = ACTIONS(17),
    [anon_sym_o] = ACTIONS(17),
    [anon_sym_p] = ACTIONS(17),
    [anon_sym_q] = ACTIONS(17),
    [anon_sym_r] = ACTIONS(17),
    [anon_sym_s] = ACTIONS(17),
    [anon_sym_t] = ACTIONS(17),
    [anon_sym_u] = ACTIONS(17),
    [anon_sym_v] = ACTIONS(17),
    [anon_sym_w] = ACTIONS(17),
    [anon_sym_x] = ACTIONS(17),
    [anon_sym_y] = ACTIONS(17),
    [anon_sym_z] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_PERCENT] = ACTIONS(11),
    [anon_sym_AMP] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_SLASH] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_EQ] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_QMARK] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(11),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym__] = ACTIONS(19),
  },
  [4] = {
    [sym__letter] = STATE(6),
    [sym__upper_case_letter] = STATE(6),
    [sym__lower_case_letter] = STATE(6),
    [sym_digit] = STATE(6),
    [sym_underscore] = STATE(6),
    [aux_sym_name_identifier_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_] = ACTIONS(53),
    [anon_sym_TAB] = ACTIONS(53),
    [anon_sym_CR] = ACTIONS(53),
    [anon_sym_LF] = ACTIONS(53),
    [anon_sym_boolean] = ACTIONS(53),
    [anon_sym_integer] = ACTIONS(53),
    [anon_sym_float] = ACTIONS(53),
    [anon_sym_const] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(53),
    [anon_sym_SEMI] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(53),
    [anon_sym_LPAREN_STAR] = ACTIONS(53),
    [anon_sym_A] = ACTIONS(55),
    [anon_sym_B] = ACTIONS(55),
    [anon_sym_C] = ACTIONS(55),
    [anon_sym_D] = ACTIONS(55),
    [anon_sym_E] = ACTIONS(55),
    [anon_sym_F] = ACTIONS(55),
    [anon_sym_G] = ACTIONS(55),
    [anon_sym_H] = ACTIONS(55),
    [anon_sym_I] = ACTIONS(55),
    [anon_sym_J] = ACTIONS(55),
    [anon_sym_K] = ACTIONS(55),
    [anon_sym_L] = ACTIONS(55),
    [anon_sym_M] = ACTIONS(55),
    [anon_sym_N] = ACTIONS(55),
    [anon_sym_O] = ACTIONS(55),
    [anon_sym_P] = ACTIONS(55),
    [anon_sym_Q] = ACTIONS(55),
    [anon_sym_R] = ACTIONS(55),
    [anon_sym_S] = ACTIONS(55),
    [anon_sym_T] = ACTIONS(55),
    [anon_sym_U] = ACTIONS(55),
    [anon_sym_V] = ACTIONS(55),
    [anon_sym_W] = ACTIONS(55),
    [anon_sym_X] = ACTIONS(55),
    [anon_sym_Y] = ACTIONS(55),
    [anon_sym_Z] = ACTIONS(55),
    [anon_sym_a] = ACTIONS(55),
    [anon_sym_b] = ACTIONS(55),
    [anon_sym_c] = ACTIONS(55),
    [anon_sym_d] = ACTIONS(55),
    [anon_sym_e] = ACTIONS(55),
    [anon_sym_f] = ACTIONS(55),
    [anon_sym_g] = ACTIONS(55),
    [anon_sym_h] = ACTIONS(55),
    [anon_sym_i] = ACTIONS(55),
    [anon_sym_j] = ACTIONS(55),
    [anon_sym_k] = ACTIONS(55),
    [anon_sym_l] = ACTIONS(55),
    [anon_sym_m] = ACTIONS(55),
    [anon_sym_n] = ACTIONS(55),
    [anon_sym_o] = ACTIONS(55),
    [anon_sym_p] = ACTIONS(55),
    [anon_sym_q] = ACTIONS(55),
    [anon_sym_r] = ACTIONS(55),
    [anon_sym_s] = ACTIONS(55),
    [anon_sym_t] = ACTIONS(55),
    [anon_sym_u] = ACTIONS(55),
    [anon_sym_v] = ACTIONS(55),
    [anon_sym_w] = ACTIONS(55),
    [anon_sym_x] = ACTIONS(55),
    [anon_sym_y] = ACTIONS(55),
    [anon_sym_z] = ACTIONS(55),
    [anon_sym_0] = ACTIONS(57),
    [anon_sym_1] = ACTIONS(57),
    [anon_sym_2] = ACTIONS(57),
    [anon_sym_3] = ACTIONS(57),
    [anon_sym_4] = ACTIONS(57),
    [anon_sym_5] = ACTIONS(57),
    [anon_sym_6] = ACTIONS(57),
    [anon_sym_7] = ACTIONS(57),
    [anon_sym_8] = ACTIONS(57),
    [anon_sym_9] = ACTIONS(57),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_DOLLAR] = ACTIONS(53),
    [anon_sym_PERCENT] = ACTIONS(53),
    [anon_sym_AMP] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_PLUS] = ACTIONS(53),
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(53),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_QMARK] = ACTIONS(53),
    [anon_sym_AT] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(53),
    [anon_sym_CARET] = ACTIONS(53),
    [anon_sym_BQUOTE] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(53),
    [anon_sym__] = ACTIONS(19),
  },
  [5] = {
    [sym__letter] = STATE(5),
    [sym__upper_case_letter] = STATE(5),
    [sym__lower_case_letter] = STATE(5),
    [sym_digit] = STATE(5),
    [sym_underscore] = STATE(5),
    [aux_sym_name_identifier_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_] = ACTIONS(61),
    [anon_sym_TAB] = ACTIONS(61),
    [anon_sym_CR] = ACTIONS(61),
    [anon_sym_LF] = ACTIONS(61),
    [anon_sym_boolean] = ACTIONS(61),
    [anon_sym_integer] = ACTIONS(61),
    [anon_sym_float] = ACTIONS(61),
    [anon_sym_const] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(61),
    [anon_sym_SEMI] = ACTIONS(61),
    [anon_sym_POUND] = ACTIONS(61),
    [anon_sym_LPAREN_STAR] = ACTIONS(61),
    [anon_sym_A] = ACTIONS(63),
    [anon_sym_B] = ACTIONS(63),
    [anon_sym_C] = ACTIONS(63),
    [anon_sym_D] = ACTIONS(63),
    [anon_sym_E] = ACTIONS(63),
    [anon_sym_F] = ACTIONS(63),
    [anon_sym_G] = ACTIONS(63),
    [anon_sym_H] = ACTIONS(63),
    [anon_sym_I] = ACTIONS(63),
    [anon_sym_J] = ACTIONS(63),
    [anon_sym_K] = ACTIONS(63),
    [anon_sym_L] = ACTIONS(63),
    [anon_sym_M] = ACTIONS(63),
    [anon_sym_N] = ACTIONS(63),
    [anon_sym_O] = ACTIONS(63),
    [anon_sym_P] = ACTIONS(63),
    [anon_sym_Q] = ACTIONS(63),
    [anon_sym_R] = ACTIONS(63),
    [anon_sym_S] = ACTIONS(63),
    [anon_sym_T] = ACTIONS(63),
    [anon_sym_U] = ACTIONS(63),
    [anon_sym_V] = ACTIONS(63),
    [anon_sym_W] = ACTIONS(63),
    [anon_sym_X] = ACTIONS(63),
    [anon_sym_Y] = ACTIONS(63),
    [anon_sym_Z] = ACTIONS(63),
    [anon_sym_a] = ACTIONS(63),
    [anon_sym_b] = ACTIONS(63),
    [anon_sym_c] = ACTIONS(63),
    [anon_sym_d] = ACTIONS(63),
    [anon_sym_e] = ACTIONS(63),
    [anon_sym_f] = ACTIONS(63),
    [anon_sym_g] = ACTIONS(63),
    [anon_sym_h] = ACTIONS(63),
    [anon_sym_i] = ACTIONS(63),
    [anon_sym_j] = ACTIONS(63),
    [anon_sym_k] = ACTIONS(63),
    [anon_sym_l] = ACTIONS(63),
    [anon_sym_m] = ACTIONS(63),
    [anon_sym_n] = ACTIONS(63),
    [anon_sym_o] = ACTIONS(63),
    [anon_sym_p] = ACTIONS(63),
    [anon_sym_q] = ACTIONS(63),
    [anon_sym_r] = ACTIONS(63),
    [anon_sym_s] = ACTIONS(63),
    [anon_sym_t] = ACTIONS(63),
    [anon_sym_u] = ACTIONS(63),
    [anon_sym_v] = ACTIONS(63),
    [anon_sym_w] = ACTIONS(63),
    [anon_sym_x] = ACTIONS(63),
    [anon_sym_y] = ACTIONS(63),
    [anon_sym_z] = ACTIONS(63),
    [anon_sym_0] = ACTIONS(66),
    [anon_sym_1] = ACTIONS(66),
    [anon_sym_2] = ACTIONS(66),
    [anon_sym_3] = ACTIONS(66),
    [anon_sym_4] = ACTIONS(66),
    [anon_sym_5] = ACTIONS(66),
    [anon_sym_6] = ACTIONS(66),
    [anon_sym_7] = ACTIONS(66),
    [anon_sym_8] = ACTIONS(66),
    [anon_sym_9] = ACTIONS(66),
    [anon_sym_BANG] = ACTIONS(61),
    [anon_sym_DOLLAR] = ACTIONS(61),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_AMP] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(61),
    [anon_sym_COMMA] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_EQ] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_AT] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(61),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(61),
    [anon_sym_PIPE] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym__] = ACTIONS(69),
  },
  [6] = {
    [sym__letter] = STATE(5),
    [sym__upper_case_letter] = STATE(5),
    [sym__lower_case_letter] = STATE(5),
    [sym_digit] = STATE(5),
    [sym_underscore] = STATE(5),
    [aux_sym_name_identifier_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(72),
    [anon_sym_] = ACTIONS(74),
    [anon_sym_TAB] = ACTIONS(74),
    [anon_sym_CR] = ACTIONS(74),
    [anon_sym_LF] = ACTIONS(74),
    [anon_sym_boolean] = ACTIONS(74),
    [anon_sym_integer] = ACTIONS(74),
    [anon_sym_float] = ACTIONS(74),
    [anon_sym_const] = ACTIONS(74),
    [anon_sym_COLON] = ACTIONS(74),
    [anon_sym_SEMI] = ACTIONS(74),
    [anon_sym_POUND] = ACTIONS(74),
    [anon_sym_LPAREN_STAR] = ACTIONS(74),
    [anon_sym_A] = ACTIONS(76),
    [anon_sym_B] = ACTIONS(76),
    [anon_sym_C] = ACTIONS(76),
    [anon_sym_D] = ACTIONS(76),
    [anon_sym_E] = ACTIONS(76),
    [anon_sym_F] = ACTIONS(76),
    [anon_sym_G] = ACTIONS(76),
    [anon_sym_H] = ACTIONS(76),
    [anon_sym_I] = ACTIONS(76),
    [anon_sym_J] = ACTIONS(76),
    [anon_sym_K] = ACTIONS(76),
    [anon_sym_L] = ACTIONS(76),
    [anon_sym_M] = ACTIONS(76),
    [anon_sym_N] = ACTIONS(76),
    [anon_sym_O] = ACTIONS(76),
    [anon_sym_P] = ACTIONS(76),
    [anon_sym_Q] = ACTIONS(76),
    [anon_sym_R] = ACTIONS(76),
    [anon_sym_S] = ACTIONS(76),
    [anon_sym_T] = ACTIONS(76),
    [anon_sym_U] = ACTIONS(76),
    [anon_sym_V] = ACTIONS(76),
    [anon_sym_W] = ACTIONS(76),
    [anon_sym_X] = ACTIONS(76),
    [anon_sym_Y] = ACTIONS(76),
    [anon_sym_Z] = ACTIONS(76),
    [anon_sym_a] = ACTIONS(76),
    [anon_sym_b] = ACTIONS(76),
    [anon_sym_c] = ACTIONS(76),
    [anon_sym_d] = ACTIONS(76),
    [anon_sym_e] = ACTIONS(76),
    [anon_sym_f] = ACTIONS(76),
    [anon_sym_g] = ACTIONS(76),
    [anon_sym_h] = ACTIONS(76),
    [anon_sym_i] = ACTIONS(76),
    [anon_sym_j] = ACTIONS(76),
    [anon_sym_k] = ACTIONS(76),
    [anon_sym_l] = ACTIONS(76),
    [anon_sym_m] = ACTIONS(76),
    [anon_sym_n] = ACTIONS(76),
    [anon_sym_o] = ACTIONS(76),
    [anon_sym_p] = ACTIONS(76),
    [anon_sym_q] = ACTIONS(76),
    [anon_sym_r] = ACTIONS(76),
    [anon_sym_s] = ACTIONS(76),
    [anon_sym_t] = ACTIONS(76),
    [anon_sym_u] = ACTIONS(76),
    [anon_sym_v] = ACTIONS(76),
    [anon_sym_w] = ACTIONS(76),
    [anon_sym_x] = ACTIONS(76),
    [anon_sym_y] = ACTIONS(76),
    [anon_sym_z] = ACTIONS(76),
    [anon_sym_0] = ACTIONS(57),
    [anon_sym_1] = ACTIONS(57),
    [anon_sym_2] = ACTIONS(57),
    [anon_sym_3] = ACTIONS(57),
    [anon_sym_4] = ACTIONS(57),
    [anon_sym_5] = ACTIONS(57),
    [anon_sym_6] = ACTIONS(57),
    [anon_sym_7] = ACTIONS(57),
    [anon_sym_8] = ACTIONS(57),
    [anon_sym_9] = ACTIONS(57),
    [anon_sym_BANG] = ACTIONS(74),
    [anon_sym_DOLLAR] = ACTIONS(74),
    [anon_sym_PERCENT] = ACTIONS(74),
    [anon_sym_AMP] = ACTIONS(74),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(74),
    [anon_sym_COMMA] = ACTIONS(74),
    [anon_sym_DASH] = ACTIONS(74),
    [anon_sym_DOT] = ACTIONS(74),
    [anon_sym_SLASH] = ACTIONS(74),
    [anon_sym_LT] = ACTIONS(74),
    [anon_sym_EQ] = ACTIONS(74),
    [anon_sym_GT] = ACTIONS(74),
    [anon_sym_QMARK] = ACTIONS(74),
    [anon_sym_AT] = ACTIONS(74),
    [anon_sym_BSLASH] = ACTIONS(74),
    [anon_sym_CARET] = ACTIONS(74),
    [anon_sym_BQUOTE] = ACTIONS(74),
    [anon_sym_PIPE] = ACTIONS(74),
    [anon_sym_TILDE] = ACTIONS(74),
    [anon_sym__] = ACTIONS(19),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_] = ACTIONS(80),
    [anon_sym_TAB] = ACTIONS(80),
    [anon_sym_CR] = ACTIONS(80),
    [anon_sym_LF] = ACTIONS(80),
    [anon_sym_boolean] = ACTIONS(80),
    [anon_sym_integer] = ACTIONS(80),
    [anon_sym_float] = ACTIONS(80),
    [anon_sym_const] = ACTIONS(80),
    [anon_sym_COLON] = ACTIONS(80),
    [anon_sym_SEMI] = ACTIONS(80),
    [anon_sym_POUND] = ACTIONS(80),
    [anon_sym_LPAREN_STAR] = ACTIONS(80),
    [anon_sym_A] = ACTIONS(80),
    [anon_sym_B] = ACTIONS(80),
    [anon_sym_C] = ACTIONS(80),
    [anon_sym_D] = ACTIONS(80),
    [anon_sym_E] = ACTIONS(80),
    [anon_sym_F] = ACTIONS(80),
    [anon_sym_G] = ACTIONS(80),
    [anon_sym_H] = ACTIONS(80),
    [anon_sym_I] = ACTIONS(80),
    [anon_sym_J] = ACTIONS(80),
    [anon_sym_K] = ACTIONS(80),
    [anon_sym_L] = ACTIONS(80),
    [anon_sym_M] = ACTIONS(80),
    [anon_sym_N] = ACTIONS(80),
    [anon_sym_O] = ACTIONS(80),
    [anon_sym_P] = ACTIONS(80),
    [anon_sym_Q] = ACTIONS(80),
    [anon_sym_R] = ACTIONS(80),
    [anon_sym_S] = ACTIONS(80),
    [anon_sym_T] = ACTIONS(80),
    [anon_sym_U] = ACTIONS(80),
    [anon_sym_V] = ACTIONS(80),
    [anon_sym_W] = ACTIONS(80),
    [anon_sym_X] = ACTIONS(80),
    [anon_sym_Y] = ACTIONS(80),
    [anon_sym_Z] = ACTIONS(80),
    [anon_sym_a] = ACTIONS(80),
    [anon_sym_b] = ACTIONS(80),
    [anon_sym_c] = ACTIONS(80),
    [anon_sym_d] = ACTIONS(80),
    [anon_sym_e] = ACTIONS(80),
    [anon_sym_f] = ACTIONS(80),
    [anon_sym_g] = ACTIONS(80),
    [anon_sym_h] = ACTIONS(80),
    [anon_sym_i] = ACTIONS(80),
    [anon_sym_j] = ACTIONS(80),
    [anon_sym_k] = ACTIONS(80),
    [anon_sym_l] = ACTIONS(80),
    [anon_sym_m] = ACTIONS(80),
    [anon_sym_n] = ACTIONS(80),
    [anon_sym_o] = ACTIONS(80),
    [anon_sym_p] = ACTIONS(80),
    [anon_sym_q] = ACTIONS(80),
    [anon_sym_r] = ACTIONS(80),
    [anon_sym_s] = ACTIONS(80),
    [anon_sym_t] = ACTIONS(80),
    [anon_sym_u] = ACTIONS(80),
    [anon_sym_v] = ACTIONS(80),
    [anon_sym_w] = ACTIONS(80),
    [anon_sym_x] = ACTIONS(80),
    [anon_sym_y] = ACTIONS(80),
    [anon_sym_z] = ACTIONS(80),
    [anon_sym_0] = ACTIONS(80),
    [anon_sym_1] = ACTIONS(80),
    [anon_sym_2] = ACTIONS(80),
    [anon_sym_3] = ACTIONS(80),
    [anon_sym_4] = ACTIONS(80),
    [anon_sym_5] = ACTIONS(80),
    [anon_sym_6] = ACTIONS(80),
    [anon_sym_7] = ACTIONS(80),
    [anon_sym_8] = ACTIONS(80),
    [anon_sym_9] = ACTIONS(80),
    [anon_sym_BANG] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(80),
    [anon_sym_PERCENT] = ACTIONS(80),
    [anon_sym_AMP] = ACTIONS(80),
    [anon_sym_STAR] = ACTIONS(80),
    [anon_sym_PLUS] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(80),
    [anon_sym_DOT] = ACTIONS(80),
    [anon_sym_SLASH] = ACTIONS(80),
    [anon_sym_LT] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(80),
    [anon_sym_GT] = ACTIONS(80),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_AT] = ACTIONS(80),
    [anon_sym_BSLASH] = ACTIONS(80),
    [anon_sym_CARET] = ACTIONS(80),
    [anon_sym_BQUOTE] = ACTIONS(80),
    [anon_sym_PIPE] = ACTIONS(80),
    [anon_sym_TILDE] = ACTIONS(80),
    [anon_sym__] = ACTIONS(80),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_] = ACTIONS(84),
    [anon_sym_TAB] = ACTIONS(84),
    [anon_sym_CR] = ACTIONS(84),
    [anon_sym_LF] = ACTIONS(84),
    [anon_sym_boolean] = ACTIONS(84),
    [anon_sym_integer] = ACTIONS(84),
    [anon_sym_float] = ACTIONS(84),
    [anon_sym_const] = ACTIONS(84),
    [anon_sym_COLON] = ACTIONS(84),
    [anon_sym_SEMI] = ACTIONS(84),
    [anon_sym_POUND] = ACTIONS(84),
    [anon_sym_LPAREN_STAR] = ACTIONS(84),
    [anon_sym_A] = ACTIONS(84),
    [anon_sym_B] = ACTIONS(84),
    [anon_sym_C] = ACTIONS(84),
    [anon_sym_D] = ACTIONS(84),
    [anon_sym_E] = ACTIONS(84),
    [anon_sym_F] = ACTIONS(84),
    [anon_sym_G] = ACTIONS(84),
    [anon_sym_H] = ACTIONS(84),
    [anon_sym_I] = ACTIONS(84),
    [anon_sym_J] = ACTIONS(84),
    [anon_sym_K] = ACTIONS(84),
    [anon_sym_L] = ACTIONS(84),
    [anon_sym_M] = ACTIONS(84),
    [anon_sym_N] = ACTIONS(84),
    [anon_sym_O] = ACTIONS(84),
    [anon_sym_P] = ACTIONS(84),
    [anon_sym_Q] = ACTIONS(84),
    [anon_sym_R] = ACTIONS(84),
    [anon_sym_S] = ACTIONS(84),
    [anon_sym_T] = ACTIONS(84),
    [anon_sym_U] = ACTIONS(84),
    [anon_sym_V] = ACTIONS(84),
    [anon_sym_W] = ACTIONS(84),
    [anon_sym_X] = ACTIONS(84),
    [anon_sym_Y] = ACTIONS(84),
    [anon_sym_Z] = ACTIONS(84),
    [anon_sym_a] = ACTIONS(84),
    [anon_sym_b] = ACTIONS(84),
    [anon_sym_c] = ACTIONS(84),
    [anon_sym_d] = ACTIONS(84),
    [anon_sym_e] = ACTIONS(84),
    [anon_sym_f] = ACTIONS(84),
    [anon_sym_g] = ACTIONS(84),
    [anon_sym_h] = ACTIONS(84),
    [anon_sym_i] = ACTIONS(84),
    [anon_sym_j] = ACTIONS(84),
    [anon_sym_k] = ACTIONS(84),
    [anon_sym_l] = ACTIONS(84),
    [anon_sym_m] = ACTIONS(84),
    [anon_sym_n] = ACTIONS(84),
    [anon_sym_o] = ACTIONS(84),
    [anon_sym_p] = ACTIONS(84),
    [anon_sym_q] = ACTIONS(84),
    [anon_sym_r] = ACTIONS(84),
    [anon_sym_s] = ACTIONS(84),
    [anon_sym_t] = ACTIONS(84),
    [anon_sym_u] = ACTIONS(84),
    [anon_sym_v] = ACTIONS(84),
    [anon_sym_w] = ACTIONS(84),
    [anon_sym_x] = ACTIONS(84),
    [anon_sym_y] = ACTIONS(84),
    [anon_sym_z] = ACTIONS(84),
    [anon_sym_0] = ACTIONS(84),
    [anon_sym_1] = ACTIONS(84),
    [anon_sym_2] = ACTIONS(84),
    [anon_sym_3] = ACTIONS(84),
    [anon_sym_4] = ACTIONS(84),
    [anon_sym_5] = ACTIONS(84),
    [anon_sym_6] = ACTIONS(84),
    [anon_sym_7] = ACTIONS(84),
    [anon_sym_8] = ACTIONS(84),
    [anon_sym_9] = ACTIONS(84),
    [anon_sym_BANG] = ACTIONS(84),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [anon_sym_PERCENT] = ACTIONS(84),
    [anon_sym_AMP] = ACTIONS(84),
    [anon_sym_STAR] = ACTIONS(84),
    [anon_sym_PLUS] = ACTIONS(84),
    [anon_sym_COMMA] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(84),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_SLASH] = ACTIONS(84),
    [anon_sym_LT] = ACTIONS(84),
    [anon_sym_EQ] = ACTIONS(84),
    [anon_sym_GT] = ACTIONS(84),
    [anon_sym_QMARK] = ACTIONS(84),
    [anon_sym_AT] = ACTIONS(84),
    [anon_sym_BSLASH] = ACTIONS(84),
    [anon_sym_CARET] = ACTIONS(84),
    [anon_sym_BQUOTE] = ACTIONS(84),
    [anon_sym_PIPE] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(84),
    [anon_sym__] = ACTIONS(84),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [anon_sym_] = ACTIONS(88),
    [anon_sym_TAB] = ACTIONS(88),
    [anon_sym_CR] = ACTIONS(88),
    [anon_sym_LF] = ACTIONS(88),
    [anon_sym_boolean] = ACTIONS(88),
    [anon_sym_integer] = ACTIONS(88),
    [anon_sym_float] = ACTIONS(88),
    [anon_sym_const] = ACTIONS(88),
    [anon_sym_COLON] = ACTIONS(88),
    [anon_sym_SEMI] = ACTIONS(88),
    [anon_sym_POUND] = ACTIONS(88),
    [anon_sym_LPAREN_STAR] = ACTIONS(88),
    [anon_sym_A] = ACTIONS(88),
    [anon_sym_B] = ACTIONS(88),
    [anon_sym_C] = ACTIONS(88),
    [anon_sym_D] = ACTIONS(88),
    [anon_sym_E] = ACTIONS(88),
    [anon_sym_F] = ACTIONS(88),
    [anon_sym_G] = ACTIONS(88),
    [anon_sym_H] = ACTIONS(88),
    [anon_sym_I] = ACTIONS(88),
    [anon_sym_J] = ACTIONS(88),
    [anon_sym_K] = ACTIONS(88),
    [anon_sym_L] = ACTIONS(88),
    [anon_sym_M] = ACTIONS(88),
    [anon_sym_N] = ACTIONS(88),
    [anon_sym_O] = ACTIONS(88),
    [anon_sym_P] = ACTIONS(88),
    [anon_sym_Q] = ACTIONS(88),
    [anon_sym_R] = ACTIONS(88),
    [anon_sym_S] = ACTIONS(88),
    [anon_sym_T] = ACTIONS(88),
    [anon_sym_U] = ACTIONS(88),
    [anon_sym_V] = ACTIONS(88),
    [anon_sym_W] = ACTIONS(88),
    [anon_sym_X] = ACTIONS(88),
    [anon_sym_Y] = ACTIONS(88),
    [anon_sym_Z] = ACTIONS(88),
    [anon_sym_a] = ACTIONS(88),
    [anon_sym_b] = ACTIONS(88),
    [anon_sym_c] = ACTIONS(88),
    [anon_sym_d] = ACTIONS(88),
    [anon_sym_e] = ACTIONS(88),
    [anon_sym_f] = ACTIONS(88),
    [anon_sym_g] = ACTIONS(88),
    [anon_sym_h] = ACTIONS(88),
    [anon_sym_i] = ACTIONS(88),
    [anon_sym_j] = ACTIONS(88),
    [anon_sym_k] = ACTIONS(88),
    [anon_sym_l] = ACTIONS(88),
    [anon_sym_m] = ACTIONS(88),
    [anon_sym_n] = ACTIONS(88),
    [anon_sym_o] = ACTIONS(88),
    [anon_sym_p] = ACTIONS(88),
    [anon_sym_q] = ACTIONS(88),
    [anon_sym_r] = ACTIONS(88),
    [anon_sym_s] = ACTIONS(88),
    [anon_sym_t] = ACTIONS(88),
    [anon_sym_u] = ACTIONS(88),
    [anon_sym_v] = ACTIONS(88),
    [anon_sym_w] = ACTIONS(88),
    [anon_sym_x] = ACTIONS(88),
    [anon_sym_y] = ACTIONS(88),
    [anon_sym_z] = ACTIONS(88),
    [anon_sym_BANG] = ACTIONS(88),
    [anon_sym_DOLLAR] = ACTIONS(88),
    [anon_sym_PERCENT] = ACTIONS(88),
    [anon_sym_AMP] = ACTIONS(88),
    [anon_sym_STAR] = ACTIONS(88),
    [anon_sym_PLUS] = ACTIONS(88),
    [anon_sym_COMMA] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(88),
    [anon_sym_DOT] = ACTIONS(88),
    [anon_sym_SLASH] = ACTIONS(88),
    [anon_sym_LT] = ACTIONS(88),
    [anon_sym_EQ] = ACTIONS(88),
    [anon_sym_GT] = ACTIONS(88),
    [anon_sym_QMARK] = ACTIONS(88),
    [anon_sym_AT] = ACTIONS(88),
    [anon_sym_BSLASH] = ACTIONS(88),
    [anon_sym_CARET] = ACTIONS(88),
    [anon_sym_BQUOTE] = ACTIONS(88),
    [anon_sym_PIPE] = ACTIONS(88),
    [anon_sym_TILDE] = ACTIONS(88),
    [anon_sym__] = ACTIONS(88),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_] = ACTIONS(92),
    [anon_sym_TAB] = ACTIONS(92),
    [anon_sym_CR] = ACTIONS(92),
    [anon_sym_LF] = ACTIONS(92),
    [anon_sym_boolean] = ACTIONS(92),
    [anon_sym_integer] = ACTIONS(92),
    [anon_sym_float] = ACTIONS(92),
    [anon_sym_const] = ACTIONS(92),
    [anon_sym_COLON] = ACTIONS(92),
    [anon_sym_SEMI] = ACTIONS(92),
    [anon_sym_POUND] = ACTIONS(92),
    [anon_sym_LPAREN_STAR] = ACTIONS(92),
    [anon_sym_A] = ACTIONS(92),
    [anon_sym_B] = ACTIONS(92),
    [anon_sym_C] = ACTIONS(92),
    [anon_sym_D] = ACTIONS(92),
    [anon_sym_E] = ACTIONS(92),
    [anon_sym_F] = ACTIONS(92),
    [anon_sym_G] = ACTIONS(92),
    [anon_sym_H] = ACTIONS(92),
    [anon_sym_I] = ACTIONS(92),
    [anon_sym_J] = ACTIONS(92),
    [anon_sym_K] = ACTIONS(92),
    [anon_sym_L] = ACTIONS(92),
    [anon_sym_M] = ACTIONS(92),
    [anon_sym_N] = ACTIONS(92),
    [anon_sym_O] = ACTIONS(92),
    [anon_sym_P] = ACTIONS(92),
    [anon_sym_Q] = ACTIONS(92),
    [anon_sym_R] = ACTIONS(92),
    [anon_sym_S] = ACTIONS(92),
    [anon_sym_T] = ACTIONS(92),
    [anon_sym_U] = ACTIONS(92),
    [anon_sym_V] = ACTIONS(92),
    [anon_sym_W] = ACTIONS(92),
    [anon_sym_X] = ACTIONS(92),
    [anon_sym_Y] = ACTIONS(92),
    [anon_sym_Z] = ACTIONS(92),
    [anon_sym_a] = ACTIONS(92),
    [anon_sym_b] = ACTIONS(92),
    [anon_sym_c] = ACTIONS(92),
    [anon_sym_d] = ACTIONS(92),
    [anon_sym_e] = ACTIONS(92),
    [anon_sym_f] = ACTIONS(92),
    [anon_sym_g] = ACTIONS(92),
    [anon_sym_h] = ACTIONS(92),
    [anon_sym_i] = ACTIONS(92),
    [anon_sym_j] = ACTIONS(92),
    [anon_sym_k] = ACTIONS(92),
    [anon_sym_l] = ACTIONS(92),
    [anon_sym_m] = ACTIONS(92),
    [anon_sym_n] = ACTIONS(92),
    [anon_sym_o] = ACTIONS(92),
    [anon_sym_p] = ACTIONS(92),
    [anon_sym_q] = ACTIONS(92),
    [anon_sym_r] = ACTIONS(92),
    [anon_sym_s] = ACTIONS(92),
    [anon_sym_t] = ACTIONS(92),
    [anon_sym_u] = ACTIONS(92),
    [anon_sym_v] = ACTIONS(92),
    [anon_sym_w] = ACTIONS(92),
    [anon_sym_x] = ACTIONS(92),
    [anon_sym_y] = ACTIONS(92),
    [anon_sym_z] = ACTIONS(92),
    [anon_sym_BANG] = ACTIONS(92),
    [anon_sym_DOLLAR] = ACTIONS(92),
    [anon_sym_PERCENT] = ACTIONS(92),
    [anon_sym_AMP] = ACTIONS(92),
    [anon_sym_STAR] = ACTIONS(92),
    [anon_sym_PLUS] = ACTIONS(92),
    [anon_sym_COMMA] = ACTIONS(92),
    [anon_sym_DASH] = ACTIONS(92),
    [anon_sym_DOT] = ACTIONS(92),
    [anon_sym_SLASH] = ACTIONS(92),
    [anon_sym_LT] = ACTIONS(92),
    [anon_sym_EQ] = ACTIONS(92),
    [anon_sym_GT] = ACTIONS(92),
    [anon_sym_QMARK] = ACTIONS(92),
    [anon_sym_AT] = ACTIONS(92),
    [anon_sym_BSLASH] = ACTIONS(92),
    [anon_sym_CARET] = ACTIONS(92),
    [anon_sym_BQUOTE] = ACTIONS(92),
    [anon_sym_PIPE] = ACTIONS(92),
    [anon_sym_TILDE] = ACTIONS(92),
    [anon_sym__] = ACTIONS(92),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [anon_sym_] = ACTIONS(96),
    [anon_sym_TAB] = ACTIONS(96),
    [anon_sym_CR] = ACTIONS(96),
    [anon_sym_LF] = ACTIONS(96),
    [anon_sym_boolean] = ACTIONS(96),
    [anon_sym_integer] = ACTIONS(96),
    [anon_sym_float] = ACTIONS(96),
    [anon_sym_const] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(96),
    [anon_sym_SEMI] = ACTIONS(96),
    [anon_sym_POUND] = ACTIONS(96),
    [anon_sym_LPAREN_STAR] = ACTIONS(96),
    [anon_sym_A] = ACTIONS(96),
    [anon_sym_B] = ACTIONS(96),
    [anon_sym_C] = ACTIONS(96),
    [anon_sym_D] = ACTIONS(96),
    [anon_sym_E] = ACTIONS(96),
    [anon_sym_F] = ACTIONS(96),
    [anon_sym_G] = ACTIONS(96),
    [anon_sym_H] = ACTIONS(96),
    [anon_sym_I] = ACTIONS(96),
    [anon_sym_J] = ACTIONS(96),
    [anon_sym_K] = ACTIONS(96),
    [anon_sym_L] = ACTIONS(96),
    [anon_sym_M] = ACTIONS(96),
    [anon_sym_N] = ACTIONS(96),
    [anon_sym_O] = ACTIONS(96),
    [anon_sym_P] = ACTIONS(96),
    [anon_sym_Q] = ACTIONS(96),
    [anon_sym_R] = ACTIONS(96),
    [anon_sym_S] = ACTIONS(96),
    [anon_sym_T] = ACTIONS(96),
    [anon_sym_U] = ACTIONS(96),
    [anon_sym_V] = ACTIONS(96),
    [anon_sym_W] = ACTIONS(96),
    [anon_sym_X] = ACTIONS(96),
    [anon_sym_Y] = ACTIONS(96),
    [anon_sym_Z] = ACTIONS(96),
    [anon_sym_a] = ACTIONS(96),
    [anon_sym_b] = ACTIONS(96),
    [anon_sym_c] = ACTIONS(96),
    [anon_sym_d] = ACTIONS(96),
    [anon_sym_e] = ACTIONS(96),
    [anon_sym_f] = ACTIONS(96),
    [anon_sym_g] = ACTIONS(96),
    [anon_sym_h] = ACTIONS(96),
    [anon_sym_i] = ACTIONS(96),
    [anon_sym_j] = ACTIONS(96),
    [anon_sym_k] = ACTIONS(96),
    [anon_sym_l] = ACTIONS(96),
    [anon_sym_m] = ACTIONS(96),
    [anon_sym_n] = ACTIONS(96),
    [anon_sym_o] = ACTIONS(96),
    [anon_sym_p] = ACTIONS(96),
    [anon_sym_q] = ACTIONS(96),
    [anon_sym_r] = ACTIONS(96),
    [anon_sym_s] = ACTIONS(96),
    [anon_sym_t] = ACTIONS(96),
    [anon_sym_u] = ACTIONS(96),
    [anon_sym_v] = ACTIONS(96),
    [anon_sym_w] = ACTIONS(96),
    [anon_sym_x] = ACTIONS(96),
    [anon_sym_y] = ACTIONS(96),
    [anon_sym_z] = ACTIONS(96),
    [anon_sym_BANG] = ACTIONS(96),
    [anon_sym_DOLLAR] = ACTIONS(96),
    [anon_sym_PERCENT] = ACTIONS(96),
    [anon_sym_AMP] = ACTIONS(96),
    [anon_sym_STAR] = ACTIONS(96),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_COMMA] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(96),
    [anon_sym_SLASH] = ACTIONS(96),
    [anon_sym_LT] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_GT] = ACTIONS(96),
    [anon_sym_QMARK] = ACTIONS(96),
    [anon_sym_AT] = ACTIONS(96),
    [anon_sym_BSLASH] = ACTIONS(96),
    [anon_sym_CARET] = ACTIONS(96),
    [anon_sym_BQUOTE] = ACTIONS(96),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_TILDE] = ACTIONS(96),
    [anon_sym__] = ACTIONS(96),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [anon_sym_] = ACTIONS(100),
    [anon_sym_TAB] = ACTIONS(100),
    [anon_sym_CR] = ACTIONS(100),
    [anon_sym_LF] = ACTIONS(100),
    [anon_sym_boolean] = ACTIONS(100),
    [anon_sym_integer] = ACTIONS(100),
    [anon_sym_float] = ACTIONS(100),
    [anon_sym_const] = ACTIONS(100),
    [anon_sym_COLON] = ACTIONS(100),
    [anon_sym_SEMI] = ACTIONS(100),
    [anon_sym_POUND] = ACTIONS(100),
    [anon_sym_LPAREN_STAR] = ACTIONS(100),
    [anon_sym_A] = ACTIONS(100),
    [anon_sym_B] = ACTIONS(100),
    [anon_sym_C] = ACTIONS(100),
    [anon_sym_D] = ACTIONS(100),
    [anon_sym_E] = ACTIONS(100),
    [anon_sym_F] = ACTIONS(100),
    [anon_sym_G] = ACTIONS(100),
    [anon_sym_H] = ACTIONS(100),
    [anon_sym_I] = ACTIONS(100),
    [anon_sym_J] = ACTIONS(100),
    [anon_sym_K] = ACTIONS(100),
    [anon_sym_L] = ACTIONS(100),
    [anon_sym_M] = ACTIONS(100),
    [anon_sym_N] = ACTIONS(100),
    [anon_sym_O] = ACTIONS(100),
    [anon_sym_P] = ACTIONS(100),
    [anon_sym_Q] = ACTIONS(100),
    [anon_sym_R] = ACTIONS(100),
    [anon_sym_S] = ACTIONS(100),
    [anon_sym_T] = ACTIONS(100),
    [anon_sym_U] = ACTIONS(100),
    [anon_sym_V] = ACTIONS(100),
    [anon_sym_W] = ACTIONS(100),
    [anon_sym_X] = ACTIONS(100),
    [anon_sym_Y] = ACTIONS(100),
    [anon_sym_Z] = ACTIONS(100),
    [anon_sym_a] = ACTIONS(100),
    [anon_sym_b] = ACTIONS(100),
    [anon_sym_c] = ACTIONS(100),
    [anon_sym_d] = ACTIONS(100),
    [anon_sym_e] = ACTIONS(100),
    [anon_sym_f] = ACTIONS(100),
    [anon_sym_g] = ACTIONS(100),
    [anon_sym_h] = ACTIONS(100),
    [anon_sym_i] = ACTIONS(100),
    [anon_sym_j] = ACTIONS(100),
    [anon_sym_k] = ACTIONS(100),
    [anon_sym_l] = ACTIONS(100),
    [anon_sym_m] = ACTIONS(100),
    [anon_sym_n] = ACTIONS(100),
    [anon_sym_o] = ACTIONS(100),
    [anon_sym_p] = ACTIONS(100),
    [anon_sym_q] = ACTIONS(100),
    [anon_sym_r] = ACTIONS(100),
    [anon_sym_s] = ACTIONS(100),
    [anon_sym_t] = ACTIONS(100),
    [anon_sym_u] = ACTIONS(100),
    [anon_sym_v] = ACTIONS(100),
    [anon_sym_w] = ACTIONS(100),
    [anon_sym_x] = ACTIONS(100),
    [anon_sym_y] = ACTIONS(100),
    [anon_sym_z] = ACTIONS(100),
    [anon_sym_BANG] = ACTIONS(100),
    [anon_sym_DOLLAR] = ACTIONS(100),
    [anon_sym_PERCENT] = ACTIONS(100),
    [anon_sym_AMP] = ACTIONS(100),
    [anon_sym_STAR] = ACTIONS(100),
    [anon_sym_PLUS] = ACTIONS(100),
    [anon_sym_COMMA] = ACTIONS(100),
    [anon_sym_DASH] = ACTIONS(100),
    [anon_sym_DOT] = ACTIONS(100),
    [anon_sym_SLASH] = ACTIONS(100),
    [anon_sym_LT] = ACTIONS(100),
    [anon_sym_EQ] = ACTIONS(100),
    [anon_sym_GT] = ACTIONS(100),
    [anon_sym_QMARK] = ACTIONS(100),
    [anon_sym_AT] = ACTIONS(100),
    [anon_sym_BSLASH] = ACTIONS(100),
    [anon_sym_CARET] = ACTIONS(100),
    [anon_sym_BQUOTE] = ACTIONS(100),
    [anon_sym_PIPE] = ACTIONS(100),
    [anon_sym_TILDE] = ACTIONS(100),
    [anon_sym__] = ACTIONS(100),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(102),
    [anon_sym_] = ACTIONS(104),
    [anon_sym_TAB] = ACTIONS(104),
    [anon_sym_CR] = ACTIONS(104),
    [anon_sym_LF] = ACTIONS(104),
    [anon_sym_boolean] = ACTIONS(104),
    [anon_sym_integer] = ACTIONS(104),
    [anon_sym_float] = ACTIONS(104),
    [anon_sym_const] = ACTIONS(104),
    [anon_sym_COLON] = ACTIONS(104),
    [anon_sym_SEMI] = ACTIONS(104),
    [anon_sym_POUND] = ACTIONS(104),
    [anon_sym_LPAREN_STAR] = ACTIONS(104),
    [anon_sym_A] = ACTIONS(104),
    [anon_sym_B] = ACTIONS(104),
    [anon_sym_C] = ACTIONS(104),
    [anon_sym_D] = ACTIONS(104),
    [anon_sym_E] = ACTIONS(104),
    [anon_sym_F] = ACTIONS(104),
    [anon_sym_G] = ACTIONS(104),
    [anon_sym_H] = ACTIONS(104),
    [anon_sym_I] = ACTIONS(104),
    [anon_sym_J] = ACTIONS(104),
    [anon_sym_K] = ACTIONS(104),
    [anon_sym_L] = ACTIONS(104),
    [anon_sym_M] = ACTIONS(104),
    [anon_sym_N] = ACTIONS(104),
    [anon_sym_O] = ACTIONS(104),
    [anon_sym_P] = ACTIONS(104),
    [anon_sym_Q] = ACTIONS(104),
    [anon_sym_R] = ACTIONS(104),
    [anon_sym_S] = ACTIONS(104),
    [anon_sym_T] = ACTIONS(104),
    [anon_sym_U] = ACTIONS(104),
    [anon_sym_V] = ACTIONS(104),
    [anon_sym_W] = ACTIONS(104),
    [anon_sym_X] = ACTIONS(104),
    [anon_sym_Y] = ACTIONS(104),
    [anon_sym_Z] = ACTIONS(104),
    [anon_sym_a] = ACTIONS(104),
    [anon_sym_b] = ACTIONS(104),
    [anon_sym_c] = ACTIONS(104),
    [anon_sym_d] = ACTIONS(104),
    [anon_sym_e] = ACTIONS(104),
    [anon_sym_f] = ACTIONS(104),
    [anon_sym_g] = ACTIONS(104),
    [anon_sym_h] = ACTIONS(104),
    [anon_sym_i] = ACTIONS(104),
    [anon_sym_j] = ACTIONS(104),
    [anon_sym_k] = ACTIONS(104),
    [anon_sym_l] = ACTIONS(104),
    [anon_sym_m] = ACTIONS(104),
    [anon_sym_n] = ACTIONS(104),
    [anon_sym_o] = ACTIONS(104),
    [anon_sym_p] = ACTIONS(104),
    [anon_sym_q] = ACTIONS(104),
    [anon_sym_r] = ACTIONS(104),
    [anon_sym_s] = ACTIONS(104),
    [anon_sym_t] = ACTIONS(104),
    [anon_sym_u] = ACTIONS(104),
    [anon_sym_v] = ACTIONS(104),
    [anon_sym_w] = ACTIONS(104),
    [anon_sym_x] = ACTIONS(104),
    [anon_sym_y] = ACTIONS(104),
    [anon_sym_z] = ACTIONS(104),
    [anon_sym_BANG] = ACTIONS(104),
    [anon_sym_DOLLAR] = ACTIONS(104),
    [anon_sym_PERCENT] = ACTIONS(104),
    [anon_sym_AMP] = ACTIONS(104),
    [anon_sym_STAR] = ACTIONS(104),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_COMMA] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(104),
    [anon_sym_DOT] = ACTIONS(104),
    [anon_sym_SLASH] = ACTIONS(104),
    [anon_sym_LT] = ACTIONS(104),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_GT] = ACTIONS(104),
    [anon_sym_QMARK] = ACTIONS(104),
    [anon_sym_AT] = ACTIONS(104),
    [anon_sym_BSLASH] = ACTIONS(104),
    [anon_sym_CARET] = ACTIONS(104),
    [anon_sym_BQUOTE] = ACTIONS(104),
    [anon_sym_PIPE] = ACTIONS(104),
    [anon_sym_TILDE] = ACTIONS(104),
    [anon_sym__] = ACTIONS(104),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [anon_sym_] = ACTIONS(108),
    [anon_sym_TAB] = ACTIONS(108),
    [anon_sym_CR] = ACTIONS(108),
    [anon_sym_LF] = ACTIONS(108),
    [anon_sym_boolean] = ACTIONS(108),
    [anon_sym_integer] = ACTIONS(108),
    [anon_sym_float] = ACTIONS(108),
    [anon_sym_const] = ACTIONS(108),
    [anon_sym_COLON] = ACTIONS(108),
    [anon_sym_SEMI] = ACTIONS(108),
    [anon_sym_POUND] = ACTIONS(108),
    [anon_sym_LPAREN_STAR] = ACTIONS(108),
    [anon_sym_A] = ACTIONS(108),
    [anon_sym_B] = ACTIONS(108),
    [anon_sym_C] = ACTIONS(108),
    [anon_sym_D] = ACTIONS(108),
    [anon_sym_E] = ACTIONS(108),
    [anon_sym_F] = ACTIONS(108),
    [anon_sym_G] = ACTIONS(108),
    [anon_sym_H] = ACTIONS(108),
    [anon_sym_I] = ACTIONS(108),
    [anon_sym_J] = ACTIONS(108),
    [anon_sym_K] = ACTIONS(108),
    [anon_sym_L] = ACTIONS(108),
    [anon_sym_M] = ACTIONS(108),
    [anon_sym_N] = ACTIONS(108),
    [anon_sym_O] = ACTIONS(108),
    [anon_sym_P] = ACTIONS(108),
    [anon_sym_Q] = ACTIONS(108),
    [anon_sym_R] = ACTIONS(108),
    [anon_sym_S] = ACTIONS(108),
    [anon_sym_T] = ACTIONS(108),
    [anon_sym_U] = ACTIONS(108),
    [anon_sym_V] = ACTIONS(108),
    [anon_sym_W] = ACTIONS(108),
    [anon_sym_X] = ACTIONS(108),
    [anon_sym_Y] = ACTIONS(108),
    [anon_sym_Z] = ACTIONS(108),
    [anon_sym_a] = ACTIONS(108),
    [anon_sym_b] = ACTIONS(108),
    [anon_sym_c] = ACTIONS(108),
    [anon_sym_d] = ACTIONS(108),
    [anon_sym_e] = ACTIONS(108),
    [anon_sym_f] = ACTIONS(108),
    [anon_sym_g] = ACTIONS(108),
    [anon_sym_h] = ACTIONS(108),
    [anon_sym_i] = ACTIONS(108),
    [anon_sym_j] = ACTIONS(108),
    [anon_sym_k] = ACTIONS(108),
    [anon_sym_l] = ACTIONS(108),
    [anon_sym_m] = ACTIONS(108),
    [anon_sym_n] = ACTIONS(108),
    [anon_sym_o] = ACTIONS(108),
    [anon_sym_p] = ACTIONS(108),
    [anon_sym_q] = ACTIONS(108),
    [anon_sym_r] = ACTIONS(108),
    [anon_sym_s] = ACTIONS(108),
    [anon_sym_t] = ACTIONS(108),
    [anon_sym_u] = ACTIONS(108),
    [anon_sym_v] = ACTIONS(108),
    [anon_sym_w] = ACTIONS(108),
    [anon_sym_x] = ACTIONS(108),
    [anon_sym_y] = ACTIONS(108),
    [anon_sym_z] = ACTIONS(108),
    [anon_sym_BANG] = ACTIONS(108),
    [anon_sym_DOLLAR] = ACTIONS(108),
    [anon_sym_PERCENT] = ACTIONS(108),
    [anon_sym_AMP] = ACTIONS(108),
    [anon_sym_STAR] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(108),
    [anon_sym_COMMA] = ACTIONS(108),
    [anon_sym_DASH] = ACTIONS(108),
    [anon_sym_DOT] = ACTIONS(108),
    [anon_sym_SLASH] = ACTIONS(108),
    [anon_sym_LT] = ACTIONS(108),
    [anon_sym_EQ] = ACTIONS(108),
    [anon_sym_GT] = ACTIONS(108),
    [anon_sym_QMARK] = ACTIONS(108),
    [anon_sym_AT] = ACTIONS(108),
    [anon_sym_BSLASH] = ACTIONS(108),
    [anon_sym_CARET] = ACTIONS(108),
    [anon_sym_BQUOTE] = ACTIONS(108),
    [anon_sym_PIPE] = ACTIONS(108),
    [anon_sym_TILDE] = ACTIONS(108),
    [anon_sym__] = ACTIONS(108),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [anon_sym_] = ACTIONS(112),
    [anon_sym_TAB] = ACTIONS(112),
    [anon_sym_CR] = ACTIONS(112),
    [anon_sym_LF] = ACTIONS(112),
    [anon_sym_boolean] = ACTIONS(112),
    [anon_sym_integer] = ACTIONS(112),
    [anon_sym_float] = ACTIONS(112),
    [anon_sym_const] = ACTIONS(112),
    [anon_sym_COLON] = ACTIONS(112),
    [anon_sym_SEMI] = ACTIONS(112),
    [anon_sym_POUND] = ACTIONS(112),
    [anon_sym_LPAREN_STAR] = ACTIONS(112),
    [anon_sym_A] = ACTIONS(112),
    [anon_sym_B] = ACTIONS(112),
    [anon_sym_C] = ACTIONS(112),
    [anon_sym_D] = ACTIONS(112),
    [anon_sym_E] = ACTIONS(112),
    [anon_sym_F] = ACTIONS(112),
    [anon_sym_G] = ACTIONS(112),
    [anon_sym_H] = ACTIONS(112),
    [anon_sym_I] = ACTIONS(112),
    [anon_sym_J] = ACTIONS(112),
    [anon_sym_K] = ACTIONS(112),
    [anon_sym_L] = ACTIONS(112),
    [anon_sym_M] = ACTIONS(112),
    [anon_sym_N] = ACTIONS(112),
    [anon_sym_O] = ACTIONS(112),
    [anon_sym_P] = ACTIONS(112),
    [anon_sym_Q] = ACTIONS(112),
    [anon_sym_R] = ACTIONS(112),
    [anon_sym_S] = ACTIONS(112),
    [anon_sym_T] = ACTIONS(112),
    [anon_sym_U] = ACTIONS(112),
    [anon_sym_V] = ACTIONS(112),
    [anon_sym_W] = ACTIONS(112),
    [anon_sym_X] = ACTIONS(112),
    [anon_sym_Y] = ACTIONS(112),
    [anon_sym_Z] = ACTIONS(112),
    [anon_sym_a] = ACTIONS(112),
    [anon_sym_b] = ACTIONS(112),
    [anon_sym_c] = ACTIONS(112),
    [anon_sym_d] = ACTIONS(112),
    [anon_sym_e] = ACTIONS(112),
    [anon_sym_f] = ACTIONS(112),
    [anon_sym_g] = ACTIONS(112),
    [anon_sym_h] = ACTIONS(112),
    [anon_sym_i] = ACTIONS(112),
    [anon_sym_j] = ACTIONS(112),
    [anon_sym_k] = ACTIONS(112),
    [anon_sym_l] = ACTIONS(112),
    [anon_sym_m] = ACTIONS(112),
    [anon_sym_n] = ACTIONS(112),
    [anon_sym_o] = ACTIONS(112),
    [anon_sym_p] = ACTIONS(112),
    [anon_sym_q] = ACTIONS(112),
    [anon_sym_r] = ACTIONS(112),
    [anon_sym_s] = ACTIONS(112),
    [anon_sym_t] = ACTIONS(112),
    [anon_sym_u] = ACTIONS(112),
    [anon_sym_v] = ACTIONS(112),
    [anon_sym_w] = ACTIONS(112),
    [anon_sym_x] = ACTIONS(112),
    [anon_sym_y] = ACTIONS(112),
    [anon_sym_z] = ACTIONS(112),
    [anon_sym_BANG] = ACTIONS(112),
    [anon_sym_DOLLAR] = ACTIONS(112),
    [anon_sym_PERCENT] = ACTIONS(112),
    [anon_sym_AMP] = ACTIONS(112),
    [anon_sym_STAR] = ACTIONS(112),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_COMMA] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(112),
    [anon_sym_DOT] = ACTIONS(112),
    [anon_sym_SLASH] = ACTIONS(112),
    [anon_sym_LT] = ACTIONS(112),
    [anon_sym_EQ] = ACTIONS(112),
    [anon_sym_GT] = ACTIONS(112),
    [anon_sym_QMARK] = ACTIONS(112),
    [anon_sym_AT] = ACTIONS(112),
    [anon_sym_BSLASH] = ACTIONS(112),
    [anon_sym_CARET] = ACTIONS(112),
    [anon_sym_BQUOTE] = ACTIONS(112),
    [anon_sym_PIPE] = ACTIONS(112),
    [anon_sym_TILDE] = ACTIONS(112),
    [anon_sym__] = ACTIONS(112),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [anon_sym_] = ACTIONS(116),
    [anon_sym_TAB] = ACTIONS(116),
    [anon_sym_CR] = ACTIONS(116),
    [anon_sym_LF] = ACTIONS(116),
    [anon_sym_boolean] = ACTIONS(116),
    [anon_sym_integer] = ACTIONS(116),
    [anon_sym_float] = ACTIONS(116),
    [anon_sym_const] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(116),
    [anon_sym_SEMI] = ACTIONS(116),
    [anon_sym_POUND] = ACTIONS(116),
    [anon_sym_LPAREN_STAR] = ACTIONS(116),
    [anon_sym_A] = ACTIONS(116),
    [anon_sym_B] = ACTIONS(116),
    [anon_sym_C] = ACTIONS(116),
    [anon_sym_D] = ACTIONS(116),
    [anon_sym_E] = ACTIONS(116),
    [anon_sym_F] = ACTIONS(116),
    [anon_sym_G] = ACTIONS(116),
    [anon_sym_H] = ACTIONS(116),
    [anon_sym_I] = ACTIONS(116),
    [anon_sym_J] = ACTIONS(116),
    [anon_sym_K] = ACTIONS(116),
    [anon_sym_L] = ACTIONS(116),
    [anon_sym_M] = ACTIONS(116),
    [anon_sym_N] = ACTIONS(116),
    [anon_sym_O] = ACTIONS(116),
    [anon_sym_P] = ACTIONS(116),
    [anon_sym_Q] = ACTIONS(116),
    [anon_sym_R] = ACTIONS(116),
    [anon_sym_S] = ACTIONS(116),
    [anon_sym_T] = ACTIONS(116),
    [anon_sym_U] = ACTIONS(116),
    [anon_sym_V] = ACTIONS(116),
    [anon_sym_W] = ACTIONS(116),
    [anon_sym_X] = ACTIONS(116),
    [anon_sym_Y] = ACTIONS(116),
    [anon_sym_Z] = ACTIONS(116),
    [anon_sym_a] = ACTIONS(116),
    [anon_sym_b] = ACTIONS(116),
    [anon_sym_c] = ACTIONS(116),
    [anon_sym_d] = ACTIONS(116),
    [anon_sym_e] = ACTIONS(116),
    [anon_sym_f] = ACTIONS(116),
    [anon_sym_g] = ACTIONS(116),
    [anon_sym_h] = ACTIONS(116),
    [anon_sym_i] = ACTIONS(116),
    [anon_sym_j] = ACTIONS(116),
    [anon_sym_k] = ACTIONS(116),
    [anon_sym_l] = ACTIONS(116),
    [anon_sym_m] = ACTIONS(116),
    [anon_sym_n] = ACTIONS(116),
    [anon_sym_o] = ACTIONS(116),
    [anon_sym_p] = ACTIONS(116),
    [anon_sym_q] = ACTIONS(116),
    [anon_sym_r] = ACTIONS(116),
    [anon_sym_s] = ACTIONS(116),
    [anon_sym_t] = ACTIONS(116),
    [anon_sym_u] = ACTIONS(116),
    [anon_sym_v] = ACTIONS(116),
    [anon_sym_w] = ACTIONS(116),
    [anon_sym_x] = ACTIONS(116),
    [anon_sym_y] = ACTIONS(116),
    [anon_sym_z] = ACTIONS(116),
    [anon_sym_BANG] = ACTIONS(116),
    [anon_sym_DOLLAR] = ACTIONS(116),
    [anon_sym_PERCENT] = ACTIONS(116),
    [anon_sym_AMP] = ACTIONS(116),
    [anon_sym_STAR] = ACTIONS(116),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_COMMA] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_SLASH] = ACTIONS(116),
    [anon_sym_LT] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_GT] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_AT] = ACTIONS(116),
    [anon_sym_BSLASH] = ACTIONS(116),
    [anon_sym_CARET] = ACTIONS(116),
    [anon_sym_BQUOTE] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_TILDE] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [anon_sym_] = ACTIONS(120),
    [anon_sym_TAB] = ACTIONS(120),
    [anon_sym_CR] = ACTIONS(120),
    [anon_sym_LF] = ACTIONS(120),
    [anon_sym_boolean] = ACTIONS(120),
    [anon_sym_integer] = ACTIONS(120),
    [anon_sym_float] = ACTIONS(120),
    [anon_sym_const] = ACTIONS(120),
    [anon_sym_COLON] = ACTIONS(120),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_POUND] = ACTIONS(120),
    [anon_sym_LPAREN_STAR] = ACTIONS(120),
    [anon_sym_A] = ACTIONS(120),
    [anon_sym_B] = ACTIONS(120),
    [anon_sym_C] = ACTIONS(120),
    [anon_sym_D] = ACTIONS(120),
    [anon_sym_E] = ACTIONS(120),
    [anon_sym_F] = ACTIONS(120),
    [anon_sym_G] = ACTIONS(120),
    [anon_sym_H] = ACTIONS(120),
    [anon_sym_I] = ACTIONS(120),
    [anon_sym_J] = ACTIONS(120),
    [anon_sym_K] = ACTIONS(120),
    [anon_sym_L] = ACTIONS(120),
    [anon_sym_M] = ACTIONS(120),
    [anon_sym_N] = ACTIONS(120),
    [anon_sym_O] = ACTIONS(120),
    [anon_sym_P] = ACTIONS(120),
    [anon_sym_Q] = ACTIONS(120),
    [anon_sym_R] = ACTIONS(120),
    [anon_sym_S] = ACTIONS(120),
    [anon_sym_T] = ACTIONS(120),
    [anon_sym_U] = ACTIONS(120),
    [anon_sym_V] = ACTIONS(120),
    [anon_sym_W] = ACTIONS(120),
    [anon_sym_X] = ACTIONS(120),
    [anon_sym_Y] = ACTIONS(120),
    [anon_sym_Z] = ACTIONS(120),
    [anon_sym_a] = ACTIONS(120),
    [anon_sym_b] = ACTIONS(120),
    [anon_sym_c] = ACTIONS(120),
    [anon_sym_d] = ACTIONS(120),
    [anon_sym_e] = ACTIONS(120),
    [anon_sym_f] = ACTIONS(120),
    [anon_sym_g] = ACTIONS(120),
    [anon_sym_h] = ACTIONS(120),
    [anon_sym_i] = ACTIONS(120),
    [anon_sym_j] = ACTIONS(120),
    [anon_sym_k] = ACTIONS(120),
    [anon_sym_l] = ACTIONS(120),
    [anon_sym_m] = ACTIONS(120),
    [anon_sym_n] = ACTIONS(120),
    [anon_sym_o] = ACTIONS(120),
    [anon_sym_p] = ACTIONS(120),
    [anon_sym_q] = ACTIONS(120),
    [anon_sym_r] = ACTIONS(120),
    [anon_sym_s] = ACTIONS(120),
    [anon_sym_t] = ACTIONS(120),
    [anon_sym_u] = ACTIONS(120),
    [anon_sym_v] = ACTIONS(120),
    [anon_sym_w] = ACTIONS(120),
    [anon_sym_x] = ACTIONS(120),
    [anon_sym_y] = ACTIONS(120),
    [anon_sym_z] = ACTIONS(120),
    [anon_sym_BANG] = ACTIONS(120),
    [anon_sym_DOLLAR] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(120),
    [anon_sym_AMP] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_COMMA] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_DOT] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(120),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(120),
    [anon_sym_QMARK] = ACTIONS(120),
    [anon_sym_AT] = ACTIONS(120),
    [anon_sym_BSLASH] = ACTIONS(120),
    [anon_sym_CARET] = ACTIONS(120),
    [anon_sym_BQUOTE] = ACTIONS(120),
    [anon_sym_PIPE] = ACTIONS(120),
    [anon_sym_TILDE] = ACTIONS(120),
    [anon_sym__] = ACTIONS(120),
  },
  [18] = {
    [sym__letter] = STATE(20),
    [sym__upper_case_letter] = STATE(20),
    [sym__lower_case_letter] = STATE(20),
    [sym_digit] = STATE(20),
    [sym_underscore] = STATE(20),
    [aux_sym_name_identifier_repeat1] = STATE(20),
    [anon_sym_is] = ACTIONS(51),
    [anon_sym_A] = ACTIONS(122),
    [anon_sym_B] = ACTIONS(122),
    [anon_sym_C] = ACTIONS(122),
    [anon_sym_D] = ACTIONS(122),
    [anon_sym_E] = ACTIONS(122),
    [anon_sym_F] = ACTIONS(122),
    [anon_sym_G] = ACTIONS(122),
    [anon_sym_H] = ACTIONS(122),
    [anon_sym_I] = ACTIONS(122),
    [anon_sym_J] = ACTIONS(122),
    [anon_sym_K] = ACTIONS(122),
    [anon_sym_L] = ACTIONS(122),
    [anon_sym_M] = ACTIONS(122),
    [anon_sym_N] = ACTIONS(122),
    [anon_sym_O] = ACTIONS(122),
    [anon_sym_P] = ACTIONS(122),
    [anon_sym_Q] = ACTIONS(122),
    [anon_sym_R] = ACTIONS(122),
    [anon_sym_S] = ACTIONS(122),
    [anon_sym_T] = ACTIONS(122),
    [anon_sym_U] = ACTIONS(122),
    [anon_sym_V] = ACTIONS(122),
    [anon_sym_W] = ACTIONS(122),
    [anon_sym_X] = ACTIONS(122),
    [anon_sym_Y] = ACTIONS(122),
    [anon_sym_Z] = ACTIONS(122),
    [anon_sym_a] = ACTIONS(122),
    [anon_sym_b] = ACTIONS(122),
    [anon_sym_c] = ACTIONS(122),
    [anon_sym_d] = ACTIONS(122),
    [anon_sym_e] = ACTIONS(122),
    [anon_sym_f] = ACTIONS(122),
    [anon_sym_g] = ACTIONS(122),
    [anon_sym_h] = ACTIONS(122),
    [anon_sym_i] = ACTIONS(124),
    [anon_sym_j] = ACTIONS(122),
    [anon_sym_k] = ACTIONS(122),
    [anon_sym_l] = ACTIONS(122),
    [anon_sym_m] = ACTIONS(122),
    [anon_sym_n] = ACTIONS(122),
    [anon_sym_o] = ACTIONS(122),
    [anon_sym_p] = ACTIONS(122),
    [anon_sym_q] = ACTIONS(122),
    [anon_sym_r] = ACTIONS(122),
    [anon_sym_s] = ACTIONS(122),
    [anon_sym_t] = ACTIONS(122),
    [anon_sym_u] = ACTIONS(122),
    [anon_sym_v] = ACTIONS(122),
    [anon_sym_w] = ACTIONS(122),
    [anon_sym_x] = ACTIONS(122),
    [anon_sym_y] = ACTIONS(122),
    [anon_sym_z] = ACTIONS(122),
    [anon_sym_0] = ACTIONS(126),
    [anon_sym_1] = ACTIONS(126),
    [anon_sym_2] = ACTIONS(126),
    [anon_sym_3] = ACTIONS(126),
    [anon_sym_4] = ACTIONS(126),
    [anon_sym_5] = ACTIONS(126),
    [anon_sym_6] = ACTIONS(126),
    [anon_sym_7] = ACTIONS(126),
    [anon_sym_8] = ACTIONS(126),
    [anon_sym_9] = ACTIONS(126),
    [anon_sym__] = ACTIONS(128),
  },
  [19] = {
    [sym__letter] = STATE(19),
    [sym__upper_case_letter] = STATE(19),
    [sym__lower_case_letter] = STATE(19),
    [sym_digit] = STATE(19),
    [sym_underscore] = STATE(19),
    [aux_sym_name_identifier_repeat1] = STATE(19),
    [anon_sym_is] = ACTIONS(59),
    [anon_sym_A] = ACTIONS(130),
    [anon_sym_B] = ACTIONS(130),
    [anon_sym_C] = ACTIONS(130),
    [anon_sym_D] = ACTIONS(130),
    [anon_sym_E] = ACTIONS(130),
    [anon_sym_F] = ACTIONS(130),
    [anon_sym_G] = ACTIONS(130),
    [anon_sym_H] = ACTIONS(130),
    [anon_sym_I] = ACTIONS(130),
    [anon_sym_J] = ACTIONS(130),
    [anon_sym_K] = ACTIONS(130),
    [anon_sym_L] = ACTIONS(130),
    [anon_sym_M] = ACTIONS(130),
    [anon_sym_N] = ACTIONS(130),
    [anon_sym_O] = ACTIONS(130),
    [anon_sym_P] = ACTIONS(130),
    [anon_sym_Q] = ACTIONS(130),
    [anon_sym_R] = ACTIONS(130),
    [anon_sym_S] = ACTIONS(130),
    [anon_sym_T] = ACTIONS(130),
    [anon_sym_U] = ACTIONS(130),
    [anon_sym_V] = ACTIONS(130),
    [anon_sym_W] = ACTIONS(130),
    [anon_sym_X] = ACTIONS(130),
    [anon_sym_Y] = ACTIONS(130),
    [anon_sym_Z] = ACTIONS(130),
    [anon_sym_a] = ACTIONS(130),
    [anon_sym_b] = ACTIONS(130),
    [anon_sym_c] = ACTIONS(130),
    [anon_sym_d] = ACTIONS(130),
    [anon_sym_e] = ACTIONS(130),
    [anon_sym_f] = ACTIONS(130),
    [anon_sym_g] = ACTIONS(130),
    [anon_sym_h] = ACTIONS(130),
    [anon_sym_i] = ACTIONS(133),
    [anon_sym_j] = ACTIONS(130),
    [anon_sym_k] = ACTIONS(130),
    [anon_sym_l] = ACTIONS(130),
    [anon_sym_m] = ACTIONS(130),
    [anon_sym_n] = ACTIONS(130),
    [anon_sym_o] = ACTIONS(130),
    [anon_sym_p] = ACTIONS(130),
    [anon_sym_q] = ACTIONS(130),
    [anon_sym_r] = ACTIONS(130),
    [anon_sym_s] = ACTIONS(130),
    [anon_sym_t] = ACTIONS(130),
    [anon_sym_u] = ACTIONS(130),
    [anon_sym_v] = ACTIONS(130),
    [anon_sym_w] = ACTIONS(130),
    [anon_sym_x] = ACTIONS(130),
    [anon_sym_y] = ACTIONS(130),
    [anon_sym_z] = ACTIONS(130),
    [anon_sym_0] = ACTIONS(136),
    [anon_sym_1] = ACTIONS(136),
    [anon_sym_2] = ACTIONS(136),
    [anon_sym_3] = ACTIONS(136),
    [anon_sym_4] = ACTIONS(136),
    [anon_sym_5] = ACTIONS(136),
    [anon_sym_6] = ACTIONS(136),
    [anon_sym_7] = ACTIONS(136),
    [anon_sym_8] = ACTIONS(136),
    [anon_sym_9] = ACTIONS(136),
    [anon_sym__] = ACTIONS(139),
  },
  [20] = {
    [sym__letter] = STATE(19),
    [sym__upper_case_letter] = STATE(19),
    [sym__lower_case_letter] = STATE(19),
    [sym_digit] = STATE(19),
    [sym_underscore] = STATE(19),
    [aux_sym_name_identifier_repeat1] = STATE(19),
    [anon_sym_is] = ACTIONS(72),
    [anon_sym_A] = ACTIONS(142),
    [anon_sym_B] = ACTIONS(142),
    [anon_sym_C] = ACTIONS(142),
    [anon_sym_D] = ACTIONS(142),
    [anon_sym_E] = ACTIONS(142),
    [anon_sym_F] = ACTIONS(142),
    [anon_sym_G] = ACTIONS(142),
    [anon_sym_H] = ACTIONS(142),
    [anon_sym_I] = ACTIONS(142),
    [anon_sym_J] = ACTIONS(142),
    [anon_sym_K] = ACTIONS(142),
    [anon_sym_L] = ACTIONS(142),
    [anon_sym_M] = ACTIONS(142),
    [anon_sym_N] = ACTIONS(142),
    [anon_sym_O] = ACTIONS(142),
    [anon_sym_P] = ACTIONS(142),
    [anon_sym_Q] = ACTIONS(142),
    [anon_sym_R] = ACTIONS(142),
    [anon_sym_S] = ACTIONS(142),
    [anon_sym_T] = ACTIONS(142),
    [anon_sym_U] = ACTIONS(142),
    [anon_sym_V] = ACTIONS(142),
    [anon_sym_W] = ACTIONS(142),
    [anon_sym_X] = ACTIONS(142),
    [anon_sym_Y] = ACTIONS(142),
    [anon_sym_Z] = ACTIONS(142),
    [anon_sym_a] = ACTIONS(142),
    [anon_sym_b] = ACTIONS(142),
    [anon_sym_c] = ACTIONS(142),
    [anon_sym_d] = ACTIONS(142),
    [anon_sym_e] = ACTIONS(142),
    [anon_sym_f] = ACTIONS(142),
    [anon_sym_g] = ACTIONS(142),
    [anon_sym_h] = ACTIONS(142),
    [anon_sym_i] = ACTIONS(144),
    [anon_sym_j] = ACTIONS(142),
    [anon_sym_k] = ACTIONS(142),
    [anon_sym_l] = ACTIONS(142),
    [anon_sym_m] = ACTIONS(142),
    [anon_sym_n] = ACTIONS(142),
    [anon_sym_o] = ACTIONS(142),
    [anon_sym_p] = ACTIONS(142),
    [anon_sym_q] = ACTIONS(142),
    [anon_sym_r] = ACTIONS(142),
    [anon_sym_s] = ACTIONS(142),
    [anon_sym_t] = ACTIONS(142),
    [anon_sym_u] = ACTIONS(142),
    [anon_sym_v] = ACTIONS(142),
    [anon_sym_w] = ACTIONS(142),
    [anon_sym_x] = ACTIONS(142),
    [anon_sym_y] = ACTIONS(142),
    [anon_sym_z] = ACTIONS(142),
    [anon_sym_0] = ACTIONS(126),
    [anon_sym_1] = ACTIONS(126),
    [anon_sym_2] = ACTIONS(126),
    [anon_sym_3] = ACTIONS(126),
    [anon_sym_4] = ACTIONS(126),
    [anon_sym_5] = ACTIONS(126),
    [anon_sym_6] = ACTIONS(126),
    [anon_sym_7] = ACTIONS(126),
    [anon_sym_8] = ACTIONS(126),
    [anon_sym_9] = ACTIONS(126),
    [anon_sym__] = ACTIONS(128),
  },
  [21] = {
    [anon_sym_is] = ACTIONS(82),
    [anon_sym_A] = ACTIONS(82),
    [anon_sym_B] = ACTIONS(82),
    [anon_sym_C] = ACTIONS(82),
    [anon_sym_D] = ACTIONS(82),
    [anon_sym_E] = ACTIONS(82),
    [anon_sym_F] = ACTIONS(82),
    [anon_sym_G] = ACTIONS(82),
    [anon_sym_H] = ACTIONS(82),
    [anon_sym_I] = ACTIONS(82),
    [anon_sym_J] = ACTIONS(82),
    [anon_sym_K] = ACTIONS(82),
    [anon_sym_L] = ACTIONS(82),
    [anon_sym_M] = ACTIONS(82),
    [anon_sym_N] = ACTIONS(82),
    [anon_sym_O] = ACTIONS(82),
    [anon_sym_P] = ACTIONS(82),
    [anon_sym_Q] = ACTIONS(82),
    [anon_sym_R] = ACTIONS(82),
    [anon_sym_S] = ACTIONS(82),
    [anon_sym_T] = ACTIONS(82),
    [anon_sym_U] = ACTIONS(82),
    [anon_sym_V] = ACTIONS(82),
    [anon_sym_W] = ACTIONS(82),
    [anon_sym_X] = ACTIONS(82),
    [anon_sym_Y] = ACTIONS(82),
    [anon_sym_Z] = ACTIONS(82),
    [anon_sym_a] = ACTIONS(82),
    [anon_sym_b] = ACTIONS(82),
    [anon_sym_c] = ACTIONS(82),
    [anon_sym_d] = ACTIONS(82),
    [anon_sym_e] = ACTIONS(82),
    [anon_sym_f] = ACTIONS(82),
    [anon_sym_g] = ACTIONS(82),
    [anon_sym_h] = ACTIONS(82),
    [anon_sym_i] = ACTIONS(84),
    [anon_sym_j] = ACTIONS(82),
    [anon_sym_k] = ACTIONS(82),
    [anon_sym_l] = ACTIONS(82),
    [anon_sym_m] = ACTIONS(82),
    [anon_sym_n] = ACTIONS(82),
    [anon_sym_o] = ACTIONS(82),
    [anon_sym_p] = ACTIONS(82),
    [anon_sym_q] = ACTIONS(82),
    [anon_sym_r] = ACTIONS(82),
    [anon_sym_s] = ACTIONS(82),
    [anon_sym_t] = ACTIONS(82),
    [anon_sym_u] = ACTIONS(82),
    [anon_sym_v] = ACTIONS(82),
    [anon_sym_w] = ACTIONS(82),
    [anon_sym_x] = ACTIONS(82),
    [anon_sym_y] = ACTIONS(82),
    [anon_sym_z] = ACTIONS(82),
    [anon_sym_0] = ACTIONS(82),
    [anon_sym_1] = ACTIONS(82),
    [anon_sym_2] = ACTIONS(82),
    [anon_sym_3] = ACTIONS(82),
    [anon_sym_4] = ACTIONS(82),
    [anon_sym_5] = ACTIONS(82),
    [anon_sym_6] = ACTIONS(82),
    [anon_sym_7] = ACTIONS(82),
    [anon_sym_8] = ACTIONS(82),
    [anon_sym_9] = ACTIONS(82),
    [anon_sym__] = ACTIONS(82),
  },
  [22] = {
    [anon_sym_is] = ACTIONS(78),
    [anon_sym_A] = ACTIONS(78),
    [anon_sym_B] = ACTIONS(78),
    [anon_sym_C] = ACTIONS(78),
    [anon_sym_D] = ACTIONS(78),
    [anon_sym_E] = ACTIONS(78),
    [anon_sym_F] = ACTIONS(78),
    [anon_sym_G] = ACTIONS(78),
    [anon_sym_H] = ACTIONS(78),
    [anon_sym_I] = ACTIONS(78),
    [anon_sym_J] = ACTIONS(78),
    [anon_sym_K] = ACTIONS(78),
    [anon_sym_L] = ACTIONS(78),
    [anon_sym_M] = ACTIONS(78),
    [anon_sym_N] = ACTIONS(78),
    [anon_sym_O] = ACTIONS(78),
    [anon_sym_P] = ACTIONS(78),
    [anon_sym_Q] = ACTIONS(78),
    [anon_sym_R] = ACTIONS(78),
    [anon_sym_S] = ACTIONS(78),
    [anon_sym_T] = ACTIONS(78),
    [anon_sym_U] = ACTIONS(78),
    [anon_sym_V] = ACTIONS(78),
    [anon_sym_W] = ACTIONS(78),
    [anon_sym_X] = ACTIONS(78),
    [anon_sym_Y] = ACTIONS(78),
    [anon_sym_Z] = ACTIONS(78),
    [anon_sym_a] = ACTIONS(78),
    [anon_sym_b] = ACTIONS(78),
    [anon_sym_c] = ACTIONS(78),
    [anon_sym_d] = ACTIONS(78),
    [anon_sym_e] = ACTIONS(78),
    [anon_sym_f] = ACTIONS(78),
    [anon_sym_g] = ACTIONS(78),
    [anon_sym_h] = ACTIONS(78),
    [anon_sym_i] = ACTIONS(80),
    [anon_sym_j] = ACTIONS(78),
    [anon_sym_k] = ACTIONS(78),
    [anon_sym_l] = ACTIONS(78),
    [anon_sym_m] = ACTIONS(78),
    [anon_sym_n] = ACTIONS(78),
    [anon_sym_o] = ACTIONS(78),
    [anon_sym_p] = ACTIONS(78),
    [anon_sym_q] = ACTIONS(78),
    [anon_sym_r] = ACTIONS(78),
    [anon_sym_s] = ACTIONS(78),
    [anon_sym_t] = ACTIONS(78),
    [anon_sym_u] = ACTIONS(78),
    [anon_sym_v] = ACTIONS(78),
    [anon_sym_w] = ACTIONS(78),
    [anon_sym_x] = ACTIONS(78),
    [anon_sym_y] = ACTIONS(78),
    [anon_sym_z] = ACTIONS(78),
    [anon_sym_0] = ACTIONS(78),
    [anon_sym_1] = ACTIONS(78),
    [anon_sym_2] = ACTIONS(78),
    [anon_sym_3] = ACTIONS(78),
    [anon_sym_4] = ACTIONS(78),
    [anon_sym_5] = ACTIONS(78),
    [anon_sym_6] = ACTIONS(78),
    [anon_sym_7] = ACTIONS(78),
    [anon_sym_8] = ACTIONS(78),
    [anon_sym_9] = ACTIONS(78),
    [anon_sym__] = ACTIONS(78),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(128), 1,
      anon_sym__,
    STATE(34), 1,
      sym_name_identifier,
    STATE(18), 4,
      sym__letter,
      sym__upper_case_letter,
      sym__lower_case_letter,
      sym_underscore,
    ACTIONS(146), 52,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
      anon_sym_H,
      anon_sym_I,
      anon_sym_J,
      anon_sym_K,
      anon_sym_L,
      anon_sym_M,
      anon_sym_N,
      anon_sym_O,
      anon_sym_P,
      anon_sym_Q,
      anon_sym_R,
      anon_sym_S,
      anon_sym_T,
      anon_sym_U,
      anon_sym_V,
      anon_sym_W,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_Z,
      anon_sym_a,
      anon_sym_b,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_h,
      anon_sym_i,
      anon_sym_j,
      anon_sym_k,
      anon_sym_l,
      anon_sym_m,
      anon_sym_n,
      anon_sym_o,
      anon_sym_p,
      anon_sym_q,
      anon_sym_r,
      anon_sym_s,
      anon_sym_t,
      anon_sym_u,
      anon_sym_v,
      anon_sym_w,
      anon_sym_x,
      anon_sym_y,
      anon_sym_z,
  [67] = 2,
    STATE(36), 1,
      sym_type,
    ACTIONS(148), 3,
      anon_sym_boolean,
      anon_sym_integer,
      anon_sym_float,
  [76] = 4,
    ACTIONS(150), 1,
      aux_sym_statement_token1,
    ACTIONS(152), 1,
      anon_sym_SEMI,
    STATE(13), 1,
      sym_statement,
    STATE(28), 1,
      aux_sym_statement_repeat1,
  [89] = 3,
    ACTIONS(154), 1,
      aux_sym_line_comment_token1,
    ACTIONS(157), 1,
      anon_sym_SLASHn,
    STATE(26), 1,
      aux_sym_line_comment_repeat1,
  [99] = 3,
    ACTIONS(159), 1,
      aux_sym_line_comment_token1,
    ACTIONS(162), 1,
      anon_sym_STAR_RPAREN,
    STATE(27), 1,
      aux_sym_block_comment_repeat1,
  [109] = 3,
    ACTIONS(164), 1,
      aux_sym_statement_token1,
    ACTIONS(166), 1,
      anon_sym_SEMI,
    STATE(30), 1,
      aux_sym_statement_repeat1,
  [119] = 3,
    ACTIONS(168), 1,
      aux_sym_line_comment_token1,
    ACTIONS(170), 1,
      anon_sym_SLASHn,
    STATE(32), 1,
      aux_sym_line_comment_repeat1,
  [129] = 3,
    ACTIONS(172), 1,
      aux_sym_statement_token1,
    ACTIONS(175), 1,
      anon_sym_SEMI,
    STATE(30), 1,
      aux_sym_statement_repeat1,
  [139] = 3,
    ACTIONS(177), 1,
      aux_sym_line_comment_token1,
    ACTIONS(179), 1,
      anon_sym_STAR_RPAREN,
    STATE(27), 1,
      aux_sym_block_comment_repeat1,
  [149] = 3,
    ACTIONS(181), 1,
      aux_sym_line_comment_token1,
    ACTIONS(183), 1,
      anon_sym_SLASHn,
    STATE(26), 1,
      aux_sym_line_comment_repeat1,
  [159] = 3,
    ACTIONS(185), 1,
      aux_sym_line_comment_token1,
    ACTIONS(187), 1,
      anon_sym_STAR_RPAREN,
    STATE(31), 1,
      aux_sym_block_comment_repeat1,
  [169] = 1,
    ACTIONS(189), 1,
      anon_sym_is,
  [173] = 1,
    ACTIONS(90), 1,
      anon_sym_COLON,
  [177] = 1,
    ACTIONS(191), 1,
      anon_sym_COLON,
  [181] = 1,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(23)] = 0,
  [SMALL_STATE(24)] = 67,
  [SMALL_STATE(25)] = 76,
  [SMALL_STATE(26)] = 89,
  [SMALL_STATE(27)] = 99,
  [SMALL_STATE(28)] = 109,
  [SMALL_STATE(29)] = 119,
  [SMALL_STATE(30)] = 129,
  [SMALL_STATE(31)] = 139,
  [SMALL_STATE(32)] = 149,
  [SMALL_STATE(33)] = 159,
  [SMALL_STATE(34)] = 169,
  [SMALL_STATE(35)] = 173,
  [SMALL_STATE(36)] = 177,
  [SMALL_STATE(37)] = 181,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_identifier, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_identifier, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_name_identifier_repeat1, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_name_identifier_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_identifier_repeat1, 2), SHIFT_REPEAT(5),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_identifier_repeat1, 2), SHIFT_REPEAT(7),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_identifier_repeat1, 2), SHIFT_REPEAT(8),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_identifier, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_identifier, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_digit, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_digit, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_underscore, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_underscore, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_comment, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_declaration, 6),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_declaration, 6),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_comment, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_character, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_character, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_identifier_repeat1, 2), SHIFT_REPEAT(19),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_identifier_repeat1, 2), SHIFT_REPEAT(19),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_identifier_repeat1, 2), SHIFT_REPEAT(22),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_identifier_repeat1, 2), SHIFT_REPEAT(21),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_comment_repeat1, 2), SHIFT_REPEAT(26),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_comment_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(27),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(30),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [193] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
