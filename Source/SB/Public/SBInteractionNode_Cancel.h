#pragma once
#include "CoreMinimal.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_Cancel.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_Cancel : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FSBInteractionExecPinInfo> CancelExec;
    
    USBInteractionNode_Cancel();

};

