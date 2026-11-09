#include "gen/itemNames.h"
#include "gen/pokemonNames.h"
#include "pokemon.h"

bool hasBattleTransform( u16 p_speciesId ) {
    switch( p_speciesId ) {
    case PKMN_VENUSAUR:
    case PKMN_CHARIZARD:
    case PKMN_BLASTOISE:
    case PKMN_ALAKAZAM:
    case PKMN_GENGAR:
    case PKMN_KANGASKHAN:
    case PKMN_PINSIR:
    case PKMN_GYARADOS:
    case PKMN_AERODACTYL:
    case PKMN_MEWTWO:
    case PKMN_AMPHAROS:
    case PKMN_SCIZOR:
    case PKMN_HERACROSS:
    case PKMN_HOUNDOOM:
    case PKMN_TYRANITAR:
    case PKMN_BLAZIKEN:
    case PKMN_GARDEVOIR:
    case PKMN_MAWILE:
    case PKMN_AGGRON:
    case PKMN_MEDICHAM:
    case PKMN_MANECTRIC:
    case PKMN_BANETTE:
    case PKMN_ABSOL:
    case PKMN_GARCHOMP:
    case PKMN_LUCARIO:
    case PKMN_ABOMASNOW:
    case PKMN_BEEDRILL:
    case PKMN_PIDGEOT:
    case PKMN_SLOWBRO:
    case PKMN_STEELIX:
    case PKMN_SCEPTILE:
    case PKMN_SWAMPERT:
    case PKMN_SABLEYE:
    case PKMN_SHARPEDO:
    case PKMN_CAMERUPT:
    case PKMN_ALTARIA:
    case PKMN_GLALIE:
    case PKMN_SALAMENCE:
    case PKMN_METAGROSS:
    case PKMN_LATIAS:
    case PKMN_LATIOS:
    case PKMN_RAYQUAZA:
    case PKMN_LOPUNNY:
    case PKMN_GALLADE:
    case PKMN_AUDINO:
    case PKMN_DIANCIE:
    case PKMN_KYOGRE:
    case PKMN_GROUDON:
        return true;
    [[likely]] default:
        return false;
    }
}

bool isTradeEvolution( u16 p_speciesId ) {
    switch( p_speciesId ) {
    case PKMN_ALAKAZAM:
    case PKMN_MACHAMP:
    case PKMN_GOLEM:
    case PKMN_GENGAR:
    case PKMN_POLITOED:
    case PKMN_SLOWKING:
    case PKMN_STEELIX:
    case PKMN_SCIZOR:
    case PKMN_KINGDRA:
    case PKMN_PORYGON2:
    case PKMN_HUNTAIL:
    case PKMN_GOREBYSS:
    case PKMN_MILOTIC:
    case PKMN_RHYPERIOR:
    case PKMN_ELECTIVIRE:
    case PKMN_MAGMORTAR:
    case PKMN_DUSKNOIR:
    case PKMN_PORYGON_Z:
    case PKMN_GIGALITH:
    case PKMN_CONKELDURR:
    case PKMN_ESCAVALIER:
    case PKMN_ACCELGOR:
    case PKMN_AROMATISSE:
    case PKMN_SLURPUFF:
    case PKMN_TREVENANT:
    case PKMN_GOURGEIST:
        return true;
    [[likely]] default:
        return false;
    }
}

/*
 * @brief: Extra species not appearing in icave.
 */
bool isSecret( u16 p_speciesId ) {
    switch( p_speciesId ) {
    case PKMN_MIMIKYU:
    case PKMN_ORICORIO:
        return true;
    [[likely]] default:
        return false;
    }
}

bool isMythical( u16 p_speciesId ) {
    switch( p_speciesId ) {
    case PKMN_MEW:
    case PKMN_CELEBI:
    case PKMN_JIRACHI:
    case PKMN_DEOXYS:
    case PKMN_PHIONE:
    case PKMN_MANAPHY:
    case PKMN_DARKRAI:
    case PKMN_SHAYMIN:
    case PKMN_ARCEUS:
    case PKMN_VICTINI:
    case PKMN_KELDEO:
    case PKMN_MELOETTA:
    case PKMN_GENESECT:
    case PKMN_DIANCIE:
    case PKMN_HOOPA:
    case PKMN_VOLCANION:
    case PKMN_MAGEARNA:
    case PKMN_MARSHADOW:
    case PKMN_ZERAORA:
    case PKMN_MELTAN:
    case PKMN_MELMETAL:
    case PKMN_ZARUDE:
        return true;
    [[likely]] default:
        return false;
    }
}

bool isSpecial( u16 p_speciesId ) {
    if( isMythical( p_speciesId ) ) { return true; }
    switch( p_speciesId ) {
    case PKMN_MEWTWO:
    case PKMN_LUGIA:
    case PKMN_HO_OH:
    case PKMN_KYOGRE:
    case PKMN_GROUDON:
    case PKMN_RAYQUAZA:
    case PKMN_DIALGA:
    case PKMN_PALKIA:
    case PKMN_GIRATINA:
    case PKMN_RESHIRAM:
    case PKMN_ZEKROM:
    case PKMN_KYUREM:
    case PKMN_XERNEAS:
    case PKMN_YVELTAL:
    case PKMN_ZYGARDE:
    case PKMN_COSMOG:
    case PKMN_COSMOEM:
    case PKMN_SOLGALEO:
    case PKMN_LUNALA:
    case PKMN_NECROZMA:
    case PKMN_ZACIAN:
    case PKMN_ZAMAZENTA:
    case PKMN_ETERNATUS:
    case PKMN_KUBFU:
    case PKMN_URSHIFU:
    case PKMN_GLASTRIER:
    case PKMN_SPECTRIER:
    case PKMN_CALYREX:
    case PKMN_MIRAIDON:
    case PKMN_KORAIDON:
    case PKMN_OKIDOGI:
    case PKMN_MUNKIDORI:
    case PKMN_FEZANDIPITI:
    case PKMN_OGERPON:
        return true;
    [[likely]] default:
        return false;
    }
}

bool isLegendary( u16 p_speciesId ) {
    switch( p_speciesId ) {
    case PKMN_ARTICUNO:
    case PKMN_ZAPDOS:
    case PKMN_MOLTRES:
    case PKMN_MEWTWO:
    case PKMN_RAIKOU:
    case PKMN_ENTEI:
    case PKMN_SUICUNE:
    case PKMN_LUGIA:
    case PKMN_HO_OH:
    case PKMN_REGIROCK:
    case PKMN_REGICE:
    case PKMN_REGISTEEL:
    case PKMN_LATIAS:
    case PKMN_LATIOS:
    case PKMN_KYOGRE:
    case PKMN_GROUDON:
    case PKMN_RAYQUAZA:
    case PKMN_UXIE:
    case PKMN_MESPRIT:
    case PKMN_AZELF:
    case PKMN_DIALGA:
    case PKMN_PALKIA:
    case PKMN_HEATRAN:
    case PKMN_REGIGIGAS:
    case PKMN_GIRATINA:
    case PKMN_CRESSELIA:
    case PKMN_COBALION:
    case PKMN_TERRAKION:
    case PKMN_VIRIZION:
    case PKMN_TORNADUS:
    case PKMN_THUNDURUS:
    case PKMN_RESHIRAM:
    case PKMN_ZEKROM:
    case PKMN_LANDORUS:
    case PKMN_KYUREM:
    case PKMN_XERNEAS:
    case PKMN_YVELTAL:
    case PKMN_ZYGARDE:
    case PKMN_TYPE__NULL:
    case PKMN_SILVALLY:
    case PKMN_TAPU_KOKO:
    case PKMN_TAPU_LELE:
    case PKMN_TAPU_BULU:
    case PKMN_TAPU_FINI:
    case PKMN_COSMOG:
    case PKMN_COSMOEM:
    case PKMN_SOLGALEO:
    case PKMN_LUNALA:
    case PKMN_NECROZMA:
    case PKMN_ZACIAN:
    case PKMN_ZAMAZENTA:
    case PKMN_ETERNATUS:
    case PKMN_KUBFU:
    case PKMN_URSHIFU:
    case PKMN_REGIELEKI:
    case PKMN_REGIDRAGO:
    case PKMN_GLASTRIER:
    case PKMN_SPECTRIER:
    case PKMN_CALYREX:
    case PKMN_ENAMORUS:
    case PKMN_WO_CHIEN:
    case PKMN_CHIEN_PAO:
    case PKMN_TING_LU:
    case PKMN_CHI_YU:
    case PKMN_MIRAIDON:
    case PKMN_KORAIDON:
    case PKMN_OKIDOGI:
    case PKMN_MUNKIDORI:
    case PKMN_FEZANDIPITI:
    case PKMN_OGERPON:
        return true;
    [[likely]] default:
        return false;
    }
}

bool isUltraBeast( u16 p_speciesId ) {
    switch( p_speciesId ) {
    case PKMN_NIHILEGO:
    case PKMN_BUZZWOLE:
    case PKMN_PHEROMOSA:
    case PKMN_XURKITREE:
    case PKMN_CELESTEELA:
    case PKMN_KARTANA:
    case PKMN_GUZZLORD:
    case PKMN_POIPOLE:
    case PKMN_NAGANADEL:
    case PKMN_STAKATAKA:
    case PKMN_BLACEPHALON:
        return true;
    [[likely]] default:
        return false;
    }
}

bool isParadox( u16 p_speciesId ) {
    switch( p_speciesId ) {
    case PKMN_IRON_TREADS:
    case PKMN_IRON_BUNDLE:
    case PKMN_IRON_HANDS:
    case PKMN_IRON_JUGULIS:
    case PKMN_IRON_MOTH:
    case PKMN_IRON_THORNS:
    case PKMN_IRON_VALIANT:
    case PKMN_IRON_LEAVES:
    case PKMN_GREAT_TUSK:
    case PKMN_SCREAM_TAIL:
    case PKMN_BRUTE_BONNET:
    case PKMN_FLUTTER_MANE:
    case PKMN_SLITHER_WING:
    case PKMN_SANDY_SHOCKS:
    case PKMN_ROARING_MOON:
    case PKMN_WALKING_WAKE:
        return true;
    [[likely]] default:
        return false;
    }
}

bool pokemon::canBattleTransform( ) const {
    if( getForme( ) ) { return false; }
    switch( getSpecies( ) ) {
    case PKMN_VENUSAUR: return getItem( ) == I_VENUSAURITE;
    case PKMN_CHARIZARD: return getItem( ) == I_CHARIZARDITE_X || getItem( ) == I_CHARIZARDITE_Y;
    case PKMN_BLASTOISE: return getItem( ) == I_BLASTOISINITE;
    case PKMN_ALAKAZAM: return getItem( ) == I_ALAKAZITE;
    case PKMN_GENGAR: return getItem( ) == I_GENGARITE;
    case PKMN_KANGASKHAN: return getItem( ) == I_KANGASKHANITE;
    case PKMN_PINSIR: return getItem( ) == I_PINSIRITE;
    case PKMN_GYARADOS: return getItem( ) == I_GYARADOSITE;
    case PKMN_AERODACTYL: return getItem( ) == I_AERODACTYLITE;
    case PKMN_MEWTWO: return getItem( ) == I_MEWTWONITE_X || getItem( ) == I_MEWTWONITE_Y;
    case PKMN_AMPHAROS: return getItem( ) == I_AMPHAROSITE;
    case PKMN_SCIZOR: return getItem( ) == I_SCIZORITE;
    case PKMN_HERACROSS: return getItem( ) == I_HERACRONITE;
    case PKMN_HOUNDOOM: return getItem( ) == I_HOUNDOOMINITE;
    case PKMN_TYRANITAR: return getItem( ) == I_TYRANITARITE;
    case PKMN_BLAZIKEN: return getItem( ) == I_BLAZIKENITE;
    case PKMN_GARDEVOIR: return getItem( ) == I_GARDEVOIRITE;
    case PKMN_MAWILE: return getItem( ) == I_MAWILITE;
    case PKMN_AGGRON: return getItem( ) == I_AGGRONITE;
    case PKMN_MEDICHAM: return getItem( ) == I_MEDICHAMITE;
    case PKMN_MANECTRIC: return getItem( ) == I_MANECTITE;
    case PKMN_BANETTE: return getItem( ) == I_BANETTITE;
    case PKMN_ABSOL: return getItem( ) == I_ABSOLITE;
    case PKMN_GARCHOMP: return getItem( ) == I_GARCHOMPITE;
    case PKMN_LUCARIO: return getItem( ) == I_LUCARIONITE;
    case PKMN_ABOMASNOW: return getItem( ) == I_ABOMASITE;
    case PKMN_BEEDRILL: return getItem( ) == I_BEEDRILLITE;
    case PKMN_PIDGEOT: return getItem( ) == I_PIDGEOTITE;
    case PKMN_SLOWBRO: return getItem( ) == I_SLOWBRONITE;
    case PKMN_STEELIX: return getItem( ) == I_STEELIXITE;
    case PKMN_SCEPTILE: return getItem( ) == I_SCEPTILITE;
    case PKMN_SWAMPERT: return getItem( ) == I_SWAMPERTITE;
    case PKMN_SABLEYE: return getItem( ) == I_SABLENITE;
    case PKMN_SHARPEDO: return getItem( ) == I_SHARPEDONITE;
    case PKMN_CAMERUPT: return getItem( ) == I_CAMERUPTITE;
    case PKMN_ALTARIA: return getItem( ) == I_ALTARIANITE;
    case PKMN_GLALIE: return getItem( ) == I_GLALITITE;
    case PKMN_SALAMENCE: return getItem( ) == I_SALAMENCITE;
    case PKMN_METAGROSS: return getItem( ) == I_METAGROSSITE;
    case PKMN_LATIAS: return getItem( ) == I_LATIASITE;
    case PKMN_LATIOS: return getItem( ) == I_LATIOSITE;
    case PKMN_RAYQUAZA: return getItem( ) == I_JADE_ORB;
    case PKMN_LOPUNNY: return getItem( ) == I_LOPUNNITE;
    case PKMN_GALLADE: return getItem( ) == I_GALLADITE;
    case PKMN_AUDINO: return getItem( ) == I_AUDINITE;
    case PKMN_DIANCIE: return getItem( ) == I_DIANCITE;
    case PKMN_KYOGRE: return getItem( ) == I_BLUE_ORB;
    case PKMN_GROUDON:
        return getItem( ) == I_RED_ORB;
    [[likely]] default:
        return false;
    }
}
