#pragma once
#include "CoreMinimal.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_RandomInt.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_RandomInt : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 MaxRange;
    
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo ResultInfo;
    
    USBInteractionNode_RandomInt();

};

