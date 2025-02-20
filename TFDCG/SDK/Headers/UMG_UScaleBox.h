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
#include "Slate_ENUMS.h"
#include "UMG_UContentWidget.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UMG
{
    /**
     * Class /Script/UMG.ScaleBox
     * Size -> 0x0020 (FullSize[0x0168] - InheritedSize[0x0148])
     */
    class UScaleBox : public UMG::UContentWidget
    {
    public:
        Slate::EStretch                                              Stretch;                                                 //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Slate::EStretchDirection                                     StretchDirection;                                        //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x2];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        UserSpecifiedScale;                                      //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         IgnoreInheritedScale;                                    //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x17];                                  //  MISSED OFFSET (PADDING)

    public:
        void SetUserSpecifiedScale(float InUserSpecifiedScale);
        void SetStretchDirection(Slate::EStretchDirection InStretchDirection);
        void SetStretch(Slate::EStretch InStretch);
        void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/UMG.ScaleBox");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
