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
#include "BasicTypes_FName.h"
#include "MotionWarping_ENUMS.h"
#include "CoreUObject_FTransform.h"
#include "BasicTypes_TArray.h"
#include "MotionWarping_FMotionWarpingWindowData.h"
#include "CoreUObject_FVector.h"
#include "CoreUObject_FRotator.h"
#include "MotionWarping_FMotionWarpingTarget.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::MotionWarping { class UMotionWarpingComponent; };
namespace CG::Engine { class UAnimSequenceBase; };
namespace CG::MotionWarping { class URootMotionModifier_SkewWarp; };
namespace CG::MotionWarping { class URootMotionModifier; };
namespace CG::Engine { class USceneComponent; };
namespace CG::MotionWarping { class URootMotionModifier_Scale; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MotionWarping
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Params
    {
    public:
        MotionWarping::UMotionWarpingComponent*                      InMotionWarpingComp;                                     //  0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        Engine::UAnimSequenceBase*                                   InAnimation;                                             //  0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        float                                                        InStartTime;                                             //  0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        float                                                        InEndTime;                                               //  0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        BasicTypes::FName                                            InWarpTargetName;                                        //  0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        MotionWarping::EWarpPointAnimProvider                        InWarpPointAnimProvider;                                 //  0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        uint8_t                                                      UnknownData_0000[0xF];                                   //  0x0021(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        CoreUObject::FTransform                                      InWarpPointAnimTransform;                                //  0x0030(0x0030)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        BasicTypes::FName                                            InWarpPointAnimBoneName;                                 //  0x0060(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         bInWarpTranslation;                                      //  0x0068(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         bInIgnoreZAxis;                                          //  0x0069(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         bInWarpRotation;                                         //  0x006A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        MotionWarping::EMotionWarpRotationType                       InRotationType;                                          //  0x006B(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        float                                                        InWarpRotationTimeMultiplier;                            //  0x006C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        MotionWarping::URootMotionModifier_SkewWarp*                 ReturnValue;                                             //  0x0070(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UAnimNotifyState_MotionWarping_OnWarpUpdate_Params
    {
    public:
        MotionWarping::UMotionWarpingComponent*                      MotionWarpingComp;                                       //  0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        MotionWarping::URootMotionModifier*                          Modifier;                                                //  0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UAnimNotifyState_MotionWarping_OnWarpEnd_Params
    {
    public:
        MotionWarping::UMotionWarpingComponent*                      MotionWarpingComp;                                       //  0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        MotionWarping::URootMotionModifier*                          Modifier;                                                //  0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UAnimNotifyState_MotionWarping_OnWarpBegin_Params
    {
    public:
        MotionWarping::UMotionWarpingComponent*                      MotionWarpingComp;                                       //  0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        MotionWarping::URootMotionModifier*                          Modifier;                                                //  0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Params
    {
    public:
        MotionWarping::UMotionWarpingComponent*                      MotionWarpingComp;                                       //  0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        MotionWarping::URootMotionModifier*                          Modifier;                                                //  0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Params
    {
    public:
        MotionWarping::UMotionWarpingComponent*                      MotionWarpingComp;                                       //  0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        MotionWarping::URootMotionModifier*                          Modifier;                                                //  0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Params
    {
    public:
        MotionWarping::UMotionWarpingComponent*                      MotionWarpingComp;                                       //  0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        MotionWarping::URootMotionModifier*                          Modifier;                                                //  0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UAnimNotifyState_MotionWarping_AddRootMotionModifier_Params
    {
    public:
        MotionWarping::UMotionWarpingComponent*                      MotionWarpingComp;                                       //  0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        Engine::UAnimSequenceBase*                                   Animation;                                               //  0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        float                                                        StartTime;                                               //  0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        float                                                        EndTime;                                                 //  0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        MotionWarping::URootMotionModifier*                          ReturnValue;                                             //  0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation_Params
    {
    public:
        Engine::UAnimSequenceBase*                                   Animation;                                               //  0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        BasicTypes::TArray<MotionWarping::FMotionWarpingWindowData>  OutWindows;                                              //  0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation_Params
    {
    public:
        Engine::UAnimSequenceBase*                                   Animation;                                               //  0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        BasicTypes::FName                                            WarpTargetName;                                          //  0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        BasicTypes::TArray<MotionWarping::FMotionWarpingWindowData>  OutWindows;                                              //  0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMotionWarpingUtilities_ExtractRootMotionFromAnimation_Params
    {
    public:
        Engine::UAnimSequenceBase*                                   Animation;                                               //  0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        float                                                        StartTime;                                               //  0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        float                                                        EndTime;                                                 //  0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        CoreUObject::FTransform                                      ReturnValue;                                             //  0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMotionWarpingComponent_RemoveWarpTarget_Params
    {
    public:
        BasicTypes::FName                                            WarpTargetName;                                          //  0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        int32_t                                                      ReturnValue;                                             //  0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMotionWarpingComponent_DisableAllRootMotionModifiers_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMotionWarpingComponent_AddOrUpdateWarpTargetFromTransform_Params
    {
    public:
        BasicTypes::FName                                            WarpTargetName;                                          //  0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        uint8_t                                                      UnknownData_0000[0x8];                                   //  0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        CoreUObject::FTransform                                      TargetTransform;                                         //  0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation_Params
    {
    public:
        BasicTypes::FName                                            WarpTargetName;                                          //  0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        CoreUObject::FVector                                         TargetLocation;                                          //  0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        CoreUObject::FRotator                                        TargetRotation;                                          //  0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocation_Params
    {
    public:
        BasicTypes::FName                                            WarpTargetName;                                          //  0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        CoreUObject::FVector                                         TargetLocation;                                          //  0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent_Params
    {
    public:
        BasicTypes::FName                                            WarpTargetName;                                          //  0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        Engine::USceneComponent*                                     Component;                                               //  0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        BasicTypes::FName                                            BoneName;                                                //  0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         bFollowComponent;                                        //  0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMotionWarpingComponent_AddOrUpdateWarpTarget_Params
    {
    public:
        MotionWarping::FMotionWarpingTarget                          WarpTarget;                                              //  0x0000(0x0034)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class URootMotionModifier_Scale_AddRootMotionModifierScale_Params
    {
    public:
        MotionWarping::UMotionWarpingComponent*                      InMotionWarpingComp;                                     //  0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        Engine::UAnimSequenceBase*                                   InAnimation;                                             //  0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        float                                                        InStartTime;                                             //  0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        float                                                        InEndTime;                                               //  0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        CoreUObject::FVector                                         InScale;                                                 //  0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        uint8_t                                                      UnknownData_0000[0x4];                                   //  0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        MotionWarping::URootMotionModifier_Scale*                    ReturnValue;                                             //  0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
