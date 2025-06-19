#pragma once
#include "CoreMinimal.h"
#include "ESBConditionCalcuationType.h"
#include "ESBConditionType.h"
#include "ESBEquation.h"
#include "ESBZoneEventActorTarget.h"
#include "SBAlias.h"
#include "SBAliasCondition.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_TheaterChoiceCondition.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_TheaterChoiceCondition : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FSBAliasCondition RefConditionAlias;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBConditionType> ConditionType;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBEquation> ConditionEq;
    
    UPROPERTY(EditAnywhere)
    FName ConditionAlias;
    
    UPROPERTY()
    uint32 ConditionId;
    
    UPROPERTY(EditAnywhere)
    FSBAlias CustomStr01;
    
    UPROPERTY(EditAnywhere)
    FSBAlias CustomStr02;
    
    UPROPERTY(EditAnywhere)
    FSBAlias CustomStr03;
    
    UPROPERTY(EditAnywhere)
    FSBAlias CheckStrValue;
    
    UPROPERTY(EditAnywhere)
    int32 CheckValue;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCalcuationType> CheckStatCalcType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEventActorTarget> ActorTargetType;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    UPROPERTY(EditAnywhere)
    FString FailNotifyMsg;
    
    UPROPERTY(VisibleAnywhere)
    bool ResultValue;
    
    USBInteractionNode_TheaterChoiceCondition();

};

