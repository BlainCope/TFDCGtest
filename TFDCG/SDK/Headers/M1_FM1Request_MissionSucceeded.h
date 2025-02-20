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
#include "M1_FM1MissionSucceededAccountInfo.h"
#include "M1Data_FM1TemplateId.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * ScriptStruct /Script/M1.M1Request_MissionSucceeded
     * Size -> 0x0018
     */
    struct FM1Request_MissionSucceeded
    {
    public:
        BasicTypes::TArray<M1::FM1MissionSucceededAccountInfo>       AccountInfos;                                            //  ZeroConstructor, NativeAccessSpecifierPublic
        M1Data::FM1TemplateId                                        MissionTemplateId;                                       //  NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
