#pragma once
#include "CoreMinimal.h"
#include "ESBNikkeStageEntryType.h"
#include "SBAliasNikkeStage.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_EnterNikkeStage.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_EnterNikkeStage : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSBInteractionExecPinInfo ExecInput;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasNikkeStage NikkeStage;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBNikkeStageEntryType> EntryType;
    
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo OutputExec;
    
    USBInteractionNode_EnterNikkeStage();

};

