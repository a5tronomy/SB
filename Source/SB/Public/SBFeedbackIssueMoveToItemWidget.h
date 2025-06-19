#pragma once
#include "CoreMinimal.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "SBUserWidget.h"
#include "SBFeedbackIssueMoveToItemWidget.generated.h"

UCLASS(EditInlineNew)
class USBFeedbackIssueMoveToItemWidget : public USBUserWidget, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    USBFeedbackIssueMoveToItemWidget();


    // Fix for true pure virtual functions not being implemented
};

