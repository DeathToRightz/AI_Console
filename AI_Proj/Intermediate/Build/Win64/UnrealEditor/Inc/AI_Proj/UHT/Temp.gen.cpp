// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Temp.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTemp() {}

// ********** Begin Cross Module References ********************************************************
AI_PROJ_API UClass* Z_Construct_UClass_ATemp();
AI_PROJ_API UClass* Z_Construct_UClass_ATemp_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_AI_Proj();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATemp ********************************************************************
void ATemp::StaticRegisterNativesATemp()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATemp;
UClass* ATemp::GetPrivateStaticClass()
{
	using TClass = ATemp;
	if (!Z_Registration_Info_UClass_ATemp.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Temp"),
			Z_Registration_Info_UClass_ATemp.InnerSingleton,
			StaticRegisterNativesATemp,
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
	return Z_Registration_Info_UClass_ATemp.InnerSingleton;
}
UClass* Z_Construct_UClass_ATemp_NoRegister()
{
	return ATemp::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATemp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Temp.h" },
		{ "ModuleRelativePath", "Temp.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATemp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATemp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_AI_Proj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATemp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATemp_Statics::ClassParams = {
	&ATemp::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATemp_Statics::Class_MetaDataParams), Z_Construct_UClass_ATemp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATemp()
{
	if (!Z_Registration_Info_UClass_ATemp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATemp.OuterSingleton, Z_Construct_UClass_ATemp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATemp.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATemp);
ATemp::~ATemp() {}
// ********** End Class ATemp **********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_AI_Console_AI_Proj_Source_AI_Proj_Temp_h__Script_AI_Proj_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATemp, ATemp::StaticClass, TEXT("ATemp"), &Z_Registration_Info_UClass_ATemp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATemp), 505395058U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_AI_Console_AI_Proj_Source_AI_Proj_Temp_h__Script_AI_Proj_4211118869(TEXT("/Script/AI_Proj"),
	Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_AI_Console_AI_Proj_Source_AI_Proj_Temp_h__Script_AI_Proj_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_AI_Console_AI_Proj_Source_AI_Proj_Temp_h__Script_AI_Proj_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
