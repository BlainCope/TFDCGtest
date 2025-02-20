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
#include "BasicTypes_FString.h"
#include "M1Data_ENUMS.h"
#include "BasicTypes_FName.h"
#include "CoreUObject_FSoftClassPath.h"
#include "CoreUObject_FSoftObjectPath.h"
#include "BasicTypes_TArray.h"
#include "M1Data_FM1CharacterLevelInfo.h"
#include "M1Data_FM1StatValuePair.h"
#include "M1Data_FM1SkillDataLink.h"
#include "Engine_FTableRowBase.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1Data
{
    /**
     * ScriptStruct /Script/M1Data.M1CharacterData
     * Size -> 0x00D0 (FullSize[0x00D8] - InheritedSize[0x0008])
     */
    struct FM1CharacterData : public Engine::FTableRowBase
    {
    public:
        M1Data::FM1TemplateId                                        TemplateId;                                              //  Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::FString                                          StringId;                                                //  Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        M1Data::EM1DamageAdvantageType                               AdvantageType;                                           //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::FName                                            HitPoint;                                                //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FSoftClassPath                                  BlueprintClass;                                          //  Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FSoftObjectPath                                 LegacyDataAsset;                                         //  Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<M1Data::FM1CharacterLevelInfo>            Lv;                                                      //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<M1Data::EM1StatType>                      UnusedGaugeStats;                                        //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<M1Data::FM1StatValuePair>                 Stats;                                                   //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<M1Data::FM1StatValuePair>                 BareHandStats;                                           //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<M1Data::FM1SkillDataLink>                 PassiveSkills;                                           //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<M1Data::FM1SkillDataLink>                 ActiveSkills;                                            //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        M1Data::EM1CharacterSize                                     CharacterSize;                                           //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0003[0x7];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
