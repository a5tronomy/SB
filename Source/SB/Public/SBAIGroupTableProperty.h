#pragma once
#include "CoreMinimal.h"
#include "ESBAIGroupTargetShareCondition.h"
#include "ESBAttackerSelectMethod.h"
#include "SBTablePropertyBase.h"
#include "SBAIGroupTableProperty.generated.h"

USTRUCT()
struct FSBAIGroupTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    int32 MinGroupActorCount;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBAIGroupTargetShareCondition> TargetShareCondition;
    
    UPROPERTY(EditAnywhere)
    float TargetShareConditionValue;
    
    UPROPERTY(EditAnywhere)
    int32 MaxAttackerCount;
    
    UPROPERTY(EditAnywhere)
    float ReattackWaitingTime;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBAttackerSelectMethod> AttackerSelectMethod;
    
    UPROPERTY(EditAnywhere)
    int32 ValidProjectileCount;
    
    UPROPERTY(EditAnywhere)
    float InvalidProjectileOffsetMinDistance;
    
    UPROPERTY(EditAnywhere)
    float InvalidProjectileOffsetMaxDistance;
    
    UPROPERTY(EditAnywhere)
    float CautionMinDistance;
    
    UPROPERTY(EditAnywhere)
    float CautionMaxDistance;
    
    UPROPERTY(EditAnywhere)
    bool bUseMetaAIFormation;
    
    UPROPERTY(EditAnywhere)
    FName MetaAIFormationType;
    
    UPROPERTY(EditAnywhere)
    bool bImmediatelyBattleAlarm;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBAIGroupTableProperty();
};

