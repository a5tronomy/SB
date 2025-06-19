#pragma once
#include "CoreMinimal.h"
#include "ESBInteractionNodeType.h"
#include "ESBInteractionResultType.h"
#include "SBDataNodeBase.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_Base : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TEnumAsByte<ESBInteractionNodeType> InteractionNodeType;
    
    UPROPERTY()
    FName LinkToParentPinName;
    
    UPROPERTY()
    int32 LinkToParentPinIndex;
    
    UPROPERTY()
    TEnumAsByte<ESBInteractionResultType> LinkeResultType;
    
    UPROPERTY()
    TArray<FSBInteractionExecPinInfo> NodeActionList;
    
    USBInteractionNode_Base();

};

