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
#include "M1Data_ENUMS.h"
#include "Engine_FTableRowBase.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1Data
{
    /**
     * ScriptStruct /Script/M1Data.M1StatBaseData
     * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
     */
    struct FM1StatBaseData : public Engine::FTableRowBase
    {
    public:
        M1Data::EM1StatType                                          StatTypeEnum;                                            //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1Data::EM1StatValueOrder                                    ValueOrder;                                              //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
