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
#include "SequencerScripting_UMovieSceneScriptingChannel.h"
#include "Engine_ENUMS.h"
#include "BasicTypes_TArray.h"
#include "SequencerScripting_FSequencerScriptingRange.h"
#include "CoreUObject_FFrameRate.h"
#include "CoreUObject_FFrameNumber.h"
#include "SequencerScripting_ENUMS.h"
#include "MovieScene_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::SequencerScripting { class UMovieSceneScriptingKey; };
namespace CG::SequencerScripting { class UMovieSceneScriptingFloatKey; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::SequencerScripting
{
    /**
     * Class /Script/SequencerScripting.MovieSceneScriptingFloatChannel
     * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
     */
    class UMovieSceneScriptingFloatChannel : public SequencerScripting::UMovieSceneScriptingChannel
    {
    public:
        uint8_t                                                      UnknownData_0000[0x50];                                  //  MISSED OFFSET (PADDING)

    public:
        void SetPreInfinityExtrapolation(Engine::ERichCurveExtrapolation InExtrapolation);
        void SetPostInfinityExtrapolation(Engine::ERichCurveExtrapolation InExtrapolation);
        void SetDefault(float InDefaultValue);
        void RemoveKey(SequencerScripting::UMovieSceneScriptingKey* Key);
        void RemoveDefault();
        bool HasDefault();
        Engine::ERichCurveExtrapolation GetPreInfinityExtrapolation();
        Engine::ERichCurveExtrapolation GetPostInfinityExtrapolation();
        int32_t GetNumKeys();
        BasicTypes::TArray<SequencerScripting::UMovieSceneScriptingKey*> GetKeys();
        float GetDefault();
        BasicTypes::TArray<float> EvaluateKeys(const SequencerScripting::FSequencerScriptingRange& Range, const CoreUObject::FFrameRate& FrameRate);
        SequencerScripting::FSequencerScriptingRange ComputeEffectiveRange();
        SequencerScripting::UMovieSceneScriptingFloatKey* AddKey(const CoreUObject::FFrameNumber& InTime, float NewValue, float SubFrame, SequencerScripting::ESequenceTimeUnit TimeUnit, MovieScene::EMovieSceneKeyInterpolation InInterpolation);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/SequencerScripting.MovieSceneScriptingFloatChannel");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
