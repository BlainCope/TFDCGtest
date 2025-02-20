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
#include "BasicTypes_FName.h"
#include "M1Data_ENUMS.h"
#include "M1Data_FM1CharacterUIData.h"
#include "M1Data_FM1CommonGaugeData.h"
#include "BasicTypes_TArray.h"
#include "M1Data_FM1RewardType.h"
#include "BasicTypes_FString.h"
#include "M1Data_FM1CharacterData.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1Data
{
    /**
     * ScriptStruct /Script/M1Data.M1PlayerData
     * Size -> 0x0108 (FullSize[0x01E0] - InheritedSize[0x00D8])
     */
    struct FM1PlayerData : public M1Data::FM1CharacterData
    {
    public:
        BasicTypes::FName                                            Name;                                                    //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FName                                            CharacterConceptStringId;                                //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        M1Data::EM1CharacterGender                                   CharacterGender;                                         //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        M1Data::EM1CharacterGrade                                    CharacterGrade;                                          //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x6];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1Data::FM1CharacterUIData                                   UIData;                                                  //  Edit, NativeAccessSpecifierPublic
        M1Data::FM1CommonGaugeData                                   CommonGauge;                                             //  Edit, NativeAccessSpecifierPublic
        int32_t                                                      MasteryLevel;                                            //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         IsTemporary;                                             //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<M1Data::FM1RewardType>                    SellRewards;                                             //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::FString                                          GroupId;                                                 //  Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
