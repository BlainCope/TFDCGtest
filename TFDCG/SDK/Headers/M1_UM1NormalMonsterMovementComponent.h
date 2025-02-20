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
#include "M1_FM1JumpUpRangeData.h"
#include "M1_FM1JumpDownAnimSetData.h"
#include "M1_UM1CharacterMovementComponent.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class AM1NormalMonster; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1NormalMonsterMovementComponent
     * Size -> 0x0074 (FullSize[0x0D50] - InheritedSize[0x0CDC])
     */
    class UM1NormalMonsterMovementComponent : public M1::UM1CharacterMovementComponent
    {
    public:
        float                                                        DetectFloorDistance;                                     //  Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<M1::FM1JumpUpRangeData>                   JumpUpSpeedPerRangeList;                                 //  Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
        BasicTypes::TArray<M1::FM1JumpDownAnimSetData>               JumpDownAnimSetData;                                     //  Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
        M1::AM1NormalMonster*                                        NormalMonster_Owner;                                     //  ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0x48];                                  //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1NormalMonsterMovementComponent");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
