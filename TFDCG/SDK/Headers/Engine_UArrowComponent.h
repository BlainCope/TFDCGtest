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
#include "Engine_UPrimitiveComponent.h"
#include "CoreUObject_FColor.h"
#include "CoreUObject_FLinearColor.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.ArrowComponent
     * Size -> 0x0018 (FullSize[0x0490] - InheritedSize[0x0478])
     */
    class UArrowComponent : public Engine::UPrimitiveComponent
    {
    public:
        uint8_t                                                      UnknownData_0001[0x4];                                   //  Fix Super Size
        float                                                        ArrowSize;                                               //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        ArrowLength;                                             //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        ScreenSize;                                              //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bIsScreenSizeScaled : 1;                                 //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bTreatAsASprite : 1;                                     //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (PADDING)

    public:
        void SetUseInEditorScaling(bool bNewValue);
        void SetTreatAsASprite(bool bNewValue);
        void SetScreenSize(float NewScreenSize);
        void SetIsScreenSizeScaled(bool bNewValue);
        void SetArrowSize(float NewSize);
        void SetArrowLength(float NewLength);
        void SetArrowFColor(const CoreUObject::FColor& NewColor);
        void SetArrowColor(const CoreUObject::FLinearColor& NewColor);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.ArrowComponent");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
