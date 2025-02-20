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
#include "M1_FM1OptionaEventsForPhase.h"
#include "M1_UM1SpawnedActorTrait.h"
#include "BasicTypes_FName.h"

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
     * Class /Script/M1.M1SpawnedActorTrait_OnMonsterPhase
     * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
     */
    class UM1SpawnedActorTrait_OnMonsterPhase : public M1::UM1SpawnedActorTrait
    {
    public:
        BasicTypes::TArray<M1::FM1OptionaEventsForPhase>             OptionalEventNameForPhase;                               //  Edit, ZeroConstructor, NativeAccessSpecifierPrivate

    public:
        BasicTypes::TArray<BasicTypes::FName> GetOptionalEventNames();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1SpawnedActorTrait_OnMonsterPhase");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
