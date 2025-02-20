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
#include "ReplicationGraph_FTearOffActorInfo.h"
#include "ReplicationGraph_UReplicationGraphNode.h"

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
     * Class /Script/ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
     * Size -> 0x0020 (FullSize[0x0070] - InheritedSize[0x0050])
     */
    class UReplicationGraphNode_TearOff_ForConnection : public ReplicationGraph::UReplicationGraphNode
    {
    public:
        BasicTypes::TArray<ReplicationGraph::FTearOffActorInfo>      TearOffActors;                                           //  ZeroConstructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x10];                                  //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
