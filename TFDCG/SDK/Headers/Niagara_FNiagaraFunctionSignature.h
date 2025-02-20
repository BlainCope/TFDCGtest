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
#include "BasicTypes_TArray.h"
#include "Niagara_FNiagaraVariable.h"
#include "BasicTypes_TMap.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Niagara
{
    /**
     * ScriptStruct /Script/Niagara.NiagaraFunctionSignature
     * Size -> 0x0090
     */
    struct FNiagaraFunctionSignature
    {
    public:
        BasicTypes::FName                                            Name;                                                    //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<Niagara::FNiagaraVariable>                Inputs;                                                  //  ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<Niagara::FNiagaraVariable>                Outputs;                                                 //  ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::FName                                            OwnerName;                                               //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         UnknownData_0002 : 4;                                    //  BIT_FIELD (PADDING)
        bool                                                         bExperimental : 1;                                       //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         UnknownData_0001 : 2;                                    //  BIT_FIELD (PADDING)
        bool                                                         bRequiresExecPin : 1;                                    //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bMemberFunction : 1;                                     //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bRequiresContext : 1;                                    //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bSupportsCPU : 1;                                        //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bWriteFunction : 1;                                      //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bReadFunction : 1;                                       //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         UnknownData_0000 : 7;                                    //  BIT_FIELD (PADDING)
        bool                                                         bSupportsGPU : 1;                                        //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bSoftDeprecatedFunction : 1;                             //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bIsCompileTagGenerator : 1;                              //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bHidden : 1;                                             //  BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0003[0x2];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      ModuleUsageBitmask;                                      //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      ContextStageIndex;                                       //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int16_t                                                      RequiredInputs;                                          //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int16_t                                                      RequiredOutputs;                                         //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TMap<BasicTypes::FName, BasicTypes::FName>       FunctionSpecifiers;                                      //  NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
