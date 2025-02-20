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
#include "CoreUObject_UObject.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class APlayerCameraManager; };
namespace CG::Composure { class UComposurePlayerCompositingCameraModifier; };
namespace CG::Engine { class UMaterialInstanceDynamic; };
namespace CG::Engine { class UTextureRenderTarget2D; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Composure
{
    /**
     * Class /Script/Composure.ComposurePlayerCompositingTarget
     * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
     */
    class UComposurePlayerCompositingTarget : public CoreUObject::UObject
    {
    public:
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::APlayerCameraManager*                                PlayerCameraManager;                                     //  ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        Composure::UComposurePlayerCompositingCameraModifier*        PlayerCameraModifier;                                    //  ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        Engine::UMaterialInstanceDynamic*                            ReplaceTonemapperMID;                                    //  ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0001[0x30];                                  //  MISSED OFFSET (PADDING)

    public:
        void SetRenderTarget(Engine::UTextureRenderTarget2D* RenderTarget);
        Engine::APlayerCameraManager* SetPlayerCameraManager(Engine::APlayerCameraManager* PlayerCameraManager);
        Engine::APlayerCameraManager* GetPlayerCameraManager();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Composure.ComposurePlayerCompositingTarget");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
