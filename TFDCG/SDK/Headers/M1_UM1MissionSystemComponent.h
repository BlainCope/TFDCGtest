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
#include "BasicTypes_TSet.h"
#include "M1_FM1AutoStartMission.h"
#include "Engine_UActorComponent.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class AM1MissionActor; };
namespace CG::M1 { class UM1DataMission; };
namespace CG::M1 { class UM1ModifierBase; };
namespace CG::M1 { class UM1StateMachine; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1MissionSystemComponent
     * Size -> 0x0160 (FullSize[0x0208] - InheritedSize[0x00A8])
     */
    class UM1MissionSystemComponent : public Engine::UActorComponent
    {
    public:
        BasicTypes::TArray<M1::AM1MissionActor*>                     AvailableMissions;                                       //  ZeroConstructor, Transient, NativeAccessSpecifierPrivate
        M1::AM1MissionActor*                                         ClosestMissionToStartPoint;                              //  ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1::UM1DataMission*                                          MissionDataToStart;                                      //  ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        BasicTypes::TSet<M1::AM1MissionActor*>                       ActivatedMissions;                                       //  Transient, NativeAccessSpecifierPrivate
        BasicTypes::TArray<M1::UM1ModifierBase*>                     MissionModifiers;                                        //  ZeroConstructor, Transient, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0001[0x10];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1::FM1AutoStartMission                                      AutoStartMissionInfo;                                    //  Transient, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0002[0x10];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1::UM1StateMachine*                                         MissionStateMachine;                                     //  ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1MissionSystemComponent");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
