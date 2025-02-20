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
#include "Engine_FHitResult.h"
#include "Engine_APlayerController.h"
#include "CoreUObject_FVector.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UDrawFrustumComponent; };
namespace CG::Engine { class AActor; };
namespace CG::Engine { class UPrimitiveComponent; };
namespace CG::CoreUObject { class UClass; };
namespace CG::Engine { class UPlayer; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.DebugCameraController
     * Size -> 0x0118 (FullSize[0x08A0] - InheritedSize[0x0788])
     */
    class ADebugCameraController : public Engine::APlayerController
    {
    public:
        bool                                                         bShowSelectedInfo : 1;                                   //  BIT_FIELD Config, GlobalConfig, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bIsFrozenRendering : 1;                                  //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bIsOrbitingSelectedActor : 1;                            //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bOrbitPivotUseCenter : 1;                                //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bEnableBufferVisualization : 1;                          //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bEnableBufferVisualizationFullMode : 1;                  //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bIsBufferVisualizationInputSetup : 1;                    //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bLastDisplayEnabled : 1;                                 //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UDrawFrustumComponent*                               DrawFrustum;                                             //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TWeakObjectPtr<Engine::AActor>                   SelectedActor;                                           //  ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TWeakObjectPtr<Engine::UPrimitiveComponent>      SelectedComponent;                                       //  ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::FHitResult                                           SelectedHitPoint;                                        //  IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::APlayerController*                                   OriginalControllerRef;                                   //  ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::UPlayer*                                             OriginalPlayer;                                          //  ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        SpeedScale;                                              //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        InitialMaxSpeed;                                         //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        InitialAccel;                                            //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        InitialDecel;                                            //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x38];                                  //  MISSED OFFSET (PADDING)

    public:
        void ToggleDisplay();
        void ShowDebugSelectedInfo();
        void SetPawnMovementSpeedScale(float NewSpeedScale);
        void ReceiveOnDeactivate(Engine::APlayerController* RestoredPC);
        void ReceiveOnActorSelected(Engine::AActor* NewSelectedActor, const CoreUObject::FVector& SelectHitLocation, const CoreUObject::FVector& SelectHitNormal, const Engine::FHitResult& Hit);
        void ReceiveOnActivate(Engine::APlayerController* OriginalPC);
        Engine::AActor* GetSelectedActor();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.DebugCameraController");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
