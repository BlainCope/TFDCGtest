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
#include "Engine_FBasedMovementInfo.h"
#include "CoreUObject_FVector.h"
#include "CoreUObject_FQuat.h"
#include "BasicTypes_UMulticastInlineDelegate.h"
#include "Engine_FRootMotionSourceGroup.h"
#include "Engine_FRootMotionMovementParams.h"
#include "BasicTypes_TArray.h"
#include "Engine_FSimulatedRootMotionReplicatedMove.h"
#include "Engine_FRepRootMotionMontage.h"
#include "Engine_APawn.h"
#include "Engine_FCharacterServerMovePackedBits.h"
#include "Engine_FVector_NetQuantize10.h"
#include "Engine_FVector_NetQuantize100.h"
#include "BasicTypes_FName.h"
#include "BasicTypes_FString.h"
#include "Engine_FHitResult.h"
#include "Engine_ENUMS.h"
#include "CoreUObject_FRotator.h"
#include "Engine_FCharacterMoveResponsePackedBits.h"
#include "Engine_FVector_NetQuantizeNormal.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class USkeletalMeshComponent; };
namespace CG::Engine { class UCharacterMovementComponent; };
namespace CG::Engine { class UCapsuleComponent; };
namespace CG::Engine { class UAnimMontage; };
namespace CG::Engine { class UPrimitiveComponent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.Character
     * Size -> 0x0240 (FullSize[0x04F8] - InheritedSize[0x02B8])
     */
    class ACharacter : public Engine::APawn
    {
    public:
        Engine::USkeletalMeshComponent*                              Mesh;                                                    //  Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        Engine::UCharacterMovementComponent*                         CharacterMovement;                                       //  Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        Engine::UCapsuleComponent*                                   CapsuleComponent;                                        //  Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        Engine::FBasedMovementInfo                                   BasedMovement;                                           //  NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
        Engine::FBasedMovementInfo                                   ReplicatedBasedMovement;                                 //  Net, RepNotify, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
        float                                                        AnimRootMotionTranslationScale;                          //  Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        CoreUObject::FVector                                         BaseTranslationOffset;                                   //  ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        CoreUObject::FQuat                                           BaseRotationOffset;                                      //  IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        ReplicatedServerLastTransformUpdateTimeStamp;            //  Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        float                                                        ReplayLastTransformUpdateTimeStamp;                      //  Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      ReplicatedMovementMode;                                  //  Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        bool                                                         bInBaseReplication;                                      //  ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x2];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        CrouchedEyeHeight;                                       //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bIsCrouched : 1;                                         //  BIT_FIELD BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bProxyIsJumpForceApplied : 1;                            //  BIT_FIELD Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bPressedJump : 1;                                        //  BIT_FIELD BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bClientUpdating : 1;                                     //  BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bClientWasFalling : 1;                                   //  BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bClientResimulateRootMotion : 1;                         //  BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bClientResimulateRootMotionSources : 1;                  //  BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bSimGravityDisabled : 1;                                 //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bWasJumping : 1;                                         //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bServerMoveIgnoreRootMotion : 1;                         //  BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bClientCheckEncroachmentOnNetUpdate : 1;                 //  BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x2];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        JumpKeyHoldTime;                                         //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        JumpForceTimeRemaining;                                  //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        ProxyJumpForceStartedTime;                               //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        JumpMaxHoldTime;                                         //  Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      JumpMaxCount;                                            //  Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      JumpCurrentCount;                                        //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      JumpCurrentCountPreJump;                                 //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::UMulticastInlineDelegate                         OnReachedJumpApex;                                       //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0003[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::UMulticastInlineDelegate                         LandedDelegate;                                          //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0004[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::UMulticastInlineDelegate                         MovementModeChangedDelegate;                             //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0005[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::UMulticastInlineDelegate                         OnCharacterMovementUpdated;                              //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0006[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        Engine::FRootMotionSourceGroup                               SavedRootMotion;                                         //  Transient, NativeAccessSpecifierPublic
        Engine::FRootMotionMovementParams                            ClientRootMotionParams;                                  //  Transient, NoDestructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::FSimulatedRootMotionReplicatedMove> RootMotionRepMoves;                                      //  ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
        Engine::FRepRootMotionMontage                                RepRootMotion;                                           //  Net, RepNotify, ContainsInstancedReference, NativeAccessSpecifierPublic

    public:
        void UnCrouch(bool bClientSimulation);
        void StopJumping();
        void StopAnimMontage(Engine::UAnimMontage* AnimMontage);
        void ServerMovePacked(const Engine::FCharacterServerMovePackedBits& PackedBits);
        void ServerMoveOld(float OldTimeStamp, const Engine::FVector_NetQuantize10& OldAccel, uint8_t OldMoveFlags);
        void ServerMoveNoBase(float Timestamp, const Engine::FVector_NetQuantize10& InAccel, const Engine::FVector_NetQuantize100& ClientLoc, uint8_t CompressedMoveFlags, uint8_t ClientRoll, int32_t View, uint8_t ClientMovementMode);
        void ServerMoveDualNoBase(float TimeStamp0, const Engine::FVector_NetQuantize10& InAccel0, uint8_t PendingFlags, int32_t View0, float Timestamp, const Engine::FVector_NetQuantize10& InAccel, const Engine::FVector_NetQuantize100& ClientLoc, uint8_t NewFlags, uint8_t ClientRoll, int32_t View, uint8_t ClientMovementMode);
        void ServerMoveDualHybridRootMotion(float TimeStamp0, const Engine::FVector_NetQuantize10& InAccel0, uint8_t PendingFlags, int32_t View0, float Timestamp, const Engine::FVector_NetQuantize10& InAccel, const Engine::FVector_NetQuantize100& ClientLoc, uint8_t NewFlags, uint8_t ClientRoll, int32_t View, Engine::UPrimitiveComponent* ClientMovementBase, const BasicTypes::FName& ClientBaseBoneName, uint8_t ClientMovementMode);
        void ServerMoveDual(float TimeStamp0, const Engine::FVector_NetQuantize10& InAccel0, uint8_t PendingFlags, int32_t View0, float Timestamp, const Engine::FVector_NetQuantize10& InAccel, const Engine::FVector_NetQuantize100& ClientLoc, uint8_t NewFlags, uint8_t ClientRoll, int32_t View, Engine::UPrimitiveComponent* ClientMovementBase, const BasicTypes::FName& ClientBaseBoneName, uint8_t ClientMovementMode);
        void ServerMove(float Timestamp, const Engine::FVector_NetQuantize10& InAccel, const Engine::FVector_NetQuantize100& ClientLoc, uint8_t CompressedMoveFlags, uint8_t ClientRoll, int32_t View, Engine::UPrimitiveComponent* ClientMovementBase, const BasicTypes::FName& ClientBaseBoneName, uint8_t ClientMovementMode);
        void RootMotionDebugClientPrintOnScreen(const BasicTypes::FString& InString);
        float PlayAnimMontage(Engine::UAnimMontage* AnimMontage, float InPlayRate, const BasicTypes::FName& StartSectionName);
        void OnWalkingOffLedge(const CoreUObject::FVector& PreviousFloorImpactNormal, const CoreUObject::FVector& PreviousFloorContactNormal, const CoreUObject::FVector& PreviousLocation, float TimeDelta);
        void OnRep_RootMotion();
        void OnRep_ReplicatedBasedMovement();
        void OnRep_ReplayLastTransformUpdateTimeStamp();
        void OnRep_IsCrouched();
        void OnLaunched(const CoreUObject::FVector& LaunchVelocity, bool bXYOverride, bool bZOverride);
        void OnLanded(const Engine::FHitResult& Hit);
        void OnJumped();
        void LaunchCharacter(const CoreUObject::FVector& LaunchVelocity, bool bXYOverride, bool bZOverride);
        void K2_UpdateCustomMovement(float DeltaTime);
        void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
        void K2_OnMovementModeChanged(Engine::EMovementMode PrevMovementMode, Engine::EMovementMode NewMovementMode, uint8_t PrevCustomMode, uint8_t NewCustomMode);
        void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
        void Jump();
        bool IsPlayingRootMotion();
        bool IsPlayingNetworkedRootMotionMontage();
        bool IsJumpProvidingForce();
        bool HasAnyRootMotion();
        Engine::UAnimMontage* GetCurrentMontage();
        CoreUObject::FVector GetBaseTranslationOffset();
        CoreUObject::FRotator GetBaseRotationOffsetRotator();
        float GetAnimRootMotionTranslationScale();
        void Crouch(bool bClientSimulation);
        void ClientVeryShortAdjustPosition(float Timestamp, const CoreUObject::FVector& NewLoc, Engine::UPrimitiveComponent* NewBase, const BasicTypes::FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8_t ServerMovementMode);
        void ClientMoveResponsePacked(const Engine::FCharacterMoveResponsePackedBits& PackedBits);
        void ClientCheatWalk();
        void ClientCheatGhost();
        void ClientCheatFly();
        void ClientAdjustRootMotionSourcePosition(float Timestamp, const Engine::FRootMotionSourceGroup& ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, const CoreUObject::FVector& ServerLoc, const Engine::FVector_NetQuantizeNormal& ServerRotation, float ServerVelZ, Engine::UPrimitiveComponent* ServerBase, const BasicTypes::FName& ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8_t ServerMovementMode);
        void ClientAdjustRootMotionPosition(float Timestamp, float ServerMontageTrackPosition, const CoreUObject::FVector& ServerLoc, const Engine::FVector_NetQuantizeNormal& ServerRotation, float ServerVelZ, Engine::UPrimitiveComponent* ServerBase, const BasicTypes::FName& ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8_t ServerMovementMode);
        void ClientAdjustPosition(float Timestamp, const CoreUObject::FVector& NewLoc, const CoreUObject::FVector& NewVel, Engine::UPrimitiveComponent* NewBase, const BasicTypes::FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8_t ServerMovementMode);
        void ClientAckGoodMove(float Timestamp);
        bool CanJumpInternal();
        bool CanJump();
        bool CanCrouch();
        void CacheInitialMeshOffset(const CoreUObject::FVector& MeshRelativeLocation, const CoreUObject::FRotator& MeshRelativeRotation);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.Character");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
