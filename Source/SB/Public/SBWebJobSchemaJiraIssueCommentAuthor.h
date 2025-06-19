#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaJiraIssueCommentAuthor.generated.h"

USTRUCT(BlueprintType)
struct FSBWebJobSchemaJiraIssueCommentAuthor {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Name;
    
    UPROPERTY()
    FString Key;
    
    UPROPERTY()
    FString DisplayName;
    
    SB_API FSBWebJobSchemaJiraIssueCommentAuthor();
};

