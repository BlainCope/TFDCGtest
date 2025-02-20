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
#include "Engine_FHLODProxyMesh.h"
#include "BasicTypes_TMap.h"
#include "CoreUObject_UObject.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UHLODProxyDesc; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.HLODProxy
     * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
     */
    class UHLODProxy : public CoreUObject::UObject
    {
    public:
        BasicTypes::TArray<Engine::FHLODProxyMesh>                   ProxyMeshes;                                             //  Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate
        BasicTypes::TMap<Engine::UHLODProxyDesc*, Engine::FHLODProxyMesh> HLODActors;                                              //  Edit, EditConst, NativeAccessSpecifierPrivate

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.HLODProxy");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
