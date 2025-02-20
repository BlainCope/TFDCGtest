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
#include "BasicTypes_UMulticastInlineDelegate.h"
#include "BasicTypes_FName.h"
#include "CoreUObject_FRotator.h"
#include "Engine_AActor.h"
#include "CoreUObject_FVector.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class APlayerState; };
namespace CG::Engine { class APawn; };
namespace CG::Engine { class ACharacter; };
namespace CG::Engine { class USceneComponent; };
namespace CG::Engine { class UDamageType; };
namespace CG::CoreUObject { class UObject; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.Controller
     * Size -> 0x0088 (FullSize[0x02D0] - InheritedSize[0x0248])
     */
    class AController : public Engine::AActor
    {
    public:
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::APlayerState*                                        PlayerState;                                             //  BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::UMulticastInlineDelegate                         OnInstigatedAnyDamage;                                   //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::UMulticastInlineDelegate                         OnPossessedPawnChanged;                                  //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0003[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::FName                                            StateName;                                               //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::APawn*                                               Pawn;                                                    //  Net, ZeroConstructor, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0004[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::ACharacter*                                          Character;                                               //  ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        Engine::USceneComponent*                                     TransformComponent;                                      //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0005[0x18];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FRotator                                        ControlRotation;                                         //  ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
        bool                                                         bAttachToPawn : 1;                                       //  BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0006[0x3];                                   //  MISSED OFFSET (PADDING)

    public:
        void UnPossess();
        void StopMovement();
        void SetInitialLocationAndRotation(const CoreUObject::FVector& NewLocation, const CoreUObject::FRotator& NewRotation);
        void SetIgnoreMoveInput(bool bNewMoveInput);
        void SetIgnoreLookInput(bool bNewLookInput);
        void SetControlRotation(const CoreUObject::FRotator& NewRotation);
        void ResetIgnoreMoveInput();
        void ResetIgnoreLookInput();
        void ResetIgnoreInputFlags();
        void ReceiveUnPossess(Engine::APawn* UnpossessedPawn);
        void ReceivePossess(Engine::APawn* PossessedPawn);
        void ReceiveInstigatedAnyDamage(float Damage, Engine::UDamageType* DamageType, Engine::AActor* DamagedActor, Engine::AActor* DamageCauser);
        void Possess(Engine::APawn* InPawn);
        void OnRep_PlayerState();
        void OnRep_Pawn();
        bool LineOfSightTo(Engine::AActor* Other, const CoreUObject::FVector& ViewPoint, bool bAlternateChecks);
        Engine::APawn* K2_GetPawn();
        bool IsPlayerController();
        bool IsMoveInputIgnored();
        bool IsLookInputIgnored();
        bool IsLocalPlayerController();
        bool IsLocalController();
        Engine::AActor* GetViewTarget();
        void GetPlayerViewPoint(CoreUObject::FVector* out_Location, CoreUObject::FRotator* out_Rotation, CoreUObject::UObject* ContextClass);
        CoreUObject::FRotator GetDesiredRotation();
        CoreUObject::FRotator GetControlRotation();
        void ClientSetRotation(const CoreUObject::FRotator& NewRotation, bool bResetCamera);
        void ClientSetLocation(const CoreUObject::FVector& NewLocation, const CoreUObject::FRotator& NewRotation);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.Controller");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
