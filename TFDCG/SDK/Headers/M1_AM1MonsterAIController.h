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
#include "CoreUObject_FVector.h"
#include "BasicTypes_TArray.h"
#include "M1_ENUMS.h"
#include "M1_AM1AIController.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1AIMove_Base; };
namespace CG::Engine { class AActor; };
namespace CG::M1 { class UM1ActorManagerSubsystem; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1MonsterAIController
     * Size -> 0x0098 (FullSize[0x0508] - InheritedSize[0x0470])
     */
    class AM1MonsterAIController : public M1::AM1AIController
    {
    public:
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FVector                                         PrevLocation;                                            //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0001[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<M1::UM1AIMove_Base*>                      MoveSequence;                                            //  Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPrivate
        int32_t                                                      CurrentMoveIndex;                                        //  Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        float                                                        RemainingMoveDuration;                                   //  Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        float                                                        ElapsedTimeForRescueMove;                                //  Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        CoreUObject::FVector                                         CachedLocationForRescueMove;                             //  Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::EM1AIMovePurpose                                         MovePurpose;                                             //  Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        bool                                                         bMoveSequenceLooping;                                    //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0002[0x16];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<Engine::AActor*>                          AdditionalObjects;                                       //  ZeroConstructor, Transient, NativeAccessSpecifierPrivate
        M1::UM1ActorManagerSubsystem*                                ActorManager_Subsystem;                                  //  ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::EM1AIMoveResult                                          LastTriedMoveResult;                                     //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0003[0x27];                                  //  MISSED OFFSET (PADDING)

    public:
        void SetPatrolEnable(bool Enable);
        void OnChangedMainTarget(Engine::AActor* InPrevMainTarget);
        bool NeedAllianceCall();
        BasicTypes::TArray<Engine::AActor*> GetMissionTargetList();
        void AllianceCall(Engine::AActor* NewTarget);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1MonsterAIController");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
