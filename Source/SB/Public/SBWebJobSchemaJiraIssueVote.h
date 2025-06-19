#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaBase.h"
#include "SBWebJobSchemaJiraIssueVote.generated.h"

USTRUCT(BlueprintType)
struct FSBWebJobSchemaJiraIssueVote : public FSBWebJobSchemaBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Self;
    
    UPROPERTY()
    int32 votes;
    
    UPROPERTY()
    bool hasVoted;
    
    SB_API FSBWebJobSchemaJiraIssueVote();
};

