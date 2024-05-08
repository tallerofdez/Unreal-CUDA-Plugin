// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCUDAPlugin/UnrealCUDAPluginGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealCUDAPluginGameModeBase() {}
// Cross Module References
	UNREALCUDAPLUGIN_API UClass* Z_Construct_UClass_AUnrealCUDAPluginGameModeBase_NoRegister();
	UNREALCUDAPLUGIN_API UClass* Z_Construct_UClass_AUnrealCUDAPluginGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UnrealCUDAPlugin();
// End Cross Module References
	void AUnrealCUDAPluginGameModeBase::StaticRegisterNativesAUnrealCUDAPluginGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AUnrealCUDAPluginGameModeBase_NoRegister()
	{
		return AUnrealCUDAPluginGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealCUDAPluginGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealCUDAPluginGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCUDAPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealCUDAPluginGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UnrealCUDAPluginGameModeBase.h" },
		{ "ModuleRelativePath", "UnrealCUDAPluginGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealCUDAPluginGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealCUDAPluginGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnrealCUDAPluginGameModeBase_Statics::ClassParams = {
		&AUnrealCUDAPluginGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUnrealCUDAPluginGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealCUDAPluginGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealCUDAPluginGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnrealCUDAPluginGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnrealCUDAPluginGameModeBase, 3775107518);
	template<> UNREALCUDAPLUGIN_API UClass* StaticClass<AUnrealCUDAPluginGameModeBase>()
	{
		return AUnrealCUDAPluginGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnrealCUDAPluginGameModeBase(Z_Construct_UClass_AUnrealCUDAPluginGameModeBase, &AUnrealCUDAPluginGameModeBase::StaticClass, TEXT("/Script/UnrealCUDAPlugin"), TEXT("AUnrealCUDAPluginGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealCUDAPluginGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
