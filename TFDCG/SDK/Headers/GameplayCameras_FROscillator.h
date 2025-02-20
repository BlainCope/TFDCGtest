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
#include "GameplayCameras_FFOscillator.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::GameplayCameras
{
    /**
     * ScriptStruct /Script/GameplayCameras.ROscillator
     * Size -> 0x0024
     */
    struct FROscillator
    {
    public:
        GameplayCameras::FFOscillator                                Pitch;                                                   //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        GameplayCameras::FFOscillator                                Yaw;                                                     //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        GameplayCameras::FFOscillator                                Roll;                                                    //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
