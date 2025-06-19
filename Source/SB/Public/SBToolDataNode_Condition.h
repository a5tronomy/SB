#pragma once
#include "CoreMinimal.h"
#include "ESBConditionCalcuationType.h"
#include "ESBConditionType.h"
#include "ESBEquation.h"
#include "ESBGameOptionType.h"
#include "ESBZoneEventActorTarget.h"
#include "SBAlias.h"
#include "SBDataNodeBase.h"
#include "SBToolDataNode_Condition.generated.h"

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_Condition : public USBDataNodeBase {
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
    
    UPROPERTY()
    FString CustomStr01;
    
    UPROPERTY()
    FString CustomStr02;
    
    UPROPERTY(EditAnywhere)
    FSBAlias RefCustomStr01;
    
    UPROPERTY(EditAnywhere)
    FSBAlias RefCustomStr02;
    
    UPROPERTY(EditAnywhere)
    FSBAlias RefCustomStr03;
    
    UPROPERTY()
    FString CheckStrValue;
    
    UPROPERTY(EditAnywhere)
    FSBAlias RefCheckStrValue;
    
    UPROPERTY(EditAnywhere)
    int32 CheckValue;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEventActorTarget> ActorTargetType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCalcuationType> CheckStatCalcType;
    
    UPROPERTY(EditAnywhere)
    bool bUseActorTragetType;
    
    UPROPERTY(EditAnywhere)
    ESBGameOptionType GameOptionType;
    
    UPROPERTY(EditAnywhere)
    FString FailNotifyMsg;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    USBToolDataNode_Condition();

};

