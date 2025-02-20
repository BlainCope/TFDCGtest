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
#include "CoreUObject_FVector.h"
#include "BasicTypes_FName.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AIModule
{
    /**
     * ScriptStruct /Script/AIModule.AIStimulus
     * Size -> 0x003C
     */
    struct FAIStimulus
    {
    public:
        float                                                        Age;                                                     //  BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        ExpirationAge;                                           //  BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        Strength;                                                //  BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FVector                                         StimulusLocation;                                        //  BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FVector                                         ReceiverLocation;                                        //  BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FName                                            Tag;                                                     //  BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0xC];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        bool                                                         UnknownData_0001 : 1;                                    //  BIT_FIELD (PADDING)
        bool                                                         bSuccessfullySensed : 1;                                 //  BIT_FIELD BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0002[0x3];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
