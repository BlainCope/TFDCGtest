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
#include "CoreUObject_FVector.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * ScriptStruct /Script/M1.M1MonsterLogic_Seudo_RandomWalkLocationsToVisit
     * Size -> 0x0018
     */
    struct FM1MonsterLogic_Seudo_RandomWalkLocationsToVisit
    {
    public:
        BasicTypes::TArray<CoreUObject::FVector>                     Locations;                                               //  ZeroConstructor, Transient, NativeAccessSpecifierPublic
        int32_t                                                      IndexToVisit;                                            //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
