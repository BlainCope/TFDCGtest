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
#include "MovieScene_FMovieSceneSequencePlaybackSettings.h"
#include "Engine_UActorComponent.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::ActorSequence { class UActorSequence; };
namespace CG::ActorSequence { class UActorSequencePlayer; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::ActorSequence
{
    /**
     * Class /Script/ActorSequence.ActorSequenceComponent
     * Size -> 0x0038 (FullSize[0x00E0] - InheritedSize[0x00A8])
     */
    class UActorSequenceComponent : public Engine::UActorComponent
    {
    public:
        MovieScene::FMovieSceneSequencePlaybackSettings              PlaybackSettings;                                        //  Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        ActorSequence::UActorSequence*                               Sequence;                                                //  Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        ActorSequence::UActorSequencePlayer*                         SequencePlayer;                                          //  BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

    public:
        void StopSequence();
        void PlaySequence();
        void PauseSequence();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/ActorSequence.ActorSequenceComponent");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
