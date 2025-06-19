#pragma once
#include "CoreMinimal.h"
#include "ESBFeedbackIssueUpdate.generated.h"

UENUM()
enum ESBFeedbackIssueUpdate {
    ESBFeedbackIssueUpdate_None,
    ESBFeedbackIssueUpdate_Summary,
    ESBFeedbackIssueUpdate_Description,
    ESBFeedbackIssueUpdate_Priority = 4,
    ESBFeedbackIssueUpdate_Like = 8,
};

