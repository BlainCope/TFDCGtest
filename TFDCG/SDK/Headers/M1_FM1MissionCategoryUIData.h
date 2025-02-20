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
#include "BasicTypes_TArray.h"
#include "CoreUObject_FSoftObjectPath.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * ScriptStruct /Script/M1.M1MissionCategoryUIData
     * Size -> 0x0048
     */
    struct FM1MissionCategoryUIData
    {
    public:
        BasicTypes::FName                                            StringId;                                                //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<CoreUObject::FSoftObjectPath>             NewMissionIconPaths;                                     //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<CoreUObject::FSoftObjectPath>             PlayableMissionIconPaths;                                //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<CoreUObject::FSoftObjectPath>             DimmedMissionIconPaths;                                  //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<CoreUObject::FSoftObjectPath>             HardMissionIconPaths;                                    //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
