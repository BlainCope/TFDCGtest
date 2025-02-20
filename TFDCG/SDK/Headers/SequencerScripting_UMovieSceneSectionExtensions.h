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
#include "Engine_UBlueprintFunctionLibrary.h"
#include "BasicTypes_TArray.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::MovieScene { class UMovieSceneSection; };
namespace CG::MovieScene { class UMovieSceneSubSection; };
namespace CG::MovieScene { class UMovieSceneSequence; };
namespace CG::SequencerScripting { class UMovieSceneScriptingChannel; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::SequencerScripting
{
    /**
     * Class /Script/SequencerScripting.MovieSceneSectionExtensions
     * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
     */
    class UMovieSceneSectionExtensions : public Engine::UBlueprintFunctionLibrary
    {
    public:
        void STATIC_SetStartFrameSeconds(MovieScene::UMovieSceneSection* Section, float StartTime);
        void STATIC_SetStartFrameBounded(MovieScene::UMovieSceneSection* Section, bool bIsBounded);
        void STATIC_SetStartFrame(MovieScene::UMovieSceneSection* Section, int32_t StartFrame);
        void STATIC_SetRangeSeconds(MovieScene::UMovieSceneSection* Section, float StartTime, float EndTime);
        void STATIC_SetRange(MovieScene::UMovieSceneSection* Section, int32_t StartFrame, int32_t EndFrame);
        void STATIC_SetEndFrameSeconds(MovieScene::UMovieSceneSection* Section, float EndTime);
        void STATIC_SetEndFrameBounded(MovieScene::UMovieSceneSection* Section, bool bIsBounded);
        void STATIC_SetEndFrame(MovieScene::UMovieSceneSection* Section, int32_t EndFrame);
        bool STATIC_HasStartFrame(MovieScene::UMovieSceneSection* Section);
        bool STATIC_HasEndFrame(MovieScene::UMovieSceneSection* Section);
        float STATIC_GetStartFrameSeconds(MovieScene::UMovieSceneSection* Section);
        int32_t STATIC_GetStartFrame(MovieScene::UMovieSceneSection* Section);
        int32_t STATIC_GetParentSequenceFrame(MovieScene::UMovieSceneSubSection* Section, int32_t InFrame, MovieScene::UMovieSceneSequence* ParentSequence);
        float STATIC_GetEndFrameSeconds(MovieScene::UMovieSceneSection* Section);
        int32_t STATIC_GetEndFrame(MovieScene::UMovieSceneSection* Section);
        BasicTypes::TArray<SequencerScripting::UMovieSceneScriptingChannel*> STATIC_GetChannelsByType(MovieScene::UMovieSceneSection* Section, SequencerScripting::UMovieSceneScriptingChannel* ChannelType);
        BasicTypes::TArray<SequencerScripting::UMovieSceneScriptingChannel*> STATIC_GetChannels(MovieScene::UMovieSceneSection* Section);
        float STATIC_GetAutoSizeStartFrameSeconds(MovieScene::UMovieSceneSection* Section);
        int32_t STATIC_GetAutoSizeStartFrame(MovieScene::UMovieSceneSection* Section);
        bool STATIC_GetAutoSizeHasStartFrame(MovieScene::UMovieSceneSection* Section);
        bool STATIC_GetAutoSizeHasEndFrame(MovieScene::UMovieSceneSection* Section);
        float STATIC_GetAutoSizeEndFrameSeconds(MovieScene::UMovieSceneSection* Section);
        int32_t STATIC_GetAutoSizeEndFrame(MovieScene::UMovieSceneSection* Section);
        BasicTypes::TArray<SequencerScripting::UMovieSceneScriptingChannel*> STATIC_GetAllChannels(MovieScene::UMovieSceneSection* Section);
        BasicTypes::TArray<SequencerScripting::UMovieSceneScriptingChannel*> STATIC_FindChannelsByType(MovieScene::UMovieSceneSection* Section, SequencerScripting::UMovieSceneScriptingChannel* ChannelType);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/SequencerScripting.MovieSceneSectionExtensions");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
