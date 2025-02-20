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
#include "Engine_FVectorCurve.h"
#include "Engine_FAnimCurveBase.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * ScriptStruct /Script/Engine.TransformCurve
     * Size -> 0x04B0 (FullSize[0x04C0] - InheritedSize[0x0010])
     */
    struct FTransformCurve : public Engine::FAnimCurveBase
    {
    public:
        Engine::FVectorCurve                                         TranslationCurve;                                        //  NativeAccessSpecifierPublic
        Engine::FVectorCurve                                         RotationCurve;                                           //  NativeAccessSpecifierPublic
        Engine::FVectorCurve                                         ScaleCurve;                                              //  NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
