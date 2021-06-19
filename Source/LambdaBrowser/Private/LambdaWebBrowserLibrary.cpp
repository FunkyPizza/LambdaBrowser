// Copyright Lambda Works, Samuel Metters 2019. All rights reserved.


#include "LambdaWebBrowserLibrary.h"
#include "GenericPlatform/GenericPlatformHttp.h"

FString ULambdaWebBrowserLibrary::EncodeStringToURL(FString URL)
{
	return FGenericPlatformHttp::UrlEncode(URL);
}

FString ULambdaWebBrowserLibrary::DecodeURLToString(FString URL)
{
	return FGenericPlatformHttp::UrlDecode(URL);
}

bool ULambdaWebBrowserLibrary::isValidURL(FString URL)
{
	if (URL != "")
	{
		if (FGenericPlatformHttp::GetUrlDomain(URL) != "")
		{
			if (URL.Contains("http://") || URL.Contains("https://") || URL.Contains("www."))
			{
				return true;
			}
		}
	}
	return false;
}
