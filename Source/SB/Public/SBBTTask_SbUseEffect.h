#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SBBTTask_SbUseEffect.generated.h"

UCLASS()
class SB_API USBBTTask_SbUseEffect : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bSelfActor;
    
    UPROPERTY(EditAnywhere)
    bool bSubTarget;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> EffectAlias;
    
    USBBTTask_SbUseEffect();

};

