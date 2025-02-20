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
#include "BasicTypes_TArray.h"
#include "BasicTypes_TWeakObjectPtr.h"
#include "Engine_FEngineShowFlagsSetting.h"
#include "BasicTypes_FString.h"
#include "Engine_USceneComponent.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UPrimitiveComponent; };
namespace CG::Engine { class AActor; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.SceneCaptureComponent
     * Size -> 0x00B8 (FullSize[0x02A8] - InheritedSize[0x01F0])
     */
    class USceneCaptureComponent : public Engine::USceneComponent
    {
    public:
        Engine::ESceneCapturePrimitiveRenderMode                     PrimitiveRenderMode;                                     //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::ESceneCaptureSource                                  CaptureSource;                                           //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bCaptureEveryFrame : 1;                                  //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bCaptureOnMovement : 1;                                  //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bAlwaysPersistRenderingState;                            //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<BasicTypes::TWeakObjectPtr<Engine::UPrimitiveComponent>> HiddenComponents;                                        //  ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::AActor*>                          HiddenActors;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, UObjectWrapper, NativeAccessSpecifierPublic
        BasicTypes::TArray<BasicTypes::TWeakObjectPtr<Engine::UPrimitiveComponent>> ShowOnlyComponents;                                      //  ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::AActor*>                          ShowOnlyActors;                                          //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, UObjectWrapper, NativeAccessSpecifierPublic
        float                                                        LODDistanceFactor;                                       //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        MaxViewDistanceOverride;                                 //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      CaptureSortPriority;                                     //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bUseRayTracingIfEnabled;                                 //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<Engine::FEngineShowFlagsSetting>          ShowFlagSettings;                                        //  Edit, BlueprintVisible, ZeroConstructor, Interp, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x30];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::FString                                          ProfilingEventName;                                      //  Edit, BlueprintVisible, ZeroConstructor, Interp, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0004[0x10];                                  //  Fix size for supers

    public:
        void ShowOnlyComponent(Engine::UPrimitiveComponent* InComponent);
        void ShowOnlyActorComponents(Engine::AActor* InActor, bool bIncludeFromChildActors);
        void SetCaptureSortPriority(int32_t NewCaptureSortPriority);
        void RemoveShowOnlyComponent(Engine::UPrimitiveComponent* InComponent);
        void RemoveShowOnlyActorComponents(Engine::AActor* InActor, bool bIncludeFromChildActors);
        void HideComponent(Engine::UPrimitiveComponent* InComponent);
        void HideActorComponents(Engine::AActor* InActor, bool bIncludeFromChildActors);
        void ClearShowOnlyComponents();
        void ClearHiddenComponents();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.SceneCaptureComponent");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
