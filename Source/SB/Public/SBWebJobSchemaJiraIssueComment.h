#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaBase.h"
#include "SBWebJobSchemaJiraIssueCommentInfo.h"
#include "SBWebJobSchemaJiraIssueComment.generated.h"

USTRUCT(BlueprintType)
struct FSBWebJobSchemaJiraIssueComment : public FSBWebJobSchemaBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FSBWebJobSchemaJiraIssueCommentInfo> comments;
    
    UPROPERTY()
    int32 MaxResults;
    
    UPROPERTY()
    int32 total;
    
    UPROPERTY()
    int32 startAt;
    
    SB_API FSBWebJobSchemaJiraIssueComment();
};

