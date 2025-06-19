#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ESBAIDetectTargetCancel.h"
#include "ESBAIDetectTargetFindOP.h"
#include "ESBMoveState.h"
#include "SBBTTask_SbMoveToHome.generated.h"

UCLASS()
class SB_API USBBTTask_SbMoveToHome : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString PathWayAlias;
    
    UPROPERTY(EditAnywhere)
    bool bUseSpawnPath;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMoveState> MoveState;
    
    UPROPERTY(EditAnywhere)
    bool bDetectTarget;
    
    UPROPERTY(EditAnywhere)
    float DetectTargetDelayTime;
    
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
    
    USBBTTask_SbMoveToHome();

};

