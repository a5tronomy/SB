#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ESBAIDetectTargetCancel.h"
#include "ESBAIDetectTargetFindOP.h"
#include "SBBTTask_SbPlayShow.generated.h"

UCLASS()
class SB_API USBBTTask_SbPlayShow : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bDetectTarget;
    
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
    bool bEncroachmentable;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EffectAliasArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> NoneEffectAliasArray;
    
    UPROPERTY(EditAnywhere)
    FString ShowPath;
    
    UPROPERTY(EditAnywhere)
    bool bWait;
    
    USBBTTask_SbPlayShow();

};

