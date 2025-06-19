#pragma once
#include "CoreMinimal.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_UISystemNotice.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_UISystemNotice : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSBInteractionExecPinInfo ExecInput;
    
    UPROPERTY(VisibleAnywhere)
    FText MessageText;
    
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo OutputExec;
    
    USBInteractionNode_UISystemNotice();

};

