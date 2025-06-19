#pragma once
#include "CoreMinimal.h"
#include "ESBOperationType.h"
#include "SBAlias.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_IntCompare.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_IntCompare : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSBInteractionExecPinInfo InputExec;
    
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo CustomDataKeyA;
    
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo CustomDataKeyB;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBOperationType> Operation;
    
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo OutputTrueExec;
    
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo OutputFalseExec;
    
    UPROPERTY()
    int32 Graph_ValueA;
    
    UPROPERTY()
    int32 Graph_ValueB;
    
    UPROPERTY()
    FSBAlias RefTableAlias;
    
    USBInteractionNode_IntCompare();

};

