#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_PERCENTdw = 1,
  anon_sym_1_DOT0 = 2,
  anon_sym_2_DOT0 = 3,
  anon_sym_output = 4,
  anon_sym_input = 5,
  anon_sym_text = 6,
  anon_sym_audio = 7,
  anon_sym_video = 8,
  anon_sym_application = 9,
  anon_sym_multipart = 10,
  anon_sym_image = 11,
  anon_sym_SLASH = 12,
  sym_separator = 13,
  sym_identifier = 14,
  sym_number = 15,
  sym_comment = 16,
  sym_source_file = 17,
  sym_header = 18,
  sym_version = 19,
  sym__header_keyword = 20,
  sym_mime_type = 21,
  sym_script = 22,
  sym__expression = 23,
  aux_sym_script_repeat1 = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [sym_separator] = "separator",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_header] = "header",
  [sym_version] = "version",
  [sym__header_keyword] = "_header_keyword",
  [sym_mime_type] = "mime_type",
  [sym_script] = "script",
  [sym__expression] = "_expression",
  [aux_sym_script_repeat1] = "script_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [sym_separator] = sym_separator,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_header] = sym_header,
  [sym_version] = sym_version,
  [sym__header_keyword] = sym__header_keyword,
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
  [sym_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(54);
      ADVANCE_MAP(
        '%', 15,
        '-', 5,
        '/', 66,
        '1', 69,
        '2', 70,
        'a', 34,
        'i', 29,
        'm', 47,
        'o', 48,
        't', 18,
        'v', 24,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(73);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(67);
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
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '1') ADVANCE(6);
      if (lookahead == '2') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(56);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(57);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == 'g') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 34:
      if (lookahead == 'p') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 35:
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 36:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == 'p') ADVANCE(12);
      END_STATE();
    case 38:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 51:
      if (lookahead == 'w') ADVANCE(55);
      END_STATE();
    case 52:
      if (lookahead == 'x') ADVANCE(40);
      END_STATE();
    case 53:
      if (eof) ADVANCE(54);
      if (lookahead == '%') ADVANCE(15);
      if (lookahead == '/') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_PERCENTdw);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_1_DOT0);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_2_DOT0);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_audio);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_video);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_application);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_multipart);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_image);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(73);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_separator);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(73);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 53},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 53},
  [4] = {.lex_state = 53},
  [5] = {.lex_state = 53},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 53},
  [17] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(9),
    [sym_header] = STATE(10),
    [sym_script] = STATE(11),
    [sym__expression] = STATE(3),
    [aux_sym_script_repeat1] = STATE(3),
    [anon_sym_PERCENTdw] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_number] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(15), 1,
      sym_mime_type,
    ACTIONS(9), 6,
      anon_sym_text,
      anon_sym_audio,
      anon_sym_video,
      anon_sym_application,
      anon_sym_multipart,
      anon_sym_image,
  [15] = 3,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(5), 2,
      sym__expression,
      aux_sym_script_repeat1,
    ACTIONS(13), 3,
      sym_identifier,
      sym_number,
      sym_comment,
  [28] = 3,
    STATE(13), 1,
      sym_script,
    STATE(3), 2,
      sym__expression,
      aux_sym_script_repeat1,
    ACTIONS(7), 3,
      sym_identifier,
      sym_number,
      sym_comment,
  [41] = 3,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(5), 2,
      sym__expression,
      aux_sym_script_repeat1,
    ACTIONS(17), 3,
      sym_identifier,
      sym_number,
      sym_comment,
  [54] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(7), 1,
      sym_version,
    ACTIONS(20), 2,
      anon_sym_1_DOT0,
      anon_sym_2_DOT0,
  [65] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(12), 1,
      sym__header_keyword,
    ACTIONS(22), 2,
      anon_sym_output,
      anon_sym_input,
  [76] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(24), 2,
      anon_sym_output,
      anon_sym_input,
  [84] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
  [91] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      sym_separator,
  [98] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
  [105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      sym_separator,
  [112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
  [119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      anon_sym_SLASH,
  [126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      sym_separator,
  [133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym_identifier,
  [140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      sym_separator,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 15,
  [SMALL_STATE(4)] = 28,
  [SMALL_STATE(5)] = 41,
  [SMALL_STATE(6)] = 54,
  [SMALL_STATE(7)] = 65,
  [SMALL_STATE(8)] = 76,
  [SMALL_STATE(9)] = 84,
  [SMALL_STATE(10)] = 91,
  [SMALL_STATE(11)] = 98,
  [SMALL_STATE(12)] = 105,
  [SMALL_STATE(13)] = 112,
  [SMALL_STATE(14)] = 119,
  [SMALL_STATE(15)] = 126,
  [SMALL_STATE(16)] = 133,
  [SMALL_STATE(17)] = 140,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_keyword, 2, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mime_type, 3, 0, 0),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
