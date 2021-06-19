// Copyright Lambda Works, Samuel Metters 2019. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LambdaWebBrowserLibrary.generated.h"

/**
 * 
 */
UCLASS()
class LAMBDABROWSER_API ULambdaWebBrowserLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	

	// Returns a percent-encoded version of the passed in string compatible in web URLs.
	UFUNCTION(BlueprintPure, meta = (Keywords = "Lambda Web Browser"), Category = "Lambda Browser")
		static FString EncodeStringToURL(FString URL);

	// Returns a decoded version of the percent-encoded passed in string.
	UFUNCTION(BlueprintPure, meta = (Keywords = "Lambda Web Browser"), Category = "Lambda Browser")
		static FString DecodeURLToString(FString URL);

	// Checks whether or not the input string is an URL based on whether it contains specific url substring (ie: http, https, www).
	UFUNCTION(BlueprintPure, meta = (Keywords = "Lambda Web Browser"), Category = "Lambda Browser")
		static bool isValidURL(FString URL);
};
