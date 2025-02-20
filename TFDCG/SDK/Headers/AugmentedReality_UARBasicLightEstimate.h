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
#include "CoreUObject_FLinearColor.h"
#include "AugmentedReality_UARLightEstimate.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AugmentedReality
{
    /**
     * Class /Script/AugmentedReality.ARBasicLightEstimate
     * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
     */
    class UARBasicLightEstimate : public AugmentedReality::UARLightEstimate
    {
    public:
        float                                                        AmbientIntensityLumens;                                  //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        float                                                        AmbientColorTemperatureKelvin;                           //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        CoreUObject::FLinearColor                                    AmbientColor;                                            //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

    public:
        float GetAmbientIntensityLumens();
        float GetAmbientColorTemperatureKelvin();
        CoreUObject::FLinearColor GetAmbientColor();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/AugmentedReality.ARBasicLightEstimate");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
