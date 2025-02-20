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
#include "M1_ENUMS.h"
#include "M1_FM1ElementalFloaterSetting.h"
#include "M1Data_ENUMS.h"
#include "CoreUObject_FLinearColor.h"
#include "Engine_UDataAsset.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1UIFloaterWidget; };
namespace CG::M1 { class UM1DataFloaterSetting; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UIDataAsset
     * Size -> 0x0100 (FullSize[0x0130] - InheritedSize[0x0030])
     */
    class UM1UIDataAsset : public Engine::UDataAsset
    {
    public:
        M1::UM1UIFloaterWidget*                                      FloaterWidget;                                           //  Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TMap<M1::EFloaterType, M1::UM1DataFloaterSetting*> FloaterSetting;                                          //  Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
        M1::FM1ElementalFloaterSetting                               ElementalFloaterSetting;                                 //  Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
        BasicTypes::TMap<M1Data::EM1RoundsType, CoreUObject::FLinearColor> RoundsColors;                                            //  Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
        BasicTypes::TMap<M1::EM1RuneInfoTextColorType, CoreUObject::FLinearColor> RuneInfoTextColorMap;                                    //  Edit, DisableEditOnInstance, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIDataAsset");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
