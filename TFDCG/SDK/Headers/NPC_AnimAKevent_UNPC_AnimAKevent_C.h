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
#include "BasicTypes_FString.h"
#include "CoreUObject_FVector.h"
#include "Engine_UAnimNotify.h"
#include "Engine_FAnimNotifyEventReference.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::AkAudio { class UAkAudioEvent; };
namespace CG::Engine { class USkeletalMeshComponent; };
namespace CG::Engine { class UAnimSequenceBase; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::NPC_AnimAKevent
{
    /**
     * BlueprintGeneratedClass /Game/WwiseAudio/AKAudioComponent/NPC_AnimAKevent.NPC_AnimAKevent_C
     * Size -> 0x0034 (FullSize[0x006C] - InheritedSize[0x0038])
     */
    class UNPC_AnimAKevent_C : public Engine::UAnimNotify
    {
    public:
        bool                                                         Debug;                                                   //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        AkAudio::UAkAudioEvent*                                      Event;                                                   //  Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
        bool                                                         Follow;                                                  //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0001[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::FString                                          AttachName;                                              //  Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
        CoreUObject::FVector                                         Offset;                                                  //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        bool Received_Notify(Engine::USkeletalMeshComponent* MeshComp, Engine::UAnimSequenceBase* Animation, const Engine::FAnimNotifyEventReference& EventReference);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/WwiseAudio/AKAudioComponent/NPC_AnimAKevent.NPC_AnimAKevent_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
