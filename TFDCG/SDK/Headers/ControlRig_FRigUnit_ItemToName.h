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
#include "ControlRig_FRigElementKey.h"
#include "BasicTypes_FName.h"
#include "ControlRig_FRigUnit_ItemBase.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::ControlRig
{
    /**
     * ScriptStruct /Script/ControlRig.RigUnit_ItemToName
     * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
     */
    struct FRigUnit_ItemToName : public ControlRig::FRigUnit_ItemBase
    {
    public:
        ControlRig::FRigElementKey                                   Value;                                                   //  Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FName                                            Result;                                                  //  BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
