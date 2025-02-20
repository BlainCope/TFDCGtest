#pragma once
#pragma warning(disable: 4267)

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
#include "BasicTypes_TArray.h"
#include "GeometryCollectionEngine_FChaosTrailingEventData.h"
#include "GeometryCollectionEngine_ENUMS.h"
#include "GeometryCollectionEngine_FChaosRemovalEventData.h"
#include "GeometryCollectionEngine_FChaosCollisionEventData.h"
#include "GeometryCollectionEngine_FChaosBreakingEventData.h"
#include "GeometryCollectionEngine_FChaosTrailingEventRequestSettings.h"
#include "GeometryCollectionEngine_FChaosRemovalEventRequestSettings.h"
#include "GeometryCollectionEngine_FChaosCollisionEventRequestSettings.h"
#include "GeometryCollectionEngine_FChaosBreakingEventRequestSettings.h"
#include "CoreUObject_FVector.h"
#include "Engine_FHitResult.h"
#include "CoreUObject_FBox.h"
#include "CoreUObject_FTransform.h"
#include "ChaosSolverEngine_FChaosPhysicsCollisionInfo.h"
#include "BasicTypes_FString.h"
#include "Chaos_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::GeometryCollectionEngine { class AGeometryCollectionActor; };
namespace CG::ChaosSolverEngine { class AChaosSolverActor; };
namespace CG::GeometryCollectionEngine { class UGeometryCollection; };
namespace CG::GeometryCollectionEngine { class UGeometryCollectionComponent; };
namespace CG::FieldSystemEngine { class UFieldSystemMetaData; };
namespace CG::FieldSystemEngine { class UFieldNodeBase; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::GeometryCollectionEngine
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class UChaosDestructionListener_SortTrailingEvents_Params
    {
    public:
        BasicTypes::TArray<GeometryCollectionEngine::FChaosTrailingEventData> TrailingEvents;                                          //  0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        GeometryCollectionEngine::EChaosTrailingSortMethod           SortMethod;                                              //  0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UChaosDestructionListener_SortRemovalEvents_Params
    {
    public:
        BasicTypes::TArray<GeometryCollectionEngine::FChaosRemovalEventData> RemovalEvents;                                           //  0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        GeometryCollectionEngine::EChaosRemovalSortMethod            SortMethod;                                              //  0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UChaosDestructionListener_SortCollisionEvents_Params
    {
    public:
        BasicTypes::TArray<GeometryCollectionEngine::FChaosCollisionEventData> CollisionEvents;                                         //  0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        GeometryCollectionEngine::EChaosCollisionSortMethod          SortMethod;                                              //  0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UChaosDestructionListener_SortBreakingEvents_Params
    {
    public:
        BasicTypes::TArray<GeometryCollectionEngine::FChaosBreakingEventData> BreakingEvents;                                          //  0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        GeometryCollectionEngine::EChaosBreakingSortMethod           SortMethod;                                              //  0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UChaosDestructionListener_SetTrailingEventRequestSettings_Params
    {
    public:
        GeometryCollectionEngine::FChaosTrailingEventRequestSettings InSettings;                                              //  0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UChaosDestructionListener_SetTrailingEventEnabled_Params
    {
    public:
        bool                                                         bIsEnabled;                                              //  0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UChaosDestructionListener_SetRemovalEventRequestSettings_Params
    {
    public:
        GeometryCollectionEngine::FChaosRemovalEventRequestSettings  InSettings;                                              //  0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UChaosDestructionListener_SetRemovalEventEnabled_Params
    {
    public:
        bool                                                         bIsEnabled;                                              //  0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UChaosDestructionListener_SetCollisionEventRequestSettings_Params
    {
    public:
        GeometryCollectionEngine::FChaosCollisionEventRequestSettings InSettings;                                              //  0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UChaosDestructionListener_SetCollisionEventEnabled_Params
    {
    public:
        bool                                                         bIsEnabled;                                              //  0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UChaosDestructionListener_SetBreakingEventRequestSettings_Params
    {
    public:
        GeometryCollectionEngine::FChaosBreakingEventRequestSettings InSettings;                                              //  0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UChaosDestructionListener_SetBreakingEventEnabled_Params
    {
    public:
        bool                                                         bIsEnabled;                                              //  0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UChaosDestructionListener_RemoveGeometryCollectionActor_Params
    {
    public:
        GeometryCollectionEngine::AGeometryCollectionActor*          GeometryCollectionActor;                                 //  0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UChaosDestructionListener_RemoveChaosSolverActor_Params
    {
    public:
        ChaosSolverEngine::AChaosSolverActor*                        ChaosSolverActor;                                        //  0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UChaosDestructionListener_IsEventListening_Params
    {
    public:
        bool                                                         ReturnValue;                                             //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UChaosDestructionListener_AddGeometryCollectionActor_Params
    {
    public:
        GeometryCollectionEngine::AGeometryCollectionActor*          GeometryCollectionActor;                                 //  0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UChaosDestructionListener_AddChaosSolverActor_Params
    {
    public:
        ChaosSolverEngine::AChaosSolverActor*                        ChaosSolverActor;                                        //  0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class AGeometryCollectionActor_RaycastSingle_Params
    {
    public:
        CoreUObject::FVector                                         Start;                                                   //  0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        CoreUObject::FVector                                         End;                                                     //  0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        Engine::FHitResult                                           OutHit;                                                  //  0x0018(0x009C)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
        bool                                                         ReturnValue;                                             //  0x00B4(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UGeometryCollectionComponent_SetRestCollection_Params
    {
    public:
        GeometryCollectionEngine::UGeometryCollection*               RestCollectionIn;                                        //  0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UGeometryCollectionComponent_SetNotifyRemovals_Params
    {
    public:
        bool                                                         bNewNotifyRemovals;                                      //  0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UGeometryCollectionComponent_SetNotifyCrumblings_Params
    {
    public:
        bool                                                         bNewNotifyCrumblings;                                    //  0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         bNewCrumblingEventIncludesChildren;                      //  0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UGeometryCollectionComponent_SetNotifyBreaks_Params
    {
    public:
        bool                                                         bNewNotifyBreaks;                                        //  0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UGeometryCollectionComponent_SetEnableDamageFromCollision_Params
    {
    public:
        bool                                                         bValue;                                                  //  0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UGeometryCollectionComponent_SetAnchoredByTransformedBox_Params
    {
    public:
        CoreUObject::FBox                                            Box;                                                     //  0x0000(0x001C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
        uint8_t                                                      UnknownData_0000[0x4];                                   //  0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        CoreUObject::FTransform                                      Transform;                                               //  0x0020(0x0030)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         bAnchored;                                               //  0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        uint8_t                                                      UnknownData_0001[0x3];                                   //  0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        int32_t                                                      MaxLevel;                                                //  0x0054(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UGeometryCollectionComponent_SetAnchoredByIndex_Params
    {
    public:
        int32_t                                                      Index;                                                   //  0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         bAnchored;                                               //  0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UGeometryCollectionComponent_SetAnchoredByBox_Params
    {
    public:
        CoreUObject::FBox                                            WorldSpaceBox;                                           //  0x0000(0x001C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
        bool                                                         bAnchored;                                               //  0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        uint8_t                                                      UnknownData_0002[0x3];                                   //  0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        int32_t                                                      MaxLevel;                                                //  0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UGeometryCollectionComponent_RemoveAllAnchors_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UGeometryCollectionComponent_ReceivePhysicsCollision_Params
    {
    public:
        ChaosSolverEngine::FChaosPhysicsCollisionInfo                CollisionInfo;                                           //  0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Params
    {
    public:
        GeometryCollectionEngine::UGeometryCollectionComponent*      FracturedComponent;                                      //  0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Params
    {
    public:
        GeometryCollectionEngine::UGeometryCollectionComponent*      FracturedComponent;                                      //  0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UGeometryCollectionComponent_GetRootIndex_Params
    {
    public:
        int32_t                                                      ReturnValue;                                             //  0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UGeometryCollectionComponent_GetMassAndExtents_Params
    {
    public:
        int32_t                                                      ItemIndex;                                               //  0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        float                                                        OutMass;                                                 //  0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        CoreUObject::FBox                                            OutExtents;                                              //  0x0008(0x001C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UGeometryCollectionComponent_GetLocalBounds_Params
    {
    public:
        CoreUObject::FBox                                            ReturnValue;                                             //  0x0000(0x001C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UGeometryCollectionComponent_GetInitialLevel_Params
    {
    public:
        int32_t                                                      ItemIndex;                                               //  0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        int32_t                                                      ReturnValue;                                             //  0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UGeometryCollectionComponent_GetDebugInfo_Params
    {
    public:
        BasicTypes::FString                                          ReturnValue;                                             //  0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UGeometryCollectionComponent_CrumbleCluster_Params
    {
    public:
        int32_t                                                      ItemIndex;                                               //  0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UGeometryCollectionComponent_CrumbleActiveClusters_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UGeometryCollectionComponent_ApplyPhysicsField_Params
    {
    public:
        bool                                                         Enabled;                                                 //  0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        Chaos::EGeometryCollectionPhysicsTypeEnum                    Target;                                                  //  0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        uint8_t                                                      UnknownData_0003[0x6];                                   //  0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        FieldSystemEngine::UFieldSystemMetaData*                     MetaData;                                                //  0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        FieldSystemEngine::UFieldNodeBase*                           Field;                                                   //  0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UGeometryCollectionComponent_ApplyLinearVelocity_Params
    {
    public:
        int32_t                                                      ItemIndex;                                               //  0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        CoreUObject::FVector                                         LinearVelocity;                                          //  0x0004(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UGeometryCollectionComponent_ApplyKinematicField_Params
    {
    public:
        float                                                        Radius;                                                  //  0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        CoreUObject::FVector                                         Position;                                                //  0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UGeometryCollectionComponent_ApplyInternalStrain_Params
    {
    public:
        int32_t                                                      ItemIndex;                                               //  0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        CoreUObject::FVector                                         Location;                                                //  0x0004(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        float                                                        Radius;                                                  //  0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        int32_t                                                      PropagationDepth;                                        //  0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        float                                                        PropagationFactor;                                       //  0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        float                                                        Strain;                                                  //  0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UGeometryCollectionComponent_ApplyExternalStrain_Params
    {
    public:
        int32_t                                                      ItemIndex;                                               //  0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        CoreUObject::FVector                                         Location;                                                //  0x0004(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        float                                                        Radius;                                                  //  0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        int32_t                                                      PropagationDepth;                                        //  0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        float                                                        PropagationFactor;                                       //  0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        float                                                        Strain;                                                  //  0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Params
    {
    public:
        int32_t                                                      ItemIndex;                                               //  0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        CoreUObject::FVector                                         LinearVelocity;                                          //  0x0004(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Params
    {
    public:
        int32_t                                                      ItemIndex;                                               //  0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        CoreUObject::FVector                                         AngularVelocity;                                         //  0x0004(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UGeometryCollectionComponent_ApplyAngularVelocity_Params
    {
    public:
        int32_t                                                      ItemIndex;                                               //  0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        CoreUObject::FVector                                         AngularVelocity;                                         //  0x0004(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
