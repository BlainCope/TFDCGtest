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
#include "CoreUObject_FGuid.h"
#include "BasicTypes_FName.h"
#include "MetasoundFrontend_FMetasoundFrontendNodeInterface.h"
#include "BasicTypes_TArray.h"
#include "MetasoundFrontend_FMetasoundFrontendVertexLiteral.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MetasoundFrontend
{
    /**
     * ScriptStruct /Script/MetasoundFrontend.MetasoundFrontendNode
     * Size -> 0x0068
     */
    struct FMetasoundFrontendNode
    {
    public:
        CoreUObject::FGuid                                           ID;                                                      //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        CoreUObject::FGuid                                           ClassID;                                                 //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FName                                            Name;                                                    //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        MetasoundFrontend::FMetasoundFrontendNodeInterface           Interface;                                               //  NativeAccessSpecifierPublic
        BasicTypes::TArray<MetasoundFrontend::FMetasoundFrontendVertexLiteral> InputLiterals;                                           //  ZeroConstructor, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
