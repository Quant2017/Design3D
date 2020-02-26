// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Animation/EditorSkeletonNotifyObj.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorSkeletonNotifyObj() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UEditorSkeletonNotifyObj_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEditorSkeletonNotifyObj();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UEditorSkeletonNotifyObj::StaticRegisterNativesUEditorSkeletonNotifyObj()
	{
	}
	UClass* Z_Construct_UClass_UEditorSkeletonNotifyObj_NoRegister()
	{
		return UEditorSkeletonNotifyObj::StaticClass();
	}
	struct Z_Construct_UClass_UEditorSkeletonNotifyObj_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorSkeletonNotifyObj_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSkeletonNotifyObj_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/EditorSkeletonNotifyObj.h" },
		{ "ModuleRelativePath", "Classes/Animation/EditorSkeletonNotifyObj.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSkeletonNotifyObj_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "SkeletonNotifies" },
		{ "ModuleRelativePath", "Classes/Animation/EditorSkeletonNotifyObj.h" },
		{ "ToolTip", "The name of the notify we represent" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEditorSkeletonNotifyObj_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorSkeletonNotifyObj, Name), METADATA_PARAMS(Z_Construct_UClass_UEditorSkeletonNotifyObj_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorSkeletonNotifyObj_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorSkeletonNotifyObj_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSkeletonNotifyObj_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorSkeletonNotifyObj_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorSkeletonNotifyObj>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorSkeletonNotifyObj_Statics::ClassParams = {
		&UEditorSkeletonNotifyObj::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorSkeletonNotifyObj_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UEditorSkeletonNotifyObj_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorSkeletonNotifyObj_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditorSkeletonNotifyObj_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorSkeletonNotifyObj()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorSkeletonNotifyObj_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorSkeletonNotifyObj, 452122171);
	template<> UNREALED_API UClass* StaticClass<UEditorSkeletonNotifyObj>()
	{
		return UEditorSkeletonNotifyObj::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorSkeletonNotifyObj(Z_Construct_UClass_UEditorSkeletonNotifyObj, &UEditorSkeletonNotifyObj::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UEditorSkeletonNotifyObj"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorSkeletonNotifyObj);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif