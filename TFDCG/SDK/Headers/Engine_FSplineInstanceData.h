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
#include "Engine_FSplineCurves.h"
#include "Engine_FSceneComponentInstanceData.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * ScriptStruct /Script/Engine.SplineInstanceData
     * Size -> 0x00E8 (FullSize[0x01A0] - InheritedSize[0x00B8])
     */
    struct FSplineInstanceData : public Engine::FSceneComponentInstanceData
    {
    public:
        bool                                                         bSplineHasBeenEdited;                                    //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::FSplineCurves                                        SplineCurves;                                            //  NativeAccessSpecifierPublic
        Engine::FSplineCurves                                        SplineCurvesPreUCS;                                      //  NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
