#pragma once
#include "CoreMinimal.h"
#include "ESBConditionCalcuationType.h"
#include "ESBConditionType.h"
#include "ESBEquation.h"
#include "ESBGameOptionType.h"
#include "ESBZoneEventActorTarget.h"
#include "SBTablePropertyBase.h"
#include "SBConditionTableProperty.generated.h"

USTRUCT()
struct FSBConditionTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionType> ConditionType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEquation> ConditionEq;
    
    UPROPERTY(EditAnywhere)
    FString CustomStr01;
    
    UPROPERTY(EditAnywhere)
    FString CustomStr02;
    
    UPROPERTY(EditAnywhere)
    FString CustomStr03;
    
    UPROPERTY(EditAnywhere)
    FString CheckStrValue;
    
    UPROPERTY(EditAnywhere)
    int32 CheckValue;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCalcuationType> CheckStatCalcType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEventActorTarget> ActorTargetType;
    
    UPROPERTY(EditAnywhere)
    ESBGameOptionType GameOptionType;
    
    UPROPERTY(EditAnywhere)
    bool bUseActorTragetType;
    
    UPROPERTY(EditAnywhere)
    FString FailNotifyMsg;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBConditionTableProperty();
};

