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
#include "Niagara_ENUMS.h"
#include "CoreUObject_FGuid.h"
#include "BasicTypes_FName.h"
#include "Niagara_FNiagaraEmitterScriptProperties.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Niagara
{
    /**
     * ScriptStruct /Script/Niagara.NiagaraEventScriptProperties
     * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
     */
    struct FNiagaraEventScriptProperties : public Niagara::FNiagaraEmitterScriptProperties
    {
    public:
        Niagara::EScriptExecutionMode                                ExecutionMode;                                           //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      SpawnNumber;                                             //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      MaxEventsPerFrame;                                       //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FGuid                                           SourceEmitterID;                                         //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FName                                            SourceEventName;                                         //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bRandomSpawnNumber;                                      //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      MinSpawnNumber;                                          //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         UpdateAttributeInitialValues;                            //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x3];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
