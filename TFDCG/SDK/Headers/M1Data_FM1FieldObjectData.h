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
#include "M1Data_ENUMS.h"
#include "BasicTypes_TArray.h"
#include "BasicTypes_FString.h"
#include "M1Data_FM1FieldObjectActivateCondition.h"
#include "M1Data_FM1DropItemLink.h"
#include "M1Data_FM1DifficultiesDropItem.h"
#include "CoreUObject_FSoftClassPath.h"
#include "Engine_FTableRowBase.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1Data
{
    /**
     * ScriptStruct /Script/M1Data.M1FieldObjectData
     * Size -> 0x0090 (FullSize[0x0098] - InheritedSize[0x0008])
     */
    struct FM1FieldObjectData : public Engine::FTableRowBase
    {
    public:
        M1Data::FM1TemplateId                                        TemplateId;                                              //  Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FName                                            StringId;                                                //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        M1Data::EM1FieldObjectType                                   ObjectType;                                              //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        M1Data::EM1EciveActionType                                   EciveType;                                               //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        M1Data::EM1FieldObjectActivateType                           ActivateType;                                            //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x1];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<BasicTypes::FString>                      ActivateParams;                                          //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<M1Data::FM1FieldObjectActivateCondition>  ActivateConditions;                                      //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        M1Data::FM1DropItemLink                                      NoneDifficultyDropItem;                                  //  Edit, NativeAccessSpecifierPublic
        BasicTypes::TArray<M1Data::FM1DifficultiesDropItem>          DifficultiesDropItem;                                    //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        CoreUObject::FSoftClassPath                                  BlueprintClass;                                          //  Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
