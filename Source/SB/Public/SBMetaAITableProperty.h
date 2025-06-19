#pragma once
#include "CoreMinimal.h"
#include "ESBJob.h"
#include "ESBMetaAILookAtType.h"
#include "ESBMetaAIThink.h"
#include "SBTablePropertyBase.h"
#include "SBMetaAITableProperty.generated.h"

USTRUCT()
struct FSBMetaAITableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    ESBJob Job;
    
    UPROPERTY(EditAnywhere)
    FName Appearance;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> InitTagArray;
    
    UPROPERTY(EditAnywhere)
    TArray<ESBMetaAIThink> ValidThinkArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> BehaviorAliasArray;
    
    UPROPERTY(EditAnywhere)
    bool bKeepNodeGroupIndex;
    
    UPROPERTY(EditAnywhere)
    bool bEnableCollisionOverlap;
    
    UPROPERTY(EditAnywhere)
    float MoveAroundIntervalTime;
    
    UPROPERTY(EditAnywhere)
    float MoveAroundProbability;
    
    UPROPERTY(EditAnywhere)
    bool bUseOnlyTagNode;
    
    UPROPERTY(EditAnywhere)
    bool bLookAtOnly;
    
    UPROPERTY(EditAnywhere)
    ESBMetaAILookAtType LookAtType;
    
    UPROPERTY(EditAnywhere)
    float LookAtYawAngle;
    
    UPROPERTY(EditAnywhere)
    float LookAtPitchAngle;
    
    UPROPERTY(EditAnywhere)
    float LookAtOnceTime;
    
    UPROPERTY(EditAnywhere)
    float LookAtCooltime;
    
    UPROPERTY(EditAnywhere)
    float LookAtDistance;
    
    UPROPERTY(EditAnywhere)
    float LookAtStopDistance;
    
    UPROPERTY(EditAnywhere)
    float StopMoveDistanceWithPlayer;
    
    UPROPERTY(EditAnywhere)
    float StopMoveAngleWithPlayer;
    
    UPROPERTY(EditAnywhere)
    float StopMoveOnceTime;
    
    UPROPERTY(EditAnywhere)
    float StopMoveCoolTime;
    
    UPROPERTY(EditAnywhere)
    bool bEnableShoulderCharge;
    
    UPROPERTY(EditAnywhere)
    FString ShoulderChargeShowPath;
    
    UPROPERTY(EditAnywhere)
    float MoveAroundCustomBehaviorCheckTime;
    
    UPROPERTY(EditAnywhere)
    float MoveAroundCustomBehaviorActivationRate;
    
    UPROPERTY(EditAnywhere)
    FString MoveAroundCustomBehavior1_ShowPath;
    
    UPROPERTY(EditAnywhere)
    float MoveAroundCustomBehavior1_ActivationRate;
    
    UPROPERTY(EditAnywhere)
    FString MoveAroundCustomBehavior2_ShowPath;
    
    UPROPERTY(EditAnywhere)
    float MoveAroundCustomBehavior2_ActivationRate;
    
    UPROPERTY(EditAnywhere)
    FString MoveAroundCustomBehavior3_ShowPath;
    
    UPROPERTY(EditAnywhere)
    float MoveAroundCustomBehavior3_ActivationRate;
    
    UPROPERTY(EditAnywhere)
    FString MoveAroundCustomBehavior4_ShowPath;
    
    UPROPERTY(EditAnywhere)
    float MoveAroundCustomBehavior4_ActivationRate;
    
    UPROPERTY(EditAnywhere)
    FString MoveAroundCustomBehavior5_ShowPath;
    
    UPROPERTY(EditAnywhere)
    float MoveAroundCustomBehavior5_ActivationRate;
    
    UPROPERTY(EditAnywhere)
    bool bInitZeroTiredness;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBMetaAITableProperty();
};

