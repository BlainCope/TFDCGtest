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
#include "Engine_FPointerToUberGraphFrame.h"
#include "M1_UM1UIGameDevStatus.h"
#include "BasicTypes_FText.h"
#include "SlateCore_FGeometry.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1Button; };
namespace CG::M1 { class UM1TextBlock; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_GameDevStatus
{
    /**
     * WidgetBlueprintGeneratedClass /Game/UI/Test/UI_GameDevStatus.UI_GameDevStatus_C
     * Size -> 0x0070 (FullSize[0x0788] - InheritedSize[0x0718])
     */
    class UUI_GameDevStatus_C : public M1::UM1UIGameDevStatus
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        M1::UM1Button*                                               M1Button_66;                                             //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        M1::UM1TextBlock*                                            TB_GameConnectionState;                                  //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        M1::UM1TextBlock*                                            TB_LocalTime;                                            //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        M1::UM1TextBlock*                                            TB_LoginServerAddress;                                   //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        M1::UM1TextBlock*                                            TB_MiscString;                                           //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        M1::UM1TextBlock*                                            TB_Ping;                                                 //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        M1::UM1TextBlock*                                            TB_Platform;                                             //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        M1::UM1TextBlock*                                            TB_PlayerLocation;                                       //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        M1::UM1TextBlock*                                            TB_Revision;                                             //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        M1::UM1TextBlock*                                            TB_ServerNetTick;                                        //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        M1::UM1TextBlock*                                            TB_ServerState;                                          //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        M1::UM1TextBlock*                                            TB_ServerTime;                                           //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        M1::UM1TextBlock*                                            TB_ServerWorldTick;                                      //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

    public:
        void DrawServerTime();
        void GetTimeTextFilledWithZero(int32_t Time, BasicTypes::FText* NewParam);
        void DrawLocalTime();
        void UpdateLoginServerInfo();
        void DrawServerTick();
        void DrawConnectionInfo();
        void Tick(const SlateCore::FGeometry& MyGeometry, float InDeltaTime);
        void BndEvt__UI_GameDevStatus_M1Button_65_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
        void ExecuteUbergraph_UI_GameDevStatus(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("WidgetBlueprintGeneratedClass /Game/UI/Test/UI_GameDevStatus.UI_GameDevStatus_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
