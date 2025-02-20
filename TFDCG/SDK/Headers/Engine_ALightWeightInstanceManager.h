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
#include "CoreUObject_FTransform.h"
#include "Engine_AActor.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.LightWeightInstanceManager
     * Size -> 0x00A0 (FullSize[0x02E8] - InheritedSize[0x0248])
     */
    class ALightWeightInstanceManager : public Engine::AActor
    {
    public:
        uint8_t                                                      UnknownData_0000[0x10];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::AActor*                                              RepresentedClass;                                        //  Edit, Net, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        Engine::AActor*                                              AcceptedClass;                                           //  ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        BasicTypes::TArray<CoreUObject::FTransform>                  InstanceTransforms;                                      //  Edit, Net, ZeroConstructor, DisableEditOnTemplate, RepNotify, Protected, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0001[0x50];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<int32_t>                                  FreeIndices;                                             //  Net, ZeroConstructor, Protected, NativeAccessSpecifierProtected
        BasicTypes::TArray<bool>                                     ValidIndices;                                            //  Net, ZeroConstructor, Protected, NativeAccessSpecifierProtected

    public:
        void OnRep_Transforms();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.LightWeightInstanceManager");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
