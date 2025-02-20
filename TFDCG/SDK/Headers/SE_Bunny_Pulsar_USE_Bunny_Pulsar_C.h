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
#include "CoreUObject_FVector.h"
#include "M1_UM1StatusEffect.h"
#include "GameplayTags_FGameplayTag.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::SE_Bunny_Pulsar
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Gameplay/PC/Bunny/Status/SE_Bunny_Pulsar.SE_Bunny_Pulsar_C
     * Size -> 0x0038 (FullSize[0x0370] - InheritedSize[0x0338])
     */
    class USE_Bunny_Pulsar_C : public M1::UM1StatusEffect
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        double                                                       Dur_Duration;                                            //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        double                                                       AccumulatedMovementDistance;                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        double                                                       AOE_Radius;                                              //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        double                                                       Distance;                                                //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         bEvading;                                                //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FVector                                         PrevLocation;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        void TickAccumulateDistance(double DeltaSeconds, bool* bApplyEffect);
        void Auth_Explode(bool bIsActivation);
        void OnUpdate_0F9E177B46800FE31843C08B66F77852(float DeltaTime);
        void OnEvent_95E10CBB482C72537A93E39DD928EE25(const GameplayTags::FGameplayTag& InTag, bool InAdded);
        void OnEvent_6752D6AC4B631E4A1F9135B3CFBF327A(const GameplayTags::FGameplayTag& InTag, bool InAdded);
        void BP_OnActivated();
        void BP_OnDeactivated(bool bCancelled);
        void ExecuteUbergraph_SE_Bunny_Pulsar(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Gameplay/PC/Bunny/Status/SE_Bunny_Pulsar.SE_Bunny_Pulsar_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
