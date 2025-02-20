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
#include "MetasoundFrontend_ENUMS.h"
#include "MetasoundFrontend_FMetasoundFrontendVertex.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MetasoundFrontend
{
    /**
     * ScriptStruct /Script/MetasoundFrontend.MetasoundFrontendClassVertex
     * Size -> 0x0014 (FullSize[0x0034] - InheritedSize[0x0020])
     */
    struct FMetasoundFrontendClassVertex : public MetasoundFrontend::FMetasoundFrontendVertex
    {
    public:
        CoreUObject::FGuid                                           NodeID;                                                  //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        MetasoundFrontend::EMetasoundFrontendVertexAccessType        AccessType;                                              //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
