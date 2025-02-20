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
#include "BasicTypes_FString.h"
#include "M1Data_ENUMS.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1Data
{
    /**
     * ScriptStruct /Script/M1Data.M1Friend
     * Size -> 0x0038
     */
    struct FM1Friend
    {
    public:
        BasicTypes::FString                                          AccountName;                                             //  Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         Online;                                                  //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         BookMark;                                                //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x6];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::FString                                          PlatformId;                                              //  Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int64_t                                                      PlatformUid;                                             //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        M1Data::EM1LoginPlatformTypes                                PlatformType;                                            //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      MasteryRankLevel;                                        //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
