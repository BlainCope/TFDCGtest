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
#include "M1_UM1ActorComponent.h"
#include "BasicTypes_FName.h"
#include "M1_FM1ActorFollowParams.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class AActor; };
namespace CG::Engine { class USceneComponent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1ActorFollowComponent
     * Size -> 0x0058 (FullSize[0x0120] - InheritedSize[0x00C8])
     */
    class UM1ActorFollowComponent : public M1::UM1ActorComponent
    {
    public:
        BasicTypes::TWeakObjectPtr<Engine::AActor>                   FollowTarget;                                            //  Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x50];                                  //  MISSED OFFSET (PADDING)

    public:
        void TickWithFollowTarget(Engine::AActor* FollowActor, float DeltaTime);
        void TickEachControl(Engine::AActor* FollowActor, const BasicTypes::FName& ControlTag, Engine::USceneComponent* ComponentToControl, const M1::FM1ActorFollowParams& Params, float DeltaTime);
        void RemoveControl(const BasicTypes::FName& ControlTag);
        void OnRep_FollowTarget();
        void OnRemovedControl(Engine::AActor* FollowActor, const BasicTypes::FName& ControlTag, Engine::USceneComponent* OwnedSceneComponent);
        void OnAddedControl(Engine::AActor* FollowActor, const BasicTypes::FName& ControlTag, Engine::USceneComponent* OwnedSceneComponent, const M1::FM1ActorFollowParams& Params);
        void InitWithFollowTarget(Engine::AActor* FollowActor);
        Engine::AActor* GetFollowTarget();
        bool AddControl(const BasicTypes::FName& ControlTag, Engine::USceneComponent* OwnedSceneComponent, const M1::FM1ActorFollowParams& Params);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1ActorFollowComponent");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
