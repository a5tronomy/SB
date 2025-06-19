#pragma once
#include "CoreMinimal.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_TemplateEnd.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_TemplateEnd : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSBInteractionExecPinInfo OutputExec;
    
    UPROPERTY(EditAnywhere)
    FName TemplateName;
    
    USBInteractionNode_TemplateEnd();

};

