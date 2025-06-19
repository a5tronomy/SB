#pragma once
#include "CoreMinimal.h"
#include "ESBFeedbackEvent.generated.h"

UENUM()
enum ESBFeedbackEvent {
    ESBFeedbackEvent_CategoryRefresh,
    ESBFeedbackEvent_IssueCreate,
    ESBFeedbackEvent_IssueClose,
    ESBFeedbackEvent_IssueUpdate,
    ESBFeedbackEvent_IssueRefresh,
    ESBFeedbackEvent_CommentsRefresh,
    ESBFeedbackEvent_CommentAdd,
    ESBFeedbackEvent_CommentRemove,
    ESBFeedbackEvent_CommentEdit,
    ESBFeedbackEvent_LikeUpdate,
    ESBFeedbackEvent_AssignIssue,
    ESBFeedbackEvent_StatusChange,
    ESBFeedbackEvent_IssueMapChange,
};

