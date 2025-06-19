#pragma once
#include "CoreMinimal.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_DebugPrintString.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_DebugPrintString : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSBInteractionExecPinInfo ExecInput;
    
    UPROPERTY(EditAnywhere)
    FString OutputString1;
    
    UPROPERTY(EditAnywhere)
    FString OutputString2;
    
    USBInteractionNode_DebugPrintString();

};

