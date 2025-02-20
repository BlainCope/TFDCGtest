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
#include "BasicTypes_TArray.h"
#include "MetasoundFrontend_FMetasoundFrontendEdgeStyleLiteralColorPair.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MetasoundFrontend
{
    /**
     * ScriptStruct /Script/MetasoundFrontend.MetasoundFrontendEdgeStyle
     * Size -> 0x0028
     */
    struct FMetasoundFrontendEdgeStyle
    {
    public:
        CoreUObject::FGuid                                           NodeID;                                                  //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FName                                            OutputName;                                              //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<MetasoundFrontend::FMetasoundFrontendEdgeStyleLiteralColorPair> LiteralColorPairs;                                       //  ZeroConstructor, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
