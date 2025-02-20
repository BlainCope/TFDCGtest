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
#include "CoreUObject_FPlane.h"
#include "KawaiiPhysics_FCollisionLimitBase.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::KawaiiPhysics
{
    /**
     * ScriptStruct /Script/KawaiiPhysics.PlanarLimit
     * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
     */
    struct FPlanarLimit : public KawaiiPhysics::FCollisionLimitBase
    {
    public:
        CoreUObject::FPlane                                          Plane;                                                   //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
