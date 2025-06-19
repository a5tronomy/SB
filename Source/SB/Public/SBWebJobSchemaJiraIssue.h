#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaJiraCommon.h"
#include "SBWebJobSchemaJiraIssueFields.h"
#include "SBWebJobSchemaJiraIssue.generated.h"

USTRUCT()
struct FSBWebJobSchemaJiraIssue : public FSBWebJobSchemaJiraCommon {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSBWebJobSchemaJiraIssueFields Fields;
    
    SB_API FSBWebJobSchemaJiraIssue();
};

