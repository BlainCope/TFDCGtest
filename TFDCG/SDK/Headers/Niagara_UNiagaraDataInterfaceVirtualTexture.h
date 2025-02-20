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
#include "Niagara_FNiagaraUserParameterBinding.h"
#include "Niagara_UNiagaraDataInterface.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class URuntimeVirtualTexture; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Niagara
{
    /**
     * Class /Script/Niagara.NiagaraDataInterfaceVirtualTexture
     * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
     */
    class UNiagaraDataInterfaceVirtualTexture : public Niagara::UNiagaraDataInterface
    {
    public:
        Engine::URuntimeVirtualTexture*                              Texture;                                                 //  Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Niagara::FNiagaraUserParameterBinding                        TextureUserParameter;                                    //  Edit, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Niagara.NiagaraDataInterfaceVirtualTexture");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
