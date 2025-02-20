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
#include "BasicTypes_TArray.h"
#include "ControlRig_FRigInfluenceMap.h"
#include "BasicTypes_TMap.h"
#include "BasicTypes_FName.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::ControlRig
{
    /**
     * ScriptStruct /Script/ControlRig.RigInfluenceMapPerEvent
     * Size -> 0x0060
     */
    struct FRigInfluenceMapPerEvent
    {
    public:
        BasicTypes::TArray<ControlRig::FRigInfluenceMap>             Maps;                                                    //  ZeroConstructor, Protected, NativeAccessSpecifierProtected
        BasicTypes::TMap<BasicTypes::FName, int32_t>                 EventToIndex;                                            //  Protected, NativeAccessSpecifierProtected
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
