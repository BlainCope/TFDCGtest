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
#include "Engine_AActor.h"
#include "BasicTypes_FString.h"
#include "CoreUObject_FVector.h"
#include "BasicTypes_TArray.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::ReplicationGraph { class UReplicationGraph; };
namespace CG::ReplicationGraph { class UNetReplicationGraphConnection; };
namespace CG::CoreUObject { class UObject; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::ReplicationGraph
{
    /**
     * Class /Script/ReplicationGraph.ReplicationGraphDebugActor
     * Size -> 0x0010 (FullSize[0x0258] - InheritedSize[0x0248])
     */
    class AReplicationGraphDebugActor : public Engine::AActor
    {
    public:
        ReplicationGraph::UReplicationGraph*                         ReplicationGraph;                                        //  ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        ReplicationGraph::UNetReplicationGraphConnection*            ConnectionManager;                                       //  ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

    public:
        void ServerStopDebugging();
        void ServerStartDebugging();
        void ServerSetPeriodFrameForClass(CoreUObject::UObject* Class, int32_t PeriodFrame);
        void ServerSetCullDistanceForClass(CoreUObject::UObject* Class, float CullDistance);
        void ServerSetConditionalActorBreakpoint(Engine::AActor* Actor);
        void ServerPrintCullDistances();
        void ServerPrintAllActorInfo(const BasicTypes::FString& Str);
        void ServerCellInfo();
        void ClientCellInfo(const CoreUObject::FVector& CellLocation, const CoreUObject::FVector& CellExtent, BasicTypes::TArray<Engine::AActor*> Actors);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/ReplicationGraph.ReplicationGraphDebugActor");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
