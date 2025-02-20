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
#include "CoreUObject_FGuid.h"
#include "Engine_FEdGraphPinType.h"
#include "BasicTypes_FString.h"
#include "BasicTypes_FText.h"
#include "CoreUObject_ENUMS.h"
#include "BasicTypes_TArray.h"
#include "Engine_FBPVariableMetaDataEntry.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * ScriptStruct /Script/Engine.BPVariableDescription
     * Size -> 0x00D0
     */
    struct FBPVariableDescription
    {
    public:
        BasicTypes::FName                                            VarName;                                                 //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FGuid                                           VarGuid;                                                 //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::FEdGraphPinType                                      VarType;                                                 //  Edit, NoDestructor, NativeAccessSpecifierPublic
        BasicTypes::FString                                          FriendlyName;                                            //  Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FText                                            Category;                                                //  Edit, NativeAccessSpecifierPublic
        uint64_t                                                     PropertyFlags;                                           //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FName                                            RepNotifyFunc;                                           //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::ELifetimeCondition                              ReplicationCondition;                                    //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<Engine::FBPVariableMetaDataEntry>         MetaDataArray;                                           //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::FString                                          DefaultValue;                                            //  Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
