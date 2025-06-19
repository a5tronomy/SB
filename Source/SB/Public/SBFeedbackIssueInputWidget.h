#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "SBFeedbackIssueInputWidget.generated.h"

UCLASS(EditInlineNew)
class USBFeedbackIssueInputWidget : public USBUserWidget {
    GENERATED_BODY()
public:
    USBFeedbackIssueInputWidget();

protected:
    UFUNCTION()
    void OnInputActionPriorityPlus();
    
    UFUNCTION()
    void OnInputActionPriorityMinus();
    
    UFUNCTION()
    void OnInputActionOpenList();
    
    UFUNCTION()
    void OnInputActionOK();
    
    UFUNCTION()
    void OnInputActionCloseList();
    
    UFUNCTION()
    void OnInputActionClose();
    
};

