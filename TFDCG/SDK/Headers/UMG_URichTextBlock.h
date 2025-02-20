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
#include "BasicTypes_FText.h"
#include "BasicTypes_TArray.h"
#include "SlateCore_FTextBlockStyle.h"
#include "SlateCore_ENUMS.h"
#include "UMG_UTextLayoutWidget.h"
#include "SlateCore_FSlateBrush.h"
#include "CoreUObject_FVector2D.h"
#include "CoreUObject_FLinearColor.h"
#include "SlateCore_FSlateFontInfo.h"
#include "SlateCore_FSlateColor.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UDataTable; };
namespace CG::UMG { class URichTextBlockDecorator; };
namespace CG::Engine { class UMaterialInterface; };
namespace CG::Engine { class UMaterialInstanceDynamic; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UMG
{
    /**
     * Class /Script/UMG.RichTextBlock
     * Size -> 0x06A0 (FullSize[0x07F0] - InheritedSize[0x0150])
     */
    class URichTextBlock : public UMG::UTextLayoutWidget
    {
    public:
        BasicTypes::FText                                            Text;                                                    //  Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
        Engine::UDataTable*                                          TextStyleSet;                                            //  Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        BasicTypes::TArray<UMG::URichTextBlockDecorator*>            DecoratorClasses;                                        //  Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
        bool                                                         bOverrideDefaultStyle;                                   //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0xF];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        SlateCore::FTextBlockStyle                                   DefaultTextStyleOverride;                                //  Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
        float                                                        MinDesiredWidth;                                         //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        SlateCore::ETextTransformPolicy                              TextTransformPolicy;                                     //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        SlateCore::ETextOverflowPolicy                               TextOverflowPolicy;                                      //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0001[0xA];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        SlateCore::FTextBlockStyle                                   DefaultTextStyle;                                        //  Transient, Protected, NativeAccessSpecifierProtected
        BasicTypes::TArray<UMG::URichTextBlockDecorator*>            InstanceDecorators;                                      //  ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0002[0x20];                                  //  MISSED OFFSET (PADDING)

    public:
        void SetTextTransformPolicy(SlateCore::ETextTransformPolicy InTransformPolicy);
        void SetTextStyleSet(Engine::UDataTable* NewTextStyleSet);
        void SetTextOverflowPolicy(SlateCore::ETextOverflowPolicy InOverflowPolicy);
        void SetText(const BasicTypes::FText& InText);
        void SetMinDesiredWidth(float InMinDesiredWidth);
        void SetDefaultTextStyle(const SlateCore::FTextBlockStyle& InDefaultTextStyle);
        void SetDefaultStrikeBrush(SlateCore::FSlateBrush* InStrikeBrush);
        void SetDefaultShadowOffset(const CoreUObject::FVector2D& InShadowOffset);
        void SetDefaultShadowColorAndOpacity(const CoreUObject::FLinearColor& InShadowColorAndOpacity);
        void SetDefaultMaterial(Engine::UMaterialInterface* InMaterial);
        void SetDefaultFont(const SlateCore::FSlateFontInfo& InFontInfo);
        void SetDefaultColorAndOpacity(const SlateCore::FSlateColor& InColorAndOpacity);
        void SetDecorators(BasicTypes::TArray<UMG::URichTextBlockDecorator*> InDecoratorClasses);
        void SetAutoWrapText(bool InAutoTextWrap);
        void RefreshTextLayout();
        Engine::UDataTable* GetTextStyleSet();
        BasicTypes::FText GetText();
        Engine::UMaterialInstanceDynamic* GetDefaultDynamicMaterial();
        UMG::URichTextBlockDecorator* GetDecoratorByClass(UMG::URichTextBlockDecorator* DecoratorClass);
        void ClearAllDefaultStyleOverrides();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/UMG.RichTextBlock");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
