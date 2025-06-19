#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaJiraIssueCreator.generated.h"

USTRUCT(BlueprintType)
struct FSBWebJobSchemaJiraIssueCreator {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Name;
    
    UPROPERTY()
    FString DisplayName;
    
    SB_API FSBWebJobSchemaJiraIssueCreator();
};

