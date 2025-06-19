#pragma once
#include "CoreMinimal.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "SBUserWidget.h"
#include "SBLevelListViewItemWidget.generated.h"

UCLASS(EditInlineNew)
class USBLevelListViewItemWidget : public USBUserWidget, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    USBLevelListViewItemWidget();


    // Fix for true pure virtual functions not being implemented
};

