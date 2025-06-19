#pragma once
#include "CoreMinimal.h"
#include "ESBEquation.h"
#include "SBAliasTheaterSelectData.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_SelectDataSwitch.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_SelectDataSwitch : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo InputExec;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasTheaterSelectData SelectData;
    
    UPROPERTY(VisibleAnywhere)
    int32 SelectDataPriority;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBEquation> Equation;
    
    UPROPERTY()
    FSBInteractionExecPinInfo ResultTrue;
    
    UPROPERTY()
    FSBInteractionExecPinInfo ResultFalse;
    
    USBInteractionNode_SelectDataSwitch();

};

