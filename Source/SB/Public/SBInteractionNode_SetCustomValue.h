#pragma once
#include "CoreMinimal.h"
#include "ESBInteractionValueApplyType.h"
#include "SBAlias.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_SetCustomValue.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_SetCustomValue : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSBInteractionExecPinInfo InputExec;
    
    UPROPERTY(VisibleAnywhere)
    FName CustomDataKey;
    
    UPROPERTY(VisibleAnywhere)
    int32 CustomDataValue;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBInteractionValueApplyType> ValueApplyType;
    
    UPROPERTY()
    FSBInteractionExecPinInfo OutputExec;
    
    UPROPERTY()
    FSBInteractionExecPinInfo InputCustomValueInfo;
    
    UPROPERTY()
    FSBAlias RefTableAlias;
    
    USBInteractionNode_SetCustomValue();

};

