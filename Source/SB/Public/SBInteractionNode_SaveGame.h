#pragma once
#include "CoreMinimal.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_SaveGame.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_SaveGame : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSBInteractionExecPinInfo ExecInput;
    
    UPROPERTY(VisibleAnywhere)
    float SaveMinInterval;
    
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo OutputExec;
    
    USBInteractionNode_SaveGame();

};

