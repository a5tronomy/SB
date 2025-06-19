#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_PropertyConsumeItem.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_PropertyConsumeItem : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBInteractionExecPinInfo InputExec;
    
    UPROPERTY(EditAnywhere)
    FSBInteractionExecPinInfo OutputExec;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBInteractionExecPinInfo> PropertyData;
    
    UPROPERTY(EditAnywhere)
    int32 ItemCount;
    
    UPROPERTY()
    FSBAlias RefTableAlias;
    
    USBInteractionNode_PropertyConsumeItem();

};

