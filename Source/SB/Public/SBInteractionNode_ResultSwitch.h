#pragma once
#include "CoreMinimal.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_ResultSwitch.generated.h"

class USoundBase;

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_ResultSwitch : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo InputExec;
    
    UPROPERTY()
    TArray<FSBInteractionExecPinInfo> InputConditions;
    
    UPROPERTY(VisibleAnywhere)
    USoundBase* Success_Sound;
    
    UPROPERTY(VisibleAnywhere)
    USoundBase* Fail_Sound;
    
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo ResultSucces;
    
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo ResultFail;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBInteractionExecPinInfo> ResultValueInfo;
    
    USBInteractionNode_ResultSwitch();

};

