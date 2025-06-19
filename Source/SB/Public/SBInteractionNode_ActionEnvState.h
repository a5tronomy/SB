#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_ActionEnvState.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_ActionEnvState : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString EnvTagName;
    
    UPROPERTY(VisibleAnywhere)
    float DelayTime;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBInteractionExecPinInfo> RetrunValue;
    
    UPROPERTY()
    FSBAlias RefTableAlias;
    
    USBInteractionNode_ActionEnvState();

};

