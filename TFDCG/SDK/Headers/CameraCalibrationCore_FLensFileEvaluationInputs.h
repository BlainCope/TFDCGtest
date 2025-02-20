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
#include "CinematicCamera_FCameraFilmbackSettings.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::CameraCalibrationCore
{
    /**
     * ScriptStruct /Script/CameraCalibrationCore.LensFileEvaluationInputs
     * Size -> 0x001C
     */
    struct FLensFileEvaluationInputs
    {
    public:
        float                                                        Focus;                                                   //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        Iris;                                                    //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        Zoom;                                                    //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CinematicCamera::FCameraFilmbackSettings                     Filmback;                                                //  Edit, BlueprintVisible, BlueprintReadOnly, EditConst, Interp, NoDestructor, NativeAccessSpecifierPublic
        bool                                                         bIsValid;                                                //  BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
