#pragma once
#include "CoreMinimal.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "SBUserWidget.h"
#include "SBTextureListViewItemWidget.generated.h"

UCLASS(EditInlineNew)
class USBTextureListViewItemWidget : public USBUserWidget, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    USBTextureListViewItemWidget();


    // Fix for true pure virtual functions not being implemented
};

