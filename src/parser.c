#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 109
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 14
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
  anon_sym_LBRACE = 16,
  anon_sym_RBRACE = 17,
  anon_sym_COMMA = 18,
  anon_sym_COLON = 19,
  anon_sym_LBRACK = 20,
  anon_sym_RBRACK = 21,
  anon_sym_DASH = 22,
  aux_sym_int_token1 = 23,
  anon_sym_DOT = 24,
  aux_sym_float_token1 = 25,
  aux_sym_string_token1 = 26,
  aux_sym_string_token2 = 27,
  anon_sym_true = 28,
  anon_sym_false = 29,
  anon_sym_PIPE = 30,
  sym__date = 31,
  anon_sym_T = 32,
  anon_sym_Z = 33,
  aux_sym__localtime_token1 = 34,
  aux_sym__localtime_token2 = 35,
  anon_sym_P = 36,
  anon_sym_Y = 37,
  anon_sym_M = 38,
  anon_sym_D = 39,
  anon_sym_H = 40,
  anon_sym_S = 41,
  aux_sym__timezone_token1 = 42,
  aux_sym__timezone_token2 = 43,
  sym_comment = 44,
  sym_source_file = 45,
  sym_header = 46,
  sym_version = 47,
  sym__header_keyword = 48,
  sym_output = 49,
  sym_input = 50,
  sym_mime_type = 51,
  sym_script = 52,
  sym__expression = 53,
  sym__primitive = 54,
  sym_object = 55,
  sym__object_members = 56,
  sym__pair = 57,
  sym_key = 58,
  sym_value = 59,
  sym_array = 60,
  sym__array_members = 61,
  sym__number = 62,
  sym_int = 63,
  sym_float = 64,
  sym_string = 65,
  sym_bool = 66,
  sym__date_types = 67,
  sym_date = 68,
  sym_datetime = 69,
  sym_localdatetime = 70,
  sym__localdatetime = 71,
  sym_localtime = 72,
  sym__localtime = 73,
  sym_period = 74,
  sym_time = 75,
  sym_timezone = 76,
  sym__timezone = 77,
  aux_sym_script_repeat1 = 78,
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
  [anon_sym_PIPE] = "|",
  [sym__date] = "_date",
  [anon_sym_T] = "T",
  [anon_sym_Z] = "Z",
  [aux_sym__localtime_token1] = "_localtime_token1",
  [aux_sym__localtime_token2] = "_localtime_token2",
  [anon_sym_P] = "P",
  [anon_sym_Y] = "Y",
  [anon_sym_M] = "M",
  [anon_sym_D] = "D",
  [anon_sym_H] = "H",
  [anon_sym_S] = "S",
  [aux_sym__timezone_token1] = "_timezone_token1",
  [aux_sym__timezone_token2] = "_timezone_token2",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_header] = "header",
  [sym_version] = "version",
  [sym__header_keyword] = "_header_keyword",
  [sym_output] = "output",
  [sym_input] = "input",
  [sym_mime_type] = "mime_type",
  [sym_script] = "script",
  [sym__expression] = "_expression",
  [sym__primitive] = "_primitive",
  [sym_object] = "object",
  [sym__object_members] = "_object_members",
  [sym__pair] = "_pair",
  [sym_key] = "key",
  [sym_value] = "value",
  [sym_array] = "array",
  [sym__array_members] = "_array_members",
  [sym__number] = "_number",
  [sym_int] = "int",
  [sym_float] = "float",
  [sym_string] = "string",
  [sym_bool] = "bool",
  [sym__date_types] = "_date_types",
  [sym_date] = "date",
  [sym_datetime] = "datetime",
  [sym_localdatetime] = "localdatetime",
  [sym__localdatetime] = "_localdatetime",
  [sym_localtime] = "localtime",
  [sym__localtime] = "_localtime",
  [sym_period] = "period",
  [sym_time] = "time",
  [sym_timezone] = "timezone",
  [sym__timezone] = "_timezone",
  [aux_sym_script_repeat1] = "script_repeat1",
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
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym__date] = sym__date,
  [anon_sym_T] = anon_sym_T,
  [anon_sym_Z] = anon_sym_Z,
  [aux_sym__localtime_token1] = aux_sym__localtime_token1,
  [aux_sym__localtime_token2] = aux_sym__localtime_token2,
  [anon_sym_P] = anon_sym_P,
  [anon_sym_Y] = anon_sym_Y,
  [anon_sym_M] = anon_sym_M,
  [anon_sym_D] = anon_sym_D,
  [anon_sym_H] = anon_sym_H,
  [anon_sym_S] = anon_sym_S,
  [aux_sym__timezone_token1] = aux_sym__timezone_token1,
  [aux_sym__timezone_token2] = aux_sym__timezone_token2,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_header] = sym_header,
  [sym_version] = sym_version,
  [sym__header_keyword] = sym__header_keyword,
  [sym_output] = sym_output,
  [sym_input] = sym_input,
  [sym_mime_type] = sym_mime_type,
  [sym_script] = sym_script,
  [sym__expression] = sym__expression,
  [sym__primitive] = sym__primitive,
  [sym_object] = sym_object,
  [sym__object_members] = sym__object_members,
  [sym__pair] = sym__pair,
  [sym_key] = sym_key,
  [sym_value] = sym_value,
  [sym_array] = sym_array,
  [sym__array_members] = sym__array_members,
  [sym__number] = sym__number,
  [sym_int] = sym_int,
  [sym_float] = sym_float,
  [sym_string] = sym_string,
  [sym_bool] = sym_bool,
  [sym__date_types] = sym__date_types,
  [sym_date] = sym_date,
  [sym_datetime] = sym_datetime,
  [sym_localdatetime] = sym_localdatetime,
  [sym__localdatetime] = sym__localdatetime,
  [sym_localtime] = sym_localtime,
  [sym__localtime] = sym__localtime,
  [sym_period] = sym_period,
  [sym_time] = sym_time,
  [sym_timezone] = sym_timezone,
  [sym__timezone] = sym__timezone,
  [aux_sym_script_repeat1] = aux_sym_script_repeat1,
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
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym__date] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_T] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Z] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__localtime_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__localtime_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_P] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Y] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_M] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_S] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__timezone_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__timezone_token2] = {
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
  [sym__localdatetime] = {
    .visible = false,
    .named = true,
  },
  [sym_localtime] = {
    .visible = true,
    .named = true,
  },
  [sym__localtime] = {
    .visible = false,
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
  [sym_timezone] = {
    .visible = true,
    .named = true,
  },
  [sym__timezone] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_script_repeat1] = {
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
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(38);
      ADVANCE_MAP(
        '"', 1,
        '%', 18,
        '\'', 2,
        ',', 48,
        '-', 54,
        '.', 58,
        '/', 43,
        ':', 49,
        '[', 50,
        ']', 51,
        '{', 46,
        '|', 62,
        '}', 47,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(60);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(61);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(69);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '+') ADVANCE(32);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '2') ADVANCE(12);
      if (lookahead == '|') ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(45);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(36);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(33);
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
      if (lookahead == '0') ADVANCE(40);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(41);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(31);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'w') ADVANCE(39);
      END_STATE();
    case 20:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 21:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      ADVANCE_MAP(
        '"', 1,
        '%', 18,
        '\'', 2,
        ',', 48,
        '-', 53,
        '.', 58,
        '/', 3,
        '[', 50,
        ']', 51,
        '{', 46,
        '|', 62,
        '}', 47,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_PERCENTdw);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_1_DOT0);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_2_DOT0);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(69);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_mime_type_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_separator);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == ':') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__date);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__localtime_token1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__localtime_token2);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__timezone_token1);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__timezone_token2);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(69);
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
        'D', 1,
        'H', 2,
        'M', 3,
        'P', 4,
        'S', 5,
        'T', 6,
        'Y', 7,
        'Z', 8,
        'a', 9,
        'f', 10,
        'i', 11,
        'm', 12,
        'o', 13,
        't', 14,
        'v', 15,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_H);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_M);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_S);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 9:
      if (lookahead == 'p') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'm') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == 'x') ADVANCE(33);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == 'g') ADVANCE(39);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_audio);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_image);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_video);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_multipart);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_application);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 37},
  [2] = {.lex_state = 37},
  [3] = {.lex_state = 37},
  [4] = {.lex_state = 37},
  [5] = {.lex_state = 37},
  [6] = {.lex_state = 37},
  [7] = {.lex_state = 37},
  [8] = {.lex_state = 37},
  [9] = {.lex_state = 37},
  [10] = {.lex_state = 37},
  [11] = {.lex_state = 37},
  [12] = {.lex_state = 37},
  [13] = {.lex_state = 37},
  [14] = {.lex_state = 37},
  [15] = {.lex_state = 37},
  [16] = {.lex_state = 37},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 37},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 37},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 37},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 37},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 37},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 37},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 37},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 15},
  [43] = {.lex_state = 37},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 37},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 37},
  [49] = {.lex_state = 37},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 37},
  [52] = {.lex_state = 37},
  [53] = {.lex_state = 37},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 37},
  [57] = {.lex_state = 37},
  [58] = {.lex_state = 37},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 37},
  [64] = {.lex_state = 37},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 20},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 59},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 15},
  [101] = {.lex_state = 21},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
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
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_T] = ACTIONS(1),
    [anon_sym_Z] = ACTIONS(1),
    [aux_sym__localtime_token1] = ACTIONS(1),
    [aux_sym__localtime_token2] = ACTIONS(1),
    [anon_sym_P] = ACTIONS(1),
    [anon_sym_Y] = ACTIONS(1),
    [anon_sym_M] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [anon_sym_H] = ACTIONS(1),
    [anon_sym_S] = ACTIONS(1),
    [aux_sym__timezone_token2] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(81),
    [sym_header] = STATE(97),
    [sym_script] = STATE(90),
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
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(11),
    [aux_sym_int_token1] = ACTIONS(13),
    [aux_sym_string_token1] = ACTIONS(15),
    [aux_sym_string_token2] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(19),
    [sym_comment] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(34), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      aux_sym_int_token1,
    ACTIONS(46), 1,
      anon_sym_PIPE,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(40), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 11,
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
  [46] = 11,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      aux_sym_int_token1,
    ACTIONS(19), 1,
      anon_sym_PIPE,
    ACTIONS(21), 1,
      sym_comment,
    STATE(92), 1,
      sym_script,
    ACTIONS(15), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 11,
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
  [92] = 11,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      aux_sym_int_token1,
    ACTIONS(19), 1,
      anon_sym_PIPE,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      sym_identifier,
    ACTIONS(56), 1,
      sym_comment,
    ACTIONS(15), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 11,
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
  [138] = 9,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      aux_sym_int_token1,
    ACTIONS(58), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      sym__array_members,
    ACTIONS(15), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(60), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(65), 8,
      sym__primitive,
      sym_object,
      sym_array,
      sym__number,
      sym_int,
      sym_float,
      sym_string,
      sym_bool,
  [175] = 8,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      aux_sym_int_token1,
    STATE(61), 1,
      sym_value,
    ACTIONS(15), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(60), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(60), 8,
      sym__primitive,
      sym_object,
      sym_array,
      sym__number,
      sym_int,
      sym_float,
      sym_string,
      sym_bool,
  [209] = 8,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      aux_sym_int_token1,
    STATE(83), 1,
      sym__array_members,
    ACTIONS(15), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(60), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(65), 8,
      sym__primitive,
      sym_object,
      sym_array,
      sym__number,
      sym_int,
      sym_float,
      sym_string,
      sym_bool,
  [243] = 3,
    ACTIONS(66), 1,
      anon_sym_DOT,
    ACTIONS(64), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(62), 12,
      ts_builtin_sym_end,
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
  [266] = 2,
    ACTIONS(70), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(68), 12,
      ts_builtin_sym_end,
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
  [286] = 2,
    ACTIONS(74), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(72), 12,
      ts_builtin_sym_end,
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
  [306] = 2,
    ACTIONS(78), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(76), 12,
      ts_builtin_sym_end,
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
  [326] = 2,
    ACTIONS(82), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(80), 12,
      ts_builtin_sym_end,
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
  [346] = 2,
    ACTIONS(86), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(84), 12,
      ts_builtin_sym_end,
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
  [366] = 2,
    ACTIONS(90), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(88), 12,
      ts_builtin_sym_end,
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
  [386] = 2,
    ACTIONS(94), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(92), 12,
      ts_builtin_sym_end,
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
  [406] = 2,
    ACTIONS(98), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(96), 12,
      ts_builtin_sym_end,
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
  [426] = 8,
    ACTIONS(100), 1,
      sym__date,
    ACTIONS(102), 1,
      aux_sym__localtime_token1,
    ACTIONS(104), 1,
      anon_sym_P,
    ACTIONS(106), 1,
      aux_sym__timezone_token1,
    STATE(26), 1,
      sym__localtime,
    STATE(44), 1,
      sym__localdatetime,
    STATE(106), 1,
      sym__timezone,
    STATE(75), 7,
      sym_date,
      sym_datetime,
      sym_localdatetime,
      sym_localtime,
      sym_period,
      sym_time,
      sym_timezone,
  [457] = 2,
    ACTIONS(110), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(108), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DASH,
      aux_sym_int_token1,
      aux_sym_string_token1,
      aux_sym_string_token2,
      anon_sym_PIPE,
      sym_comment,
  [474] = 2,
    STATE(69), 1,
      sym_mime_type,
    ACTIONS(112), 6,
      anon_sym_text,
      anon_sym_audio,
      anon_sym_video,
      anon_sym_application,
      anon_sym_multipart,
      anon_sym_image,
  [486] = 2,
    STATE(86), 1,
      sym_mime_type,
    ACTIONS(112), 6,
      anon_sym_text,
      anon_sym_audio,
      anon_sym_video,
      anon_sym_application,
      anon_sym_multipart,
      anon_sym_image,
  [498] = 3,
    ACTIONS(114), 1,
      anon_sym_output,
    ACTIONS(116), 1,
      anon_sym_input,
    STATE(104), 3,
      sym__header_keyword,
      sym_output,
      sym_input,
  [510] = 5,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      sym__pair,
    STATE(79), 1,
      sym__object_members,
    STATE(88), 1,
      sym_key,
  [526] = 2,
    ACTIONS(122), 1,
      anon_sym_DOT,
    ACTIONS(124), 3,
      anon_sym_PIPE,
      anon_sym_Z,
      aux_sym__timezone_token1,
  [535] = 4,
    ACTIONS(118), 1,
      sym_identifier,
    STATE(68), 1,
      sym__pair,
    STATE(85), 1,
      sym__object_members,
    STATE(88), 1,
      sym_key,
  [548] = 3,
    ACTIONS(106), 1,
      aux_sym__timezone_token1,
    STATE(73), 1,
      sym__timezone,
    ACTIONS(126), 2,
      anon_sym_PIPE,
      anon_sym_Z,
  [559] = 4,
    ACTIONS(106), 1,
      aux_sym__timezone_token1,
    ACTIONS(128), 1,
      anon_sym_PIPE,
    ACTIONS(130), 1,
      anon_sym_Z,
    STATE(93), 1,
      sym__timezone,
  [572] = 3,
    ACTIONS(132), 1,
      aux_sym_int_token1,
    ACTIONS(134), 1,
      anon_sym_PIPE,
    ACTIONS(136), 1,
      anon_sym_T,
  [582] = 1,
    ACTIONS(138), 3,
      anon_sym_PIPE,
      anon_sym_Z,
      aux_sym__timezone_token1,
  [588] = 3,
    ACTIONS(140), 1,
      aux_sym_int_token1,
    ACTIONS(142), 1,
      anon_sym_PIPE,
    ACTIONS(144), 1,
      anon_sym_T,
  [598] = 2,
    STATE(21), 1,
      sym_version,
    ACTIONS(146), 2,
      anon_sym_1_DOT0,
      anon_sym_2_DOT0,
  [606] = 3,
    ACTIONS(134), 1,
      anon_sym_PIPE,
    ACTIONS(136), 1,
      anon_sym_T,
    ACTIONS(148), 1,
      aux_sym_int_token1,
  [616] = 3,
    ACTIONS(150), 1,
      anon_sym_M,
    ACTIONS(152), 1,
      anon_sym_H,
    ACTIONS(154), 1,
      anon_sym_S,
  [626] = 3,
    ACTIONS(156), 1,
      anon_sym_Y,
    ACTIONS(158), 1,
      anon_sym_M,
    ACTIONS(160), 1,
      anon_sym_D,
  [636] = 3,
    ACTIONS(162), 1,
      aux_sym_int_token1,
    ACTIONS(164), 1,
      anon_sym_PIPE,
    ACTIONS(166), 1,
      anon_sym_T,
  [646] = 3,
    ACTIONS(168), 1,
      anon_sym_M,
    ACTIONS(170), 1,
      anon_sym_H,
    ACTIONS(172), 1,
      anon_sym_S,
  [656] = 3,
    ACTIONS(174), 1,
      anon_sym_M,
    ACTIONS(176), 1,
      anon_sym_H,
    ACTIONS(178), 1,
      anon_sym_S,
  [666] = 3,
    ACTIONS(180), 1,
      anon_sym_M,
    ACTIONS(182), 1,
      anon_sym_H,
    ACTIONS(184), 1,
      anon_sym_S,
  [676] = 2,
    ACTIONS(13), 1,
      aux_sym_int_token1,
    STATE(10), 2,
      sym_int,
      sym_float,
  [684] = 2,
    ACTIONS(164), 1,
      anon_sym_PIPE,
    ACTIONS(166), 1,
      anon_sym_T,
  [691] = 2,
    ACTIONS(186), 1,
      aux_sym_int_token1,
    ACTIONS(188), 1,
      anon_sym_PIPE,
  [698] = 2,
    ACTIONS(190), 1,
      anon_sym_PIPE,
    ACTIONS(192), 1,
      anon_sym_T,
  [705] = 2,
    ACTIONS(194), 1,
      anon_sym_COLON,
    ACTIONS(196), 1,
      aux_sym__timezone_token2,
  [712] = 2,
    ACTIONS(198), 1,
      aux_sym_int_token1,
    ACTIONS(200), 1,
      anon_sym_PIPE,
  [719] = 2,
    ACTIONS(202), 1,
      anon_sym_PIPE,
    ACTIONS(204), 1,
      anon_sym_Z,
  [726] = 2,
    ACTIONS(206), 1,
      anon_sym_M,
    ACTIONS(208), 1,
      anon_sym_S,
  [733] = 2,
    ACTIONS(210), 1,
      aux_sym_int_token1,
    ACTIONS(212), 1,
      anon_sym_PIPE,
  [740] = 2,
    ACTIONS(102), 1,
      aux_sym__localtime_token1,
    STATE(25), 1,
      sym__localtime,
  [747] = 2,
    ACTIONS(212), 1,
      anon_sym_PIPE,
    ACTIONS(214), 1,
      aux_sym_int_token1,
  [754] = 2,
    ACTIONS(216), 1,
      aux_sym_int_token1,
    ACTIONS(218), 1,
      anon_sym_PIPE,
  [761] = 2,
    ACTIONS(180), 1,
      anon_sym_M,
    ACTIONS(184), 1,
      anon_sym_S,
  [768] = 2,
    ACTIONS(220), 1,
      aux_sym_int_token1,
    ACTIONS(222), 1,
      anon_sym_PIPE,
  [775] = 2,
    ACTIONS(222), 1,
      anon_sym_PIPE,
    ACTIONS(224), 1,
      aux_sym_int_token1,
  [782] = 2,
    ACTIONS(222), 1,
      anon_sym_PIPE,
    ACTIONS(226), 1,
      aux_sym_int_token1,
  [789] = 2,
    ACTIONS(174), 1,
      anon_sym_M,
    ACTIONS(178), 1,
      anon_sym_S,
  [796] = 2,
    ACTIONS(228), 1,
      anon_sym_PIPE,
    ACTIONS(230), 1,
      anon_sym_T,
  [803] = 2,
    ACTIONS(232), 1,
      aux_sym_int_token1,
    ACTIONS(234), 1,
      anon_sym_PIPE,
  [810] = 2,
    ACTIONS(234), 1,
      anon_sym_PIPE,
    ACTIONS(236), 1,
      aux_sym_int_token1,
  [817] = 2,
    ACTIONS(234), 1,
      anon_sym_PIPE,
    ACTIONS(238), 1,
      aux_sym_int_token1,
  [824] = 2,
    ACTIONS(168), 1,
      anon_sym_M,
    ACTIONS(172), 1,
      anon_sym_S,
  [831] = 1,
    ACTIONS(240), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [836] = 1,
    ACTIONS(242), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [841] = 1,
    ACTIONS(244), 2,
      anon_sym_output,
      anon_sym_input,
  [846] = 2,
    ACTIONS(188), 1,
      anon_sym_PIPE,
    ACTIONS(246), 1,
      aux_sym_int_token1,
  [853] = 2,
    ACTIONS(188), 1,
      anon_sym_PIPE,
    ACTIONS(248), 1,
      aux_sym_int_token1,
  [860] = 2,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      anon_sym_RBRACK,
  [867] = 2,
    ACTIONS(254), 1,
      anon_sym_M,
    ACTIONS(256), 1,
      anon_sym_D,
  [874] = 2,
    ACTIONS(134), 1,
      anon_sym_PIPE,
    ACTIONS(136), 1,
      anon_sym_T,
  [881] = 2,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    ACTIONS(260), 1,
      anon_sym_COMMA,
  [888] = 1,
    ACTIONS(262), 1,
      sym_separator,
  [892] = 1,
    ACTIONS(234), 1,
      anon_sym_PIPE,
  [896] = 1,
    ACTIONS(264), 1,
      anon_sym_PIPE,
  [900] = 1,
    ACTIONS(266), 1,
      aux_sym_mime_type_token1,
  [904] = 1,
    ACTIONS(268), 1,
      anon_sym_PIPE,
  [908] = 1,
    ACTIONS(256), 1,
      anon_sym_D,
  [912] = 1,
    ACTIONS(270), 1,
      anon_sym_PIPE,
  [916] = 1,
    ACTIONS(272), 1,
      anon_sym_RBRACK,
  [920] = 1,
    ACTIONS(188), 1,
      anon_sym_PIPE,
  [924] = 1,
    ACTIONS(274), 1,
      sym_separator,
  [928] = 1,
    ACTIONS(276), 1,
      anon_sym_RBRACE,
  [932] = 1,
    ACTIONS(278), 1,
      anon_sym_COLON,
  [936] = 1,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
  [940] = 1,
    ACTIONS(172), 1,
      anon_sym_S,
  [944] = 1,
    ACTIONS(282), 1,
      anon_sym_RBRACK,
  [948] = 1,
    ACTIONS(284), 1,
      anon_sym_D,
  [952] = 1,
    ACTIONS(286), 1,
      anon_sym_RBRACE,
  [956] = 1,
    ACTIONS(288), 1,
      sym_separator,
  [960] = 1,
    ACTIONS(290), 1,
      aux_sym_float_token1,
  [964] = 1,
    ACTIONS(292), 1,
      anon_sym_COLON,
  [968] = 1,
    ACTIONS(294), 1,
      anon_sym_SLASH,
  [972] = 1,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
  [976] = 1,
    ACTIONS(178), 1,
      anon_sym_S,
  [980] = 1,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
  [984] = 1,
    ACTIONS(300), 1,
      anon_sym_PIPE,
  [988] = 1,
    ACTIONS(302), 1,
      anon_sym_PIPE,
  [992] = 1,
    ACTIONS(304), 1,
      anon_sym_PIPE,
  [996] = 1,
    ACTIONS(222), 1,
      anon_sym_PIPE,
  [1000] = 1,
    ACTIONS(306), 1,
      sym_separator,
  [1004] = 1,
    ACTIONS(184), 1,
      anon_sym_S,
  [1008] = 1,
    ACTIONS(308), 1,
      anon_sym_PIPE,
  [1012] = 1,
    ACTIONS(310), 1,
      aux_sym__timezone_token2,
  [1016] = 1,
    ACTIONS(312), 1,
      aux_sym__localtime_token2,
  [1020] = 1,
    ACTIONS(212), 1,
      anon_sym_PIPE,
  [1024] = 1,
    ACTIONS(208), 1,
      anon_sym_S,
  [1028] = 1,
    ACTIONS(314), 1,
      sym_separator,
  [1032] = 1,
    ACTIONS(200), 1,
      anon_sym_PIPE,
  [1036] = 1,
    ACTIONS(316), 1,
      anon_sym_PIPE,
  [1040] = 1,
    ACTIONS(318), 1,
      anon_sym_S,
  [1044] = 1,
    ACTIONS(320), 1,
      anon_sym_PIPE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 138,
  [SMALL_STATE(6)] = 175,
  [SMALL_STATE(7)] = 209,
  [SMALL_STATE(8)] = 243,
  [SMALL_STATE(9)] = 266,
  [SMALL_STATE(10)] = 286,
  [SMALL_STATE(11)] = 306,
  [SMALL_STATE(12)] = 326,
  [SMALL_STATE(13)] = 346,
  [SMALL_STATE(14)] = 366,
  [SMALL_STATE(15)] = 386,
  [SMALL_STATE(16)] = 406,
  [SMALL_STATE(17)] = 426,
  [SMALL_STATE(18)] = 457,
  [SMALL_STATE(19)] = 474,
  [SMALL_STATE(20)] = 486,
  [SMALL_STATE(21)] = 498,
  [SMALL_STATE(22)] = 510,
  [SMALL_STATE(23)] = 526,
  [SMALL_STATE(24)] = 535,
  [SMALL_STATE(25)] = 548,
  [SMALL_STATE(26)] = 559,
  [SMALL_STATE(27)] = 572,
  [SMALL_STATE(28)] = 582,
  [SMALL_STATE(29)] = 588,
  [SMALL_STATE(30)] = 598,
  [SMALL_STATE(31)] = 606,
  [SMALL_STATE(32)] = 616,
  [SMALL_STATE(33)] = 626,
  [SMALL_STATE(34)] = 636,
  [SMALL_STATE(35)] = 646,
  [SMALL_STATE(36)] = 656,
  [SMALL_STATE(37)] = 666,
  [SMALL_STATE(38)] = 676,
  [SMALL_STATE(39)] = 684,
  [SMALL_STATE(40)] = 691,
  [SMALL_STATE(41)] = 698,
  [SMALL_STATE(42)] = 705,
  [SMALL_STATE(43)] = 712,
  [SMALL_STATE(44)] = 719,
  [SMALL_STATE(45)] = 726,
  [SMALL_STATE(46)] = 733,
  [SMALL_STATE(47)] = 740,
  [SMALL_STATE(48)] = 747,
  [SMALL_STATE(49)] = 754,
  [SMALL_STATE(50)] = 761,
  [SMALL_STATE(51)] = 768,
  [SMALL_STATE(52)] = 775,
  [SMALL_STATE(53)] = 782,
  [SMALL_STATE(54)] = 789,
  [SMALL_STATE(55)] = 796,
  [SMALL_STATE(56)] = 803,
  [SMALL_STATE(57)] = 810,
  [SMALL_STATE(58)] = 817,
  [SMALL_STATE(59)] = 824,
  [SMALL_STATE(60)] = 831,
  [SMALL_STATE(61)] = 836,
  [SMALL_STATE(62)] = 841,
  [SMALL_STATE(63)] = 846,
  [SMALL_STATE(64)] = 853,
  [SMALL_STATE(65)] = 860,
  [SMALL_STATE(66)] = 867,
  [SMALL_STATE(67)] = 874,
  [SMALL_STATE(68)] = 881,
  [SMALL_STATE(69)] = 888,
  [SMALL_STATE(70)] = 892,
  [SMALL_STATE(71)] = 896,
  [SMALL_STATE(72)] = 900,
  [SMALL_STATE(73)] = 904,
  [SMALL_STATE(74)] = 908,
  [SMALL_STATE(75)] = 912,
  [SMALL_STATE(76)] = 916,
  [SMALL_STATE(77)] = 920,
  [SMALL_STATE(78)] = 924,
  [SMALL_STATE(79)] = 928,
  [SMALL_STATE(80)] = 932,
  [SMALL_STATE(81)] = 936,
  [SMALL_STATE(82)] = 940,
  [SMALL_STATE(83)] = 944,
  [SMALL_STATE(84)] = 948,
  [SMALL_STATE(85)] = 952,
  [SMALL_STATE(86)] = 956,
  [SMALL_STATE(87)] = 960,
  [SMALL_STATE(88)] = 964,
  [SMALL_STATE(89)] = 968,
  [SMALL_STATE(90)] = 972,
  [SMALL_STATE(91)] = 976,
  [SMALL_STATE(92)] = 980,
  [SMALL_STATE(93)] = 984,
  [SMALL_STATE(94)] = 988,
  [SMALL_STATE(95)] = 992,
  [SMALL_STATE(96)] = 996,
  [SMALL_STATE(97)] = 1000,
  [SMALL_STATE(98)] = 1004,
  [SMALL_STATE(99)] = 1008,
  [SMALL_STATE(100)] = 1012,
  [SMALL_STATE(101)] = 1016,
  [SMALL_STATE(102)] = 1020,
  [SMALL_STATE(103)] = 1024,
  [SMALL_STATE(104)] = 1028,
  [SMALL_STATE(105)] = 1032,
  [SMALL_STATE(106)] = 1036,
  [SMALL_STATE(107)] = 1040,
  [SMALL_STATE(108)] = 1044,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__number, 2, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 3, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date_types, 3, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__date_types, 3, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__localtime, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__localdatetime, 3, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_localtime, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_period, 3, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__localtime, 3, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_period, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_period, 5, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_period, 4, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_period, 12, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_localdatetime, 1, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_period, 10, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_period, 2, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_period, 8, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_period, 7, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_period, 6, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pair, 3, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_members, 1, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_members, 1, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__timezone, 3, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 4, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mime_type, 3, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_members, 3, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_members, 3, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_localtime, 2, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_localdatetime, 2, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__timezone, 2, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 1, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_period, 14, 0, 0),
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
