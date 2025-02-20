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
#include "CoreUObject_FTransform.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class AM1Player; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * ScriptStruct /Script/M1.M1MonsterLogic_Seudo_RandomWalkRoot
     * Size -> 0x0040
     */
    struct FM1MonsterLogic_Seudo_RandomWalkRoot
    {
    public:
        BasicTypes::TWeakObjectPtr<M1::AM1Player>                    Target;                                                  //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FTransform                                      BaseTransform;                                           //  Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
