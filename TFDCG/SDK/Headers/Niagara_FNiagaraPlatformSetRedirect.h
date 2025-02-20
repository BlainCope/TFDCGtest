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
#include "BasicTypes_TArray.h"
#include "BasicTypes_FName.h"
#include "Niagara_ENUMS.h"
#include "Niagara_FNiagaraPlatformSetCVarCondition.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Niagara
{
    /**
     * ScriptStruct /Script/Niagara.NiagaraPlatformSetRedirect
     * Size -> 0x0080
     */
    struct FNiagaraPlatformSetRedirect
    {
    public:
        BasicTypes::TArray<BasicTypes::FName>                        ProfileNames;                                            //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        Niagara::ENiagaraDeviceProfileRedirectMode                   Mode;                                                    //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::FName                                            RedirectProfileName;                                     //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Niagara::FNiagaraPlatformSetCVarCondition                    CVarConditionEnabled;                                    //  Edit, NoDestructor, NativeAccessSpecifierPublic
        Niagara::FNiagaraPlatformSetCVarCondition                    CVarConditionDisabled;                                   //  Edit, NoDestructor, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
