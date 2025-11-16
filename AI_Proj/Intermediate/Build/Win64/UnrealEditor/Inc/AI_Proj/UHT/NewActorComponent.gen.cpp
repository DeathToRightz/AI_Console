// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewActorComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeNewActorComponent() {}

// ********** Begin Cross Module References ********************************************************
AI_PROJ_API UClass* Z_Construct_UClass_UNewActorComponent();
AI_PROJ_API UClass* Z_Construct_UClass_UNewActorComponent_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_AI_Proj();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UNewActorComponent *******************************************************
void UNewActorComponent::StaticRegisterNativesUNewActorComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UNewActorComponent;
UClass* UNewActorComponent::GetPrivateStaticClass()
{
	using TClass = UNewActorComponent;
	if (!Z_Registration_Info_UClass_UNewActorComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("NewActorComponent"),
			Z_Registration_Info_UClass_UNewActorComponent.InnerSingleton,
			StaticRegisterNativesUNewActorComponent,
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
	return Z_Registration_Info_UClass_UNewActorComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UNewActorComponent_NoRegister()
{
	return UNewActorComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UNewActorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "NewActorComponent.h" },
		{ "ModuleRelativePath", "NewActorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatrolLocations_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "NewActorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PatrolLocations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PatrolLocations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNewActorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNewActorComponent_Statics::NewProp_PatrolLocations_Inner = { "PatrolLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNewActorComponent_Statics::NewProp_PatrolLocations = { "PatrolLocations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNewActorComponent, PatrolLocations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatrolLocations_MetaData), NewProp_PatrolLocations_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNewActorComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewActorComponent_Statics::NewProp_PatrolLocations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewActorComponent_Statics::NewProp_PatrolLocations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNewActorComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNewActorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AI_Proj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNewActorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNewActorComponent_Statics::ClassParams = {
	&UNewActorComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNewActorComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNewActorComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNewActorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNewActorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNewActorComponent()
{
	if (!Z_Registration_Info_UClass_UNewActorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNewActorComponent.OuterSingleton, Z_Construct_UClass_UNewActorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNewActorComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNewActorComponent);
UNewActorComponent::~UNewActorComponent() {}
// ********** End Class UNewActorComponent *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_AI_Console_AI_Proj_Source_AI_Proj_NewActorComponent_h__Script_AI_Proj_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNewActorComponent, UNewActorComponent::StaticClass, TEXT("UNewActorComponent"), &Z_Registration_Info_UClass_UNewActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNewActorComponent), 829196007U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_AI_Console_AI_Proj_Source_AI_Proj_NewActorComponent_h__Script_AI_Proj_1276226494(TEXT("/Script/AI_Proj"),
	Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_AI_Console_AI_Proj_Source_AI_Proj_NewActorComponent_h__Script_AI_Proj_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_AI_Console_AI_Proj_Source_AI_Proj_NewActorComponent_h__Script_AI_Proj_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
