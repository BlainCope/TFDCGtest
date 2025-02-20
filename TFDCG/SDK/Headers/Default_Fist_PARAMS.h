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
#include "M1_FM1AbilityAssetPreload.h"
#include "CoreUObject_FVector.h"
#include "GameplayTags_FGameplayTag.h"
#include "M1_FM1AbilityEvent.h"
#include "SubSkillCollision_FSubSkillCollision.h"
#include "BasicTypes_TArray.h"
#include "SubSkillSetting_FSubSkillSetting.h"
#include "M1Data_FM1AbilityParamData.h"
#include "M1_FM1CalcDamageInfo.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class AActor; };
namespace CG::Engine { class UAnimMontage; };
namespace CG::CoreUObject { class UObject; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Default_Fist
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_CheckValidateRadius_Params
    {
    public:
        Engine::AActor*                                              InTarget;                                                //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
        bool                                                         ReturnValue;                                             //  0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8_t                                                      UnknownData_0000[0x7];                                   //  0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_CalcValidateTolerance_Params
    {
    public:
        double                                                       OutValidateRadius;                                       //  0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_BP_MakePreloadAssetList_Params
    {
    public:
        M1::FM1AbilityAssetPreload                                   OutAbilityAssetPreload;                                  //  0x0000(0x0040)  (Parm, OutParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_LaunchForWireLand_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_RotateToAttackDirectionIfNeed_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_CalcAttackDirection_Params
    {
    public:
        Engine::AActor*                                              InOwner;                                                 //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
        Engine::AActor*                                              InTarget;                                                //  0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
        CoreUObject::FVector                                         ReturnValue;                                             //  0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_OnRep_bIsLanded_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_CheckCoolTimeInAbility_Params
    {
    public:
        bool                                                         ReturnValue;                                             //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_SendPrevRuneEvent_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_GetNonChargeAnimMontage_Params
    {
    public:
        Engine::UAnimMontage*                                        ReturnValue;                                             //  0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_GetAnimMontage_Params
    {
    public:
        GameplayTags::FGameplayTag                                   Key;                                                     //  0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
        Engine::UAnimMontage*                                        ReturnValue;                                             //  0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_GetAttackTag_Params
    {
    public:
        GameplayTags::FGameplayTag                                   Tag;                                                     //  0x0000(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_SendRuneEvent_Params
    {
    public:
        CoreUObject::UObject*                                        Object;                                                  //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_HandleAbilityEvent_Params
    {
    public:
        M1::FM1AbilityEvent                                          AbilityEvent;                                            //  0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_GetTargetActors_Params
    {
    public:
        SubSkillCollision::FSubSkillCollision                        DamageCollision;                                         //  0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        BasicTypes::TArray<Engine::AActor*>                          OutActors;                                               //  0x0028(0x0010)  (Parm, OutParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_DamageToEnemy_Params
    {
    public:
        int32_t                                                      AttackCount;                                             //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8_t                                                      UnknownData_0001[0x4];                                   //  0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        SubSkillSetting::FSubSkillSetting                            InSetting;                                               //  0x0008(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_MakeSkillActivateParams_Params
    {
    public:
        Engine::AActor*                                              InOwner;                                                 //  0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
        BasicTypes::TArray<M1Data::FM1AbilityParamData>              ReturnValue;                                             //  0x0008(0x0010)  (Parm, OutParm, ReturnParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_GetDashLocation_Params
    {
    public:
        Engine::AActor*                                              TargetActor;                                             //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
        CoreUObject::FVector                                         TargetLocation;                                          //  0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_GetAimedTarget_Params
    {
    public:
        Engine::AActor*                                              AimedActor;                                              //  0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_OnAbilityEvent_09DFF00F4B92C4EE431B928C804677D1_Params
    {
    public:
        M1::FM1AbilityEvent                                          Event;                                                   //  0x0000(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_OnAbilityEvent_283F594C46065D7C2BA6929F6639E384_Params
    {
    public:
        M1::FM1AbilityEvent                                          Event;                                                   //  0x0000(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_OnUpdate_1C9BEB0A42DB15447A2DAA9BAFDF1BEE_Params
    {
    public:
        float                                                        DeltaTime;                                               //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_OnEvent_726A9F1347453B65ABB65DAE8EEB8F6E_Params
    {
    public:
        M1::FM1CalcDamageInfo                                        DamageInfo;                                              //  0x0000(0x0138)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_OnFinished_FA896AD34AED6B31532A3BB7F0DD5EC9_Params
    {
    public:
        bool                                                         DestinationReached;                                      //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                                         TimedOut;                                                //  0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8_t                                                      UnknownData_0002[0x2];                                   //  0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        CoreUObject::FVector                                         FinalTargetLocation;                                     //  0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_OnEventReceived_07EC16C846839553D378A2A49AB9C354_Params
    {
    public:
        M1::FM1AbilityEvent                                          Event;                                                   //  0x0000(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_OnCompleted_07EC16C846839553D378A2A49AB9C354_Params
    {
    public:
        M1::FM1AbilityEvent                                          Event;                                                   //  0x0000(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_OnBlendOut_07EC16C846839553D378A2A49AB9C354_Params
    {
    public:
        M1::FM1AbilityEvent                                          Event;                                                   //  0x0000(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_OnEventReceived_5E573E1E46AA8A55B901328E15DB16D6_Params
    {
    public:
        M1::FM1AbilityEvent                                          Event;                                                   //  0x0000(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_OnCompleted_5E573E1E46AA8A55B901328E15DB16D6_Params
    {
    public:
        M1::FM1AbilityEvent                                          Event;                                                   //  0x0000(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_OnBlendOut_5E573E1E46AA8A55B901328E15DB16D6_Params
    {
    public:
        M1::FM1AbilityEvent                                          Event;                                                   //  0x0000(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_OnEventReceived_D54F2B39422DA08EA130338C89FA1FCE_Params
    {
    public:
        M1::FM1AbilityEvent                                          Event;                                                   //  0x0000(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_OnCompleted_D54F2B39422DA08EA130338C89FA1FCE_Params
    {
    public:
        M1::FM1AbilityEvent                                          Event;                                                   //  0x0000(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_OnBlendOut_D54F2B39422DA08EA130338C89FA1FCE_Params
    {
    public:
        M1::FM1AbilityEvent                                          Event;                                                   //  0x0000(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_BP_OnActivated_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_BP_OnDeactivated_Params
    {
    public:
        bool                                                         bCancelled;                                              //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_WaitDamageToEvent_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_ServerDamageToEnemy_Params
    {
    public:
        BasicTypes::TArray<Engine::AActor*>                          InEnemies;                                               //  0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_WaitLand_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_StartUpdateWireVelocity_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UDefault_Fist_C_ExecuteUbergraph_Default_Fist_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8_t                                                      UnknownData_0003[0x4];                                   //  0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
