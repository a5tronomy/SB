#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ESBAIDetectTargetCancel.h"
#include "ESBAIDetectTargetFindOP.h"
#include "SBBTTask_SbDetectTarget.generated.h"

UCLASS()
class SB_API USBBTTask_SbDetectTarget : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString BaseBone;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBAIDetectTargetFindOP> FindOP;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBAIDetectTargetCancel> TargetCancel;
    
    UPROPERTY(EditAnywhere)
    bool bAlly;
    
    UPROPERTY(EditAnywhere)
    bool bEnemy;
    
    UPROPERTY(EditAnywhere)
    bool bDead;
    
    UPROPERTY(EditAnywhere)
    bool bComa;
    
    UPROPERTY(EditAnywhere)
    bool bEncroachmentable;
    
    UPROPERTY(EditAnywhere)
    bool bSubTarget;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EffectAliasArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> NoneEffectAliasArray;
    
    USBBTTask_SbDetectTarget();

};

