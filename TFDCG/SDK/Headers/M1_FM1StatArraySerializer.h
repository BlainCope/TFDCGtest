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
#include "M1_FM1StatTypeAndValue.h"
#include "BasicTypes_TMap.h"
#include "M1Data_ENUMS.h"
#include "NetCore_FFastArraySerializer.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * ScriptStruct /Script/M1.M1StatArraySerializer
     * Size -> 0x0060 (FullSize[0x0168] - InheritedSize[0x0108])
     */
    struct FM1StatArraySerializer : public NetCore::FFastArraySerializer
    {
    public:
        BasicTypes::TArray<M1::FM1StatTypeAndValue>                  Stats;                                                   //  ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TMap<M1Data::EM1StatType, int32_t>               StatIndexMap;                                            //  RepSkip, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
