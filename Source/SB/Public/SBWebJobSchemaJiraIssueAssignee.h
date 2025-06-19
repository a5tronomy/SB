#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaJiraIssueAssignee.generated.h"

USTRUCT(BlueprintType)
struct FSBWebJobSchemaJiraIssueAssignee {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Name;
    
    UPROPERTY()
    FString DisplayName;
    
    SB_API FSBWebJobSchemaJiraIssueAssignee();
};

