// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI_ProjGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAI_ProjGameMode() {}

// ********** Begin Cross Module References ********************************************************
AI_PROJ_API UClass* Z_Construct_UClass_AAI_ProjGameMode();
AI_PROJ_API UClass* Z_Construct_UClass_AAI_ProjGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_AI_Proj();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAI_ProjGameMode *********************************************************
void AAI_ProjGameMode::StaticRegisterNativesAAI_ProjGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAI_ProjGameMode;
UClass* AAI_ProjGameMode::GetPrivateStaticClass()
{
	using TClass = AAI_ProjGameMode;
	if (!Z_Registration_Info_UClass_AAI_ProjGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AI_ProjGameMode"),
			Z_Registration_Info_UClass_AAI_ProjGameMode.InnerSingleton,
			StaticRegisterNativesAAI_ProjGameMode,
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
	return Z_Registration_Info_UClass_AAI_ProjGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AAI_ProjGameMode_NoRegister()
{
	return AAI_ProjGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAI_ProjGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AI_ProjGameMode.h" },
		{ "ModuleRelativePath", "AI_ProjGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI_ProjGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAI_ProjGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AI_Proj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAI_ProjGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAI_ProjGameMode_Statics::ClassParams = {
	&AAI_ProjGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAI_ProjGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AAI_ProjGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAI_ProjGameMode()
{
	if (!Z_Registration_Info_UClass_AAI_ProjGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAI_ProjGameMode.OuterSingleton, Z_Construct_UClass_AAI_ProjGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAI_ProjGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAI_ProjGameMode);
AAI_ProjGameMode::~AAI_ProjGameMode() {}
// ********** End Class AAI_ProjGameMode ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_AI_Console_AI_Proj_Source_AI_Proj_AI_ProjGameMode_h__Script_AI_Proj_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAI_ProjGameMode, AAI_ProjGameMode::StaticClass, TEXT("AAI_ProjGameMode"), &Z_Registration_Info_UClass_AAI_ProjGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAI_ProjGameMode), 1691568015U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_AI_Console_AI_Proj_Source_AI_Proj_AI_ProjGameMode_h__Script_AI_Proj_1067782425(TEXT("/Script/AI_Proj"),
	Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_AI_Console_AI_Proj_Source_AI_Proj_AI_ProjGameMode_h__Script_AI_Proj_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_AI_Console_AI_Proj_Source_AI_Proj_AI_ProjGameMode_h__Script_AI_Proj_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
