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
#include "ControlRig_FRigUnit_SlideChain_WorkData.h"
#include "ControlRig_FRigUnit_HighlevelBaseMutable.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::ControlRig
{
    /**
     * ScriptStruct /Script/ControlRig.RigUnit_SlideChain
     * Size -> 0x0060 (FullSize[0x0160] - InheritedSize[0x0100])
     */
    struct FRigUnit_SlideChain : public ControlRig::FRigUnit_HighlevelBaseMutable
    {
    public:
        BasicTypes::FName                                            StartBone;                                               //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FName                                            EndBone;                                                 //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        SlideAmount;                                             //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bPropagateToChildren;                                    //  Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        ControlRig::FRigUnit_SlideChain_WorkData                     WorkData;                                                //  Transient, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
