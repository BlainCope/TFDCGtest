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
#include "Engine_FDataTableRowHandle.h"
#include "BasicTypes_TArray.h"
#include "M1_FM1MissionTaskLink.h"
#include "BasicTypes_TWeakObjectPtr.h"
#include "M1_FM1MissionProgressInfo.h"
#include "M1_FM1TMissionTimeLimiter.h"
#include "Engine_AActor.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1MissionPlayHistoryComponent; };
namespace CG::M1 { class UM1DataMission; };
namespace CG::M1 { class AM1SpawnPointNpcBase; };
namespace CG::CoreUObject { class UClass; };
namespace CG::M1 { class AM1MissionProgressContext; };
namespace CG::M1 { class UM1MissionResultEvaluator; };
namespace CG::M1 { class UM1MissionPostResultTask; };
namespace CG::M1 { class UM1MissionModifierManager; };
namespace CG::M1 { class UM1MissionExternalContextData; };
namespace CG::M1 { class UM1MissionControlComponent; };
namespace CG::M1 { class UM1CoolTimeComponent; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1MissionActor
     * Size -> 0x0268 (FullSize[0x04B0] - InheritedSize[0x0248])
     */
    class AM1MissionActor : public Engine::AActor
    {
    public:
        M1::UM1MissionPlayHistoryComponent*                          MissionPlayHistoryComponent;                             //  ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        Engine::FDataTableRowHandle                                  MissionRowHandle;                                        //  Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
        M1::UM1DataMission*                                          MissionData;                                             //  Edit, ZeroConstructor, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::AM1SpawnPointNpcBase*                                    SpawnPointNPC;                                           //  Edit, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::AM1SpawnPointNpcBase*                                    SpawnPointNPCClass;                                      //  Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        BasicTypes::TArray<M1::FM1MissionTaskLink>                   TaskLinks;                                               //  Edit, EditFixedSize, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0x58];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<BasicTypes::TWeakObjectPtr<Engine::AActor>> DeactivatedTasksWithWayPoints;                           //  Net, ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate
        bool                                                         bBeginTaskWhenActivated;                                 //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0001[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1::FM1MissionProgressInfo                                   ProgressInfo;                                            //  Net, Transient, RepNotify, ContainsInstancedReference, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0002[0xC8];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        bool                                                         bCanActivate;                                            //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0003[0x17];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1::FM1TMissionTimeLimiter                                   TimeLimiter;                                             //  Edit, Net, EditConst, NoDestructor, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0004[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1::AM1MissionProgressContext*                               ProgressContext;                                         //  ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::UM1MissionResultEvaluator*                               MissionResultEvaluator;                                  //  ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        BasicTypes::TArray<M1::UM1MissionPostResultTask*>            PostResultTasks;                                         //  ZeroConstructor, Transient, NativeAccessSpecifierPrivate
        M1::UM1MissionModifierManager*                               ModifierManager;                                         //  ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0005[0x10];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1::UM1MissionExternalContextData*                           OptionalExternalContextData;                             //  ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        BasicTypes::TArray<BasicTypes::TWeakObjectPtr<M1::UM1MissionControlComponent>> ExplicitGiveUpPlayers;                                   //  ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0006[0x48];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1::UM1CoolTimeComponent*                                    CoolTimeComponent;                                       //  Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

    public:
        void OnRep_ProgressInfo();
        Engine::FDataTableRowHandle GetMissionRowHandle();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1MissionActor");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
