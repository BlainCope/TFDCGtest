#pragma once

/**
 * ----------------------------------------
 * |        Generated By CheatGear        |
 * ----------------------------------------
 * | Game:    TFDCG                       |
 * | Version: 1                           |
 * | Date:    08/22/2024                  |
 * ----------------------------------------
 */

#include <cstdint>
#include <vector>
#include <string>
#include "BasicTypes_TMap.h"
#include "M1_FM1DropItemListByPlayer.h"
#include "BasicTypes_TSet.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class AM1DroppedItem; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * ScriptStruct /Script/M1.M1InGameItemsList
     * Size -> 0x00F0
     */
    struct FM1InGameItemsList
    {
    public:
        BasicTypes::TMap<int32_t, M1::AM1DroppedItem*>               AllItems;                                                //  NativeAccessSpecifierPublic
        BasicTypes::TMap<int32_t, M1::FM1DropItemListByPlayer>       PrivateItems;                                            //  NativeAccessSpecifierPublic
        BasicTypes::TSet<M1::AM1DroppedItem*>                        PublicItems;                                             //  NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
