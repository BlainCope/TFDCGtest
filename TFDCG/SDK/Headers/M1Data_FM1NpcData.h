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
#include "BasicTypes_FName.h"
#include "CoreUObject_FSoftClassPath.h"
#include "M1Data_ENUMS.h"
#include "CoreUObject_FSoftObjectPath.h"
#include "BasicTypes_TArray.h"
#include "M1Data_FM1NpcService.h"
#include "M1Data_FM1NpcSpawnParam.h"
#include "M1Data_FM1NpcDespawnParam.h"
#include "M1Data_FM1NpcSpawnInfo.h"
#include "Engine_FTableRowBase.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1Data
{
    /**
     * ScriptStruct /Script/M1Data.M1NpcData
     * Size -> 0x0100 (FullSize[0x0108] - InheritedSize[0x0008])
     */
    struct FM1NpcData : public Engine::FTableRowBase
    {
    public:
        M1Data::FM1TemplateId                                        TemplateId;                                              //  Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FName                                            StringIdName;                                            //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FName                                            StringIdButtonName;                                      //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FSoftClassPath                                  BlueprintClass;                                          //  Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        M1Data::EM1NpcSpawnType                                      SpawnType;                                               //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        NameTagOffset;                                           //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FSoftObjectPath                                 HudIcon;                                                 //  Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FSoftObjectPath                                 MapIcon;                                                 //  Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         ShowMapIcon;                                             //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         SkipNpcMenu;                                             //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x6];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<M1Data::FM1NpcService>                    Services;                                                //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<M1Data::FM1NpcSpawnParam>                 SpawnParams;                                             //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<M1Data::FM1NpcDespawnParam>               DespawnParams;                                           //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        bool                                                         Collision;                                               //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0003[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1Data::FM1NpcSpawnInfo                                      SpawnInfo;                                               //  Edit, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
