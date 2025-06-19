#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_PropertyAcquireItem.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_PropertyAcquireItem : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBInteractionExecPinInfo InputExec;
    
    UPROPERTY(EditAnywhere)
    int32 ItemCount;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBInteractionExecPinInfo> PropertyData;
    
    UPROPERTY(EditAnywhere)
    FSBInteractionExecPinInfo OutputExec;
    
    UPROPERTY()
    FSBAlias RefTableAlias;
    
    USBInteractionNode_PropertyAcquireItem();

};

