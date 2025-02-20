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
#include "BasicTypes_UMulticastInlineDelegate.h"
#include "AudioMixer_USynthComponent.h"
#include "Synthesis_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class USoundWave; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Synthesis
{
    /**
     * Class /Script/Synthesis.SynthSamplePlayer
     * Size -> 0x0130 (FullSize[0x0810] - InheritedSize[0x06E0])
     */
    class USynthSamplePlayer : public AudioMixer::USynthComponent
    {
    public:
        Engine::USoundWave*                                          SoundWave;                                               //  Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::UMulticastInlineDelegate                         OnSampleLoaded;                                          //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::UMulticastInlineDelegate                         OnSamplePlaybackProgress;                                //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        uint8_t                                                      UnknownData_0002[0x108];                                 //  MISSED OFFSET (PADDING)

    public:
        void SetSoundWave(Engine::USoundWave* InSoundWave);
        void SetScrubTimeWidth(float InScrubTimeWidthSec);
        void SetScrubMode(bool bScrubMode);
        void SetPitch(float InPitch, float TimeSec);
        void SeekToTime(float TimeSec, Synthesis::ESamplePlayerSeekType SeekType, bool bWrap);
        bool IsLoaded();
        float GetSampleDuration();
        float GetCurrentPlaybackProgressTime();
        float GetCurrentPlaybackProgressPercent();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Synthesis.SynthSamplePlayer");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
