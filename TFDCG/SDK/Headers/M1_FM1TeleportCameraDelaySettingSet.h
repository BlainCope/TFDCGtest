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
#include "M1_FM1TeleportCameraDelaySetting.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * ScriptStruct /Script/M1.M1TeleportCameraDelaySettingSet
     * Size -> 0x0028
     */
    struct FM1TeleportCameraDelaySettingSet
    {
    public:
        M1::FM1TeleportCameraDelaySetting                            StartCameraSetting;                                      //  Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
        M1::FM1TeleportCameraDelaySetting                            EndCameraSetting;                                        //  Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
