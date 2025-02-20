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
#include "Niagara_FNiagaraVariable.h"
#include "Niagara_FNiagaraParameterStore.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Niagara
{
    /**
     * ScriptStruct /Script/Niagara.NiagaraUserRedirectionParameterStore
     * Size -> 0x0050 (FullSize[0x00D8] - InheritedSize[0x0088])
     */
    struct FNiagaraUserRedirectionParameterStore : public Niagara::FNiagaraParameterStore
    {
    public:
        BasicTypes::TMap<Niagara::FNiagaraVariable, Niagara::FNiagaraVariable> UserParameterRedirects;                                  //  NativeAccessSpecifierPrivate
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
