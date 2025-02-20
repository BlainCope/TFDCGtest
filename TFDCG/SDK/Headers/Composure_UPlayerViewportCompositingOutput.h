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
#include "Composure_UColorConverterOutputPass.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Composure { class UPlayerCompOutputCameraModifier; };
namespace CG::Engine { class UMaterialInterface; };
namespace CG::Engine { class UMaterialInstanceDynamic; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Composure
{
    /**
     * Class /Script/Composure.PlayerViewportCompositingOutput
     * Size -> 0x0040 (FullSize[0x00B8] - InheritedSize[0x0078])
     */
    class UPlayerViewportCompositingOutput : public Composure::UColorConverterOutputPass
    {
    public:
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      PlayerIndex;                                             //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         ApplyToneCurve;                                          //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0xB];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Composure::UPlayerCompOutputCameraModifier*                  ActiveCamModifier;                                       //  ZeroConstructor, Transient, DuplicateTransient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate, CPF_SkipSerialization
        Engine::UMaterialInterface*                                  TonemapperBaseMat;                                       //  ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        Engine::UMaterialInterface*                                  PreTonemapBaseMat;                                       //  ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        Engine::UMaterialInstanceDynamic*                            ViewportOverrideMID;                                     //  ZeroConstructor, Transient, DuplicateTransient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate, CPF_SkipSerialization
        uint8_t                                                      UnknownData_0002[0x8];                                   //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Composure.PlayerViewportCompositingOutput");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
