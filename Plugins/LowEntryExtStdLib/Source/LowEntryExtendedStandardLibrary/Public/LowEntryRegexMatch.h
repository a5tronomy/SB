#pragma once
#include "CoreMinimal.h"
#include "LowEntryRegexCaptureGroup.h"
#include "LowEntryRegexMatch.generated.h"

USTRUCT(BlueprintType)
struct LOWENTRYEXTENDEDSTANDARDLIBRARY_API FLowEntryRegexMatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MatchNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BeginIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EndIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Match;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FLowEntryRegexCaptureGroup> CaptureGroups;
    
    FLowEntryRegexMatch();
};

