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
#include "ActorSequence_FActorSequenceObjectReferenceMap.h"
#include "MovieScene_UMovieSceneSequence.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::MovieScene { class UMovieScene; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::ActorSequence
{
    /**
     * Class /Script/ActorSequence.ActorSequence
     * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
     */
    class UActorSequence : public MovieScene::UMovieSceneSequence
    {
    public:
        MovieScene::UMovieScene*                                     MovieScene;                                              //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        ActorSequence::FActorSequenceObjectReferenceMap              ObjectReferences;                                        //  NativeAccessSpecifierPrivate

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/ActorSequence.ActorSequence");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
