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
#include "M1Data_FM1RuneEquipInfo.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1Data
{
    /**
     * ScriptStruct /Script/M1Data.M1RuneLoadoutSlotInfo
     * Size -> 0x0018
     */
    struct FM1RuneLoadoutSlotInfo
    {
    public:
        uint8_t                                                      LoadoutSlotIndex;                                        //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      Version;                                                 //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<M1Data::FM1RuneEquipInfo>                 RuneEquips;                                              //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
