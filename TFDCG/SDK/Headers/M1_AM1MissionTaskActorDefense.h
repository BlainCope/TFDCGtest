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
#include "M1_FM1TaskDefenseInfo.h"
#include "M1_AM1MissionTaskActor.h"
#include "M1_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class AM1MissionTargetActor; };
namespace CG::M1 { class AM1RuleBasedActorSpawner; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1MissionTaskActorDefense
     * Size -> 0x0040 (FullSize[0x0698] - InheritedSize[0x0658])
     */
    class AM1MissionTaskActorDefense : public M1::AM1MissionTaskActor
    {
    public:
        int32_t                                                      CurrentPhase;                                            //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<M1::AM1MissionTargetActor*>               DefenseTargetActors;                                     //  ZeroConstructor, Transient, NativeAccessSpecifierPrivate
        float                                                        ElapsedTimeSinceStarted;                                 //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0001[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1::FM1TaskDefenseInfo                                       DefenseInfo;                                             //  Net, Transient, NativeAccessSpecifierPrivate
        M1::AM1RuleBasedActorSpawner*                                RuleBasedActorSpawner;                                   //  ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

    public:
        void OnMissionTargetDeactivated(M1::AM1MissionTargetActor* InTarget, M1::EM1ResetType InResetType);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1MissionTaskActorDefense");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
