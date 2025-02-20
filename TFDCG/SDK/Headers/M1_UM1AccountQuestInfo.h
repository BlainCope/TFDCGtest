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
#include "BasicTypes_TMap.h"
#include "M1Data_ENUMS.h"
#include "M1_FM1QuestTemplateIdList.h"
#include "M1Data_FM1TemplateId.h"
#include "M1_FM1ProgressQuestInfo.h"
#include "M1_FM1ActiveChallengeInfo.h"
#include "BasicTypes_TSet.h"
#include "CoreUObject_UObject.h"

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
     * Class /Script/M1.M1AccountQuestInfo
     * Size -> 0x01A8 (FullSize[0x01D0] - InheritedSize[0x0028])
     */
    class UM1AccountQuestInfo : public CoreUObject::UObject
    {
    public:
        BasicTypes::TMap<M1Data::EM1QuestType, M1::FM1QuestTemplateIdList> CompletedQuestIds;                                       //  NativeAccessSpecifierPrivate
        BasicTypes::TMap<M1Data::EM1QuestType, M1::FM1QuestTemplateIdList> CompletedBeforeRewardQuestIds;                           //  NativeAccessSpecifierPrivate
        BasicTypes::TMap<M1Data::FM1TemplateId, M1::FM1ProgressQuestInfo> ProgressQuestInfos;                                      //  NativeAccessSpecifierPrivate
        bool                                                         bHasQuestSequenceDirectionWhenEnterField;                //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1Data::FM1TemplateId                                        MainStoryQuestTemplateId;                                //  NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1Data::FM1TemplateId                                        SubQuestTemplateId;                                      //  NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0001[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TMap<M1Data::EM1QuestType, M1::FM1QuestTemplateIdList> TrackingQuestTemplateIds;                                //  NativeAccessSpecifierPrivate
        M1::FM1ActiveChallengeInfo                                   ActiveChallengeInfo;                                     //  NoDestructor, NativeAccessSpecifierPrivate
        BasicTypes::TSet<M1Data::FM1TemplateId>                      OnceCompletedQuestIDs;                                   //  NativeAccessSpecifierPrivate

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1AccountQuestInfo");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
