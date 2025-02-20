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
#include "MovieScene_FMovieSceneRootEvaluationTemplateInstance.h"
#include "CoreUObject_UObject.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };
namespace CG::MovieScene { class UMovieSceneSequence; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::TemplateSequence
{
    /**
     * Class /Script/TemplateSequence.CameraAnimationSequencePlayer
     * Size -> 0x0368 (FullSize[0x0390] - InheritedSize[0x0028])
     */
    class UCameraAnimationSequencePlayer : public CoreUObject::UObject
    {
    public:
        uint8_t                                                      UnknownData_0000[0x270];                                 //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::UObject*                                        BoundObjectOverride;                                     //  ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        MovieScene::UMovieSceneSequence*                             Sequence;                                                //  ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        MovieScene::FMovieSceneRootEvaluationTemplateInstance        RootTemplateInstance;                                    //  Transient, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0001[0x60];                                  //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/TemplateSequence.CameraAnimationSequencePlayer");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
