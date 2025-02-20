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
#include "AkAudio_FAkCommonInitializationSettingsWithSampleRate.h"
#include "AkAudio_FAkCommunicationSettingsWithSystemInitialization.h"
#include "AkAudio_FAkHololensAdvancedInitializationSettings.h"
#include "CoreUObject_UObject.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AkAudio
{
    /**
     * Class /Script/AkAudio.AkHololensInitializationSettings
     * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
     */
    class UAkHololensInitializationSettings : public CoreUObject::UObject
    {
    public:
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        AkAudio::FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          //  Edit, Config, NativeAccessSpecifierPublic
        AkAudio::FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   //  Edit, Config, NativeAccessSpecifierPublic
        AkAudio::FAkHololensAdvancedInitializationSettings           AdvancedSettings;                                        //  Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x4];                                   //  MISSED OFFSET (PADDING)

    public:
        void MigrateMultiCoreRendering(bool NewValue);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/AkAudio.AkHololensInitializationSettings");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
