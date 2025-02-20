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
#include "BasicTypes_TWeakObjectPtr.h"
#include "Engine_USoundWaveProcedural.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::AudioMixer { class USynthComponent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AudioMixer
{
    /**
     * Class /Script/AudioMixer.SynthSound
     * Size -> 0x0020 (FullSize[0x04C0] - InheritedSize[0x04A0])
     */
    class USynthSound : public Engine::USoundWaveProcedural
    {
    public:
        BasicTypes::TWeakObjectPtr<AudioMixer::USynthComponent>      OwningSynthComponent;                                    //  ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x18];                                  //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/AudioMixer.SynthSound");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
