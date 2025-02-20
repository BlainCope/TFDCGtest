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
#include "CoreUObject_FGuid.h"
#include "ControlRig_FControlRigSequenceObjectReferences.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::ControlRig
{
    /**
     * ScriptStruct /Script/ControlRig.ControlRigSequenceObjectReferenceMap
     * Size -> 0x0020
     */
    struct FControlRigSequenceObjectReferenceMap
    {
    public:
        BasicTypes::TArray<CoreUObject::FGuid>                       BindingIds;                                              //  ZeroConstructor, NativeAccessSpecifierPrivate
        BasicTypes::TArray<ControlRig::FControlRigSequenceObjectReferences> References;                                              //  ZeroConstructor, NativeAccessSpecifierPrivate
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
