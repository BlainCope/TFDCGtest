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
#include "M1_UM1MissionTaskService.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class AM1MissionTargetInteraction; };
namespace CG::M1 { class AM1PlayerControllerInGame; };
namespace CG::M1 { class AM1MissionTargetExplosion; };
namespace CG::M1 { class AM1Player; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1MissionTaskServiceInteraction
     * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
     */
    class UM1MissionTaskServiceInteraction : public M1::UM1MissionTaskService
    {
    public:
        void ServerRequestMissionTargetBeginInteraction(M1::AM1MissionTargetInteraction* InActor, M1::AM1PlayerControllerInGame* InAcceptor);
        void ServerInteractedExplosionTarget(M1::AM1MissionTargetExplosion* InExplosionTarget, M1::AM1Player* InAcceptPlayer);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1MissionTaskServiceInteraction");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
