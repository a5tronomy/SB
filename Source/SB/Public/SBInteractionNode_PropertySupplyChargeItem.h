#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_PropertySupplyChargeItem.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_PropertySupplyChargeItem : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBInteractionExecPinInfo InputExec;
    
    UPROPERTY(EditAnywhere)
    bool NotifyUI;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBInteractionExecPinInfo> PropertyData;
    
    UPROPERTY(EditAnywhere)
    FSBInteractionExecPinInfo OutputExec;
    
    UPROPERTY()
    FSBAlias RefTableAlias;
    
    USBInteractionNode_PropertySupplyChargeItem();

};

