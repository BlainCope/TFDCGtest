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
#include "CoreUObject_FLinearColor.h"
#include "BasicTypes_TSoftObjectPtr.h"
#include "Engine_UTexture2D.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * ScriptStruct /Script/M1.M1WeaponBottomHudInfo
     * Size -> 0x0048
     */
    struct FM1WeaponBottomHudInfo
    {
    public:
        bool                                                         bHidden;                                                 //  Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FLinearColor                                    CustomColor;                                             //  Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TSoftObjectPtr<Engine::UTexture2D>               CustomIcon;                                              //  ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0xC];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
