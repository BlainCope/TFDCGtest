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
#include "Engine_UTickableWorldSubsystem.h"
#include "BasicTypes_FName.h"
#include "Engine_ENUMS.h"
#include "Engine_FQuartzTransportTimeStamp.h"
#include "Engine_FQuartzClockSettings.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UObject; };
namespace CG::AudioMixer { class UQuartzClockHandle; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AudioMixer
{
    /**
     * Class /Script/AudioMixer.QuartzSubsystem
     * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
     */
    class UQuartzSubsystem : public Engine::UTickableWorldSubsystem
    {
    public:
        uint8_t                                                      UnknownData_0000[0x20];                                  //  MISSED OFFSET (PADDING)

    public:
        bool IsQuartzEnabled();
        bool IsClockRunning(CoreUObject::UObject* WorldContextObject, const BasicTypes::FName& ClockName);
        float GetRoundTripMinLatency(CoreUObject::UObject* WorldContextObject);
        float GetRoundTripMaxLatency(CoreUObject::UObject* WorldContextObject);
        float GetRoundTripAverageLatency(CoreUObject::UObject* WorldContextObject);
        AudioMixer::UQuartzClockHandle* GetHandleForClock(CoreUObject::UObject* WorldContextObject, const BasicTypes::FName& ClockName);
        float GetGameThreadToAudioRenderThreadMinLatency(CoreUObject::UObject* WorldContextObject);
        float GetGameThreadToAudioRenderThreadMaxLatency(CoreUObject::UObject* WorldContextObject);
        float GetGameThreadToAudioRenderThreadAverageLatency(CoreUObject::UObject* WorldContextObject);
        float GetEstimatedClockRunTime(CoreUObject::UObject* WorldContextObject, const BasicTypes::FName& InClockName);
        float GetDurationOfQuantizationTypeInSeconds(CoreUObject::UObject* WorldContextObject, const BasicTypes::FName& ClockName, Engine::EQuartzCommandQuantization QuantizationType, float Multiplier);
        Engine::FQuartzTransportTimeStamp GetCurrentClockTimestamp(CoreUObject::UObject* WorldContextObject, const BasicTypes::FName& InClockName);
        float GetAudioRenderThreadToGameThreadMinLatency();
        float GetAudioRenderThreadToGameThreadMaxLatency();
        float GetAudioRenderThreadToGameThreadAverageLatency();
        bool DoesClockExist(CoreUObject::UObject* WorldContextObject, const BasicTypes::FName& ClockName);
        void DeleteClockByName(CoreUObject::UObject* WorldContextObject, const BasicTypes::FName& ClockName);
        void DeleteClockByHandle(CoreUObject::UObject* WorldContextObject, AudioMixer::UQuartzClockHandle** InClockHandle);
        AudioMixer::UQuartzClockHandle* CreateNewClock(CoreUObject::UObject* WorldContextObject, const BasicTypes::FName& ClockName, const Engine::FQuartzClockSettings& InSettings, bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/AudioMixer.QuartzSubsystem");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
