#pragma once
#include "CoreMinimal.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_TemplateInst.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_TemplateInst : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSBInteractionExecPinInfo InputExec;
    
    UPROPERTY()
    FSBInteractionExecPinInfo OutputExec;
    
    UPROPERTY(EditAnywhere)
    FName TemplateName;
    
    USBInteractionNode_TemplateInst();

};

