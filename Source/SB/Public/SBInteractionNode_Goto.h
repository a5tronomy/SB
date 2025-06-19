#pragma once
#include "CoreMinimal.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_Goto.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_Goto : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSBInteractionExecPinInfo InputExec;
    
    UPROPERTY(VisibleAnywhere)
    FName TargetLabelName;
    
    USBInteractionNode_Goto();

};

