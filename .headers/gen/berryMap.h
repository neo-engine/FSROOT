#pragma once
#include <nds/ndstypes.h>
namespace BAG {
    constexpr u16 BERRY_COUNT                   = 80;
    constexpr u16 BERRY_ITEM_MAP[ BERRY_COUNT ] = {
        0,
        149, // 1  CHERI BERRY
        150, // 2  CHESTO BERRY
        151, // 3  PECHA BERRY
        152, // 4  RAWST BERRY
        153, // 5  ASPEAR BERRY
        154, // 6  LEPPA BERRY
        155, // 7  ORAN BERRY
        156, // 8  PERSIM BERRY
        157, // 9  LUM BERRY
        158, // 10  SITRUS BERRY
        159, // 11  FIGY BERRY
        160, // 12  WIKI BERRY
        161, // 13  MAGO BERRY
        162, // 14  AGUAV BERRY
        163, // 15  IAPAPA BERRY
        164, // 16  RAZZ BERRY
        165, // 17  BLUK BERRY
        166, // 18  NANAB BERRY
        167, // 19  WEPEAR BERRY
        168, // 20  PINAP BERRY
        169, // 21  POMEG BERRY
        170, // 22  KELPSY BERRY
        171, // 23  QUALOT BERRY
        172, // 24  HONDEW BERRY
        173, // 25  GREPA BERRY
        174, // 26  TAMATO BERRY
        175, // 27  CORNN BERRY
        176, // 28  MAGOST BERRY
        177, // 29  RABUTA BERRY
        178, // 30  NOMEL BERRY
        179, // 31  SPELON BERRY
        180, // 32  PAMTRE BERRY
        181, // 33  WATMEL BERRY
        182, // 34  DURIN BERRY
        183, // 35  BELUE BERRY
        184, // 36  OCCA BERRY
        185, // 37  PASSHO BERRY
        186, // 38  WACAN BERRY
        187, // 39  RINDO BERRY
        188, // 40  YACHE BERRY
        189, // 41  CHOPLE BERRY
        190, // 42  KEBIA BERRY
        191, // 43  SHUCA BERRY
        192, // 44  COBA BERRY
        193, // 45  PAYAPA BERRY
        194, // 46  TANGA BERRY
        195, // 47  CHARTI BERRY
        196, // 48  KASIB BERRY
        197, // 49  HABAN BERRY
        198, // 50  COLBUR BERRY
        199, // 51  BABIRI BERRY
        200, // 52  CHILAN BERRY
        686, // 53  ROSELI BERRY
        201, // 54  LIECHI BERRY
        202, // 55  GANLON BERRY
        203, // 56  SALAC BERRY
        204, // 57  PETAYA BERRY
        205, // 58  APICOT BERRY
        206, // 59  LANSAT BERRY
        207, // 60  STARF BERRY
        208, // 61  ENIGMA BERRY
        209, // 62  MICLE BERRY
        210, // 63  CUSTAP BERRY
        211, // 64  JABOCA BERRY
        212, // 65  ROWAP BERRY
        687, // 66  KEE BERRY
        688, // 67  MARANGA BERRY
        859, // 68  NION BERRY
        861, // 69  PUMKIN BERRY
        862, // 70  DRASH BERRY
        863, // 71  CHRO BERRY
        864, // 72  RIE BERRY
        865, // 73  GARC BERRY
        866, // 74  TOPO BERRY
        867, // 75  NUTPEA BERRY
        868, // 76  CHILAN BERRY2
        869, // 77  YAGO BERRY
        870, // 78  STRIB BERRY
        871, // 79  EGGANT BERRY
    };
    constexpr u16 berryToItem( u8 p_berry ) {
        return p_berry < BERRY_COUNT ? BERRY_ITEM_MAP[ p_berry ] : 0;
    }
    constexpr u8 itemToBerry( u16 p_itemIdx ) {
        for( u16 i = 0; i < BERRY_COUNT; ++i ) {
            if( BERRY_ITEM_MAP[ i ] == p_itemIdx ) { return (u8) i; }
        }
        return 0;
    }
} // namespace BAG
