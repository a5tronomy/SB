#pragma once
#include "CoreMinimal.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_MessageBoxYN.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_MessageBoxYN : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSBInteractionExecPinInfo ExecInput;
    
    UPROPERTY(VisibleAnywhere)
    FText MessageText;
    
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo Yes;
    
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo No;
    
    USBInteractionNode_MessageBoxYN();

};

