#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBPhotoChallengeTableProperty.generated.h"

USTRUCT()
struct FSBPhotoChallengeTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName TargetZoneEnvActorAlias;
    
    UPROPERTY(EditAnywhere)
    float CheckDistance;
    
    UPROPERTY(EditAnywhere)
    float CheckAngle;
    
    UPROPERTY(EditAnywhere)
    float CheckBoxRatioX;
    
    UPROPERTY(EditAnywhere)
    float CheckBoxRatioY;
    
    UPROPERTY(EditAnywhere)
    FName LinkedQuestTaskAlias;
    
    UPROPERTY(EditAnywhere)
    FName ExceptActorAlias;
    
    SB_API FSBPhotoChallengeTableProperty();
};

