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
#include "Engine_UDataAsset.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::AIModule { class UBehaviorTree; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1DataAssetBehaviorTrees
     * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
     */
    class UM1DataAssetBehaviorTrees : public Engine::UDataAsset
    {
    public:
        AIModule::UBehaviorTree*                                     StrikerBehaviorTree;                                     //  Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        AIModule::UBehaviorTree*                                     RangerBehaviorTree;                                      //  Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1DataAssetBehaviorTrees");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
