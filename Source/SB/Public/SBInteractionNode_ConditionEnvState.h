#pragma once
#include "CoreMinimal.h"
#include "SBAliasZone.h"
#include "SBAliasZoneEnvSpawn.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_ConditionEnvState.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_ConditionEnvState : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSBInteractionExecPinInfo ExecInput;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasZoneEnvSpawn EnvSpawn;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasZone ZoneAlias;
    
    UPROPERTY(VisibleAnywhere)
    FName StateName;
    
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo OutputTrueExec;
    
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo OutputFalseExec;
    
    UPROPERTY(VisibleAnywhere)
    bool ResultValue;
    
    USBInteractionNode_ConditionEnvState();

};

