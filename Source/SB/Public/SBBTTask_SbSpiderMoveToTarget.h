#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ESBMoveState.h"
#include "SBBTTask_SbSpiderMoveToTarget.generated.h"

UCLASS()
class SB_API USBBTTask_SbSpiderMoveToTarget : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMoveState> MoveState;
    
    UPROPERTY(EditAnywhere)
    bool bSubTarget;
    
    UPROPERTY(EditAnywhere)
    bool bCheckUseSkill;
    
    UPROPERTY(EditAnywhere)
    float DistanceOfApproach;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> SkillType;
    
    UPROPERTY(EditAnywhere)
    bool bBackgroundTask;
    
    UPROPERTY(EditAnywhere)
    bool bCheckBrokenPath;
    
    UPROPERTY(EditAnywhere)
    FString BrokenPathShowPath;
    
    UPROPERTY(EditAnywhere)
    float WaitBrokenPathShowTime;
    
    UPROPERTY(EditAnywhere)
    bool bOnlyTargetInsideInVolume;
    
    USBBTTask_SbSpiderMoveToTarget();

};

