#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ESBAIActorType.h"
#include "SBBTDecorator_SbCheckActorEffect.generated.h"

UCLASS()
class USBBTDecorator_SbCheckActorEffect : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBAIActorType::Type> ActorType;
    
    UPROPERTY(EditAnywhere)
    FName EffectAlias;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> AndCheck_EffectAliasArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> OrCheck_EffectAliasArray;
    
    UPROPERTY(EditAnywhere)
    bool bActive;
    
    USBBTDecorator_SbCheckActorEffect();

};

