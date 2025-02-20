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
#include "AIModule_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::AIModule { class UEnvQueryContext; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AIModule
{
    /**
     * ScriptStruct /Script/AIModule.EnvDirection
     * Size -> 0x0020
     */
    struct FEnvDirection
    {
    public:
        AIModule::UEnvQueryContext*                                  LineFrom;                                                //  Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        AIModule::UEnvQueryContext*                                  LineTo;                                                  //  Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        AIModule::UEnvQueryContext*                                  Rotation;                                                //  Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        AIModule::EEnvDirection                                      DirMode;                                                 //  Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
