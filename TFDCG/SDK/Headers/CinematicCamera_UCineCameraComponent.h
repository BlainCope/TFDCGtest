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
#include "CinematicCamera_FCameraFilmbackSettings.h"
#include "CinematicCamera_FCameraLensSettings.h"
#include "CinematicCamera_FCameraFocusSettings.h"
#include "CinematicCamera_FPlateCropSettings.h"
#include "BasicTypes_TArray.h"
#include "CinematicCamera_FNamedFilmbackPreset.h"
#include "CinematicCamera_FNamedLensPreset.h"
#include "BasicTypes_FString.h"
#include "Engine_UCameraComponent.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::CinematicCamera
{
    /**
     * Class /Script/CinematicCamera.CineCameraComponent
     * Size -> 0x0110 (FullSize[0x0BF0] - InheritedSize[0x0AE0])
     */
    class UCineCameraComponent : public Engine::UCameraComponent
    {
    public:
        CinematicCamera::FCameraFilmbackSettings                     FilmbackSettings;                                        //  Deprecated, NoDestructor, NativeAccessSpecifierPublic
        CinematicCamera::FCameraFilmbackSettings                     Filmback;                                                //  Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
        CinematicCamera::FCameraLensSettings                         LensSettings;                                            //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CinematicCamera::FCameraFocusSettings                        FocusSettings;                                           //  Edit, BlueprintVisible, NativeAccessSpecifierPublic
        CinematicCamera::FPlateCropSettings                          CropSettings;                                            //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        float                                                        CurrentFocalLength;                                      //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        CurrentAperture;                                         //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        CurrentFocusDistance;                                    //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bOverride_CustomNearClippingPlane : 1;                   //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        CustomNearClippingPlane;                                 //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<CinematicCamera::FNamedFilmbackPreset>    FilmbackPresets;                                         //  ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
        BasicTypes::TArray<CinematicCamera::FNamedLensPreset>        LensPresets;                                             //  ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
        BasicTypes::FString                                          DefaultFilmbackPresetName;                               //  ZeroConstructor, Config, Deprecated, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        BasicTypes::FString                                          DefaultFilmbackPreset;                                   //  ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        BasicTypes::FString                                          DefaultLensPresetName;                                   //  ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        DefaultLensFocalLength;                                  //  ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        DefaultLensFStop;                                        //  ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0003[0x8];                                   //  MISSED OFFSET (PADDING)

    public:
        void SetLensSettings(const CinematicCamera::FCameraLensSettings& NewLensSettings);
        void SetLensPresetByName(const BasicTypes::FString& InPresetName);
        void SetFocusSettings(const CinematicCamera::FCameraFocusSettings& NewFocusSettings);
        void SetFilmbackPresetByName(const BasicTypes::FString& InPresetName);
        void SetFilmback(const CinematicCamera::FCameraFilmbackSettings& NewFilmback);
        void SetCustomNearClippingPlane(float NewCustomNearClippingPlane);
        void SetCurrentFocalLength(float InFocalLength);
        void SetCurrentAperture(float NewCurrentAperture);
        void SetCropSettings(const CinematicCamera::FPlateCropSettings& NewCropSettings);
        void SetCropPresetByName(const BasicTypes::FString& InPresetName);
        float GetVerticalFieldOfView();
        BasicTypes::TArray<CinematicCamera::FNamedLensPreset> STATIC_GetLensPresetsCopy();
        BasicTypes::FString GetLensPresetName();
        float GetHorizontalFieldOfView();
        BasicTypes::TArray<CinematicCamera::FNamedFilmbackPreset> STATIC_GetFilmbackPresetsCopy();
        BasicTypes::FString GetFilmbackPresetName();
        BasicTypes::FString GetDefaultFilmbackPresetName();
        BasicTypes::FString GetCropPresetName();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/CinematicCamera.CineCameraComponent");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
