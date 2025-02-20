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
#include "BasicTypes_TArray.h"
#include "Engine_FDataDrivenShaderPlatformInfoInput.h"
#include "Engine_UMaterialExpression.h"
#include "BasicTypes_FString.h"

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
     * Class /Script/Engine.MaterialExpressionDataDrivenShaderPlatformInfoSwitch
     * Size -> 0x0068 (FullSize[0x0118] - InheritedSize[0x00B0])
     */
    class UMaterialExpressionDataDrivenShaderPlatformInfoSwitch : public Engine::UMaterialExpression
    {
    public:
        Engine::FExpressionInput                                     InputTrue;                                               //  NoDestructor, NativeAccessSpecifierPublic
        Engine::FExpressionInput                                     InputFalse;                                              //  NoDestructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::FDataDrivenShaderPlatformInfoInput> DDSPIPropertyNames;                                      //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        bool                                                         bContainsInvalidProperty : 1;                            //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (PADDING)

    public:
        BasicTypes::TArray<BasicTypes::FString> GetNameOptions();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.MaterialExpressionDataDrivenShaderPlatformInfoSwitch");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
