#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 98
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
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
  sym_null = 30,
  anon_sym_PIPE = 31,
  sym_date = 32,
  sym_datetime = 33,
  sym_localdatetime = 34,
  sym_localtime = 35,
  anon_sym_P = 36,
  anon_sym_Y = 37,
  anon_sym_M = 38,
  anon_sym_D = 39,
  anon_sym_T = 40,
  anon_sym_H = 41,
  anon_sym_S = 42,
  sym_time = 43,
  aux_sym_timezone_token1 = 44,
  aux_sym_timezone_token2 = 45,
  sym_comment = 46,
  sym_source_file = 47,
  sym_header = 48,
  sym_version = 49,
  sym__header_keyword = 50,
  sym_output = 51,
  sym_input = 52,
  sym_mime_type = 53,
  sym_script = 54,
  sym__expression = 55,
  sym__primitive = 56,
  sym_object = 57,
  sym__object_members = 58,
  sym__pair = 59,
  sym_key = 60,
  sym_value = 61,
  sym_array = 62,
  sym__array_members = 63,
  sym__singleton = 64,
  sym__number = 65,
  sym_int = 66,
  sym_float = 67,
  sym_string = 68,
  sym_bool = 69,
  sym__date_types = 70,
  sym_period = 71,
  sym_timezone = 72,
  aux_sym_script_repeat1 = 73,
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
  [sym_null] = "null",
  [anon_sym_PIPE] = "|",
  [sym_date] = "date",
  [sym_datetime] = "datetime",
  [sym_localdatetime] = "localdatetime",
  [sym_localtime] = "localtime",
  [anon_sym_P] = "P",
  [anon_sym_Y] = "Y",
  [anon_sym_M] = "M",
  [anon_sym_D] = "D",
  [anon_sym_T] = "T",
  [anon_sym_H] = "H",
  [anon_sym_S] = "S",
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
  [sym_period] = "period",
  [sym_timezone] = "timezone",
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
  [sym_null] = sym_null,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_date] = sym_date,
  [sym_datetime] = sym_datetime,
  [sym_localdatetime] = sym_localdatetime,
  [sym_localtime] = sym_localtime,
  [anon_sym_P] = anon_sym_P,
  [anon_sym_Y] = anon_sym_Y,
  [anon_sym_M] = anon_sym_M,
  [anon_sym_D] = anon_sym_D,
  [anon_sym_T] = anon_sym_T,
  [anon_sym_H] = anon_sym_H,
  [anon_sym_S] = anon_sym_S,
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
  [sym_period] = sym_period,
  [sym_timezone] = sym_timezone,
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
  [anon_sym_T] = {
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
  [sym_period] = {
    .visible = true,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(59);
      ADVANCE_MAP(
        '"', 1,
        '%', 22,
        '\'', 2,
        ',', 69,
        '-', 75,
        '.', 79,
        '/', 64,
        ':', 70,
        '[', 71,
        ']', 72,
        '{', 67,
        '|', 83,
        '}', 68,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(81);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(82);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(96);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '+') ADVANCE(42);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '2') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(66);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(57);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(43);
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
      if (lookahead == '0') ADVANCE(61);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(62);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(44);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(56);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'w') ADVANCE(60);
      END_STATE();
    case 24:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 58:
      if (eof) ADVANCE(59);
      ADVANCE_MAP(
        '"', 1,
        '%', 22,
        '\'', 2,
        ',', 69,
        '-', 74,
        '.', 79,
        '/', 3,
        '[', 71,
        ']', 72,
        '{', 67,
        '|', 83,
        '}', 68,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_PERCENTdw);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_1_DOT0);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_2_DOT0);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(96);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_mime_type_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_separator);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == ':') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == 'T') ADVANCE(49);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_datetime);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_localdatetime);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_localdatetime);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'Z') ADVANCE(86);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_localdatetime);
      if (lookahead == 'Z') ADVANCE(86);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_localtime);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_localtime);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'Z') ADVANCE(89);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_localtime);
      if (lookahead == 'Z') ADVANCE(89);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_timezone_token1);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_timezone_token2);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(96);
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
        'a', 8,
        'f', 9,
        'i', 10,
        'm', 11,
        'n', 12,
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
      if (lookahead == 'p') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == 'm') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == 'x') ADVANCE(35);
      END_STATE();
    case 25:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(41);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_audio);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_image);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_video);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_multipart);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_application);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 58},
  [2] = {.lex_state = 58},
  [3] = {.lex_state = 58},
  [4] = {.lex_state = 58},
  [5] = {.lex_state = 58},
  [6] = {.lex_state = 58},
  [7] = {.lex_state = 58},
  [8] = {.lex_state = 58},
  [9] = {.lex_state = 58},
  [10] = {.lex_state = 58},
  [11] = {.lex_state = 58},
  [12] = {.lex_state = 58},
  [13] = {.lex_state = 58},
  [14] = {.lex_state = 58},
  [15] = {.lex_state = 58},
  [16] = {.lex_state = 58},
  [17] = {.lex_state = 58},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 58},
  [22] = {.lex_state = 58},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 58},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 58},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 58},
  [30] = {.lex_state = 58},
  [31] = {.lex_state = 58},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 58},
  [34] = {.lex_state = 58},
  [35] = {.lex_state = 58},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 58},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 58},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 58},
  [44] = {.lex_state = 58},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 58},
  [47] = {.lex_state = 58},
  [48] = {.lex_state = 58},
  [49] = {.lex_state = 58},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 58},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 58},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 15},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 58},
  [60] = {.lex_state = 58},
  [61] = {.lex_state = 58},
  [62] = {.lex_state = 58},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 24},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 15},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 80},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
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
    [sym_null] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_localtime] = ACTIONS(1),
    [anon_sym_P] = ACTIONS(1),
    [anon_sym_Y] = ACTIONS(1),
    [anon_sym_M] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [anon_sym_T] = ACTIONS(1),
    [anon_sym_H] = ACTIONS(1),
    [anon_sym_S] = ACTIONS(1),
    [sym_time] = ACTIONS(1),
    [aux_sym_timezone_token2] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(70),
    [sym_header] = STATE(95),
    [sym_script] = STATE(93),
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
    [sym_null] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(19),
    [sym_comment] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
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
    STATE(76), 1,
      sym_script,
    ACTIONS(3), 2,
      sym_identifier,
      sym_null,
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
  [47] = 11,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
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
    ACTIONS(25), 2,
      sym_identifier,
      sym_null,
    ACTIONS(40), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 11,
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
  [94] = 11,
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
    ACTIONS(56), 1,
      sym_comment,
    ACTIONS(15), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      sym_identifier,
      sym_null,
    STATE(3), 11,
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
  [141] = 10,
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
    ACTIONS(62), 1,
      sym_null,
    STATE(86), 1,
      sym__array_members,
    ACTIONS(15), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(60), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 9,
      sym__primitive,
      sym_object,
      sym_array,
      sym__singleton,
      sym__number,
      sym_int,
      sym_float,
      sym_string,
      sym_bool,
  [182] = 10,
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
    ACTIONS(64), 1,
      sym_null,
    STATE(34), 1,
      sym_value,
    ACTIONS(15), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(60), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 9,
      sym__primitive,
      sym_object,
      sym_array,
      sym__number,
      sym_int,
      sym_float,
      sym_string,
      sym_bool,
      sym__date_types,
  [223] = 9,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      aux_sym_int_token1,
    ACTIONS(62), 1,
      sym_null,
    STATE(65), 1,
      sym__array_members,
    ACTIONS(15), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(60), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 9,
      sym__primitive,
      sym_object,
      sym_array,
      sym__singleton,
      sym__number,
      sym_int,
      sym_float,
      sym_string,
      sym_bool,
  [261] = 3,
    ACTIONS(70), 1,
      anon_sym_DOT,
    ACTIONS(68), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null,
    ACTIONS(66), 12,
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
  [285] = 2,
    ACTIONS(74), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null,
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
    ACTIONS(78), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null,
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
  [327] = 2,
    ACTIONS(82), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null,
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
  [348] = 2,
    ACTIONS(86), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null,
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
  [369] = 2,
    ACTIONS(90), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null,
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
  [390] = 2,
    ACTIONS(94), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null,
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
  [411] = 2,
    ACTIONS(98), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null,
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
  [432] = 2,
    ACTIONS(102), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null,
    ACTIONS(100), 12,
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
  [453] = 2,
    ACTIONS(106), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null,
    ACTIONS(104), 11,
      ts_builtin_sym_end,
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
  [473] = 5,
    ACTIONS(112), 1,
      anon_sym_P,
    ACTIONS(114), 1,
      aux_sym_timezone_token1,
    ACTIONS(110), 2,
      sym_datetime,
      sym_time,
    STATE(83), 2,
      sym_period,
      sym_timezone,
    ACTIONS(108), 3,
      sym_date,
      sym_localdatetime,
      sym_localtime,
  [493] = 2,
    STATE(74), 1,
      sym_mime_type,
    ACTIONS(116), 6,
      anon_sym_text,
      anon_sym_audio,
      anon_sym_video,
      anon_sym_application,
      anon_sym_multipart,
      anon_sym_image,
  [505] = 2,
    STATE(75), 1,
      sym_mime_type,
    ACTIONS(116), 6,
      anon_sym_text,
      anon_sym_audio,
      anon_sym_video,
      anon_sym_application,
      anon_sym_multipart,
      anon_sym_image,
  [517] = 6,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    ACTIONS(122), 1,
      sym_comment,
    STATE(33), 1,
      sym__pair,
    STATE(88), 1,
      sym_key,
    STATE(89), 1,
      sym__object_members,
  [536] = 6,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(122), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym__pair,
    STATE(81), 1,
      sym__object_members,
    STATE(88), 1,
      sym_key,
  [555] = 3,
    ACTIONS(126), 1,
      anon_sym_output,
    ACTIONS(128), 1,
      anon_sym_input,
    STATE(82), 3,
      sym__header_keyword,
      sym_output,
      sym_input,
  [567] = 5,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(122), 1,
      sym_comment,
    STATE(33), 1,
      sym__pair,
    STATE(72), 1,
      sym__object_members,
    STATE(88), 1,
      sym_key,
  [583] = 3,
    ACTIONS(130), 1,
      anon_sym_Y,
    ACTIONS(132), 1,
      anon_sym_M,
    ACTIONS(134), 1,
      anon_sym_D,
  [593] = 2,
    STATE(23), 1,
      sym_version,
    ACTIONS(136), 2,
      anon_sym_1_DOT0,
      anon_sym_2_DOT0,
  [601] = 3,
    ACTIONS(138), 1,
      aux_sym_int_token1,
    ACTIONS(140), 1,
      anon_sym_PIPE,
    ACTIONS(142), 1,
      anon_sym_T,
  [611] = 3,
    ACTIONS(144), 1,
      anon_sym_M,
    ACTIONS(146), 1,
      anon_sym_H,
    ACTIONS(148), 1,
      anon_sym_S,
  [621] = 3,
    ACTIONS(150), 1,
      aux_sym_int_token1,
    ACTIONS(152), 1,
      anon_sym_PIPE,
    ACTIONS(154), 1,
      anon_sym_T,
  [631] = 3,
    ACTIONS(156), 1,
      aux_sym_int_token1,
    ACTIONS(158), 1,
      anon_sym_PIPE,
    ACTIONS(160), 1,
      anon_sym_T,
  [641] = 3,
    ACTIONS(158), 1,
      anon_sym_PIPE,
    ACTIONS(160), 1,
      anon_sym_T,
    ACTIONS(162), 1,
      aux_sym_int_token1,
  [651] = 3,
    ACTIONS(164), 1,
      anon_sym_M,
    ACTIONS(166), 1,
      anon_sym_H,
    ACTIONS(168), 1,
      anon_sym_S,
  [661] = 3,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      sym_comment,
  [671] = 1,
    ACTIONS(174), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_comment,
  [677] = 1,
    ACTIONS(176), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_comment,
  [683] = 3,
    ACTIONS(178), 1,
      anon_sym_M,
    ACTIONS(180), 1,
      anon_sym_H,
    ACTIONS(182), 1,
      anon_sym_S,
  [693] = 3,
    ACTIONS(184), 1,
      anon_sym_M,
    ACTIONS(186), 1,
      anon_sym_H,
    ACTIONS(188), 1,
      anon_sym_S,
  [703] = 2,
    ACTIONS(13), 1,
      aux_sym_int_token1,
    STATE(13), 2,
      sym_int,
      sym_float,
  [711] = 2,
    ACTIONS(164), 1,
      anon_sym_M,
    ACTIONS(168), 1,
      anon_sym_S,
  [718] = 2,
    ACTIONS(184), 1,
      anon_sym_M,
    ACTIONS(188), 1,
      anon_sym_S,
  [725] = 2,
    ACTIONS(190), 1,
      aux_sym_int_token1,
    ACTIONS(192), 1,
      anon_sym_PIPE,
  [732] = 2,
    ACTIONS(194), 1,
      anon_sym_M,
    ACTIONS(196), 1,
      anon_sym_S,
  [739] = 2,
    ACTIONS(198), 1,
      aux_sym_int_token1,
    ACTIONS(200), 1,
      anon_sym_PIPE,
  [746] = 2,
    ACTIONS(202), 1,
      aux_sym_int_token1,
    ACTIONS(204), 1,
      anon_sym_PIPE,
  [753] = 2,
    ACTIONS(206), 1,
      anon_sym_PIPE,
    ACTIONS(208), 1,
      anon_sym_T,
  [760] = 2,
    ACTIONS(210), 1,
      aux_sym_int_token1,
    ACTIONS(212), 1,
      anon_sym_PIPE,
  [767] = 2,
    ACTIONS(212), 1,
      anon_sym_PIPE,
    ACTIONS(214), 1,
      aux_sym_int_token1,
  [774] = 2,
    ACTIONS(216), 1,
      aux_sym_int_token1,
    ACTIONS(218), 1,
      anon_sym_PIPE,
  [781] = 2,
    ACTIONS(212), 1,
      anon_sym_PIPE,
    ACTIONS(220), 1,
      aux_sym_int_token1,
  [788] = 1,
    ACTIONS(222), 2,
      anon_sym_output,
      anon_sym_input,
  [793] = 2,
    ACTIONS(140), 1,
      anon_sym_PIPE,
    ACTIONS(142), 1,
      anon_sym_T,
  [800] = 2,
    ACTIONS(192), 1,
      anon_sym_PIPE,
    ACTIONS(224), 1,
      aux_sym_int_token1,
  [807] = 2,
    ACTIONS(178), 1,
      anon_sym_M,
    ACTIONS(182), 1,
      anon_sym_S,
  [814] = 2,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(228), 1,
      anon_sym_RBRACK,
  [821] = 2,
    ACTIONS(218), 1,
      anon_sym_PIPE,
    ACTIONS(230), 1,
      aux_sym_int_token1,
  [828] = 2,
    ACTIONS(158), 1,
      anon_sym_PIPE,
    ACTIONS(160), 1,
      anon_sym_T,
  [835] = 2,
    ACTIONS(232), 1,
      anon_sym_COLON,
    ACTIONS(234), 1,
      aux_sym_timezone_token2,
  [842] = 2,
    ACTIONS(236), 1,
      anon_sym_M,
    ACTIONS(238), 1,
      anon_sym_D,
  [849] = 2,
    ACTIONS(240), 1,
      aux_sym_int_token1,
    ACTIONS(242), 1,
      anon_sym_PIPE,
  [856] = 2,
    ACTIONS(242), 1,
      anon_sym_PIPE,
    ACTIONS(244), 1,
      aux_sym_int_token1,
  [863] = 2,
    ACTIONS(242), 1,
      anon_sym_PIPE,
    ACTIONS(246), 1,
      aux_sym_int_token1,
  [870] = 2,
    ACTIONS(218), 1,
      anon_sym_PIPE,
    ACTIONS(248), 1,
      aux_sym_int_token1,
  [877] = 1,
    ACTIONS(250), 1,
      anon_sym_SLASH,
  [881] = 1,
    ACTIONS(252), 1,
      aux_sym_mime_type_token1,
  [885] = 1,
    ACTIONS(254), 1,
      anon_sym_RBRACK,
  [889] = 1,
    ACTIONS(242), 1,
      anon_sym_PIPE,
  [893] = 1,
    ACTIONS(256), 1,
      sym_separator,
  [897] = 1,
    ACTIONS(258), 1,
      anon_sym_PIPE,
  [901] = 1,
    ACTIONS(238), 1,
      anon_sym_D,
  [905] = 1,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
  [909] = 1,
    ACTIONS(188), 1,
      anon_sym_S,
  [913] = 1,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
  [917] = 1,
    ACTIONS(264), 1,
      anon_sym_D,
  [921] = 1,
    ACTIONS(266), 1,
      sym_separator,
  [925] = 1,
    ACTIONS(268), 1,
      sym_separator,
  [929] = 1,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
  [933] = 1,
    ACTIONS(212), 1,
      anon_sym_PIPE,
  [937] = 1,
    ACTIONS(272), 1,
      anon_sym_PIPE,
  [941] = 1,
    ACTIONS(274), 1,
      aux_sym_timezone_token2,
  [945] = 1,
    ACTIONS(182), 1,
      anon_sym_S,
  [949] = 1,
    ACTIONS(276), 1,
      anon_sym_RBRACE,
  [953] = 1,
    ACTIONS(278), 1,
      sym_separator,
  [957] = 1,
    ACTIONS(280), 1,
      anon_sym_PIPE,
  [961] = 1,
    ACTIONS(282), 1,
      aux_sym_float_token1,
  [965] = 1,
    ACTIONS(218), 1,
      anon_sym_PIPE,
  [969] = 1,
    ACTIONS(284), 1,
      anon_sym_RBRACK,
  [973] = 1,
    ACTIONS(168), 1,
      anon_sym_S,
  [977] = 1,
    ACTIONS(286), 1,
      anon_sym_COLON,
  [981] = 1,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
  [985] = 1,
    ACTIONS(290), 1,
      anon_sym_COLON,
  [989] = 1,
    ACTIONS(192), 1,
      anon_sym_PIPE,
  [993] = 1,
    ACTIONS(196), 1,
      anon_sym_S,
  [997] = 1,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
  [1001] = 1,
    ACTIONS(200), 1,
      anon_sym_PIPE,
  [1005] = 1,
    ACTIONS(294), 1,
      sym_separator,
  [1009] = 1,
    ACTIONS(296), 1,
      anon_sym_S,
  [1013] = 1,
    ACTIONS(298), 1,
      anon_sym_PIPE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 141,
  [SMALL_STATE(6)] = 182,
  [SMALL_STATE(7)] = 223,
  [SMALL_STATE(8)] = 261,
  [SMALL_STATE(9)] = 285,
  [SMALL_STATE(10)] = 306,
  [SMALL_STATE(11)] = 327,
  [SMALL_STATE(12)] = 348,
  [SMALL_STATE(13)] = 369,
  [SMALL_STATE(14)] = 390,
  [SMALL_STATE(15)] = 411,
  [SMALL_STATE(16)] = 432,
  [SMALL_STATE(17)] = 453,
  [SMALL_STATE(18)] = 473,
  [SMALL_STATE(19)] = 493,
  [SMALL_STATE(20)] = 505,
  [SMALL_STATE(21)] = 517,
  [SMALL_STATE(22)] = 536,
  [SMALL_STATE(23)] = 555,
  [SMALL_STATE(24)] = 567,
  [SMALL_STATE(25)] = 583,
  [SMALL_STATE(26)] = 593,
  [SMALL_STATE(27)] = 601,
  [SMALL_STATE(28)] = 611,
  [SMALL_STATE(29)] = 621,
  [SMALL_STATE(30)] = 631,
  [SMALL_STATE(31)] = 641,
  [SMALL_STATE(32)] = 651,
  [SMALL_STATE(33)] = 661,
  [SMALL_STATE(34)] = 671,
  [SMALL_STATE(35)] = 677,
  [SMALL_STATE(36)] = 683,
  [SMALL_STATE(37)] = 693,
  [SMALL_STATE(38)] = 703,
  [SMALL_STATE(39)] = 711,
  [SMALL_STATE(40)] = 718,
  [SMALL_STATE(41)] = 725,
  [SMALL_STATE(42)] = 732,
  [SMALL_STATE(43)] = 739,
  [SMALL_STATE(44)] = 746,
  [SMALL_STATE(45)] = 753,
  [SMALL_STATE(46)] = 760,
  [SMALL_STATE(47)] = 767,
  [SMALL_STATE(48)] = 774,
  [SMALL_STATE(49)] = 781,
  [SMALL_STATE(50)] = 788,
  [SMALL_STATE(51)] = 793,
  [SMALL_STATE(52)] = 800,
  [SMALL_STATE(53)] = 807,
  [SMALL_STATE(54)] = 814,
  [SMALL_STATE(55)] = 821,
  [SMALL_STATE(56)] = 828,
  [SMALL_STATE(57)] = 835,
  [SMALL_STATE(58)] = 842,
  [SMALL_STATE(59)] = 849,
  [SMALL_STATE(60)] = 856,
  [SMALL_STATE(61)] = 863,
  [SMALL_STATE(62)] = 870,
  [SMALL_STATE(63)] = 877,
  [SMALL_STATE(64)] = 881,
  [SMALL_STATE(65)] = 885,
  [SMALL_STATE(66)] = 889,
  [SMALL_STATE(67)] = 893,
  [SMALL_STATE(68)] = 897,
  [SMALL_STATE(69)] = 901,
  [SMALL_STATE(70)] = 905,
  [SMALL_STATE(71)] = 909,
  [SMALL_STATE(72)] = 913,
  [SMALL_STATE(73)] = 917,
  [SMALL_STATE(74)] = 921,
  [SMALL_STATE(75)] = 925,
  [SMALL_STATE(76)] = 929,
  [SMALL_STATE(77)] = 933,
  [SMALL_STATE(78)] = 937,
  [SMALL_STATE(79)] = 941,
  [SMALL_STATE(80)] = 945,
  [SMALL_STATE(81)] = 949,
  [SMALL_STATE(82)] = 953,
  [SMALL_STATE(83)] = 957,
  [SMALL_STATE(84)] = 961,
  [SMALL_STATE(85)] = 965,
  [SMALL_STATE(86)] = 969,
  [SMALL_STATE(87)] = 973,
  [SMALL_STATE(88)] = 977,
  [SMALL_STATE(89)] = 981,
  [SMALL_STATE(90)] = 985,
  [SMALL_STATE(91)] = 989,
  [SMALL_STATE(92)] = 993,
  [SMALL_STATE(93)] = 997,
  [SMALL_STATE(94)] = 1001,
  [SMALL_STATE(95)] = 1005,
  [SMALL_STATE(96)] = 1009,
  [SMALL_STATE(97)] = 1013,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 3, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 3, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__number, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date_types, 3, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__date_types, 3, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_members, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_period, 5, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_period, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_period, 3, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pair, 3, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_period, 10, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_period, 12, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_period, 2, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_period, 7, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_period, 6, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_period, 8, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_members, 1, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_period, 4, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_members, 3, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mime_type, 3, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 3, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_members, 3, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 2, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_members, 2, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_period, 14, 0, 0),
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
