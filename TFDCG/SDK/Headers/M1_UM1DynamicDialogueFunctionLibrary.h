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
#include "Engine_UBlueprintFunctionLibrary.h"
#include "BasicTypes_FString.h"
#include "M1_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UObject; };
namespace CG::Engine { class APlayerController; };
namespace CG::M1 { class AM1Character; };
namespace CG::M1 { class AM1Player; };
namespace CG::M1 { class AM1Monster; };
namespace CG::Engine { class AActor; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1DynamicDialogueFunctionLibrary
     * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
     */
    class UM1DynamicDialogueFunctionLibrary : public Engine::UBlueprintFunctionLibrary
    {
    public:
        BasicTypes::FString STATIC_GetPersistentLevelName(CoreUObject::UObject* WorldContextObject);
        Engine::APlayerController* STATIC_GetLocalPlayerController(CoreUObject::UObject* WorldContextObject);
        M1::AM1Character* STATIC_GetEnemyOfLastAttack(M1::AM1Character* Owner);
        M1::AM1Monster* STATIC_GetDeboneTarget(M1::AM1Player* DebonePlayer);
        M1::AM1Player* STATIC_FindClosestPlayerInRadius(Engine::AActor* SourcePlayer, float Radius);
        BasicTypes::FString STATIC_ConvertDynamicDialogueStimulusToString(M1::EM1DynamicDialogueStimulus Stimulus);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1DynamicDialogueFunctionLibrary");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
