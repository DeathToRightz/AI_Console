// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnemyCharacter.h"

#ifdef AI_PROJ_EnemyCharacter_generated_h
#error "EnemyCharacter.generated.h already included, missing '#pragma once' in EnemyCharacter.h"
#endif
#define AI_PROJ_EnemyCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AEnemyCharacter **********************************************************
AI_PROJ_API UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister();

#define FID_Users_logan_OneDrive_Documents_GitHub_AI_Console_AI_Proj_Source_AI_Proj_EnemyCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyCharacter(); \
	friend struct Z_Construct_UClass_AEnemyCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AI_PROJ_API UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AEnemyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AI_Proj"), Z_Construct_UClass_AEnemyCharacter_NoRegister) \
	DECLARE_SERIALIZER(AEnemyCharacter)


#define FID_Users_logan_OneDrive_Documents_GitHub_AI_Console_AI_Proj_Source_AI_Proj_EnemyCharacter_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AEnemyCharacter(AEnemyCharacter&&) = delete; \
	AEnemyCharacter(const AEnemyCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyCharacter) \
	NO_API virtual ~AEnemyCharacter();


#define FID_Users_logan_OneDrive_Documents_GitHub_AI_Console_AI_Proj_Source_AI_Proj_EnemyCharacter_h_9_PROLOG
#define FID_Users_logan_OneDrive_Documents_GitHub_AI_Console_AI_Proj_Source_AI_Proj_EnemyCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_logan_OneDrive_Documents_GitHub_AI_Console_AI_Proj_Source_AI_Proj_EnemyCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_logan_OneDrive_Documents_GitHub_AI_Console_AI_Proj_Source_AI_Proj_EnemyCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AEnemyCharacter;

// ********** End Class AEnemyCharacter ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_logan_OneDrive_Documents_GitHub_AI_Console_AI_Proj_Source_AI_Proj_EnemyCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
