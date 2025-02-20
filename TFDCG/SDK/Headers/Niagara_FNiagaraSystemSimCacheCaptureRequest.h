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
#include "BasicTypes_FName.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Niagara
{
    /**
     * ScriptStruct /Script/Niagara.NiagaraSystemSimCacheCaptureRequest
     * Size -> 0x0010
     */
    struct FNiagaraSystemSimCacheCaptureRequest
    {
    public:
        BasicTypes::FName                                            ComponentName;                                           //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      CaptureDelayFrames;                                      //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      CaptureFrames;                                           //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
