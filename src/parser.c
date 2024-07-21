#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 20
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
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
  sym_number = 16,
  sym_comment = 17,
  sym_source_file = 18,
  sym_header = 19,
  sym_version = 20,
  sym__header_keyword = 21,
  sym_output = 22,
  sym_input = 23,
  sym_mime_type = 24,
  sym_script = 25,
  sym__expression = 26,
  aux_sym_script_repeat1 = 27,
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
  [sym_number] = "number",
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
  [sym_number] = sym_number,
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
  [sym_number] = {
    .visible = true,
    .named = true,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      if (lookahead == '%') ADVANCE(11);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '1') ADVANCE(24);
      if (lookahead == '2') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(28);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '1') ADVANCE(6);
      if (lookahead == '2') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'w') ADVANCE(16);
      END_STATE();
    case 13:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (lookahead == '%') ADVANCE(11);
      if (lookahead == '/') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_PERCENTdw);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_1_DOT0);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_2_DOT0);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(28);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_mime_type_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_separator);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(28);
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
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 14},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 0},
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
    [sym_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(10),
    [sym_header] = STATE(11),
    [sym_script] = STATE(12),
    [sym__expression] = STATE(4),
    [aux_sym_script_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(3),
    [anon_sym_PERCENTdw] = ACTIONS(5),
    [sym_number] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    STATE(16), 1,
      sym_mime_type,
    ACTIONS(7), 6,
      anon_sym_text,
      anon_sym_audio,
      anon_sym_video,
      anon_sym_application,
      anon_sym_multipart,
      anon_sym_image,
  [12] = 2,
    STATE(17), 1,
      sym_mime_type,
    ACTIONS(7), 6,
      anon_sym_text,
      anon_sym_audio,
      anon_sym_video,
      anon_sym_application,
      anon_sym_multipart,
      anon_sym_image,
  [24] = 3,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(6), 2,
      sym__expression,
      aux_sym_script_repeat1,
    ACTIONS(11), 3,
      sym_identifier,
      sym_number,
      sym_comment,
  [37] = 3,
    STATE(14), 1,
      sym_script,
    STATE(4), 2,
      sym__expression,
      aux_sym_script_repeat1,
    ACTIONS(3), 3,
      sym_identifier,
      sym_number,
      sym_comment,
  [50] = 3,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(6), 2,
      sym__expression,
      aux_sym_script_repeat1,
    ACTIONS(15), 3,
      sym_identifier,
      sym_number,
      sym_comment,
  [63] = 3,
    ACTIONS(18), 1,
      anon_sym_output,
    ACTIONS(20), 1,
      anon_sym_input,
    STATE(13), 3,
      sym__header_keyword,
      sym_output,
      sym_input,
  [75] = 2,
    STATE(7), 1,
      sym_version,
    ACTIONS(22), 2,
      anon_sym_1_DOT0,
      anon_sym_2_DOT0,
  [83] = 1,
    ACTIONS(24), 2,
      anon_sym_output,
      anon_sym_input,
  [88] = 1,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
  [92] = 1,
    ACTIONS(28), 1,
      sym_separator,
  [96] = 1,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
  [100] = 1,
    ACTIONS(32), 1,
      sym_separator,
  [104] = 1,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
  [108] = 1,
    ACTIONS(36), 1,
      anon_sym_SLASH,
  [112] = 1,
    ACTIONS(38), 1,
      sym_separator,
  [116] = 1,
    ACTIONS(40), 1,
      sym_separator,
  [120] = 1,
    ACTIONS(42), 1,
      aux_sym_mime_type_token1,
  [124] = 1,
    ACTIONS(44), 1,
      sym_separator,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 12,
  [SMALL_STATE(4)] = 24,
  [SMALL_STATE(5)] = 37,
  [SMALL_STATE(6)] = 50,
  [SMALL_STATE(7)] = 63,
  [SMALL_STATE(8)] = 75,
  [SMALL_STATE(9)] = 83,
  [SMALL_STATE(10)] = 88,
  [SMALL_STATE(11)] = 92,
  [SMALL_STATE(12)] = 96,
  [SMALL_STATE(13)] = 100,
  [SMALL_STATE(14)] = 104,
  [SMALL_STATE(15)] = 108,
  [SMALL_STATE(16)] = 112,
  [SMALL_STATE(17)] = 116,
  [SMALL_STATE(18)] = 120,
  [SMALL_STATE(19)] = 124,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mime_type, 3, 0, 0),
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
