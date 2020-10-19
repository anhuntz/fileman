// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FileMan/Public/FileManBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileManBPLibrary() {}
// Cross Module References
	FILEMAN_API UClass* Z_Construct_UClass_UFileManBPLibrary_NoRegister();
	FILEMAN_API UClass* Z_Construct_UClass_UFileManBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FileMan();
	FILEMAN_API UFunction* Z_Construct_UFunction_UFileManBPLibrary_DeleteFile();
	FILEMAN_API UFunction* Z_Construct_UFunction_UFileManBPLibrary_GetFilesInPath();
	FILEMAN_API UFunction* Z_Construct_UFunction_UFileManBPLibrary_ReadFile();
	FILEMAN_API UFunction* Z_Construct_UFunction_UFileManBPLibrary_WriteFile();
// End Cross Module References
	void UFileManBPLibrary::StaticRegisterNativesUFileManBPLibrary()
	{
		UClass* Class = UFileManBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteFile", &UFileManBPLibrary::execDeleteFile },
			{ "GetFilesInPath", &UFileManBPLibrary::execGetFilesInPath },
			{ "ReadFile", &UFileManBPLibrary::execReadFile },
			{ "WriteFile", &UFileManBPLibrary::execWriteFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFileManBPLibrary_DeleteFile_Statics
	{
		struct FileManBPLibrary_eventDeleteFile_Parms
		{
			FString FileName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFileManBPLibrary_DeleteFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileManBPLibrary_eventDeleteFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileManBPLibrary_DeleteFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileManBPLibrary_eventDeleteFile_Parms), &Z_Construct_UFunction_UFileManBPLibrary_DeleteFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManBPLibrary_DeleteFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManBPLibrary_eventDeleteFile_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileManBPLibrary_DeleteFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManBPLibrary_DeleteFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManBPLibrary_DeleteFile_Statics::NewProp_FileName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileManBPLibrary_DeleteFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Aaron Hunt|FileMan" },
		{ "ModuleRelativePath", "Public/FileManBPLibrary.h" },
		{ "ToolTip", "Deletes a file. Path starts at ProjectDir." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileManBPLibrary_DeleteFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileManBPLibrary, nullptr, "DeleteFile", sizeof(FileManBPLibrary_eventDeleteFile_Parms), Z_Construct_UFunction_UFileManBPLibrary_DeleteFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFileManBPLibrary_DeleteFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileManBPLibrary_DeleteFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFileManBPLibrary_DeleteFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileManBPLibrary_DeleteFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileManBPLibrary_DeleteFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileManBPLibrary_GetFilesInPath_Statics
	{
		struct FileManBPLibrary_eventGetFilesInPath_Parms
		{
			TArray<FString> Files;
			FString Path;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Files;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Files_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFileManBPLibrary_GetFilesInPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileManBPLibrary_eventGetFilesInPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileManBPLibrary_GetFilesInPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileManBPLibrary_eventGetFilesInPath_Parms), &Z_Construct_UFunction_UFileManBPLibrary_GetFilesInPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManBPLibrary_GetFilesInPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManBPLibrary_eventGetFilesInPath_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileManBPLibrary_GetFilesInPath_Statics::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManBPLibrary_eventGetFilesInPath_Parms, Files), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManBPLibrary_GetFilesInPath_Statics::NewProp_Files_Inner = { "Files", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileManBPLibrary_GetFilesInPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManBPLibrary_GetFilesInPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManBPLibrary_GetFilesInPath_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManBPLibrary_GetFilesInPath_Statics::NewProp_Files,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManBPLibrary_GetFilesInPath_Statics::NewProp_Files_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileManBPLibrary_GetFilesInPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Aaron Hunt|FileMan" },
		{ "ModuleRelativePath", "Public/FileManBPLibrary.h" },
		{ "ToolTip", "Gets all files in a folder. Path starts at ProjectDir." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileManBPLibrary_GetFilesInPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileManBPLibrary, nullptr, "GetFilesInPath", sizeof(FileManBPLibrary_eventGetFilesInPath_Parms), Z_Construct_UFunction_UFileManBPLibrary_GetFilesInPath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFileManBPLibrary_GetFilesInPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileManBPLibrary_GetFilesInPath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFileManBPLibrary_GetFilesInPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileManBPLibrary_GetFilesInPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileManBPLibrary_GetFilesInPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileManBPLibrary_ReadFile_Statics
	{
		struct FileManBPLibrary_eventReadFile_Parms
		{
			FString File;
			FString Content;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Content;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_File;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFileManBPLibrary_ReadFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileManBPLibrary_eventReadFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileManBPLibrary_ReadFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileManBPLibrary_eventReadFile_Parms), &Z_Construct_UFunction_UFileManBPLibrary_ReadFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManBPLibrary_ReadFile_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManBPLibrary_eventReadFile_Parms, Content), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManBPLibrary_ReadFile_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManBPLibrary_eventReadFile_Parms, File), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileManBPLibrary_ReadFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManBPLibrary_ReadFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManBPLibrary_ReadFile_Statics::NewProp_Content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManBPLibrary_ReadFile_Statics::NewProp_File,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileManBPLibrary_ReadFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Aaron Hunt|FileMan" },
		{ "Keywords", "Load Get Text" },
		{ "ModuleRelativePath", "Public/FileManBPLibrary.h" },
		{ "ToolTip", "Reads a file, then returns its content. Path starts at ProjectDir." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileManBPLibrary_ReadFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileManBPLibrary, nullptr, "ReadFile", sizeof(FileManBPLibrary_eventReadFile_Parms), Z_Construct_UFunction_UFileManBPLibrary_ReadFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFileManBPLibrary_ReadFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileManBPLibrary_ReadFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFileManBPLibrary_ReadFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileManBPLibrary_ReadFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileManBPLibrary_ReadFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileManBPLibrary_WriteFile_Statics
	{
		struct FileManBPLibrary_eventWriteFile_Parms
		{
			FString Content;
			FString FileName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Content;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFileManBPLibrary_WriteFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileManBPLibrary_eventWriteFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileManBPLibrary_WriteFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FileManBPLibrary_eventWriteFile_Parms), &Z_Construct_UFunction_UFileManBPLibrary_WriteFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManBPLibrary_WriteFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManBPLibrary_eventWriteFile_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManBPLibrary_WriteFile_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileManBPLibrary_eventWriteFile_Parms, Content), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileManBPLibrary_WriteFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManBPLibrary_WriteFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManBPLibrary_WriteFile_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManBPLibrary_WriteFile_Statics::NewProp_Content,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileManBPLibrary_WriteFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Aaron Hunt|FileMan" },
		{ "Keywords", "Save Set Text" },
		{ "ModuleRelativePath", "Public/FileManBPLibrary.h" },
		{ "ToolTip", "Writes content to a file. Path starts at ProjectDir. Returns true if success!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileManBPLibrary_WriteFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileManBPLibrary, nullptr, "WriteFile", sizeof(FileManBPLibrary_eventWriteFile_Parms), Z_Construct_UFunction_UFileManBPLibrary_WriteFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFileManBPLibrary_WriteFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileManBPLibrary_WriteFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFileManBPLibrary_WriteFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileManBPLibrary_WriteFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileManBPLibrary_WriteFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFileManBPLibrary_NoRegister()
	{
		return UFileManBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFileManBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFileManBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FileMan,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFileManBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFileManBPLibrary_DeleteFile, "DeleteFile" }, // 1226469331
		{ &Z_Construct_UFunction_UFileManBPLibrary_GetFilesInPath, "GetFilesInPath" }, // 1163614179
		{ &Z_Construct_UFunction_UFileManBPLibrary_ReadFile, "ReadFile" }, // 1769386697
		{ &Z_Construct_UFunction_UFileManBPLibrary_WriteFile, "WriteFile" }, // 2206199993
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileManBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FileManBPLibrary.h" },
		{ "ModuleRelativePath", "Public/FileManBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFileManBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileManBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFileManBPLibrary_Statics::ClassParams = {
		&UFileManBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFileManBPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFileManBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFileManBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFileManBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFileManBPLibrary, 3990723265);
	template<> FILEMAN_API UClass* StaticClass<UFileManBPLibrary>()
	{
		return UFileManBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFileManBPLibrary(Z_Construct_UClass_UFileManBPLibrary, &UFileManBPLibrary::StaticClass, TEXT("/Script/FileMan"), TEXT("UFileManBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFileManBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
