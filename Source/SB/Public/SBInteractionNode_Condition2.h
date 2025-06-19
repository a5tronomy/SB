#pragma once
#include "CoreMinimal.h"
#include "ESBConditionCalcuationType.h"
#include "ESBConditionType.h"
#include "ESBEquation.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_Condition2.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_Condition2 : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBConditionType> ConditionType;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBEquation> ConditionEq;
    
    UPROPERTY(VisibleAnywhere)
    FString CustomStr01;
    
    UPROPERTY(VisibleAnywhere)
    FString CustomStr02;
    
    UPROPERTY(VisibleAnywhere)
    FString CheckStrValue;
    
    UPROPERTY(VisibleAnywhere)
    int32 CheckValue;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBConditionCalcuationType> CheckStatCalcType;
    
    UPROPERTY(VisibleAnywhere)
    FString FailNotifyMsg;
    
    UPROPERTY()
    TArray<FSBInteractionExecPinInfo> RetrunValue;
    
    USBInteractionNode_Condition2();

};

