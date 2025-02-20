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
#include "Serialization_FStructSerializerNumericTestStruct.h"
#include "Serialization_FStructSerializerBooleanTestStruct.h"
#include "Serialization_FStructSerializerObjectTestStruct.h"
#include "Serialization_FStructSerializerBuiltinTestStruct.h"
#include "Serialization_FStructSerializerArrayTestStruct.h"
#include "Serialization_FStructSerializerMapTestStruct.h"
#include "Serialization_FStructSerializerSetTestStruct.h"
#include "Serialization_FStructSerializerLWCTypesTest.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Serialization
{
    /**
     * ScriptStruct /Script/Serialization.StructSerializerTestStruct
     * Size -> 0x06A0
     */
    struct FStructSerializerTestStruct
    {
    public:
        Serialization::FStructSerializerNumericTestStruct            Numerics;                                                //  NoDestructor, NativeAccessSpecifierPublic
        Serialization::FStructSerializerBooleanTestStruct            Booleans;                                                //  NoDestructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x5];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Serialization::FStructSerializerObjectTestStruct             Objects;                                                 //  NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Serialization::FStructSerializerBuiltinTestStruct            Builtins;                                                //  HasGetValueTypeHash, NativeAccessSpecifierPublic
        Serialization::FStructSerializerArrayTestStruct              Arrays;                                                  //  NativeAccessSpecifierPublic
        Serialization::FStructSerializerMapTestStruct                Maps;                                                    //  NativeAccessSpecifierPublic
        Serialization::FStructSerializerSetTestStruct                Sets;                                                    //  NativeAccessSpecifierPublic
        Serialization::FStructSerializerLWCTypesTest                 LWCTypes;                                                //  NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
