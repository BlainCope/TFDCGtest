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
#include "M1_FM1WeaponChangeAnimation.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * ScriptStruct /Script/M1.M1WeaponChangeAnimationSetting
     * Size -> 0x0040
     */
    struct FM1WeaponChangeAnimationSetting
    {
    public:
        M1::FM1WeaponChangeAnimation                                 MaleAnimation;                                           //  Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
        M1::FM1WeaponChangeAnimation                                 FemaleAnimation;                                         //  Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
