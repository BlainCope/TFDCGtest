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
#include "Engine_ENUMS.h"
#include "BasicTypes_FString.h"
#include "CoreUObject_FGuid.h"
#include "CoreUObject_UObject.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UEdGraphPin_Deprecated; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.EdGraphNode
     * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
     */
    class UEdGraphNode : public CoreUObject::UObject
    {
    public:
        uint8_t                                                      UnknownData_0000[0x10];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<Engine::UEdGraphPin_Deprecated*>          DeprecatedPins;                                          //  ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
        int32_t                                                      NodePosX;                                                //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      NodePosY;                                                //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      NodeWidth;                                               //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      NodeHeight;                                              //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::ENodeAdvancedPins                                    AdvancedPinDisplay;                                      //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::ENodeEnabledState                                    EnabledState;                                            //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0001[0x1];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        bool                                                         bHasCompilerMessage : 1;                                 //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bIsIntermediateNode : 1;                                 //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        bool                                                         UnknownData_0002 : 1;                                    //  BIT_FIELD (PADDING)
        bool                                                         bDisplayAsDisabled : 1;                                  //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        bool                                                         bUserSetEnabledState : 1;                                //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0003[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::FString                                          NodeComment;                                             //  ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      ErrorType;                                               //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0004[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::FString                                          ErrorMsg;                                                //  ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FGuid                                           NodeGuid;                                                //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.EdGraphNode");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
