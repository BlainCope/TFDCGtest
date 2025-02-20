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
#include "M1_AM1CanTickOnClientActor.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Niagara { class UNiagaraComponent; };
namespace CG::Engine { class UStaticMeshComponent; };
namespace CG::Engine { class USceneComponent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BP_Vulgus_AnchorStone_MoveBox01_PCS
{
    /**
     * BlueprintGeneratedClass /Game/BG/Environment/Vulgus/BP_Vulgus_AnchorStone_MoveBox01_PCS.BP_Vulgus_AnchorStone_MoveBox01_PCS_C
     * Size -> 0x00DB (FullSize[0x0323] - InheritedSize[0x0248])
     */
    class ABP_Vulgus_AnchorStone_MoveBox01_PCS_C : public M1::AM1CanTickOnClientActor
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Niagara::UNiagaraComponent*                                  NS_LightFlare_01_BOT4;                                   //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Niagara::UNiagaraComponent*                                  NS_LightFlare_01_BOT3;                                   //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Niagara::UNiagaraComponent*                                  NS_LightFlare_01_BOT2;                                   //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Niagara::UNiagaraComponent*                                  NS_LightFlare_01_BOT1;                                   //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Niagara::UNiagaraComponent*                                  NS_LightFlare_01_MID4;                                   //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Niagara::UNiagaraComponent*                                  NS_LightFlare_01_MID3;                                   //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Niagara::UNiagaraComponent*                                  NS_LightFlare_01_MID1;                                   //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Niagara::UNiagaraComponent*                                  NS_LightFlare_01_TOP4;                                   //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Niagara::UNiagaraComponent*                                  NS_LightFlare_01_TOP3;                                   //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Niagara::UNiagaraComponent*                                  NS_LightFlare_01_MID2;                                   //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Niagara::UNiagaraComponent*                                  NS_LightFlare_01_TOP1;                                   //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Niagara::UNiagaraComponent*                                  NS_LightFlare_01_TOP2;                                   //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                SM_Vulgus_MoveBox01_PCS12;                               //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                SM_Vulgus_MoveBox01_PCS11;                               //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                SM_Vulgus_MoveBox01_PCS10;                               //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                SM_Vulgus_MoveBox01_PCS09;                               //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                SM_Vulgus_MoveBox01_PCS08;                               //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                SM_Vulgus_MoveBox01_PCS07;                               //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                SM_Vulgus_MoveBox01_PCS06;                               //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                SM_Vulgus_MoveBox01_PCS05;                               //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                SM_Vulgus_MoveBox01_PCS04;                               //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                SM_Vulgus_MoveBox01_PCS03;                               //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                SM_Vulgus_MoveBox01_PCS02;                               //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                SM_Vulgus_MoveBox01_PCS;                                 //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     SharedRoot;                                              //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        double                                                       EmissiveBlightnessMAX;                                   //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         Top;                                                     //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         Mid;                                                     //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         BOT;                                                     //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        void ReceiveBeginPlay();
        void ExecuteUbergraph_BP_Vulgus_AnchorStone_MoveBox01_PCS(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/BG/Environment/Vulgus/BP_Vulgus_AnchorStone_MoveBox01_PCS.BP_Vulgus_AnchorStone_MoveBox01_PCS_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
