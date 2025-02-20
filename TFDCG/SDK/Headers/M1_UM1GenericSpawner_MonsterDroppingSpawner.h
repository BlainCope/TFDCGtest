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
#include "BasicTypes_TSoftClassPtr.h"
#include "M1_AM1MissionActorSpawner_CharacterDropship.h"
#include "M1_FM1CarryingCharacterLaunchInfo.h"
#include "M1_UM1GenericSpawner_Monster.h"

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
     * Class /Script/M1.M1GenericSpawner_MonsterDroppingSpawner
     * Size -> 0x0038 (FullSize[0x0178] - InheritedSize[0x0140])
     */
    class UM1GenericSpawner_MonsterDroppingSpawner : public M1::UM1GenericSpawner_Monster
    {
    public:
        BasicTypes::TSoftClassPtr<M1::AM1MissionActorSpawner_CharacterDropship> ActorSpawnerClass;                                       //  ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0xC];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        M1::FM1CarryingCharacterLaunchInfo                           LaunchInfo;                                              //  Edit, NoDestructor, NativeAccessSpecifierPrivate

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1GenericSpawner_MonsterDroppingSpawner");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
