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
#include "CoreUObject_FRotator.h"
#include "M1Actor_AM1StaticMeshActor.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class USkeletalMeshComponent; };
namespace CG::Engine { class UStaticMeshComponent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BP_CampTank
{
    /**
     * BlueprintGeneratedClass /Game/BG/BG_AnimBP/Camp/BP_CampTank.BP_CampTank_C
     * Size -> 0x00E8 (FullSize[0x0350] - InheritedSize[0x0268])
     */
    class ABP_CampTank_C : public M1Actor::AM1StaticMeshActor
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::USkeletalMeshComponent*                              Camp_Tank;                                               //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USkeletalMeshComponent*                              Camp_Tank_Core;                                          //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USkeletalMeshComponent*                              Camp_Cannon;                                             //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USkeletalMeshComponent*                              Camp_Tank_Cannon;                                        //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                SM_Camp_Tire00_PJY16;                                    //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                SM_Camp_Tire00_PJY15;                                    //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                SM_Camp_Tire00_PJY14;                                    //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                SM_Camp_Tire00_PJY13;                                    //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                SM_Camp_Tire00_PJY12;                                    //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                SM_Camp_Tire00_PJY11;                                    //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                SM_Camp_Tire00_PJY10;                                    //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                SM_Camp_Tire00_PJY9;                                     //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                SM_Camp_Tire00_PJY8;                                     //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                SM_Camp_Tire00_PJY7;                                     //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                SM_Camp_Tire00_PJY6;                                     //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                SM_Camp_Tire00_PJY5;                                     //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                SM_Camp_Tire00_PJY3;                                     //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                SM_Camp_Tire00_PJY2;                                     //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                SM_Camp_Tire00_PJY1;                                     //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                SM_Camp_Tire00_PJY;                                      //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                SM_Camp_Tank01_PJY;                                      //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                SM_Camp_Tank00_PJY;                                      //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        CoreUObject::FRotator                                        SM_Camp_Tank00;                                          //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
        CoreUObject::FRotator                                        SM_Camp_Tank01;                                          //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
        CoreUObject::FRotator                                        SK_Camp_Cannon;                                          //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
        bool                                                         bIsLeftSide;                                             //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::USkeletalMeshComponent*                              CampCannon;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

    public:
        void SetCampState(Engine::USkeletalMeshComponent* InMesh, bool bIsNewlyActivated);
        void SetCampAnimation(Engine::USkeletalMeshComponent* InMesh);
        void PlayCampAnimation(bool bIsNewlyActivated);
        void UserConstructionScript();
        void ReceiveBeginPlay();
        void ExecuteUbergraph_BP_CampTank(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/BG/BG_AnimBP/Camp/BP_CampTank.BP_CampTank_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
