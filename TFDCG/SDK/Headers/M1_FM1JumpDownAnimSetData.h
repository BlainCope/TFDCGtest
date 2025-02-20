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
#include "BasicTypes_TMap.h"
#include "M1_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UAnimSequenceBase; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * ScriptStruct /Script/M1.M1JumpDownAnimSetData
     * Size -> 0x0060
     */
    struct FM1JumpDownAnimSetData
    {
    public:
        BasicTypes::TMap<M1::EM1JumpAnimType, Engine::UAnimSequenceBase*> AnimSet;                                                 //  Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
        float                                                        LandingDuration;                                         //  Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        LaunchInitialSpeed;                                      //  Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        DestinationOffset;                                       //  Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
