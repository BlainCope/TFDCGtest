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
#include "Engine_ENUMS.h"
#include "Engine_FPostProcessSettings.h"
#include "Engine_USceneComponent.h"
#include "BasicTypes_TScriptInterface.h"
#include "Engine_IBlendableInterface.h"
#include "Engine_FMinimalViewInfo.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.CameraComponent
     * Size -> 0x08F0 (FullSize[0x0AE0] - InheritedSize[0x01F0])
     */
    class UCameraComponent : public Engine::USceneComponent
    {
    public:
        float                                                        FieldOfView;                                             //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        OrthoWidth;                                              //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        OrthoNearClipPlane;                                      //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        OrthoFarClipPlane;                                       //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        AspectRatio;                                             //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bConstrainAspectRatio : 1;                               //  BIT_FIELD Edit, BlueprintVisible, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bUseFieldOfViewForLOD : 1;                               //  BIT_FIELD Edit, BlueprintVisible, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bLockToHmd : 1;                                          //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bUsePawnControlRotation : 1;                             //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::ECameraProjectionMode                                ProjectionMode;                                          //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x3A];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        PostProcessBlendWeight;                                  //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x2C];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::FPostProcessSettings                                 PostProcessSettings;                                     //  Edit, BlueprintVisible, Interp, NativeAccessSpecifierPublic

    public:
        void SetUseFieldOfViewForLOD(bool bInUseFieldOfViewForLOD);
        void SetProjectionMode(Engine::ECameraProjectionMode InProjectionMode);
        void SetPostProcessBlendWeight(float InPostProcessBlendWeight);
        void SetOrthoWidth(float InOrthoWidth);
        void SetOrthoNearClipPlane(float InOrthoNearClipPlane);
        void SetOrthoFarClipPlane(float InOrthoFarClipPlane);
        void SetFieldOfView(float InFieldOfView);
        void SetConstraintAspectRatio(bool bInConstrainAspectRatio);
        void SetAspectRatio(float InAspectRatio);
        void RemoveBlendable(const BasicTypes::TScriptInterface<Engine::IBlendableInterface>& InBlendableObject);
        void OnCameraMeshHiddenChanged();
        void GetCameraView(float DeltaTime, Engine::FMinimalViewInfo* DesiredView);
        void AddOrUpdateBlendable(const BasicTypes::TScriptInterface<Engine::IBlendableInterface>& InBlendableObject, float InWeight);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.CameraComponent");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
