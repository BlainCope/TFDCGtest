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
#include "M1_UM1UIWidget.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1UITimer; };
namespace CG::M1 { class UM1UIMissionWaveProgressButton; };
namespace CG::M1 { class UM1UIMissionWaveWaitingPlayerList; };
namespace CG::M1 { class UM1UIMissionWaveNumberButtons; };
namespace CG::M1 { class UM1UIMissionWaveReceivedRewards; };
namespace CG::M1 { class UM1UIMissionWaveRewards; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UIMissionWaveCheckPoint
     * Size -> 0x0040 (FullSize[0x0748] - InheritedSize[0x0708])
     */
    class UM1UIMissionWaveCheckPoint : public M1::UM1UIWidget
    {
    public:
        bool                                                         bIsPartyFollower;                                        //  BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1::UM1UITimer*                                              UI_Timer;                                                //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIMissionWaveProgressButton*                          UI_MissionWaveStop;                                      //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIMissionWaveWaitingPlayerList*                       UI_WaitingPlayerList;                                    //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIMissionWaveProgressButton*                          UI_MissionWaveContinue;                                  //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIMissionWaveNumberButtons*                           UI_WaveNumberButtons;                                    //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIMissionWaveReceivedRewards*                         UI_ReceivedRewards;                                      //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIMissionWaveRewards*                                 UI_NextCheckPointRewards;                                //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

    public:
        void OnTimerEnd();
        void OnClicked_MissionWaveStop(M1::UM1UIWidget* InWidget);
        void OnClicked_MissionWaveContinue(M1::UM1UIWidget* InWidget);
        void BP_ShowAsStopSelected();
        void BP_ShowAsContinueSelected();
        void BP_SetTimerHighlight(bool bInSet);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIMissionWaveCheckPoint");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
