#pragma once
#include <nds/ndstypes.h>
#include "gen/itemNames.h"
namespace BAG {
    constexpr u16 BALL_COUNT                  = 27;
    constexpr u16 BALL_ITEM_MAP[ BALL_COUNT ] = {
        1,   // 0  MASTER BALL
        2,   // 1  ULTRA BALL
        3,   // 2  GREAT BALL
        4,   // 3  POKE BALL
        5,   // 4  SAFARI BALL
        6,   // 5  NET BALL
        7,   // 6  DIVE BALL
        8,   // 7  NEST BALL
        9,   // 8  REPEAT BALL
        10,  // 9  TIMER BALL
        11,  // 10  LUXURY BALL
        12,  // 11  PREMIER BALL
        13,  // 12  DUSK BALL
        14,  // 13  HEAL BALL
        15,  // 14  QUICK BALL
        16,  // 15  INFINITY BALL
        492, // 16  FAST BALL
        493, // 17  LEVEL BALL
        494, // 18  LURE BALL
        495, // 19  HEAVY BALL
        496, // 20  LOVE BALL
        497, // 21  FRIEND BALL
        498, // 22  MOON BALL
        499, // 23  SPORT BALL
        500, // 24  PARK BALL
        576, // 25  DREAM BALL
        851, // 26  BEAST BALL
    };
    constexpr u16 ballToItem( u8 p_ballIdx ) {
        return p_ballIdx < BALL_COUNT ? BALL_ITEM_MAP[ p_ballIdx ] : I_POKE_BALL;
    }
    constexpr u8 itemToBall( u16 p_itemIdx ) {
        for( u16 i = 0; i < BALL_COUNT; ++i ) {
            if( BALL_ITEM_MAP[ i ] == p_itemIdx ) { return (u8) i; }
        }
        return 3;
    }
} // namespace BAG
