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
#include "Engine_UMaterialExpressionStrataBSDF.h"

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
     * Class /Script/Engine.MaterialExpressionStrataHorizontalMixing
     * Size -> 0x0080 (FullSize[0x0130] - InheritedSize[0x00B0])
     */
    class UMaterialExpressionStrataHorizontalMixing : public Engine::UMaterialExpressionStrataBSDF
    {
    public:
        Engine::FExpressionInput                                     Background;                                              //  NoDestructor, NativeAccessSpecifierPublic
        Engine::FExpressionInput                                     Foreground;                                              //  NoDestructor, NativeAccessSpecifierPublic
        Engine::FExpressionInput                                     Mix;                                                     //  NoDestructor, NativeAccessSpecifierPublic
        bool                                                         bUseParameterBlending : 1;                               //  BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.MaterialExpressionStrataHorizontalMixing");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
