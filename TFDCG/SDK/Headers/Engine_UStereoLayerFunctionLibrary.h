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
#include "CoreUObject_FVector2D.h"
#include "CoreUObject_FVector.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UTexture; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.StereoLayerFunctionLibrary
     * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
     */
    class UStereoLayerFunctionLibrary : public Engine::UBlueprintFunctionLibrary
    {
    public:
        void STATIC_ShowSplashScreen();
        void STATIC_SetSplashScreen(Engine::UTexture* Texture, const CoreUObject::FVector2D& Scale, const CoreUObject::FVector& Offset, bool bShowLoadingMovie, bool bShowOnSet);
        void STATIC_HideSplashScreen();
        void STATIC_EnableAutoLoadingSplashScreen(bool InAutoShowEnabled);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.StereoLayerFunctionLibrary");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
