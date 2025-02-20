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
#include "M1_UM1BattleStateComponent.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class AM1Monster; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1MonsterBattleStateComponent
     * Size -> 0x0010 (FullSize[0x0118] - InheritedSize[0x0108])
     */
    class UM1MonsterBattleStateComponent : public M1::UM1BattleStateComponent
    {
    public:
        M1::AM1Monster*                                              Monster_Owner;                                           //  ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1MonsterBattleStateComponent");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
