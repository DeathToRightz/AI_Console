// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI_ProjPlayerController.h"

#ifdef AI_PROJ_AI_ProjPlayerController_generated_h
#error "AI_ProjPlayerController.generated.h already included, missing '#pragma once' in AI_ProjPlayerController.h"
#endif
#define AI_PROJ_AI_ProjPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAI_ProjPlayerController *************************************************
AI_PROJ_API UClass* Z_Construct_UClass_AAI_ProjPlayerController_NoRegister();

#define FID_Users_logan_OneDrive_Documents_GitHub_AI_Console_AI_Proj_Source_AI_Proj_AI_ProjPlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAI_ProjPlayerController(); \
	friend struct Z_Construct_UClass_AAI_ProjPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AI_PROJ_API UClass* Z_Construct_UClass_AAI_ProjPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AAI_ProjPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AI_Proj"), Z_Construct_UClass_AAI_ProjPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AAI_ProjPlayerController)


#define FID_Users_logan_OneDrive_Documents_GitHub_AI_Console_AI_Proj_Source_AI_Proj_AI_ProjPlayerController_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAI_ProjPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAI_ProjPlayerController(AAI_ProjPlayerController&&) = delete; \
	AAI_ProjPlayerController(const AAI_ProjPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAI_ProjPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAI_ProjPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAI_ProjPlayerController) \
	NO_API virtual ~AAI_ProjPlayerController();


#define FID_Users_logan_OneDrive_Documents_GitHub_AI_Console_AI_Proj_Source_AI_Proj_AI_ProjPlayerController_h_16_PROLOG
#define FID_Users_logan_OneDrive_Documents_GitHub_AI_Console_AI_Proj_Source_AI_Proj_AI_ProjPlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_logan_OneDrive_Documents_GitHub_AI_Console_AI_Proj_Source_AI_Proj_AI_ProjPlayerController_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_logan_OneDrive_Documents_GitHub_AI_Console_AI_Proj_Source_AI_Proj_AI_ProjPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAI_ProjPlayerController;

// ********** End Class AAI_ProjPlayerController ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_logan_OneDrive_Documents_GitHub_AI_Console_AI_Proj_Source_AI_Proj_AI_ProjPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
