#pragma once
#include "CoreMinimal.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_Switch.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_Switch : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo InputExec;
    
    UPROPERTY()
    TArray<FSBInteractionExecPinInfo> InputConditions;
    
    UPROPERTY()
    TArray<FSBInteractionExecPinInfo> OutputExecConnection;
    
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo DefaultResult;
    
    USBInteractionNode_Switch();

};

