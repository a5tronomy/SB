#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_ActionZoneEvent.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_ActionZoneEvent : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    float DelayTime;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBInteractionExecPinInfo> RetrunValue;
    
    UPROPERTY()
    FSBAlias RefTableAlias;
    
    USBInteractionNode_ActionZoneEvent();

};

