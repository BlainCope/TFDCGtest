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
#include "BasicTypes_TArray.h"
#include "BasicTypes_FName.h"
#include "AIModule_UBTDecorator.h"
#include "AIModule_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::AIModule { class AAIController; };
namespace CG::Engine { class AActor; };
namespace CG::Engine { class APawn; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AIModule
{
    /**
     * Class /Script/AIModule.BTDecorator_BlueprintBase
     * Size -> 0x0038 (FullSize[0x00A0] - InheritedSize[0x0068])
     */
    class UBTDecorator_BlueprintBase : public AIModule::UBTDecorator
    {
    public:
        AIModule::AAIController*                                     AIOwner;                                                 //  ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        Engine::AActor*                                              ActorOwner;                                              //  ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        BasicTypes::TArray<BasicTypes::FName>                        ObservedKeyNames;                                        //  ZeroConstructor, Protected, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x10];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        bool                                                         bShowPropertyDetails : 1;                                //  BIT_FIELD Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         bCheckConditionOnlyBlackBoardChanges : 1;                //  BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         bIsObservingBB : 1;                                      //  BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0001[0x7];                                   //  MISSED OFFSET (PADDING)

    public:
        void ReceiveTickAI(AIModule::AAIController* OwnerController, Engine::APawn* ControlledPawn, float DeltaSeconds);
        void ReceiveTick(Engine::AActor* OwnerActor, float DeltaSeconds);
        void ReceiveObserverDeactivatedAI(AIModule::AAIController* OwnerController, Engine::APawn* ControlledPawn);
        void ReceiveObserverDeactivated(Engine::AActor* OwnerActor);
        void ReceiveObserverActivatedAI(AIModule::AAIController* OwnerController, Engine::APawn* ControlledPawn);
        void ReceiveObserverActivated(Engine::AActor* OwnerActor);
        void ReceiveExecutionStartAI(AIModule::AAIController* OwnerController, Engine::APawn* ControlledPawn);
        void ReceiveExecutionStart(Engine::AActor* OwnerActor);
        void ReceiveExecutionFinishAI(AIModule::AAIController* OwnerController, Engine::APawn* ControlledPawn, AIModule::EBTNodeResult NodeResult);
        void ReceiveExecutionFinish(Engine::AActor* OwnerActor, AIModule::EBTNodeResult NodeResult);
        bool PerformConditionCheckAI(AIModule::AAIController* OwnerController, Engine::APawn* ControlledPawn);
        bool PerformConditionCheck(Engine::AActor* OwnerActor);
        bool IsDecoratorObserverActive();
        bool IsDecoratorExecutionActive();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/AIModule.BTDecorator_BlueprintBase");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
