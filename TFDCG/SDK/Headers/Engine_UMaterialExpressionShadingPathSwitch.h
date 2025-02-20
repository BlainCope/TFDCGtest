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
#include "Engine_FExpressionInput.h"
#include "Engine_UMaterialExpression.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.MaterialExpressionShadingPathSwitch
     * Size -> 0x00A0 (FullSize[0x0150] - InheritedSize[0x00B0])
     */
    class UMaterialExpressionShadingPathSwitch : public Engine::UMaterialExpression
    {
    public:
        Engine::FExpressionInput                                     Default;                                                 //  NoDestructor, NativeAccessSpecifierPublic
        Engine::FExpressionInput                                     Inputs[0x3];                                             //  NoDestructor, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.MaterialExpressionShadingPathSwitch");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
