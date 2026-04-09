// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sem2UniversityTasks/MyCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
SEM2UNIVERSITYTASKS_API UClass* Z_Construct_UClass_AMyCharacter();
SEM2UNIVERSITYTASKS_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Sem2UniversityTasks();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMyCharacter *************************************************************
void AMyCharacter::StaticRegisterNativesAMyCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMyCharacter;
UClass* AMyCharacter::GetPrivateStaticClass()
{
	using TClass = AMyCharacter;
	if (!Z_Registration_Info_UClass_AMyCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyCharacter"),
			Z_Registration_Info_UClass_AMyCharacter.InnerSingleton,
			StaticRegisterNativesAMyCharacter,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AMyCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AMyCharacter_NoRegister()
{
	return AMyCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMyCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyCharacter.h" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mapping context\n" },
#endif
		{ "ModuleRelativePath", "MyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mapping context" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input action\n" },
#endif
		{ "ModuleRelativePath", "MyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint tuning parameter\n" },
#endif
		{ "ModuleRelativePath", "MyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint tuning parameter" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeed_MetaData), NewProp_MovementSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_MovementSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Sem2UniversityTasks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyCharacter_Statics::ClassParams = {
	&AMyCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyCharacter()
{
	if (!Z_Registration_Info_UClass_AMyCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyCharacter.OuterSingleton, Z_Construct_UClass_AMyCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCharacter);
AMyCharacter::~AMyCharacter() {}
// ********** End Class AMyCharacter ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_cpp_FGCT4016_Task_3_Sem2UniversityTasks_Source_Sem2UniversityTasks_MyCharacter_h__Script_Sem2UniversityTasks_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyCharacter, AMyCharacter::StaticClass, TEXT("AMyCharacter"), &Z_Registration_Info_UClass_AMyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCharacter), 755777163U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_cpp_FGCT4016_Task_3_Sem2UniversityTasks_Source_Sem2UniversityTasks_MyCharacter_h__Script_Sem2UniversityTasks_3472276458(TEXT("/Script/Sem2UniversityTasks"),
	Z_CompiledInDeferFile_FID_Unreal_cpp_FGCT4016_Task_3_Sem2UniversityTasks_Source_Sem2UniversityTasks_MyCharacter_h__Script_Sem2UniversityTasks_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_cpp_FGCT4016_Task_3_Sem2UniversityTasks_Source_Sem2UniversityTasks_MyCharacter_h__Script_Sem2UniversityTasks_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
