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
#include "BasicTypes_TWeakObjectPtr.h"
#include "BasicTypes_TArray.h"
#include "ReplicationGraph_FLastLocationGatherInfo.h"
#include "Engine_UReplicationConnectionDriver.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UNetConnection; };
namespace CG::ReplicationGraph { class AReplicationGraphDebugActor; };
namespace CG::ReplicationGraph { class UReplicationGraphNode; };
namespace CG::ReplicationGraph { class UReplicationGraphNode_TearOff_ForConnection; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::ReplicationGraph
{
    /**
     * Class /Script/ReplicationGraph.NetReplicationGraphConnection
     * Size -> 0x0348 (FullSize[0x0370] - InheritedSize[0x0028])
     */
    class UNetReplicationGraphConnection : public Engine::UReplicationConnectionDriver
    {
    public:
        Engine::UNetConnection*                                      NetConnection;                                           //  ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x144];                                 //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TWeakObjectPtr<ReplicationGraph::AReplicationGraphDebugActor> DebugActor;                                              //  ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<ReplicationGraph::FLastLocationGatherInfo> LastGatherLocations;                                     //  ZeroConstructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0xA8];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<ReplicationGraph::UReplicationGraphNode*> ConnectionGraphNodes;                                    //  ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate
        ReplicationGraph::UReplicationGraphNode_TearOff_ForConnection* TearOffNode;                                             //  ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0003[0x120];                                 //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/ReplicationGraph.NetReplicationGraphConnection");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
