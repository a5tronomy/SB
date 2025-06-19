#pragma once
#include "CoreMinimal.h"
#include "ESBObjectState.h"
#include "SBAlias.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_ActionEnvActivate.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_ActionEnvActivate : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBObjectState> ChangeActivate;
    
    UPROPERTY(VisibleAnywhere)
    float DelayTime;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBInteractionExecPinInfo> RetrunValue;
    
    UPROPERTY()
    FSBAlias RefTableAlias;
    
    USBInteractionNode_ActionEnvActivate();

};

