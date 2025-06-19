#pragma once
#include "CoreMinimal.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "SBCreditTableProperty.h"
#include "SBUserWidget.h"
#include "SBCommonCreditSlotWidget.generated.h"

UCLASS(EditInlineNew)
class USBCommonCreditSlotWidget : public USBUserWidget, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    uint32 TableId;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 VoiceIndex;
    
    USBCommonCreditSlotWidget();

    UFUNCTION(BlueprintCallable)
    bool GetTableData(FSBCreditTableProperty& OutData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventRefresh();
    

    // Fix for true pure virtual functions not being implemented
};

