#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "SBFeedbackCommonMessageBoxWidget.generated.h"

UCLASS(EditInlineNew)
class USBFeedbackCommonMessageBoxWidget : public USBUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FString prefixName;
    
public:
    USBFeedbackCommonMessageBoxWidget();

protected:
    UFUNCTION()
    void OnClickPositive();
    
    UFUNCTION()
    void OnClickNegative();
    
};

