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
#include "M1Data_FM1ScaledInteger.h"
#include "PerkAbilityBase_UPerkAbilityBase_C.h"
#include "M1_FM1FXParam.h"
#include "M1_FM1CalcDamageInfo.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::PerkAbility_2_ThunderCage
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Weapon/Ability/Perk/PerkAbility_2_ThunderCage.PerkAbility_2_ThunderCage_C
     * Size -> 0x0020 (FullSize[0x02E8] - InheritedSize[0x02C8])
     */
    class UPerkAbility_2_ThunderCage_C : public PerkAbilityBase::UPerkAbilityBase_C
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        double                                                       DamageChance;                                            //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        double                                                       Radius;                                                  //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        M1Data::FM1ScaledInteger                                     WeaponDamage;                                            //  Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

    public:
        void MakeDamageFxParam(M1::FM1FXParam* M1FXParam);
        void TryAOEDamageChance(bool* bReturn);
        void OnEvent_21E73C724FB6B451418F938FB3312CF6(const M1::FM1CalcDamageInfo& DamageInfo);
        void BP_OnActivated();
        void ExecuteUbergraph_PerkAbility_2_ThunderCage(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Weapon/Ability/Perk/PerkAbility_2_ThunderCage.PerkAbility_2_ThunderCage_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
