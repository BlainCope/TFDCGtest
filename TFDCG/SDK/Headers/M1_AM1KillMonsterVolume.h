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
#include "M1_FM1PlayerRespawnVolumeTimerHandlePair.h"
#include "M1_AM1OutOfPlayableAreaVolume.h"

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
     * Class /Script/M1.M1KillMonsterVolume
     * Size -> 0x0018 (FullSize[0x02E0] - InheritedSize[0x02C8])
     */
    class AM1KillMonsterVolume : public M1::AM1OutOfPlayableAreaVolume
    {
    public:
        M1::FM1PlayerRespawnVolumeTimerHandlePair                    RetryMonsterKillTimerHandle;                             //  Transient, NativeAccessSpecifierPrivate

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1KillMonsterVolume");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
