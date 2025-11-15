// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI_ProjCharacter.h"

#ifdef AI_PROJ_AI_ProjCharacter_generated_h
#error "AI_ProjCharacter.generated.h already included, missing '#pragma once' in AI_ProjCharacter.h"
#endif
#define AI_PROJ_AI_ProjCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAI_ProjCharacter ********************************************************
#define FID_Users_logan_OneDrive_Documents_GitHub_AI_Console_AI_Proj_Source_AI_Proj_AI_ProjCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


AI_PROJ_API UClass* Z_Construct_UClass_AAI_ProjCharacter_NoRegister();

#define FID_Users_logan_OneDrive_Documents_GitHub_AI_Console_AI_Proj_Source_AI_Proj_AI_ProjCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAI_ProjCharacter(); \
	friend struct Z_Construct_UClass_AAI_ProjCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AI_PROJ_API UClass* Z_Construct_UClass_AAI_ProjCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AAI_ProjCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AI_Proj"), Z_Construct_UClass_AAI_ProjCharacter_NoRegister) \
	DECLARE_SERIALIZER(AAI_ProjCharacter)


#define FID_Users_logan_OneDrive_Documents_GitHub_AI_Console_AI_Proj_Source_AI_Proj_AI_ProjCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAI_ProjCharacter(AAI_ProjCharacter&&) = delete; \
	AAI_ProjCharacter(const AAI_ProjCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAI_ProjCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAI_ProjCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AAI_ProjCharacter) \
	NO_API virtual ~AAI_ProjCharacter();


#define FID_Users_logan_OneDrive_Documents_GitHub_AI_Console_AI_Proj_Source_AI_Proj_AI_ProjCharacter_h_21_PROLOG
#define FID_Users_logan_OneDrive_Documents_GitHub_AI_Console_AI_Proj_Source_AI_Proj_AI_ProjCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_logan_OneDrive_Documents_GitHub_AI_Console_AI_Proj_Source_AI_Proj_AI_ProjCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_logan_OneDrive_Documents_GitHub_AI_Console_AI_Proj_Source_AI_Proj_AI_ProjCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_logan_OneDrive_Documents_GitHub_AI_Console_AI_Proj_Source_AI_Proj_AI_ProjCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAI_ProjCharacter;

// ********** End Class AAI_ProjCharacter **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_logan_OneDrive_Documents_GitHub_AI_Console_AI_Proj_Source_AI_Proj_AI_ProjCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
