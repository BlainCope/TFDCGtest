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
#include "M1_UM1UIWidget.h"
#include "CoreUObject_FVector2D.h"
#include "GameplayTags_FGameplayTag.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UMG { class UTextBlock; };
namespace CG::Engine { class UTexture2D; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UIGameStatusEffectIcon
     * Size -> 0x0008 (FullSize[0x0710] - InheritedSize[0x0708])
     */
    class UM1UIGameStatusEffectIcon : public M1::UM1UIWidget
    {
    public:
        UMG::UTextBlock*                                             TB_CheatString;                                          //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

    public:
        void BP_UpdateStackCount(int32_t InCount);
        void BP_UpdateIconSize(const CoreUObject::FVector2D& InSize);
        void BP_UpdateIcon(Engine::UTexture2D* Icon, const GameplayTags::FGameplayTag& InStatusEffectIdTag, bool InbInfiniteDuration);
        void BP_UpdateElapsedProgressSeconds(float InSecond);
        void BP_UpdateElapsedProgressRatio(float InRatio);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIGameStatusEffectIcon");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
