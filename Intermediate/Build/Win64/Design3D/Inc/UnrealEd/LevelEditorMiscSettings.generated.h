// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_LevelEditorMiscSettings_generated_h
#error "LevelEditorMiscSettings.generated.h already included, missing '#pragma once' in LevelEditorMiscSettings.h"
#endif
#define UNREALED_LevelEditorMiscSettings_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorMiscSettings_h_20_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorMiscSettings_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorMiscSettings_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelEditorMiscSettings(); \
	friend struct Z_Construct_UClass_ULevelEditorMiscSettings_Statics; \
public: \
	DECLARE_CLASS(ULevelEditorMiscSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(ULevelEditorMiscSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorMiscSettings_h_20_INCLASS \
private: \
	static void StaticRegisterNativesULevelEditorMiscSettings(); \
	friend struct Z_Construct_UClass_ULevelEditorMiscSettings_Statics; \
public: \
	DECLARE_CLASS(ULevelEditorMiscSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(ULevelEditorMiscSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorMiscSettings_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelEditorMiscSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelEditorMiscSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelEditorMiscSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelEditorMiscSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelEditorMiscSettings(ULevelEditorMiscSettings&&); \
	NO_API ULevelEditorMiscSettings(const ULevelEditorMiscSettings&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorMiscSettings_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelEditorMiscSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelEditorMiscSettings(ULevelEditorMiscSettings&&); \
	NO_API ULevelEditorMiscSettings(const ULevelEditorMiscSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelEditorMiscSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelEditorMiscSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelEditorMiscSettings)


#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorMiscSettings_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorMiscSettings_h_17_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorMiscSettings_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorMiscSettings_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorMiscSettings_h_20_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorMiscSettings_h_20_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorMiscSettings_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorMiscSettings_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorMiscSettings_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorMiscSettings_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorMiscSettings_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorMiscSettings_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LevelEditorMiscSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class ULevelEditorMiscSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorMiscSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS