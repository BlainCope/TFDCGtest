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
#include "CoreUObject_FColor.h"
#include "CoreUObject_FVector.h"
#include "BasicTypes_TSoftClassPtr.h"
#include "Engine_AActor.h"
#include "Engine_FNavAgentProperties.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * ScriptStruct /Script/Engine.NavDataConfig
     * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
     */
    struct FNavDataConfig : public Engine::FNavAgentProperties
    {
    public:
        BasicTypes::FName                                            Name;                                                    //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FColor                                          Color;                                                   //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FVector                                         DefaultQueryExtent;                                      //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::AActor*                                              NavigationDataClass;                                     //  ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TSoftClassPtr<Engine::AActor>                    NavDataClass;                                            //  ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0xC];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
