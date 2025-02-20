#pragma once
#pragma warning(disable: 4267)

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
#include "BasicTypes_TArray.h"
#include "BasicTypes_FName.h"
#include "AnimationCore_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UWorld; };
namespace CG::Constraints { class UTickableConstraint; };
namespace CG::Constraints { class UConstraintsManager; };
namespace CG::CoreUObject { class UObject; };
namespace CG::Constraints { class UTransformableHandle; };
namespace CG::Engine { class USceneComponent; };
namespace CG::Constraints { class UTransformableComponentHandle; };
namespace CG::Constraints { class UTickableTransformConstraint; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Constraints
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class UConstraintsScriptingLibrary_RemoveThisConstraint_Params
    {
    public:
        Engine::UWorld*                                              InWorld;                                                 //  0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        Constraints::UTickableConstraint*                            InTickableConstraint;                                    //  0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         ReturnValue;                                             //  0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UConstraintsScriptingLibrary_RemoveConstraint_Params
    {
    public:
        Engine::UWorld*                                              InWorld;                                                 //  0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        int32_t                                                      InIndex;                                                 //  0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         ReturnValue;                                             //  0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UConstraintsScriptingLibrary_GetManager_Params
    {
    public:
        Engine::UWorld*                                              InWorld;                                                 //  0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        Constraints::UConstraintsManager*                            ReturnValue;                                             //  0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UConstraintsScriptingLibrary_GetConstraintsArray_Params
    {
    public:
        Engine::UWorld*                                              InWorld;                                                 //  0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        BasicTypes::TArray<Constraints::UTickableConstraint*>        ReturnValue;                                             //  0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UConstraintsScriptingLibrary_CreateTransformableHandle_Params
    {
    public:
        Engine::UWorld*                                              InWorld;                                                 //  0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        CoreUObject::UObject*                                        InObject;                                                //  0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        BasicTypes::FName                                            InAttachmentName;                                        //  0x0010(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        Constraints::UTransformableHandle*                           ReturnValue;                                             //  0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Params
    {
    public:
        Engine::UWorld*                                              InWorld;                                                 //  0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        Engine::USceneComponent*                                     InSceneComponent;                                        //  0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        BasicTypes::FName                                            InSocketName;                                            //  0x0010(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        Constraints::UTransformableComponentHandle*                  ReturnValue;                                             //  0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UConstraintsScriptingLibrary_CreateFromType_Params
    {
    public:
        Engine::UWorld*                                              InWorld;                                                 //  0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        AnimationCore::ETransformConstraintType                      InType;                                                  //  0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        uint8_t                                                      UnknownData_0000[0x7];                                   //  0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        Constraints::UTickableTransformConstraint*                   ReturnValue;                                             //  0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UConstraintsScriptingLibrary_AddConstraint_Params
    {
    public:
        Engine::UWorld*                                              InWorld;                                                 //  0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        Constraints::UTransformableHandle*                           InParentHandle;                                          //  0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        Constraints::UTransformableHandle*                           InChildHandle;                                           //  0x0010(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        Constraints::UTickableTransformConstraint*                   InConstraint;                                            //  0x0018(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         bMaintainOffset;                                         //  0x0020(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         ReturnValue;                                             //  0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
