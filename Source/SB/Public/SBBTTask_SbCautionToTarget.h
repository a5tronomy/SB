#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ESBCautionToTargetMoveType.h"
#include "SBBTTask_SbCautionToTarget.generated.h"

UCLASS()
class SB_API USBBTTask_SbCautionToTarget : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBCautionToTargetMoveType::Type> SetMoveType;
    
    UPROPERTY(EditAnywhere)
    FString CheckSkillFlag;
    
    UPROPERTY(EditAnywhere)
    float MinDistance;
    
    UPROPERTY(EditAnywhere)
    float MaxDistance;
    
    UPROPERTY(EditAnywhere)
    float RunDistance;
    
    UPROPERTY(EditAnywhere)
    bool bLockOn;
    
    UPROPERTY(EditAnywhere)
    bool bDisableLookAtIKWhenLockOn;
    
    UPROPERTY(EditAnywhere)
    float WaitCheckTime;
    
    UPROPERTY(EditAnywhere)
    bool bWaitCheckRandomTime;
    
    UPROPERTY(EditAnywhere)
    float WaitCheckTimeRandomMinTime;
    
    UPROPERTY(EditAnywhere)
    float WaitCheckTimeRandomMaxTime;
    
    UPROPERTY(EditAnywhere)
    float WaitRate;
    
    UPROPERTY(EditAnywhere)
    int32 WaitCountByGroup;
    
    UPROPERTY(EditAnywhere)
    float PlayShowRateWhenWait;
    
    UPROPERTY(EditAnywhere)
    FString WaitShowPath;
    
    UPROPERTY(EditAnywhere)
    int32 SideMoveRepeatCount;
    
    UPROPERTY(EditAnywhere)
    float SideMoveMinDistance;
    
    UPROPERTY(EditAnywhere)
    float SideMoveMaxDistance;
    
    UPROPERTY(EditAnywhere)
    bool bStayTargetView;
    
    UPROPERTY(EditAnywhere)
    FName LeftSideMoveEndUseSkillCommandWhenTaskEnd;
    
    UPROPERTY(EditAnywhere)
    FName RightSideMoveEndUseSkillCommandWhenTaskEnd;
    
    USBBTTask_SbCautionToTarget();

};

