#pragma once
#include "CoreMinimal.h"
#include "ESBInteractionUIDataType.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_InteractionUIData.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_InteractionUIData : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSBInteractionExecPinInfo ExecInput;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBInteractionUIDataType> InteractionUIDataType;
    
    UPROPERTY(EditAnywhere)
    FText TextValue;
    
    USBInteractionNode_InteractionUIData();

};

