#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaBase.h"
#include "SBWebJobSchemaJiraIssueCommentAuthor.h"
#include "SBWebJobSchemaJiraIssueCommentInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBWebJobSchemaJiraIssueCommentInfo : public FSBWebJobSchemaBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Self;
    
    UPROPERTY()
    FString ID;
    
    UPROPERTY()
    FSBWebJobSchemaJiraIssueCommentAuthor author;
    
    UPROPERTY()
    FString Body;
    
    UPROPERTY()
    FSBWebJobSchemaJiraIssueCommentAuthor updateAuthor;
    
    SB_API FSBWebJobSchemaJiraIssueCommentInfo();
};

