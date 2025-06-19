#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_GetCustomValue.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_GetCustomValue : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName CustomDataKey;
    
    UPROPERTY(VisibleAnywhere)
    int32 CustomDataValue;
    
    UPROPERTY()
    FSBAlias RefTableAlias;
    
    UPROPERTY()
    TArray<FSBInteractionExecPinInfo> InputConditions;
    
    USBInteractionNode_GetCustomValue();

};

