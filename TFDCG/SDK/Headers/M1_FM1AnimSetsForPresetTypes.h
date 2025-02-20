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
#include "M1_ENUMS.h"
#include "M1_FM1AnimClassList.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * ScriptStruct /Script/M1.M1AnimSetsForPresetTypes
     * Size -> 0x00A0
     */
    struct FM1AnimSetsForPresetTypes
    {
    public:
        BasicTypes::TMap<M1::EM1LayerAnimSetType, M1::FM1AnimClassList> MalePreset;                                              //  Edit, NativeAccessSpecifierPublic
        BasicTypes::TMap<M1::EM1LayerAnimSetType, M1::FM1AnimClassList> FemalePreset;                                            //  Edit, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
