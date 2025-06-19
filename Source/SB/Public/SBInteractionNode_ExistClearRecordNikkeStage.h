#pragma once
#include "CoreMinimal.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_ExistClearRecordNikkeStage.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_ExistClearRecordNikkeStage : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo InputExec;
    
    UPROPERTY()
    FSBInteractionExecPinInfo ResultTrue;
    
    UPROPERTY()
    FSBInteractionExecPinInfo ResultFalse;
    
    USBInteractionNode_ExistClearRecordNikkeStage();

};

