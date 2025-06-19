#pragma once
#include "CoreMinimal.h"
#include "LowEntryRegexCaptureGroup.generated.h"

USTRUCT(BlueprintType)
struct LOWENTRYEXTENDEDSTANDARDLIBRARY_API FLowEntryRegexCaptureGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CaptureGroupNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BeginIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EndIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Match;
    
    FLowEntryRegexCaptureGroup();
};

