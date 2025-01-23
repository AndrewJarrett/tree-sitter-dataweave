#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 75
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 78
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_PERCENTdw = 2,
  anon_sym_1_DOT0 = 3,
  anon_sym_2_DOT0 = 4,
  anon_sym_output = 5,
  anon_sym_input = 6,
  anon_sym_text = 7,
  anon_sym_audio = 8,
  anon_sym_video = 9,
  anon_sym_application = 10,
  anon_sym_multipart = 11,
  anon_sym_image = 12,
  anon_sym_SLASH = 13,
  aux_sym_mime_type_token1 = 14,
  sym_separator = 15,
  anon_sym_if = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  anon_sym_else = 19,
  anon_sym_LBRACE = 20,
  anon_sym_RBRACE = 21,
  anon_sym_COMMA = 22,
  anon_sym_COLON = 23,
  anon_sym_LBRACK = 24,
  anon_sym_RBRACK = 25,
  anon_sym_DASH = 26,
  aux_sym_int_token1 = 27,
  anon_sym_DOT = 28,
  aux_sym_float_token1 = 29,
  aux_sym_string_token1 = 30,
  aux_sym_string_token2 = 31,
  anon_sym_true = 32,
  anon_sym_false = 33,
  sym_null = 34,
  anon_sym_PIPE = 35,
  sym_date = 36,
  sym_datetime = 37,
  sym_localdatetime = 38,
  sym_localtime = 39,
  sym_period = 40,
  sym_time = 41,
  aux_sym_timezone_token1 = 42,
  aux_sym_timezone_token2 = 43,
  sym_comment = 44,
  sym_source_file = 45,
  sym_header = 46,
  sym_version = 47,
  sym__header_keyword = 48,
  sym_output = 49,
  sym_input = 50,
  sym_mime_type = 51,
  sym_script = 52,
  sym__statement = 53,
  sym_if_statement = 54,
  sym_condition = 55,
  sym_consequence = 56,
  sym_else_if_clause = 57,
  sym_else_clause = 58,
  sym__expression = 59,
  sym__primitive = 60,
  sym_object = 61,
  sym__object_members = 62,
  sym__pair = 63,
  sym_key = 64,
  sym_value = 65,
  sym_array = 66,
  sym__array_members = 67,
  sym__singleton = 68,
  sym__number = 69,
  sym_int = 70,
  sym_float = 71,
  sym_string = 72,
  sym_bool = 73,
  sym__date_types = 74,
  sym_timezone = 75,
  aux_sym_script_repeat1 = 76,
  aux_sym_if_statement_repeat1 = 77,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_PERCENTdw] = "%dw",
  [anon_sym_1_DOT0] = "1.0",
  [anon_sym_2_DOT0] = "2.0",
  [anon_sym_output] = "output",
  [anon_sym_input] = "input",
  [anon_sym_text] = "text",
  [anon_sym_audio] = "audio",
  [anon_sym_video] = "video",
  [anon_sym_application] = "application",
  [anon_sym_multipart] = "multipart",
  [anon_sym_image] = "image",
  [anon_sym_SLASH] = "/",
  [aux_sym_mime_type_token1] = "mime_type_token1",
  [sym_separator] = "separator",
  [anon_sym_if] = "if",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_else] = "else",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DASH] = "-",
  [aux_sym_int_token1] = "int_token1",
  [anon_sym_DOT] = ".",
  [aux_sym_float_token1] = "float_token1",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_null] = "null",
  [anon_sym_PIPE] = "|",
  [sym_date] = "date",
  [sym_datetime] = "datetime",
  [sym_localdatetime] = "localdatetime",
  [sym_localtime] = "localtime",
  [sym_period] = "period",
  [sym_time] = "time",
  [aux_sym_timezone_token1] = "timezone_token1",
  [aux_sym_timezone_token2] = "timezone_token2",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_header] = "header",
  [sym_version] = "version",
  [sym__header_keyword] = "_header_keyword",
  [sym_output] = "output",
  [sym_input] = "input",
  [sym_mime_type] = "mime_type",
  [sym_script] = "script",
  [sym__statement] = "_statement",
  [sym_if_statement] = "if_statement",
  [sym_condition] = "condition",
  [sym_consequence] = "consequence",
  [sym_else_if_clause] = "else_if_clause",
  [sym_else_clause] = "else_clause",
  [sym__expression] = "_expression",
  [sym__primitive] = "_primitive",
  [sym_object] = "object",
  [sym__object_members] = "_object_members",
  [sym__pair] = "_pair",
  [sym_key] = "key",
  [sym_value] = "value",
  [sym_array] = "array",
  [sym__array_members] = "_array_members",
  [sym__singleton] = "_singleton",
  [sym__number] = "_number",
  [sym_int] = "int",
  [sym_float] = "float",
  [sym_string] = "string",
  [sym_bool] = "bool",
  [sym__date_types] = "_date_types",
  [sym_timezone] = "timezone",
  [aux_sym_script_repeat1] = "script_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_PERCENTdw] = anon_sym_PERCENTdw,
  [anon_sym_1_DOT0] = anon_sym_1_DOT0,
  [anon_sym_2_DOT0] = anon_sym_2_DOT0,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_text] = anon_sym_text,
  [anon_sym_audio] = anon_sym_audio,
  [anon_sym_video] = anon_sym_video,
  [anon_sym_application] = anon_sym_application,
  [anon_sym_multipart] = anon_sym_multipart,
  [anon_sym_image] = anon_sym_image,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym_mime_type_token1] = aux_sym_mime_type_token1,
  [sym_separator] = sym_separator,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_int_token1] = aux_sym_int_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_null] = sym_null,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_date] = sym_date,
  [sym_datetime] = sym_datetime,
  [sym_localdatetime] = sym_localdatetime,
  [sym_localtime] = sym_localtime,
  [sym_period] = sym_period,
  [sym_time] = sym_time,
  [aux_sym_timezone_token1] = aux_sym_timezone_token1,
  [aux_sym_timezone_token2] = aux_sym_timezone_token2,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_header] = sym_header,
  [sym_version] = sym_version,
  [sym__header_keyword] = sym__header_keyword,
  [sym_output] = sym_output,
  [sym_input] = sym_input,
  [sym_mime_type] = sym_mime_type,
  [sym_script] = sym_script,
  [sym__statement] = sym__statement,
  [sym_if_statement] = sym_if_statement,
  [sym_condition] = sym_condition,
  [sym_consequence] = sym_consequence,
  [sym_else_if_clause] = sym_else_if_clause,
  [sym_else_clause] = sym_else_clause,
  [sym__expression] = sym__expression,
  [sym__primitive] = sym__primitive,
  [sym_object] = sym_object,
  [sym__object_members] = sym__object_members,
  [sym__pair] = sym__pair,
  [sym_key] = sym_key,
  [sym_value] = sym_value,
  [sym_array] = sym_array,
  [sym__array_members] = sym__array_members,
  [sym__singleton] = sym__singleton,
  [sym__number] = sym__number,
  [sym_int] = sym_int,
  [sym_float] = sym_float,
  [sym_string] = sym_string,
  [sym_bool] = sym_bool,
  [sym__date_types] = sym__date_types,
  [sym_timezone] = sym_timezone,
  [aux_sym_script_repeat1] = aux_sym_script_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENTdw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1_DOT0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2_DOT0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_text] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_audio] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_video] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_application] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_multipart] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_image] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_mime_type_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_separator] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_if] = {
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
  [anon_sym_else] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_int_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_float_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_datetime] = {
    .visible = true,
    .named = true,
  },
  [sym_localdatetime] = {
    .visible = true,
    .named = true,
  },
  [sym_localtime] = {
    .visible = true,
    .named = true,
  },
  [sym_period] = {
    .visible = true,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_timezone_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_timezone_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym__header_keyword] = {
    .visible = false,
    .named = true,
  },
  [sym_output] = {
    .visible = true,
    .named = true,
  },
  [sym_input] = {
    .visible = true,
    .named = true,
  },
  [sym_mime_type] = {
    .visible = true,
    .named = true,
  },
  [sym_script] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_consequence] = {
    .visible = true,
    .named = true,
  },
  [sym_else_if_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__primitive] = {
    .visible = false,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym__object_members] = {
    .visible = false,
    .named = true,
  },
  [sym__pair] = {
    .visible = false,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym__array_members] = {
    .visible = false,
    .named = true,
  },
  [sym__singleton] = {
    .visible = false,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym__date_types] = {
    .visible = false,
    .named = true,
  },
  [sym_timezone] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_script_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_repeat1] = {
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
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(65);
      ADVANCE_MAP(
        '"', 1,
        '%', 28,
        '\'', 2,
        '(', 73,
        ')', 74,
        ',', 77,
        '-', 96,
        '.', 100,
        '/', 70,
        ':', 78,
        'P', 87,
        '[', 79,
        ']', 80,
        '{', 75,
        '|', 104,
        '}', 76,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(102);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(103);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(125);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(124);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '2') ADVANCE(12);
      if (lookahead == 'P') ADVANCE(115);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(72);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(63);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(49);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(67);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(68);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(78);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(44);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(50);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(62);
      END_STATE();
    case 22:
      if (lookahead == 'D') ADVANCE(114);
      if (lookahead == 'M') ADVANCE(116);
      if (lookahead == 'Y') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == 'D') ADVANCE(114);
      if (lookahead == 'M') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == 'D') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == 'H') ADVANCE(119);
      if (lookahead == 'M') ADVANCE(120);
      if (lookahead == 'S') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == 'M') ADVANCE(120);
      if (lookahead == 'S') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == 'S') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'w') ADVANCE(66);
      END_STATE();
    case 30:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 64:
      if (eof) ADVANCE(65);
      ADVANCE_MAP(
        '"', 1,
        '%', 28,
        '\'', 2,
        ')', 74,
        ',', 77,
        '-', 95,
        '.', 100,
        '/', 3,
        '[', 79,
        ']', 80,
        '{', 75,
        '|', 104,
        '}', 76,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_PERCENTdw);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_1_DOT0);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_2_DOT0);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(125);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_mime_type_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_separator);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(90);
      if (lookahead == 'M') ADVANCE(88);
      if (lookahead == 'Y') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(90);
      if (lookahead == 'M') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(92);
      if (lookahead == 'M') ADVANCE(93);
      if (lookahead == 'S') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(93);
      if (lookahead == 'S') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == 'T') ADVANCE(55);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_datetime);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_localdatetime);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_localdatetime);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == 'Z') ADVANCE(107);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(57);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_localdatetime);
      if (lookahead == 'Z') ADVANCE(107);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(57);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_localtime);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_localtime);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == 'Z') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_localtime);
      if (lookahead == 'Z') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_period);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_period);
      if (lookahead == 'T') ADVANCE(118);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_period);
      if (lookahead == 'T') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_period);
      if (lookahead == 'T') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_period);
      if (lookahead == 'T') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_period);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_period);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_period);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_timezone_token1);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_timezone_token2);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(125);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        'a', 1,
        'e', 2,
        'f', 3,
        'i', 4,
        'm', 5,
        'n', 6,
        'o', 7,
        't', 8,
        'v', 9,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'p') ADVANCE(10);
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'm') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 10:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == 'x') ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(39);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_audio);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_image);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_video);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_multipart);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_application);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 64},
  [2] = {.lex_state = 64},
  [3] = {.lex_state = 64},
  [4] = {.lex_state = 64},
  [5] = {.lex_state = 64},
  [6] = {.lex_state = 64},
  [7] = {.lex_state = 64},
  [8] = {.lex_state = 64},
  [9] = {.lex_state = 64},
  [10] = {.lex_state = 64},
  [11] = {.lex_state = 64},
  [12] = {.lex_state = 64},
  [13] = {.lex_state = 64},
  [14] = {.lex_state = 64},
  [15] = {.lex_state = 64},
  [16] = {.lex_state = 64},
  [17] = {.lex_state = 64},
  [18] = {.lex_state = 64},
  [19] = {.lex_state = 64},
  [20] = {.lex_state = 64},
  [21] = {.lex_state = 64},
  [22] = {.lex_state = 64},
  [23] = {.lex_state = 64},
  [24] = {.lex_state = 64},
  [25] = {.lex_state = 64},
  [26] = {.lex_state = 64},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 64},
  [29] = {.lex_state = 64},
  [30] = {.lex_state = 64},
  [31] = {.lex_state = 64},
  [32] = {.lex_state = 64},
  [33] = {.lex_state = 64},
  [34] = {.lex_state = 64},
  [35] = {.lex_state = 64},
  [36] = {.lex_state = 64},
  [37] = {.lex_state = 64},
  [38] = {.lex_state = 64},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 64},
  [41] = {.lex_state = 64},
  [42] = {.lex_state = 64},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 64},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 15},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 30},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 64},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 64},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 101},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 64},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_PERCENTdw] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_text] = ACTIONS(1),
    [anon_sym_audio] = ACTIONS(1),
    [anon_sym_video] = ACTIONS(1),
    [anon_sym_application] = ACTIONS(1),
    [anon_sym_multipart] = ACTIONS(1),
    [anon_sym_image] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_separator] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_int_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_localtime] = ACTIONS(1),
    [sym_period] = ACTIONS(1),
    [sym_time] = ACTIONS(1),
    [aux_sym_timezone_token2] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(56),
    [sym_header] = STATE(55),
    [sym_script] = STATE(54),
    [sym__statement] = STATE(4),
    [sym_if_statement] = STATE(4),
    [sym__expression] = STATE(4),
    [sym__primitive] = STATE(4),
    [sym_object] = STATE(4),
    [sym_array] = STATE(4),
    [sym__number] = STATE(4),
    [sym_int] = STATE(4),
    [sym_float] = STATE(4),
    [sym_string] = STATE(4),
    [sym_bool] = STATE(4),
    [sym__date_types] = STATE(4),
    [aux_sym_script_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(3),
    [anon_sym_PERCENTdw] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_int_token1] = ACTIONS(15),
    [aux_sym_string_token1] = ACTIONS(17),
    [aux_sym_string_token2] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [sym_null] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      aux_sym_int_token1,
    ACTIONS(21), 1,
      anon_sym_PIPE,
    ACTIONS(23), 1,
      sym_comment,
    STATE(62), 1,
      sym_script,
    ACTIONS(3), 2,
      sym_identifier,
      sym_null,
    ACTIONS(17), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 13,
      sym__statement,
      sym_if_statement,
      sym__expression,
      sym__primitive,
      sym_object,
      sym_array,
      sym__number,
      sym_int,
      sym_float,
      sym_string,
      sym_bool,
      sym__date_types,
      aux_sym_script_repeat1,
  [52] = 12,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(30), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(36), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(42), 1,
      aux_sym_int_token1,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(27), 2,
      sym_identifier,
      sym_null,
    ACTIONS(45), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 13,
      sym__statement,
      sym_if_statement,
      sym__expression,
      sym__primitive,
      sym_object,
      sym_array,
      sym__number,
      sym_int,
      sym_float,
      sym_string,
      sym_bool,
      sym__date_types,
      aux_sym_script_repeat1,
  [104] = 12,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      aux_sym_int_token1,
    ACTIONS(21), 1,
      anon_sym_PIPE,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(17), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(59), 2,
      sym_identifier,
      sym_null,
    STATE(3), 13,
      sym__statement,
      sym_if_statement,
      sym__expression,
      sym__primitive,
      sym_object,
      sym_array,
      sym__number,
      sym_int,
      sym_float,
      sym_string,
      sym_bool,
      sym__date_types,
      aux_sym_script_repeat1,
  [156] = 12,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      aux_sym_int_token1,
    ACTIONS(21), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      sym_comment,
    STATE(35), 1,
      sym_consequence,
    ACTIONS(17), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(63), 2,
      sym_identifier,
      sym_null,
    STATE(66), 12,
      sym__statement,
      sym_if_statement,
      sym__expression,
      sym__primitive,
      sym_object,
      sym_array,
      sym__number,
      sym_int,
      sym_float,
      sym_string,
      sym_bool,
      sym__date_types,
  [207] = 12,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      aux_sym_int_token1,
    ACTIONS(21), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      sym_comment,
    STATE(74), 1,
      sym_consequence,
    ACTIONS(17), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(63), 2,
      sym_identifier,
      sym_null,
    STATE(66), 12,
      sym__statement,
      sym_if_statement,
      sym__expression,
      sym__primitive,
      sym_object,
      sym_array,
      sym__number,
      sym_int,
      sym_float,
      sym_string,
      sym_bool,
      sym__date_types,
  [258] = 12,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      aux_sym_int_token1,
    ACTIONS(21), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      sym_comment,
    STATE(34), 1,
      sym_consequence,
    ACTIONS(17), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(63), 2,
      sym_identifier,
      sym_null,
    STATE(66), 12,
      sym__statement,
      sym_if_statement,
      sym__expression,
      sym__primitive,
      sym_object,
      sym_array,
      sym__number,
      sym_int,
      sym_float,
      sym_string,
      sym_bool,
      sym__date_types,
  [309] = 11,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      aux_sym_int_token1,
    ACTIONS(21), 1,
      anon_sym_PIPE,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      sym_comment,
    ACTIONS(17), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(67), 2,
      sym_identifier,
      sym_null,
    STATE(23), 12,
      sym__statement,
      sym_if_statement,
      sym__expression,
      sym__primitive,
      sym_object,
      sym_array,
      sym__number,
      sym_int,
      sym_float,
      sym_string,
      sym_bool,
      sym__date_types,
  [357] = 10,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      aux_sym_int_token1,
    ACTIONS(21), 1,
      anon_sym_PIPE,
    ACTIONS(75), 1,
      sym_comment,
    ACTIONS(17), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(73), 2,
      sym_identifier,
      sym_null,
    STATE(67), 10,
      sym__expression,
      sym__primitive,
      sym_object,
      sym_array,
      sym__number,
      sym_int,
      sym_float,
      sym_string,
      sym_bool,
      sym__date_types,
  [400] = 10,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      aux_sym_int_token1,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(81), 1,
      sym_null,
    STATE(73), 1,
      sym__array_members,
    ACTIONS(17), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(43), 9,
      sym__primitive,
      sym_object,
      sym_array,
      sym__singleton,
      sym__number,
      sym_int,
      sym_float,
      sym_string,
      sym_bool,
  [441] = 3,
    ACTIONS(87), 1,
      anon_sym_DOT,
    ACTIONS(85), 6,
      anon_sym_if,
      anon_sym_else,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null,
    ACTIONS(83), 13,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      aux_sym_int_token1,
      aux_sym_string_token1,
      aux_sym_string_token2,
      anon_sym_PIPE,
      sym_comment,
  [468] = 10,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      aux_sym_int_token1,
    ACTIONS(21), 1,
      anon_sym_PIPE,
    ACTIONS(89), 1,
      sym_null,
    STATE(41), 1,
      sym_value,
    ACTIONS(17), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 9,
      sym__primitive,
      sym_object,
      sym_array,
      sym__number,
      sym_int,
      sym_float,
      sym_string,
      sym_bool,
      sym__date_types,
  [509] = 2,
    ACTIONS(93), 6,
      anon_sym_if,
      anon_sym_else,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null,
    ACTIONS(91), 13,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      aux_sym_int_token1,
      aux_sym_string_token1,
      aux_sym_string_token2,
      anon_sym_PIPE,
      sym_comment,
  [533] = 2,
    ACTIONS(97), 6,
      anon_sym_if,
      anon_sym_else,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null,
    ACTIONS(95), 13,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      aux_sym_int_token1,
      aux_sym_string_token1,
      aux_sym_string_token2,
      anon_sym_PIPE,
      sym_comment,
  [557] = 2,
    ACTIONS(101), 6,
      anon_sym_if,
      anon_sym_else,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null,
    ACTIONS(99), 13,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      aux_sym_int_token1,
      aux_sym_string_token1,
      aux_sym_string_token2,
      anon_sym_PIPE,
      sym_comment,
  [581] = 9,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      aux_sym_int_token1,
    ACTIONS(81), 1,
      sym_null,
    STATE(61), 1,
      sym__array_members,
    ACTIONS(17), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(43), 9,
      sym__primitive,
      sym_object,
      sym_array,
      sym__singleton,
      sym__number,
      sym_int,
      sym_float,
      sym_string,
      sym_bool,
  [619] = 2,
    ACTIONS(105), 6,
      anon_sym_if,
      anon_sym_else,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null,
    ACTIONS(103), 13,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      aux_sym_int_token1,
      aux_sym_string_token1,
      aux_sym_string_token2,
      anon_sym_PIPE,
      sym_comment,
  [643] = 2,
    ACTIONS(109), 6,
      anon_sym_if,
      anon_sym_else,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null,
    ACTIONS(107), 13,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      aux_sym_int_token1,
      aux_sym_string_token1,
      aux_sym_string_token2,
      anon_sym_PIPE,
      sym_comment,
  [667] = 2,
    ACTIONS(113), 6,
      anon_sym_if,
      anon_sym_else,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null,
    ACTIONS(111), 13,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      aux_sym_int_token1,
      aux_sym_string_token1,
      aux_sym_string_token2,
      anon_sym_PIPE,
      sym_comment,
  [691] = 2,
    ACTIONS(117), 6,
      anon_sym_if,
      anon_sym_else,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null,
    ACTIONS(115), 13,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      aux_sym_int_token1,
      aux_sym_string_token1,
      aux_sym_string_token2,
      anon_sym_PIPE,
      sym_comment,
  [715] = 2,
    ACTIONS(121), 6,
      anon_sym_if,
      anon_sym_else,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null,
    ACTIONS(119), 13,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      aux_sym_int_token1,
      aux_sym_string_token1,
      aux_sym_string_token2,
      anon_sym_PIPE,
      sym_comment,
  [739] = 2,
    ACTIONS(125), 6,
      anon_sym_if,
      anon_sym_else,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null,
    ACTIONS(123), 12,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH,
      aux_sym_int_token1,
      aux_sym_string_token1,
      aux_sym_string_token2,
      anon_sym_PIPE,
      sym_comment,
  [762] = 2,
    ACTIONS(129), 6,
      anon_sym_if,
      anon_sym_else,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null,
    ACTIONS(127), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DASH,
      aux_sym_int_token1,
      aux_sym_string_token1,
      aux_sym_string_token2,
      anon_sym_PIPE,
      sym_comment,
  [782] = 2,
    ACTIONS(133), 6,
      anon_sym_if,
      anon_sym_else,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null,
    ACTIONS(131), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DASH,
      aux_sym_int_token1,
      aux_sym_string_token1,
      aux_sym_string_token2,
      anon_sym_PIPE,
      sym_comment,
  [802] = 2,
    ACTIONS(137), 6,
      anon_sym_if,
      anon_sym_else,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null,
    ACTIONS(135), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DASH,
      aux_sym_int_token1,
      aux_sym_string_token1,
      aux_sym_string_token2,
      anon_sym_PIPE,
      sym_comment,
  [822] = 2,
    ACTIONS(139), 5,
      anon_sym_if,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null,
    ACTIONS(141), 8,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DASH,
      aux_sym_int_token1,
      aux_sym_string_token1,
      aux_sym_string_token2,
      anon_sym_PIPE,
      sym_comment,
  [840] = 4,
    ACTIONS(147), 1,
      aux_sym_timezone_token1,
    STATE(71), 1,
      sym_timezone,
    ACTIONS(143), 3,
      sym_date,
      sym_localdatetime,
      sym_localtime,
    ACTIONS(145), 3,
      sym_datetime,
      sym_period,
      sym_time,
  [857] = 2,
    STATE(53), 1,
      sym_mime_type,
    ACTIONS(149), 6,
      anon_sym_text,
      anon_sym_audio,
      anon_sym_video,
      anon_sym_application,
      anon_sym_multipart,
      anon_sym_image,
  [869] = 2,
    STATE(52), 1,
      sym_mime_type,
    ACTIONS(149), 6,
      anon_sym_text,
      anon_sym_audio,
      anon_sym_video,
      anon_sym_application,
      anon_sym_multipart,
      anon_sym_image,
  [881] = 6,
    ACTIONS(151), 1,
      sym_identifier,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    ACTIONS(155), 1,
      sym_comment,
    STATE(40), 1,
      sym__pair,
    STATE(51), 1,
      sym_key,
    STATE(64), 1,
      sym__object_members,
  [900] = 6,
    ACTIONS(151), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym__pair,
    STATE(51), 1,
      sym_key,
    STATE(65), 1,
      sym__object_members,
  [919] = 5,
    ACTIONS(151), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym_comment,
    STATE(40), 1,
      sym__pair,
    STATE(51), 1,
      sym_key,
    STATE(58), 1,
      sym__object_members,
  [935] = 3,
    ACTIONS(159), 1,
      anon_sym_output,
    ACTIONS(161), 1,
      anon_sym_input,
    STATE(69), 3,
      sym__header_keyword,
      sym_output,
      sym_input,
  [947] = 3,
    ACTIONS(163), 1,
      anon_sym_else,
    STATE(24), 1,
      sym_else_clause,
    STATE(36), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
  [958] = 3,
    ACTIONS(163), 1,
      anon_sym_else,
    STATE(24), 1,
      sym_else_clause,
    STATE(36), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
  [969] = 3,
    ACTIONS(163), 1,
      anon_sym_else,
    STATE(25), 1,
      sym_else_clause,
    STATE(37), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
  [980] = 2,
    ACTIONS(165), 1,
      anon_sym_else,
    STATE(37), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
  [988] = 2,
    ACTIONS(15), 1,
      aux_sym_int_token1,
    STATE(20), 2,
      sym_int,
      sym_float,
  [996] = 2,
    STATE(33), 1,
      sym_version,
    ACTIONS(168), 2,
      anon_sym_1_DOT0,
      anon_sym_2_DOT0,
  [1004] = 3,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      sym_comment,
  [1014] = 1,
    ACTIONS(174), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_comment,
  [1020] = 1,
    ACTIONS(176), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_comment,
  [1026] = 2,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_RBRACK,
  [1033] = 2,
    ACTIONS(182), 1,
      anon_sym_COLON,
    ACTIONS(184), 1,
      aux_sym_timezone_token2,
  [1040] = 2,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_condition,
  [1047] = 2,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_condition,
  [1054] = 2,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym_condition,
  [1061] = 1,
    ACTIONS(188), 2,
      anon_sym_output,
      anon_sym_input,
  [1066] = 1,
    ACTIONS(190), 1,
      anon_sym_SLASH,
  [1070] = 1,
    ACTIONS(192), 1,
      anon_sym_PIPE,
  [1074] = 1,
    ACTIONS(194), 1,
      anon_sym_COLON,
  [1078] = 1,
    ACTIONS(196), 1,
      sym_separator,
  [1082] = 1,
    ACTIONS(198), 1,
      sym_separator,
  [1086] = 1,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
  [1090] = 1,
    ACTIONS(202), 1,
      sym_separator,
  [1094] = 1,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
  [1098] = 1,
    ACTIONS(206), 1,
      anon_sym_PIPE,
  [1102] = 1,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
  [1106] = 1,
    ACTIONS(210), 1,
      aux_sym_timezone_token2,
  [1110] = 1,
    ACTIONS(212), 1,
      anon_sym_COLON,
  [1114] = 1,
    ACTIONS(214), 1,
      anon_sym_RBRACK,
  [1118] = 1,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
  [1122] = 1,
    ACTIONS(218), 1,
      aux_sym_mime_type_token1,
  [1126] = 1,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
  [1130] = 1,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
  [1134] = 1,
    ACTIONS(224), 1,
      anon_sym_else,
  [1138] = 1,
    ACTIONS(226), 1,
      anon_sym_RPAREN,
  [1142] = 1,
    ACTIONS(228), 1,
      sym_separator,
  [1146] = 1,
    ACTIONS(230), 1,
      sym_separator,
  [1150] = 1,
    ACTIONS(232), 1,
      anon_sym_if,
  [1154] = 1,
    ACTIONS(234), 1,
      anon_sym_PIPE,
  [1158] = 1,
    ACTIONS(236), 1,
      aux_sym_float_token1,
  [1162] = 1,
    ACTIONS(238), 1,
      anon_sym_RBRACK,
  [1166] = 1,
    ACTIONS(240), 1,
      anon_sym_else,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 156,
  [SMALL_STATE(6)] = 207,
  [SMALL_STATE(7)] = 258,
  [SMALL_STATE(8)] = 309,
  [SMALL_STATE(9)] = 357,
  [SMALL_STATE(10)] = 400,
  [SMALL_STATE(11)] = 441,
  [SMALL_STATE(12)] = 468,
  [SMALL_STATE(13)] = 509,
  [SMALL_STATE(14)] = 533,
  [SMALL_STATE(15)] = 557,
  [SMALL_STATE(16)] = 581,
  [SMALL_STATE(17)] = 619,
  [SMALL_STATE(18)] = 643,
  [SMALL_STATE(19)] = 667,
  [SMALL_STATE(20)] = 691,
  [SMALL_STATE(21)] = 715,
  [SMALL_STATE(22)] = 739,
  [SMALL_STATE(23)] = 762,
  [SMALL_STATE(24)] = 782,
  [SMALL_STATE(25)] = 802,
  [SMALL_STATE(26)] = 822,
  [SMALL_STATE(27)] = 840,
  [SMALL_STATE(28)] = 857,
  [SMALL_STATE(29)] = 869,
  [SMALL_STATE(30)] = 881,
  [SMALL_STATE(31)] = 900,
  [SMALL_STATE(32)] = 919,
  [SMALL_STATE(33)] = 935,
  [SMALL_STATE(34)] = 947,
  [SMALL_STATE(35)] = 958,
  [SMALL_STATE(36)] = 969,
  [SMALL_STATE(37)] = 980,
  [SMALL_STATE(38)] = 988,
  [SMALL_STATE(39)] = 996,
  [SMALL_STATE(40)] = 1004,
  [SMALL_STATE(41)] = 1014,
  [SMALL_STATE(42)] = 1020,
  [SMALL_STATE(43)] = 1026,
  [SMALL_STATE(44)] = 1033,
  [SMALL_STATE(45)] = 1040,
  [SMALL_STATE(46)] = 1047,
  [SMALL_STATE(47)] = 1054,
  [SMALL_STATE(48)] = 1061,
  [SMALL_STATE(49)] = 1066,
  [SMALL_STATE(50)] = 1070,
  [SMALL_STATE(51)] = 1074,
  [SMALL_STATE(52)] = 1078,
  [SMALL_STATE(53)] = 1082,
  [SMALL_STATE(54)] = 1086,
  [SMALL_STATE(55)] = 1090,
  [SMALL_STATE(56)] = 1094,
  [SMALL_STATE(57)] = 1098,
  [SMALL_STATE(58)] = 1102,
  [SMALL_STATE(59)] = 1106,
  [SMALL_STATE(60)] = 1110,
  [SMALL_STATE(61)] = 1114,
  [SMALL_STATE(62)] = 1118,
  [SMALL_STATE(63)] = 1122,
  [SMALL_STATE(64)] = 1126,
  [SMALL_STATE(65)] = 1130,
  [SMALL_STATE(66)] = 1134,
  [SMALL_STATE(67)] = 1138,
  [SMALL_STATE(68)] = 1142,
  [SMALL_STATE(69)] = 1146,
  [SMALL_STATE(70)] = 1150,
  [SMALL_STATE(71)] = 1154,
  [SMALL_STATE(72)] = 1158,
  [SMALL_STATE(73)] = 1162,
  [SMALL_STATE(74)] = 1166,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__number, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date_types, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__date_types, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_members, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pair, 3, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_members, 1, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 3, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [204] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 2, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_members, 3, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_members, 3, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_members, 2, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_consequence, 1, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mime_type, 3, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_clause, 4, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_dataweave(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
