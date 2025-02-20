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
#include "M1Data_FM1TemplateId.h"
#include "BasicTypes_TArray.h"
#include "M1Data_FM1MonsterDropInfo.h"
#include "M1_FM1MonsterDropData.h"
#include "BasicTypes_TMap.h"
#include "BasicTypes_FName.h"
#include "M1_FM1MonsterDropDataWrapper.h"
#include "M1_UM1MapObjectInfo.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1MapObjectInfo_MonsterSpawner
     * Size -> 0x0078 (FullSize[0x0140] - InheritedSize[0x00C8])
     */
    class UM1MapObjectInfo_MonsterSpawner : public M1::UM1MapObjectInfo
    {
    public:
        M1Data::FM1TemplateId                                        TemplateId;                                              //  Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<M1Data::FM1MonsterDropInfo>               MonsterDropInfoList;                                     //  ZeroConstructor, NativeAccessSpecifierPrivate
        BasicTypes::TArray<M1::FM1MonsterDropData>                   MonsterDropDataList;                                     //  Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
        BasicTypes::TMap<BasicTypes::FName, M1::FM1MonsterDropDataWrapper> MonsterDropDataListByDifficulty;                         //  Edit, EditConst, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1MapObjectInfo_MonsterSpawner");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
