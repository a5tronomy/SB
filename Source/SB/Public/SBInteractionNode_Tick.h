#pragma once
#include "CoreMinimal.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_Tick.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_Tick : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FSBInteractionExecPinInfo> Exec;
    
    USBInteractionNode_Tick();

};

