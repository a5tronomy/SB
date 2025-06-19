#pragma once
#include "CoreMinimal.h"
#include "ESBObjectState.h"
#include "ESBZoneEnvLinkIndex.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_ChangeStateLinkEnv.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_ChangeStateLinkEnv : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSBInteractionExecPinInfo ExecInput;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBZoneEnvLinkIndex> LinkEnvIndex;
    
    UPROPERTY(VisibleAnywhere)
    FName StateTagName;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBObjectState> EnvObjState;
    
    UPROPERTY(VisibleAnywhere)
    int32 AddProgressValue;
    
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo OutputExec;
    
    USBInteractionNode_ChangeStateLinkEnv();

};

