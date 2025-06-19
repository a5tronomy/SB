#pragma once
#include "CoreMinimal.h"
#include "ESBInteractShowPlayRuleType.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_FailNotify.generated.h"

class USBShowData;

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_FailNotify : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSBInteractionExecPinInfo ExecInput;
    
    UPROPERTY(VisibleAnywhere)
    TSoftObjectPtr<USBShowData> OwnerShowAsset;
    
    UPROPERTY(VisibleAnywhere)
    TSoftObjectPtr<USBShowData> CasterShowAsset;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBInteractShowPlayRuleType> ShowPlayRuleType;
    
    USBInteractionNode_FailNotify();

};

