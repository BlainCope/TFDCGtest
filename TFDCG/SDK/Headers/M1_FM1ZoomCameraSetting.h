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
#include "M1_FM1CameraSetting.h"
#include "M1_FM1ZoomPostProcessSetting.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * ScriptStruct /Script/M1.M1ZoomCameraSetting
     * Size -> 0x0050
     */
    struct FM1ZoomCameraSetting
    {
    public:
        M1::FM1CameraSetting                                         CameraSetting;                                           //  Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
        M1::FM1ZoomPostProcessSetting                                PostProcessSetting;                                      //  Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
