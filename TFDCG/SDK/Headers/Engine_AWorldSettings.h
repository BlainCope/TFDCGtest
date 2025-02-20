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
#include "BasicTypes_TSoftClassPtr.h"
#include "Engine_UAISystemBase.h"
#include "CoreUObject_FVector.h"
#include "BasicTypes_TArray.h"
#include "Engine_FNaniteSettings.h"
#include "Engine_FReverbSettings.h"
#include "Engine_FInteriorSettings.h"
#include "Engine_FBroadphaseSettings.h"
#include "Engine_FNetViewer.h"
#include "Engine_AInfo.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UNavigationSystemConfig; };
namespace CG::Engine { class UWorldPartition; };
namespace CG::Engine { class UDataLayerAsset; };
namespace CG::Engine { class UDamageType; };
namespace CG::Engine { class ADefaultPhysicsVolume; };
namespace CG::Engine { class UPhysicsCollisionHandler; };
namespace CG::Engine { class AGameModeBase; };
namespace CG::Engine { class AGameNetworkManager; };
namespace CG::Engine { class USoundMix; };
namespace CG::Engine { class UAssetUserData; };
namespace CG::Engine { class APlayerState; };
namespace CG::Engine { class UBookmarkBase; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.WorldSettings
     * Size -> 0x01D8 (FullSize[0x0420] - InheritedSize[0x0248])
     */
    class AWorldSettings : public Engine::AInfo
    {
    public:
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      VisibilityCellSize;                                      //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::EVisibilityAggressiveness                            VisibilityAggressiveness;                                //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bPrecomputeVisibility : 1;                               //  BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bPlaceCellsOnlyAlongCameraTracks : 1;                    //  BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bEnableWorldBoundsChecks : 1;                            //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bEnableNavigationSystem : 1;                             //  BIT_FIELD BlueprintVisible, BlueprintReadOnly, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         bEnableAISystem : 1;                                     //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Config, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         bEnableWorldComposition : 1;                             //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bUseClientSideLevelStreamingVolumes : 1;                 //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bEnableWorldOriginRebasing : 1;                          //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bGenerateSingleClusterForLevel : 1;                      //  BIT_FIELD Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bOverrideDefaultBroadphaseSettings : 1;                  //  BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bHighPriorityLoading : 1;                                //  BIT_FIELD Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bHighPriorityLoadingLocal : 1;                           //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bMinimizeBSPSections : 1;                                //  BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bForceNoPrecomputedLighting : 1;                         //  BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bGlobalGravitySet : 1;                                   //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bWorldGravitySet : 1;                                    //  BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x1];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TSoftClassPtr<Engine::UAISystemBase>             AISystemClass;                                           //  ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0xC];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        CoreUObject::FVector                                         LevelInstancePivotOffset;                                //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0003[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UNavigationSystemConfig*                             NavigationSystemConfig;                                  //  Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoClear, NoDestructor, AdvancedDisplay, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        Engine::UNavigationSystemConfig*                             NavigationSystemConfigOverride;                          //  ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        Engine::UWorldPartition*                                     WorldPartition;                                          //  Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        BasicTypes::TArray<Engine::UDataLayerAsset*>                 BaseNavmeshDataLayers;                                   //  Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
        float                                                        WorldToMeters;                                           //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        KillZ;                                                   //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::UDamageType*                                         KillZDamageType;                                         //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        WorldGravityZ;                                           //  Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        GlobalGravityZ;                                          //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::ADefaultPhysicsVolume*                               DefaultPhysicsVolumeClass;                               //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::UPhysicsCollisionHandler*                            PhysicsCollisionHandlerClass;                            //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bDestructibleShapeCollisionEnableRateMultiplierSet : 1;  //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0004[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        DestructibleShapeCollisionEnableRateMultiplier;          //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::AGameModeBase*                                       DefaultGameMode;                                         //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::AGameNetworkManager*                                 GameNetworkManagerClass;                                 //  ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      PackedLightAndShadowMapTextureSize;                      //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FVector                                         DefaultColorScale;                                       //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        DefaultMaxDistanceFieldOcclusionDistance;                //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        GlobalDistanceFieldViewDistance;                         //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        DynamicIndirectShadowsSelfShadowingIntensity;            //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         GrassTrail;                                              //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         WaterTrail;                                              //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         DeformationTrail;                                        //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::FNaniteSettings                                      NaniteSettings;                                          //  Edit, Config, NoDestructor, NativeAccessSpecifierPublic
        Engine::FReverbSettings                                      DefaultReverbSettings;                                   //  Edit, Config, NoDestructor, NativeAccessSpecifierPublic
        Engine::FInteriorSettings                                    DefaultAmbientZoneSettings;                              //  Edit, Config, NoDestructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0005[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::USoundMix*                                           DefaultBaseSoundMix;                                     //  Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        TimeDilation;                                            //  Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        CinematicTimeDilation;                                   //  Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        DemoPlayTimeDilation;                                    //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        MinGlobalTimeDilation;                                   //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        MaxGlobalTimeDilation;                                   //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        MinUndilatedFrameTime;                                   //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        MaxUndilatedFrameTime;                                   //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::FBroadphaseSettings                                  BroadphaseSettings;                                      //  Edit, Config, NoDestructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0006[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<Engine::FNetViewer>                       ReplicationViewers;                                      //  ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::UAssetUserData*>                  AssetUserData;                                           //  ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected
        Engine::APlayerState*                                        PauserPlayerState;                                       //  Net, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        int32_t                                                      MaxNumberOfBookmarks;                                    //  ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0007[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UBookmarkBase*                                       DefaultBookmarkClass;                                    //  ZeroConstructor, Config, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        BasicTypes::TArray<Engine::UBookmarkBase*>                   BookmarkArray;                                           //  ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate
        Engine::UBookmarkBase*                                       LastBookmarkClass;                                       //  ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

    public:
        void OnRep_WorldGravityZ();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.WorldSettings");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
