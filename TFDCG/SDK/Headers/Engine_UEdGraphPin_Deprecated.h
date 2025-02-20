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
#include "BasicTypes_FString.h"
#include "Engine_ENUMS.h"
#include "Engine_FEdGraphPinType.h"
#include "BasicTypes_FText.h"
#include "BasicTypes_TArray.h"
#include "CoreUObject_UObject.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };
namespace CG::Engine { class UEdGraphPin_Deprecated; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.EdGraphPin_Deprecated
     * Size -> 0x00F0 (FullSize[0x0118] - InheritedSize[0x0028])
     */
    class UEdGraphPin_Deprecated : public CoreUObject::UObject
    {
    public:
        BasicTypes::FString                                          PinName;                                                 //  ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FString                                          PinToolTip;                                              //  ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::EEdGraphPinDirection                                 Direction;                                               //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::FEdGraphPinType                                      PinType;                                                 //  NoDestructor, NativeAccessSpecifierPublic
        BasicTypes::FString                                          DefaultValue;                                            //  ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FString                                          AutogeneratedDefaultValue;                               //  ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::UObject*                                        DefaultObject;                                           //  ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FText                                            DefaultTextValue;                                        //  NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::UEdGraphPin_Deprecated*>          LinkedTo;                                                //  ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::UEdGraphPin_Deprecated*>          SubPins;                                                 //  ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
        Engine::UEdGraphPin_Deprecated*                              ParentPin;                                               //  ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::UEdGraphPin_Deprecated*                              ReferencePassThroughConnection;                          //  ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.EdGraphPin_Deprecated");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
