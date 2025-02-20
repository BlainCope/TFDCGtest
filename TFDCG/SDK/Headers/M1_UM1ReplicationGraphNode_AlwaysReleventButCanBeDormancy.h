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
namespace CG::ReplicationGraph { class UReplicationGraphNode_DormancyNode; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1ReplicationGraphNode_AlwaysReleventButCanBeDormancy
     * Size -> 0x0008 (FullSize[0x00D8] - InheritedSize[0x00D0])
     */
    class UM1ReplicationGraphNode_AlwaysReleventButCanBeDormancy : public ReplicationGraph::UReplicationGraphNode_ActorList
    {
    public:
        ReplicationGraph::UReplicationGraphNode_DormancyNode*        DormancyNode;                                            //  ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1ReplicationGraphNode_AlwaysReleventButCanBeDormancy");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
