#pragma once

enum book_type
{
    BOOK_MINOR_MAGIC,
    BOOK_CONJURATIONS,
    BOOK_FLAMES,
    BOOK_FROST,
    BOOK_SUMMONINGS,
    BOOK_FIRE,
    BOOK_ICE,
    BOOK_SPATIAL_TRANSLOCATIONS,
    BOOK_ENCHANTMENTS,
    BOOK_YOUNG_POISONERS,
    BOOK_TEMPESTS,
    BOOK_DEATH,
    BOOK_MISFORTUNE,
    BOOK_CHANGES,
    BOOK_TRANSFIGURATIONS,
    BOOK_FEN,
#if TAG_MAJOR_VERSION == 34
    BOOK_WAR_CHANTS = BOOK_FEN,
#else
    BOOK_BATTLE,
#endif
    BOOK_CLOUDS,
    BOOK_NECROMANCY,
    BOOK_CALLINGS,
    BOOK_MALEDICT,
    BOOK_AIR,
    BOOK_SKY,
    BOOK_WARP,
    BOOK_ENVENOMATIONS,
    BOOK_UNLIFE,
#if TAG_MAJOR_VERSION == 34
    BOOK_CONTROL,
    BOOK_BATTLE, // was BOOK_MUTATIONS
#endif
    BOOK_GEOMANCY,
    BOOK_EARTH,
#if TAG_MAJOR_VERSION == 34
    BOOK_WIZARDRY,
#endif
    BOOK_POWER,
    BOOK_CANTRIPS,
    BOOK_PARTY_TRICKS,
#if TAG_MAJOR_VERSION == 34
    BOOK_AKASHIC_RECORD,
#endif
    BOOK_DEBILITATION,
    BOOK_DRAGON,
    BOOK_BURGLARY,
    BOOK_DREAMS,
    BOOK_ALCHEMY,
    BOOK_BEASTS,

    BOOK_ANNIHILATIONS,
    BOOK_GRAND_GRIMOIRE,
    BOOK_NECRONOMICON,

    MAX_FIXED_BOOK = BOOK_NECRONOMICON,

    BOOK_RANDART_LEVEL,
    BOOK_RANDART_THEME,

    BOOK_MANUAL,
#if TAG_MAJOR_VERSION == 34
    BOOK_BUGGY_DESTRUCTION,
#endif
    NUM_BOOKS
};

#define NUM_NORMAL_BOOKS     (MAX_NORMAL_BOOK + 1)
#define NUM_FIXED_BOOKS      (MAX_FIXED_BOOK + 1)
