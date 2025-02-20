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
#include "BasicTypes_TSoftObjectPtr.h"
#include "Engine_UCurveLinearColor.h"
#include "Engine_UCurveLinearColorAtlas.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * ScriptStruct /Script/Engine.ScalarParameterAtlasInstanceData
     * Size -> 0x0068
     */
    struct FScalarParameterAtlasInstanceData
    {
    public:
        bool                                                         bIsUsedAsAtlasPosition;                                  //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TSoftObjectPtr<Engine::UCurveLinearColor>        Curve;                                                   //  ELEMENT_SIZE_MISMATCH UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0xC];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::TSoftObjectPtr<Engine::UCurveLinearColorAtlas>   Atlas;                                                   //  ELEMENT_SIZE_MISMATCH UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0xC];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
