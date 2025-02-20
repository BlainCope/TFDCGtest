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
#include "ReplicationGraph_UReplicationGraphNode_ActorList.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::ReplicationGraph
{
    /**
     * Class /Script/ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode
     * Size -> 0x0080 (FullSize[0x0150] - InheritedSize[0x00D0])
     */
    class UReplicationGraphNode_ConnectionDormancyNode : public ReplicationGraph::UReplicationGraphNode_ActorList
    {
    public:
        uint8_t                                                      UnknownData_0000[0x80];                                  //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
