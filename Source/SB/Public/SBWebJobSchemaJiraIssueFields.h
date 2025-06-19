#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaBase.h"
#include "SBWebJobSchemaJiraIssueAssignee.h"
#include "SBWebJobSchemaJiraIssueComment.h"
#include "SBWebJobSchemaJiraIssueCreator.h"
#include "SBWebJobSchemaJiraIssuePriority.h"
#include "SBWebJobSchemaJiraIssueStatus.h"
#include "SBWebJobSchemaJiraIssueVote.h"
#include "SBWebJobSchemaJiraIssueFields.generated.h"

USTRUCT(BlueprintType)
struct FSBWebJobSchemaJiraIssueFields : public FSBWebJobSchemaBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Description;
    
    UPROPERTY()
    FSBWebJobSchemaJiraIssuePriority Priority;
    
    UPROPERTY()
    FString customfield_10102;
    
    UPROPERTY()
    FString summary;
    
    UPROPERTY()
    FSBWebJobSchemaJiraIssueCreator creator;
    
    UPROPERTY()
    FSBWebJobSchemaJiraIssueComment comment;
    
    UPROPERTY()
    FSBWebJobSchemaJiraIssueVote votes;
    
    UPROPERTY()
    FString created;
    
    UPROPERTY()
    TArray<FString> labels;
    
    UPROPERTY()
    FSBWebJobSchemaJiraIssueAssignee assignee;
    
    UPROPERTY()
    FSBWebJobSchemaJiraIssueStatus Status;
    
    SB_API FSBWebJobSchemaJiraIssueFields();
};

