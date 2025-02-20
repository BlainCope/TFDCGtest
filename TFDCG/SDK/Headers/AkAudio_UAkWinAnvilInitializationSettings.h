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
#include "AkAudio_UAkWinGDKInitializationSettings.h"

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
     * Class /Script/AkAudio.AkWinAnvilInitializationSettings
     * Size -> 0x0000 (FullSize[0x00F8] - InheritedSize[0x00F8])
     */
    class UAkWinAnvilInitializationSettings : public AkAudio::UAkWinGDKInitializationSettings
    {
    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/AkAudio.AkWinAnvilInitializationSettings");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
