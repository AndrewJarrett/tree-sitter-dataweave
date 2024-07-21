#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
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
  sym_number = 20,
  aux_sym_string_token1 = 21,
  aux_sym_string_token2 = 22,
  sym_comment = 23,
  sym_source_file = 24,
  sym_header = 25,
  sym_version = 26,
  sym__header_keyword = 27,
  sym_output = 28,
  sym_input = 29,
  sym_mime_type = 30,
  sym_script = 31,
  sym__expression = 32,
  sym_object = 33,
  sym__pair = 34,
  sym__last_pair = 35,
  sym_key = 36,
  sym_value = 37,
  sym_string = 38,
  aux_sym_script_repeat1 = 39,
  aux_sym_object_repeat1 = 40,
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
  [sym_number] = "number",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
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
  [sym_object] = "object",
  [sym__pair] = "_pair",
  [sym__last_pair] = "_last_pair",
  [sym_key] = "key",
  [sym_value] = "value",
  [sym_string] = "string",
  [aux_sym_script_repeat1] = "script_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
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
  [sym_number] = sym_number,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
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
  [sym_object] = sym_object,
  [sym__pair] = sym__pair,
  [sym__last_pair] = sym__last_pair,
  [sym_key] = sym_key,
  [sym_value] = sym_value,
  [sym_string] = sym_string,
  [aux_sym_script_repeat1] = aux_sym_script_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
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
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
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
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym__pair] = {
    .visible = false,
    .named = true,
  },
  [sym__last_pair] = {
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
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_script_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      ADVANCE_MAP(
        '"', 1,
        '%', 13,
        '\'', 2,
        ',', 27,
        '-', 7,
        '/', 22,
        '1', 30,
        '2', 31,
        ':', 28,
        '{', 25,
        '}', 26,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(33);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(36);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '1') ADVANCE(8);
      if (lookahead == '2') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'w') ADVANCE(18);
      END_STATE();
    case 15:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '%') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '{') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_PERCENTdw);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_1_DOT0);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_2_DOT0);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(36);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_mime_type_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_separator);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(36);
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
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(2);
      if (lookahead == 'm') ADVANCE(3);
      if (lookahead == 'o') ADVANCE(4);
      if (lookahead == 't') ADVANCE(5);
      if (lookahead == 'v') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'p') ADVANCE(7);
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'x') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == 'g') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_audio);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_image);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 35:
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_video);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_multipart);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_application);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 16},
  [3] = {.lex_state = 16},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 16},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 16},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 10},
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
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 15},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_PERCENTdw] = ACTIONS(1),
    [anon_sym_1_DOT0] = ACTIONS(1),
    [anon_sym_2_DOT0] = ACTIONS(1),
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
    [sym_number] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(22),
    [sym_header] = STATE(33),
    [sym_script] = STATE(32),
    [sym__expression] = STATE(2),
    [sym_object] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_script_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(3),
    [anon_sym_PERCENTdw] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_number] = ACTIONS(3),
    [aux_sym_string_token1] = ACTIONS(9),
    [aux_sym_string_token2] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(13), 3,
      sym_identifier,
      sym_number,
      sym_comment,
    STATE(4), 4,
      sym__expression,
      sym_object,
      sym_string,
      aux_sym_script_repeat1,
  [22] = 5,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_script,
    ACTIONS(9), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(3), 3,
      sym_identifier,
      sym_number,
      sym_comment,
    STATE(2), 4,
      sym__expression,
      sym_object,
      sym_string,
      aux_sym_script_repeat1,
  [44] = 5,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(20), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(17), 3,
      sym_identifier,
      sym_number,
      sym_comment,
    STATE(4), 4,
      sym__expression,
      sym_object,
      sym_string,
      aux_sym_script_repeat1,
  [66] = 5,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_value,
    ACTIONS(9), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(26), 3,
      sym_identifier,
      sym_number,
      sym_comment,
    STATE(24), 3,
      sym__expression,
      sym_object,
      sym_string,
  [87] = 5,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_value,
    ACTIONS(9), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(26), 3,
      sym_identifier,
      sym_number,
      sym_comment,
    STATE(24), 3,
      sym__expression,
      sym_object,
      sym_string,
  [108] = 1,
    ACTIONS(28), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      sym_identifier,
      sym_number,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_comment,
  [119] = 1,
    ACTIONS(30), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      sym_identifier,
      sym_number,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_comment,
  [130] = 1,
    ACTIONS(32), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      sym_identifier,
      sym_number,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_comment,
  [141] = 2,
    STATE(30), 1,
      sym_mime_type,
    ACTIONS(34), 6,
      anon_sym_text,
      anon_sym_audio,
      anon_sym_video,
      anon_sym_application,
      anon_sym_multipart,
      anon_sym_image,
  [153] = 2,
    STATE(29), 1,
      sym_mime_type,
    ACTIONS(34), 6,
      anon_sym_text,
      anon_sym_audio,
      anon_sym_video,
      anon_sym_application,
      anon_sym_multipart,
      anon_sym_image,
  [165] = 1,
    ACTIONS(36), 6,
      anon_sym_LBRACE,
      sym_identifier,
      sym_number,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_comment,
  [174] = 4,
    ACTIONS(38), 1,
      sym_identifier,
    STATE(6), 1,
      sym_key,
    STATE(23), 1,
      sym__last_pair,
    STATE(15), 2,
      sym__pair,
      aux_sym_object_repeat1,
  [188] = 3,
    ACTIONS(40), 1,
      anon_sym_output,
    ACTIONS(42), 1,
      anon_sym_input,
    STATE(21), 3,
      sym__header_keyword,
      sym_output,
      sym_input,
  [200] = 4,
    ACTIONS(38), 1,
      sym_identifier,
    STATE(6), 1,
      sym_key,
    STATE(25), 1,
      sym__last_pair,
    STATE(16), 2,
      sym__pair,
      aux_sym_object_repeat1,
  [214] = 3,
    ACTIONS(44), 1,
      sym_identifier,
    STATE(5), 1,
      sym_key,
    STATE(16), 2,
      sym__pair,
      aux_sym_object_repeat1,
  [225] = 2,
    STATE(14), 1,
      sym_version,
    ACTIONS(47), 2,
      anon_sym_1_DOT0,
      anon_sym_2_DOT0,
  [233] = 1,
    ACTIONS(49), 2,
      anon_sym_output,
      anon_sym_input,
  [238] = 2,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(53), 1,
      anon_sym_COMMA,
  [245] = 1,
    ACTIONS(55), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [250] = 1,
    ACTIONS(57), 1,
      sym_separator,
  [254] = 1,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
  [258] = 1,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
  [262] = 1,
    ACTIONS(63), 1,
      anon_sym_COMMA,
  [266] = 1,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
  [270] = 1,
    ACTIONS(67), 1,
      anon_sym_COLON,
  [274] = 1,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
  [278] = 1,
    ACTIONS(71), 1,
      anon_sym_SLASH,
  [282] = 1,
    ACTIONS(73), 1,
      sym_separator,
  [286] = 1,
    ACTIONS(75), 1,
      sym_separator,
  [290] = 1,
    ACTIONS(77), 1,
      sym_identifier,
  [294] = 1,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
  [298] = 1,
    ACTIONS(81), 1,
      sym_separator,
  [302] = 1,
    ACTIONS(83), 1,
      aux_sym_mime_type_token1,
  [306] = 1,
    ACTIONS(53), 1,
      anon_sym_COMMA,
  [310] = 1,
    ACTIONS(85), 1,
      sym_separator,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 87,
  [SMALL_STATE(7)] = 108,
  [SMALL_STATE(8)] = 119,
  [SMALL_STATE(9)] = 130,
  [SMALL_STATE(10)] = 141,
  [SMALL_STATE(11)] = 153,
  [SMALL_STATE(12)] = 165,
  [SMALL_STATE(13)] = 174,
  [SMALL_STATE(14)] = 188,
  [SMALL_STATE(15)] = 200,
  [SMALL_STATE(16)] = 214,
  [SMALL_STATE(17)] = 225,
  [SMALL_STATE(18)] = 233,
  [SMALL_STATE(19)] = 238,
  [SMALL_STATE(20)] = 245,
  [SMALL_STATE(21)] = 250,
  [SMALL_STATE(22)] = 254,
  [SMALL_STATE(23)] = 258,
  [SMALL_STATE(24)] = 262,
  [SMALL_STATE(25)] = 266,
  [SMALL_STATE(26)] = 270,
  [SMALL_STATE(27)] = 274,
  [SMALL_STATE(28)] = 278,
  [SMALL_STATE(29)] = 282,
  [SMALL_STATE(30)] = 286,
  [SMALL_STATE(31)] = 290,
  [SMALL_STATE(32)] = 294,
  [SMALL_STATE(33)] = 298,
  [SMALL_STATE(34)] = 302,
  [SMALL_STATE(35)] = 306,
  [SMALL_STATE(36)] = 310,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 2, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__last_pair, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pair, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mime_type, 3, 0, 0),
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
