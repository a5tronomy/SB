#pragma once
#include "CoreMinimal.h"
#include "Components/ListView.h"
#include "SBOnListFastFocusDelegate.h"
#include "SBListViewWidget.generated.h"

UCLASS()
class USBListViewWidget : public UListView {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable)
    FSBOnListFastFocus BP_OnFastFocus;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MinEmptySlotAmount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bFillEmptySlot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bScrollbarAlwaysTakeUpLayout;
    
    USBListViewWidget();

};

