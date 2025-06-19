#pragma once
#include "CoreMinimal.h"
#include "ESBFeedbackIssuePriority.generated.h"

UENUM()
enum ESBFeedbackIssuePriority {
    ESBFeedbackIssuePriority_None,
    ESBFeedbackIssuePriority_Highest,
    ESBFeedbackIssuePriority_High,
    ESBFeedbackIssuePriority_Midium,
    ESBFeedbackIssuePriority_Low,
    ESBFeedbackIssuePriority_Lowest,
};

