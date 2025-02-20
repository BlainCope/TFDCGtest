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
#include "CameraCalibrationCore_FFocalLengthInfo.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::CameraCalibrationCore
{
    /**
     * ScriptStruct /Script/CameraCalibrationCore.FocalLengthZoomPoint
     * Size -> 0x0010
     */
    struct FFocalLengthZoomPoint
    {
    public:
        float                                                        Zoom;                                                    //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CameraCalibrationCore::FFocalLengthInfo                      FocalLengthInfo;                                         //  NoDestructor, NativeAccessSpecifierPublic
        bool                                                         bIsCalibrationPoint;                                     //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
