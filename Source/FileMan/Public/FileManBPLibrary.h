// Copyright (c) Aaron Hunt 2020

#pragma once

#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "HAL/PlatformFilemanager.h"
#include "HAL/FileManager.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FileManBPLibrary.generated.h"

UCLASS()
class UFileManBPLibrary : public UBlueprintFunctionLibrary {
	GENERATED_BODY()
		/** Deletes a file. Path starts at ProjectDir. */
		UFUNCTION(BlueprintCallable, Category = "Aaron Hunt|FileMan")
			static bool DeleteFile(FString FileName);

		/** Gets all files in a folder. Path starts at ProjectDir. */
		UFUNCTION(BlueprintPure, Category = "Aaron Hunt|FileMan")
			static bool GetFilesInPath(TArray<FString>& Files, FString Path);

		/** Reads a file, then returns its content. Path starts at ProjectDir. */
		UFUNCTION(BlueprintPure, Category = "Aaron Hunt|FileMan", meta = (Keywords = "Load Get Text"))
			static bool ReadFile(FString File, FString & Content);

		/** Writes content to a file. Path starts at ProjectDir. Returns true if success! */
		UFUNCTION(BlueprintCallable, Category = "Aaron Hunt|FileMan", meta = (Keywords = "Save Set Text"))
			static bool WriteFile(FString Content, FString FileName);
};