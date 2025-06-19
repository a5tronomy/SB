#pragma once
#include "CoreMinimal.h"
#include "ESBInteractionMoveType.h"
#include "ESBUIRequestBoardType.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_RequestBoardUI.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_RequestBoardUI : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSBInteractionExecPinInfo ExecInput;
    
    UPROPERTY(VisibleAnywhere)
    float DelayTime;
    
    UPROPERTY(VisibleAnywhere)
    bool bActorBlockAll;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBInteractionMoveType> InteractionMoveType;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBUIRequestBoardType> RequestBoardType;
    
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo OutputExec;
    
    USBInteractionNode_RequestBoardUI();

};

