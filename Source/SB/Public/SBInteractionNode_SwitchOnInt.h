#pragma once
#include "CoreMinimal.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_SwitchOnInt.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_SwitchOnInt : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo InputExec;
    
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo InputIntValue;
    
    UPROPERTY()
    TArray<FSBInteractionExecPinInfo> OutputExecConnection;
    
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo DefaultResult;
    
    USBInteractionNode_SwitchOnInt();

};

