#pragma once
#include "CoreMinimal.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_GotoLabel.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_GotoLabel : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSBInteractionExecPinInfo OutputExec;
    
    UPROPERTY(VisibleAnywhere)
    FName LabelName;
    
    USBInteractionNode_GotoLabel();

};

