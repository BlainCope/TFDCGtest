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
#include "ControlRig_FRigElementKey.h"
#include "CoreUObject_UObject.h"
#include "BasicTypes_TArray.h"
#include "BasicTypes_FName.h"
#include "CoreUObject_FVector.h"
#include "CoreUObject_FTransform.h"
#include "CoreUObject_FRotator.h"
#include "CoreUObject_FQuat.h"
#include "ControlRig_FRigPose.h"
#include "ControlRig_FRigElementWeight.h"
#include "CoreUObject_FLinearColor.h"
#include "ControlRig_FRigControlValue.h"
#include "ControlRig_ENUMS.h"
#include "ControlRig_FRigControlSettings.h"
#include "CoreUObject_FVector2D.h"
#include "AnimationCore_FTransformNoScale.h"
#include "AnimationCore_FEulerTransform.h"
#include "ControlRig_FRigNullElement.h"
#include "ControlRig_FRigControlElement.h"
#include "ControlRig_FRigBoneElement.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::ControlRig { class URigHierarchyController; };
namespace CG::ControlRig { class URigHierarchy; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::ControlRig
{
    /**
     * Class /Script/ControlRig.RigHierarchy
     * Size -> 0x0348 (FullSize[0x0370] - InheritedSize[0x0028])
     */
    class URigHierarchy : public CoreUObject::UObject
    {
    public:
        uint8_t                                                      UnknownData_0000[0x60];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        uint16_t                                                     TopologyVersion;                                         //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint16_t                                                     MetadataVersion;                                         //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint16_t                                                     MetadataTagVersion;                                      //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        bool                                                         bEnableDirtyPropagation;                                 //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0001[0x99];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      TransformStackIndex;                                     //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0002[0x74];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        ControlRig::URigHierarchyController*                         HierarchyController;                                     //  ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0003[0x58];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TMap<ControlRig::FRigElementKey, ControlRig::FRigElementKey> PreviousNameMap;                                         //  NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0004[0x80];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        ControlRig::URigHierarchy*                                   HierarchyForCacheValidation;                             //  ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0005[0x98];                                  //  MISSED OFFSET (PADDING)

    public:
        void UnsetCurveValueByIndex(int32_t InElementIndex, bool bSetupUndo);
        void UnsetCurveValue(const ControlRig::FRigElementKey& InKey, bool bSetupUndo);
        bool SwitchToWorldSpace(const ControlRig::FRigElementKey& InChild, bool bInitial, bool bAffectChildren);
        bool SwitchToParent(const ControlRig::FRigElementKey& InChild, const ControlRig::FRigElementKey& InParent, bool bInitial, bool bAffectChildren);
        bool SwitchToDefaultParent(const ControlRig::FRigElementKey& InChild, bool bInitial, bool bAffectChildren);
        BasicTypes::TArray<ControlRig::FRigElementKey> SortKeys(BasicTypes::TArray<ControlRig::FRigElementKey> InKeys);
        bool SetVectorMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName, const CoreUObject::FVector& InValue);
        bool SetVectorArrayMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName, BasicTypes::TArray<CoreUObject::FVector> InValue);
        bool SetTransformMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName, const CoreUObject::FTransform& InValue);
        bool SetTransformArrayMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName, BasicTypes::TArray<CoreUObject::FTransform> InValue);
        bool SetTag(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InTag);
        bool SetRotatorMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName, const CoreUObject::FRotator& InValue);
        bool SetRotatorArrayMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName, BasicTypes::TArray<CoreUObject::FRotator> InValue);
        bool SetRigElementKeyMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName, const ControlRig::FRigElementKey& InValue);
        bool SetRigElementKeyArrayMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName, BasicTypes::TArray<ControlRig::FRigElementKey> InValue);
        bool SetQuatMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName, const CoreUObject::FQuat& InValue);
        bool SetQuatArrayMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName, BasicTypes::TArray<CoreUObject::FQuat> InValue);
        void SetPose_ForBlueprint(const ControlRig::FRigPose& InPose);
        bool SetParentWeightArray(const ControlRig::FRigElementKey& InChild, BasicTypes::TArray<ControlRig::FRigElementWeight> InWeights, bool bInitial, bool bAffectChildren);
        bool SetParentWeight(const ControlRig::FRigElementKey& InChild, const ControlRig::FRigElementKey& InParent, const ControlRig::FRigElementWeight& InWeight, bool bInitial, bool bAffectChildren);
        bool SetNameMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName, const BasicTypes::FName& InValue);
        bool SetNameArrayMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName, BasicTypes::TArray<BasicTypes::FName> InValue);
        void SetLocalTransformByIndex(int32_t InElementIndex, const CoreUObject::FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
        void SetLocalTransform(const ControlRig::FRigElementKey& InKey, const CoreUObject::FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
        bool SetLinearColorMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName, const CoreUObject::FLinearColor& InValue);
        bool SetLinearColorArrayMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName, BasicTypes::TArray<CoreUObject::FLinearColor> InValue);
        bool SetInt32Metadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName, int32_t InValue);
        bool SetInt32ArrayMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName, BasicTypes::TArray<int32_t> InValue);
        void SetGlobalTransformByIndex(int32_t InElementIndex, const CoreUObject::FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand);
        void SetGlobalTransform(const ControlRig::FRigElementKey& InKey, const CoreUObject::FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand);
        bool SetFloatMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName, float InValue);
        bool SetFloatArrayMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName, BasicTypes::TArray<float> InValue);
        void SetCurveValueByIndex(int32_t InElementIndex, float InValue, bool bSetupUndo);
        void SetCurveValue(const ControlRig::FRigElementKey& InKey, float InValue, bool bSetupUndo);
        void SetControlVisibilityByIndex(int32_t InElementIndex, bool bVisibility);
        void SetControlVisibility(const ControlRig::FRigElementKey& InKey, bool bVisibility);
        void SetControlValueByIndex(int32_t InElementIndex, const ControlRig::FRigControlValue& InValue, ControlRig::ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands);
        void SetControlValue(const ControlRig::FRigElementKey& InKey, const ControlRig::FRigControlValue& InValue, ControlRig::ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands);
        void SetControlShapeTransformByIndex(int32_t InElementIndex, const CoreUObject::FTransform& InTransform, bool bInitial, bool bSetupUndo);
        void SetControlShapeTransform(const ControlRig::FRigElementKey& InKey, const CoreUObject::FTransform& InTransform, bool bInitial, bool bSetupUndo);
        void SetControlSettingsByIndex(int32_t InElementIndex, const ControlRig::FRigControlSettings& InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands);
        void SetControlSettings(const ControlRig::FRigElementKey& InKey, const ControlRig::FRigControlSettings& InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands);
        void SetControlPreferredRotatorByIndex(int32_t InElementIndex, const CoreUObject::FRotator& InValue, bool bInitial, bool bFixEulerFlips);
        void SetControlPreferredRotator(const ControlRig::FRigElementKey& InKey, const CoreUObject::FRotator& InValue, bool bInitial, bool bFixEulerFlips);
        void SetControlOffsetTransformByIndex(int32_t InElementIndex, const CoreUObject::FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
        void SetControlOffsetTransform(const ControlRig::FRigElementKey& InKey, const CoreUObject::FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
        bool SetBoolMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName, bool InValue);
        bool SetBoolArrayMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName, BasicTypes::TArray<bool> InValue);
        void SendAutoKeyEvent(const ControlRig::FRigElementKey& InElement, float InOffsetInSeconds, bool bAsynchronous);
        void ResetToDefault();
        void ResetPoseToInitial(ControlRig::ERigElementType InTypeFilter);
        void ResetCurveValues();
        void Reset();
        bool RemoveMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName);
        bool RemoveAllMetadata(const ControlRig::FRigElementKey& InItem);
        int32_t Num();
        ControlRig::FRigControlValue STATIC_MakeControlValueFromVector2D(const CoreUObject::FVector2D& InValue);
        ControlRig::FRigControlValue STATIC_MakeControlValueFromVector(const CoreUObject::FVector& InValue);
        ControlRig::FRigControlValue STATIC_MakeControlValueFromTransformNoScale(const AnimationCore::FTransformNoScale& InValue);
        ControlRig::FRigControlValue STATIC_MakeControlValueFromTransform(const CoreUObject::FTransform& InValue);
        ControlRig::FRigControlValue STATIC_MakeControlValueFromRotator(const CoreUObject::FRotator& InValue);
        ControlRig::FRigControlValue STATIC_MakeControlValueFromInt(int32_t InValue);
        ControlRig::FRigControlValue STATIC_MakeControlValueFromFloat(float InValue);
        ControlRig::FRigControlValue STATIC_MakeControlValueFromEulerTransform(const AnimationCore::FEulerTransform& InValue);
        ControlRig::FRigControlValue STATIC_MakeControlValueFromBool(bool InValue);
        bool IsValidIndex(int32_t InElementIndex);
        bool IsSelectedByIndex(int32_t InIndex);
        bool IsSelected(const ControlRig::FRigElementKey& InKey);
        bool IsProcedural(const ControlRig::FRigElementKey& InKey);
        bool IsParentedTo(const ControlRig::FRigElementKey& InChild, const ControlRig::FRigElementKey& InParent);
        bool IsCurveValueSetByIndex(int32_t InElementIndex);
        bool IsCurveValueSet(const ControlRig::FRigElementKey& InKey);
        bool IsControllerAvailable();
        bool HasTag(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InTag);
        CoreUObject::FVector GetVectorMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName, const CoreUObject::FVector& DefaultValue);
        CoreUObject::FVector STATIC_GetVectorFromControlValue(const ControlRig::FRigControlValue& InValue);
        BasicTypes::TArray<CoreUObject::FVector> GetVectorArrayMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName);
        CoreUObject::FVector2D STATIC_GetVector2DFromControlValue(const ControlRig::FRigControlValue& InValue);
        AnimationCore::FTransformNoScale STATIC_GetTransformNoScaleFromControlValue(const ControlRig::FRigControlValue& InValue);
        CoreUObject::FTransform GetTransformMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName, const CoreUObject::FTransform& DefaultValue);
        CoreUObject::FTransform STATIC_GetTransformFromControlValue(const ControlRig::FRigControlValue& InValue);
        BasicTypes::TArray<CoreUObject::FTransform> GetTransformArrayMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName);
        BasicTypes::TArray<BasicTypes::FName> GetTags(const ControlRig::FRigElementKey& InItem);
        BasicTypes::TArray<ControlRig::FRigElementKey> GetSelectedKeys(ControlRig::ERigElementType InTypeFilter);
        CoreUObject::FRotator GetRotatorMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName, const CoreUObject::FRotator& DefaultValue);
        CoreUObject::FRotator STATIC_GetRotatorFromControlValue(const ControlRig::FRigControlValue& InValue);
        BasicTypes::TArray<CoreUObject::FRotator> GetRotatorArrayMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName);
        BasicTypes::TArray<ControlRig::FRigElementKey> GetRootElementKeys();
        BasicTypes::TArray<ControlRig::FRigElementKey> GetRigidBodyKeys(bool bTraverse);
        ControlRig::FRigElementKey GetRigElementKeyMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName, const ControlRig::FRigElementKey& DefaultValue);
        BasicTypes::TArray<ControlRig::FRigElementKey> GetRigElementKeyArrayMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName);
        BasicTypes::TArray<ControlRig::FRigElementKey> GetReferenceKeys(bool bTraverse);
        CoreUObject::FQuat GetQuatMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName, const CoreUObject::FQuat& DefaultValue);
        BasicTypes::TArray<CoreUObject::FQuat> GetQuatArrayMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName);
        ControlRig::FRigElementKey GetPreviousParent(const ControlRig::FRigElementKey& InKey);
        BasicTypes::FName GetPreviousName(const ControlRig::FRigElementKey& InKey);
        ControlRig::FRigPose GetPose(bool bInitial);
        BasicTypes::TArray<ControlRig::FRigElementWeight> GetParentWeightArray(const ControlRig::FRigElementKey& InChild, bool bInitial);
        ControlRig::FRigElementWeight GetParentWeight(const ControlRig::FRigElementKey& InChild, const ControlRig::FRigElementKey& InParent, bool bInitial);
        CoreUObject::FTransform GetParentTransformByIndex(int32_t InElementIndex, bool bInitial);
        CoreUObject::FTransform GetParentTransform(const ControlRig::FRigElementKey& InKey, bool bInitial);
        BasicTypes::TArray<ControlRig::FRigElementKey> GetParents(const ControlRig::FRigElementKey& InKey, bool bRecursive);
        int32_t GetNumberOfParents(const ControlRig::FRigElementKey& InKey);
        BasicTypes::TArray<ControlRig::FRigElementKey> GetNullKeys(bool bTraverse);
        BasicTypes::FName GetNameMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName, const BasicTypes::FName& DefaultValue);
        BasicTypes::TArray<BasicTypes::FName> GetNameArrayMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName);
        ControlRig::ERigMetadataType GetMetadataType(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName);
        BasicTypes::TArray<BasicTypes::FName> GetMetadataNames(const ControlRig::FRigElementKey& InItem);
        CoreUObject::FTransform GetLocalTransformByIndex(int32_t InElementIndex, bool bInitial);
        CoreUObject::FTransform GetLocalTransform(const ControlRig::FRigElementKey& InKey, bool bInitial);
        int32_t GetLocalIndex_ForBlueprint(const ControlRig::FRigElementKey& InKey);
        CoreUObject::FTransform GetLocalControlShapeTransformByIndex(int32_t InElementIndex, bool bInitial);
        CoreUObject::FTransform GetLocalControlShapeTransform(const ControlRig::FRigElementKey& InKey, bool bInitial);
        CoreUObject::FLinearColor GetLinearColorMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName, const CoreUObject::FLinearColor& DefaultValue);
        BasicTypes::TArray<CoreUObject::FLinearColor> GetLinearColorArrayMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName);
        BasicTypes::TArray<ControlRig::FRigElementKey> GetKeys(BasicTypes::TArray<int32_t> InElementIndices);
        ControlRig::FRigElementKey GetKey(int32_t InElementIndex);
        int32_t STATIC_GetIntFromControlValue(const ControlRig::FRigControlValue& InValue);
        int32_t GetInt32Metadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName, int32_t DefaultValue);
        BasicTypes::TArray<int32_t> GetInt32ArrayMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName);
        int32_t GetIndex_ForBlueprint(const ControlRig::FRigElementKey& InKey);
        CoreUObject::FTransform GetGlobalTransformByIndex(int32_t InElementIndex, bool bInitial);
        CoreUObject::FTransform GetGlobalTransform(const ControlRig::FRigElementKey& InKey, bool bInitial);
        CoreUObject::FTransform GetGlobalControlShapeTransformByIndex(int32_t InElementIndex, bool bInitial);
        CoreUObject::FTransform GetGlobalControlShapeTransform(const ControlRig::FRigElementKey& InKey, bool bInitial);
        CoreUObject::FTransform GetGlobalControlOffsetTransformByIndex(int32_t InElementIndex, bool bInitial);
        CoreUObject::FTransform GetGlobalControlOffsetTransform(const ControlRig::FRigElementKey& InKey, bool bInitial);
        float GetFloatMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName, float DefaultValue);
        float STATIC_GetFloatFromControlValue(const ControlRig::FRigControlValue& InValue);
        BasicTypes::TArray<float> GetFloatArrayMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName);
        ControlRig::FRigElementKey GetFirstParent(const ControlRig::FRigElementKey& InKey);
        AnimationCore::FEulerTransform STATIC_GetEulerTransformFromControlValue(const ControlRig::FRigControlValue& InValue);
        ControlRig::FRigElementKey GetDefaultParent(const ControlRig::FRigElementKey& InKey);
        float GetCurveValueByIndex(int32_t InElementIndex);
        float GetCurveValue(const ControlRig::FRigElementKey& InKey);
        BasicTypes::TArray<ControlRig::FRigElementKey> GetCurveKeys();
        ControlRig::FRigControlValue GetControlValueByIndex(int32_t InElementIndex, ControlRig::ERigControlValueType InValueType);
        ControlRig::FRigControlValue GetControlValue(const ControlRig::FRigElementKey& InKey, ControlRig::ERigControlValueType InValueType);
        CoreUObject::FRotator GetControlPreferredRotatorByIndex(int32_t InElementIndex, bool bInitial);
        CoreUObject::FRotator GetControlPreferredRotator(const ControlRig::FRigElementKey& InKey, bool bInitial);
        ControlRig::URigHierarchyController* GetController(bool bCreateIfNeeded);
        BasicTypes::TArray<ControlRig::FRigElementKey> GetControlKeys(bool bTraverse);
        BasicTypes::TArray<ControlRig::FRigElementKey> GetChildren(const ControlRig::FRigElementKey& InKey, bool bRecursive);
        bool GetBoolMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName, bool DefaultValue);
        BasicTypes::TArray<bool> GetBoolArrayMetadata(const ControlRig::FRigElementKey& InItem, const BasicTypes::FName& InMetadataName);
        BasicTypes::TArray<ControlRig::FRigElementKey> GetBoneKeys(bool bTraverse);
        BasicTypes::TArray<ControlRig::FRigElementKey> GetAllKeys_ForBlueprint(bool bTraverse);
        ControlRig::FRigNullElement FindNull_ForBlueprintOnly(const ControlRig::FRigElementKey& InKey);
        ControlRig::FRigControlElement FindControl_ForBlueprintOnly(const ControlRig::FRigElementKey& InKey);
        ControlRig::FRigBoneElement FindBone_ForBlueprintOnly(const ControlRig::FRigElementKey& InKey);
        void CopyPose(ControlRig::URigHierarchy* InHierarchy, bool bCurrent, bool bInitial, bool bWeights, bool bMatchPoseInGlobalIfNeeded);
        void CopyHierarchy(ControlRig::URigHierarchy* InHierarchy);
        bool Contains_ForBlueprint(const ControlRig::FRigElementKey& InKey);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/ControlRig.RigHierarchy");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
