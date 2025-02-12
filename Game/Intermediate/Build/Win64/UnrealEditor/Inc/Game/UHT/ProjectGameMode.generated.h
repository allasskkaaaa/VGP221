// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gamemode/ProjectGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME_ProjectGameMode_generated_h
#error "ProjectGameMode.generated.h already included, missing '#pragma once' in ProjectGameMode.h"
#endif
#define GAME_ProjectGameMode_generated_h

#define FID_Game_Source_Game_Public_Gamemode_ProjectGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectGameMode(); \
	friend struct Z_Construct_UClass_AProjectGameMode_Statics; \
public: \
	DECLARE_CLASS(AProjectGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(AProjectGameMode)


#define FID_Game_Source_Game_Public_Gamemode_ProjectGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AProjectGameMode(AProjectGameMode&&); \
	AProjectGameMode(const AProjectGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectGameMode) \
	NO_API virtual ~AProjectGameMode();


#define FID_Game_Source_Game_Public_Gamemode_ProjectGameMode_h_12_PROLOG
#define FID_Game_Source_Game_Public_Gamemode_ProjectGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Source_Game_Public_Gamemode_ProjectGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Game_Source_Game_Public_Gamemode_ProjectGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME_API UClass* StaticClass<class AProjectGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Source_Game_Public_Gamemode_ProjectGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
