#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_Condition.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_Condition : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleAnywhere)
    FString ConditionType;
    
    UPROPERTY(Transient, VisibleAnywhere)
    FString ConditionEq;
    
    UPROPERTY(Transient, VisibleAnywhere)
    FString CustomStr01;
    
    UPROPERTY(Transient, VisibleAnywhere)
    FString CustomStr02;
    
    UPROPERTY(Transient, VisibleAnywhere)
    FString CheckStrValue;
    
    UPROPERTY(Transient, VisibleAnywhere)
    FString CheckValue;
    
    UPROPERTY(Transient, VisibleAnywhere)
    FString FailNotifyMsg;
    
    UPROPERTY()
    TArray<FSBInteractionExecPinInfo> RetrunValue;
    
    UPROPERTY()
    FSBAlias RefTableAlias;
    
    USBInteractionNode_Condition();

};

