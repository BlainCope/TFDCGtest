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
#include "ReplicationGraph_UReplicationGraphNode_AlwaysRelevant_ForConnection.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1ReplicationGraphNode_AlwaysRelevant_ForConnection
     * Size -> 0x0000 (FullSize[0x0140] - InheritedSize[0x0140])
     */
    class UM1ReplicationGraphNode_AlwaysRelevant_ForConnection : public ReplicationGraph::UReplicationGraphNode_AlwaysRelevant_ForConnection
    {
    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1ReplicationGraphNode_AlwaysRelevant_ForConnection");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
