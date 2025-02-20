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
#include "IKRig_FTargetChainFKSettings.h"
#include "IKRig_FTargetChainIKSettings.h"
#include "IKRig_FTargetChainSpeedPlantSettings.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::IKRig
{
    /**
     * ScriptStruct /Script/IKRig.TargetChainSettings
     * Size -> 0x0074
     */
    struct FTargetChainSettings
    {
    public:
        IKRig::FTargetChainFKSettings                                FK;                                                      //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        IKRig::FTargetChainIKSettings                                IK;                                                      //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        IKRig::FTargetChainSpeedPlantSettings                        SpeedPlanting;                                           //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
