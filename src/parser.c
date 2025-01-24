#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  anon_sym_Weapons_COLON = 1,
  aux_sym_weapons_token1 = 2,
  anon_sym_COMMA = 3,
  aux_sym_armor_token1 = 4,
  anon_sym_Armor_COLON = 5,
  aux_sym_armor_token2 = 6,
  anon_sym_COLON_LF = 7,
  sym_identifier = 8,
  sym_empty = 9,
  anon_sym_COLON = 10,
  aux_sym_pair_token1 = 11,
  sym_mek = 12,
  sym__definition = 13,
  sym_weapons = 14,
  sym_weapon = 15,
  sym_armor = 16,
  sym_limb = 17,
  sym_pair = 18,
  aux_sym_mek_repeat1 = 19,
  aux_sym_weapons_repeat1 = 20,
  aux_sym_limb_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_Weapons_COLON] = "Weapons:",
  [aux_sym_weapons_token1] = "weapons_token1",
  [anon_sym_COMMA] = ", ",
  [aux_sym_armor_token1] = "armor_token1",
  [anon_sym_Armor_COLON] = " Armor:",
  [aux_sym_armor_token2] = "armor_token2",
  [anon_sym_COLON_LF] = ":\n",
  [sym_identifier] = "identifier",
  [sym_empty] = "empty",
  [anon_sym_COLON] = ":",
  [aux_sym_pair_token1] = "pair_token1",
  [sym_mek] = "mek",
  [sym__definition] = "_definition",
  [sym_weapons] = "weapons",
  [sym_weapon] = "weapon",
  [sym_armor] = "armor",
  [sym_limb] = "limb",
  [sym_pair] = "pair",
  [aux_sym_mek_repeat1] = "mek_repeat1",
  [aux_sym_weapons_repeat1] = "weapons_repeat1",
  [aux_sym_limb_repeat1] = "limb_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_Weapons_COLON] = anon_sym_Weapons_COLON,
  [aux_sym_weapons_token1] = aux_sym_weapons_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_armor_token1] = aux_sym_armor_token1,
  [anon_sym_Armor_COLON] = anon_sym_Armor_COLON,
  [aux_sym_armor_token2] = aux_sym_armor_token2,
  [anon_sym_COLON_LF] = anon_sym_COLON_LF,
  [sym_identifier] = sym_identifier,
  [sym_empty] = sym_empty,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_pair_token1] = aux_sym_pair_token1,
  [sym_mek] = sym_mek,
  [sym__definition] = sym__definition,
  [sym_weapons] = sym_weapons,
  [sym_weapon] = sym_weapon,
  [sym_armor] = sym_armor,
  [sym_limb] = sym_limb,
  [sym_pair] = sym_pair,
  [aux_sym_mek_repeat1] = aux_sym_mek_repeat1,
  [aux_sym_weapons_repeat1] = aux_sym_weapons_repeat1,
  [aux_sym_limb_repeat1] = aux_sym_limb_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_Weapons_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_weapons_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_armor_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Armor_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_armor_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_empty] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_pair_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_mek] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_weapons] = {
    .visible = true,
    .named = true,
  },
  [sym_weapon] = {
    .visible = true,
    .named = true,
  },
  [sym_armor] = {
    .visible = true,
    .named = true,
  },
  [sym_limb] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_mek_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_weapons_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_limb_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_amount = 1,
  field_body = 2,
  field_location = 3,
  field_name = 4,
  field_wep_count = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_amount] = "amount",
  [field_body] = "body",
  [field_location] = "location",
  [field_name] = "name",
  [field_wep_count] = "wep_count",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_wep_count, 1},
  [1] =
    {field_name, 0},
  [2] =
    {field_amount, 2},
    {field_location, 0},
  [4] =
    {field_location, 2},
    {field_name, 0},
  [6] =
    {field_body, 2},
    {field_name, 0},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == ',') ADVANCE(5);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'W') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(35);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == ',') ADVANCE(5);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'A') ADVANCE(34);
      if (lookahead == 'W') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(35);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == ',') ADVANCE(5);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'W') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == 'A') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(56);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(37);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'y') ADVANCE(9);
      END_STATE();
    case 26:
      if (eof) ADVANCE(28);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == 'W') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(26);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('[' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == 'W') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(27);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('[' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_Weapons_COLON);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_weapons_token1);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_armor_token1);
      if (lookahead == 'e') ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_armor_token1);
      if (lookahead == 'e') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('[' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_armor_token1);
      if (lookahead == 'r') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_armor_token1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_armor_token1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('[' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_Armor_COLON);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_armor_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COLON_LF);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == 'W') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('[' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == 'W') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('[' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(47);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(51);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(48);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(49);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(43);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_empty);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_empty);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '\n') ADVANCE(39);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 26},
  [2] = {.lex_state = 26},
  [3] = {.lex_state = 26},
  [4] = {.lex_state = 26},
  [5] = {.lex_state = 27},
  [6] = {.lex_state = 27},
  [7] = {.lex_state = 26},
  [8] = {.lex_state = 26},
  [9] = {.lex_state = 27},
  [10] = {.lex_state = 26},
  [11] = {.lex_state = 26},
  [12] = {.lex_state = 26},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_Weapons_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_armor_token1] = ACTIONS(1),
    [anon_sym_Armor_COLON] = ACTIONS(1),
    [aux_sym_armor_token2] = ACTIONS(1),
    [anon_sym_COLON_LF] = ACTIONS(1),
    [sym_empty] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_mek] = STATE(15),
    [sym__definition] = STATE(2),
    [sym_weapons] = STATE(2),
    [sym_weapon] = STATE(2),
    [sym_armor] = STATE(2),
    [sym_limb] = STATE(2),
    [sym_pair] = STATE(2),
    [aux_sym_mek_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_Weapons_COLON] = ACTIONS(5),
    [aux_sym_armor_token1] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      anon_sym_Weapons_COLON,
    ACTIONS(7), 1,
      aux_sym_armor_token1,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(3), 7,
      sym__definition,
      sym_weapons,
      sym_weapon,
      sym_armor,
      sym_limb,
      sym_pair,
      aux_sym_mek_repeat1,
  [22] = 5,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_Weapons_COLON,
    ACTIONS(18), 1,
      aux_sym_armor_token1,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(3), 7,
      sym__definition,
      sym_weapons,
      sym_weapon,
      sym_armor,
      sym_limb,
      sym_pair,
      aux_sym_mek_repeat1,
  [44] = 4,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    ACTIONS(28), 1,
      sym_identifier,
    ACTIONS(26), 2,
      anon_sym_Weapons_COLON,
      aux_sym_armor_token1,
    STATE(7), 2,
      sym_weapon,
      aux_sym_weapons_repeat1,
  [59] = 5,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(38), 1,
      sym_empty,
    STATE(9), 1,
      aux_sym_limb_repeat1,
    ACTIONS(33), 2,
      anon_sym_Weapons_COLON,
      aux_sym_armor_token1,
  [76] = 5,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      sym_identifier,
    ACTIONS(47), 1,
      sym_empty,
    STATE(5), 1,
      aux_sym_limb_repeat1,
    ACTIONS(42), 2,
      anon_sym_Weapons_COLON,
      aux_sym_armor_token1,
  [93] = 4,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(51), 2,
      anon_sym_Weapons_COLON,
      aux_sym_armor_token1,
    STATE(8), 2,
      sym_weapon,
      aux_sym_weapons_repeat1,
  [108] = 4,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      sym_identifier,
    ACTIONS(58), 2,
      anon_sym_Weapons_COLON,
      aux_sym_armor_token1,
    STATE(8), 2,
      sym_weapon,
      aux_sym_weapons_repeat1,
  [123] = 4,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_limb_repeat1,
    ACTIONS(65), 2,
      anon_sym_Weapons_COLON,
      aux_sym_armor_token1,
    ACTIONS(67), 2,
      sym_identifier,
      sym_empty,
  [138] = 2,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 3,
      anon_sym_Weapons_COLON,
      aux_sym_armor_token1,
      sym_identifier,
  [147] = 2,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 3,
      anon_sym_Weapons_COLON,
      aux_sym_armor_token1,
      sym_identifier,
  [156] = 2,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 3,
      anon_sym_Weapons_COLON,
      aux_sym_armor_token1,
      sym_identifier,
  [165] = 3,
    ACTIONS(82), 1,
      anon_sym_COMMA,
    ACTIONS(84), 1,
      anon_sym_COLON_LF,
    ACTIONS(86), 1,
      anon_sym_COLON,
  [175] = 1,
    ACTIONS(88), 1,
      anon_sym_Armor_COLON,
  [179] = 1,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
  [183] = 1,
    ACTIONS(92), 1,
      aux_sym_weapons_token1,
  [187] = 1,
    ACTIONS(94), 1,
      aux_sym_armor_token2,
  [191] = 1,
    ACTIONS(96), 1,
      sym_identifier,
  [195] = 1,
    ACTIONS(98), 1,
      aux_sym_pair_token1,
  [199] = 1,
    ACTIONS(82), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 59,
  [SMALL_STATE(6)] = 76,
  [SMALL_STATE(7)] = 93,
  [SMALL_STATE(8)] = 108,
  [SMALL_STATE(9)] = 123,
  [SMALL_STATE(10)] = 138,
  [SMALL_STATE(11)] = 147,
  [SMALL_STATE(12)] = 156,
  [SMALL_STATE(13)] = 165,
  [SMALL_STATE(14)] = 175,
  [SMALL_STATE(15)] = 179,
  [SMALL_STATE(16)] = 183,
  [SMALL_STATE(17)] = 187,
  [SMALL_STATE(18)] = 191,
  [SMALL_STATE(19)] = 195,
  [SMALL_STATE(20)] = 199,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mek, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mek, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mek_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mek_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mek_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mek_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_weapons, 2, 0, 1),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_weapons, 2, 0, 1),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_weapons, 2, 0, 1), SHIFT(20),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limb, 3, 0, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_limb, 3, 0, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_limb, 3, 0, 2), SHIFT(9),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limb, 2, 0, 2),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_limb, 2, 0, 2),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_limb, 2, 0, 2), SHIFT(5),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_weapons, 3, 0, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_weapons, 3, 0, 1),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_weapons, 3, 0, 1), SHIFT(20),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_weapons_repeat1, 2, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_weapons_repeat1, 2, 0, 0),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_weapons_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_limb_repeat1, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_limb_repeat1, 2, 0, 0),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_limb_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, 0, 5),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 3, 0, 5),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_armor, 3, 0, 3),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_armor, 3, 0, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_weapon, 3, 0, 4),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_weapon, 3, 0, 4),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [90] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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

TS_PUBLIC const TSLanguage *tree_sitter_mtf(void) {
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
