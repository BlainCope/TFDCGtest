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
#include "OpenColorIO_FOpenColorIOColorConversionSettings.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UObject; };
namespace CG::Engine { class UTexture; };
namespace CG::Engine { class UTextureRenderTarget2D; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::OpenColorIO
{
    /**
     * Class /Script/OpenColorIO.OpenColorIOBlueprintLibrary
     * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
     */
    class UOpenColorIOBlueprintLibrary : public Engine::UBlueprintFunctionLibrary
    {
    public:
        bool STATIC_ApplyColorSpaceTransform(CoreUObject::UObject* WorldContextObject, const OpenColorIO::FOpenColorIOColorConversionSettings& ConversionSettings, Engine::UTexture* InputTexture, Engine::UTextureRenderTarget2D* OutputRenderTarget);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/OpenColorIO.OpenColorIOBlueprintLibrary");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
