#pragma once
#include "CoreMinimal.h"
#include "ESBInteractionMoveType.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_Grab.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_Grab : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSBInteractionExecPinInfo ExecInput;
    
    UPROPERTY()
    bool bActorBlockAll;
    
    UPROPERTY()
    TEnumAsByte<ESBInteractionMoveType> InteractionMoveType;
    
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo OutputExec;
    
    USBInteractionNode_Grab();

};

