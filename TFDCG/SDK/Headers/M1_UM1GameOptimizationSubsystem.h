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
#include "BasicTypes_TMap.h"
#include "M1_FM1AbilityCacheInfo.h"
#include "M1_FM1ActorComponentTypeCache.h"
#include "UMG_FUserWidgetPool.h"
#include "BasicTypes_TArray.h"
#include "BasicTypes_TWeakObjectPtr.h"
#include "Engine_UWorldSubsystem.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1AbilityOpCalc; };
namespace CG::Engine { class AActor; };
namespace CG::M1 { class UM1FxBudgetSubsystem; };
namespace CG::M1 { class UM1UIMonsterInfo; };
namespace CG::CoreUObject { class UObject; };
namespace CG::M1 { class UM1GameOptimizationSubsystem; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1GameOptimizationSubsystem
     * Size -> 0x0200 (FullSize[0x0230] - InheritedSize[0x0030])
     */
    class UM1GameOptimizationSubsystem : public Engine::UWorldSubsystem
    {
    public:
        uint8_t                                                      UnknownData_0000[0xC0];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TMap<M1::UM1AbilityOpCalc*, M1::FM1AbilityCacheInfo> ReusableAbilityOpCalcs;                                  //  Transient, NativeAccessSpecifierPrivate
        BasicTypes::TMap<Engine::AActor*, M1::FM1ActorComponentTypeCache> CollisionComponentTypesForClass;                         //  NativeAccessSpecifierPrivate
        M1::UM1FxBudgetSubsystem*                                    FxBudgetSubsystem;                                       //  ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        UMG::FUserWidgetPool                                         WidgetPool;                                              //  Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
        BasicTypes::TArray<BasicTypes::TWeakObjectPtr<M1::UM1UIMonsterInfo>> FocusedInfoQueue;                                        //  ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate

    public:
        M1::UM1GameOptimizationSubsystem* STATIC_Get(CoreUObject::UObject* WorldContextObject);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1GameOptimizationSubsystem");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
