#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaJiraIssueStatus.generated.h"

USTRUCT(BlueprintType)
struct FSBWebJobSchemaJiraIssueStatus {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Name;
    
    UPROPERTY()
    FString ID;
    
    SB_API FSBWebJobSchemaJiraIssueStatus();
};

