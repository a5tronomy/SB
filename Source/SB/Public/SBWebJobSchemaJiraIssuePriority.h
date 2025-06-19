#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaJiraIssuePriority.generated.h"

USTRUCT(BlueprintType)
struct FSBWebJobSchemaJiraIssuePriority {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Self;
    
    UPROPERTY()
    FString iconUrl;
    
    UPROPERTY()
    FString Name;
    
    UPROPERTY()
    FString ID;
    
    SB_API FSBWebJobSchemaJiraIssuePriority();
};

