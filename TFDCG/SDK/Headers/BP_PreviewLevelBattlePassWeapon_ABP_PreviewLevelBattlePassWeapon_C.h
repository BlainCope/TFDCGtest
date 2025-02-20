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
#include "Engine_FPointerToUberGraphFrame.h"
#include "M1_AM1ActorPreviewLevel.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class USceneComponent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BP_PreviewLevelBattlePassWeapon
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/CharacterPreview/BP_PreviewLevelBattlePassWeapon.BP_PreviewLevelBattlePassWeapon_C
     * Size -> 0x0010 (FullSize[0x02F8] - InheritedSize[0x02E8])
     */
    class ABP_PreviewLevelBattlePassWeapon_C : public M1::AM1ActorPreviewLevel
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::USceneComponent*                                     DefaultSceneRoot;                                        //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

    public:
        void ReceiveBeginPlay();
        void ExecuteUbergraph_BP_PreviewLevelBattlePassWeapon(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/CharacterPreview/BP_PreviewLevelBattlePassWeapon.BP_PreviewLevelBattlePassWeapon_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
