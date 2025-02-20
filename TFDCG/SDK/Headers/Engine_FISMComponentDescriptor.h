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
#include "Engine_FISMComponentDescriptorBase.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UStaticMesh; };
namespace CG::Engine { class UMaterialInterface; };
namespace CG::Engine { class URuntimeVirtualTexture; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * ScriptStruct /Script/Engine.ISMComponentDescriptor
     * Size -> 0x0028 (FullSize[0x01C8] - InheritedSize[0x01A0])
     */
    struct FISMComponentDescriptor : public Engine::FISMComponentDescriptorBase
    {
    public:
        Engine::UStaticMesh*                                         StaticMesh;                                              //  Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::UMaterialInterface*>              OverrideMaterials;                                       //  Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::URuntimeVirtualTexture*>          RuntimeVirtualTextures;                                  //  Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
