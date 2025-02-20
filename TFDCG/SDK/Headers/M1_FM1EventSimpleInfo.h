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
#include "M1Data_FM1TemplateId.h"
#include "CoreUObject_FDateTime.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * ScriptStruct /Script/M1.M1EventSimpleInfo
     * Size -> 0x0020
     */
    struct FM1EventSimpleInfo
    {
    public:
        int64_t                                                      EventId;                                                 //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        M1Data::FM1TemplateId                                        TemplateId;                                              //  NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FDateTime                                       StartDateTime;                                           //  ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FDateTime                                       EndDateTime;                                             //  ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
