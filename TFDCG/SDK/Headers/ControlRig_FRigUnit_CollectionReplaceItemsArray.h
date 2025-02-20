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
#include "ControlRig_FRigElementKey.h"
#include "BasicTypes_FName.h"
#include "ControlRig_FRigUnit_CollectionBase.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::ControlRig
{
    /**
     * ScriptStruct /Script/ControlRig.RigUnit_CollectionReplaceItemsArray
     * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
     */
    struct FRigUnit_CollectionReplaceItemsArray : public ControlRig::FRigUnit_CollectionBase
    {
    public:
        BasicTypes::TArray<ControlRig::FRigElementKey>               Items;                                                   //  Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::FName                                            Old;                                                     //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FName                                            New;                                                     //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         RemoveInvalidItems;                                      //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bAllowDuplicates;                                        //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x6];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<ControlRig::FRigElementKey>               Result;                                                  //  BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
