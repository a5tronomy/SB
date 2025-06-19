#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESBAIWorldNodeType.h"
#include "ESBConditionCheckType.h"
#include "ESBJob.h"
#include "ESBMetaAIBehavior.h"
#include "ESBMetaAIBehaviorStance.h"
#include "ESBMetaAILookAtType.h"
#include "SBAppearanceShow.h"
#include "SBBehaviorIterateShowInfo.h"
#include "SBBehaviorPositionInfo.h"
#include "SBAIWorldNode.generated.h"

class AActor;
class USBShowData;

USTRUCT(BlueprintType)
struct FSBAIWorldNode {
    GENERATED_BODY()
public:
    UPROPERTY()
    ESBAIWorldNodeType NodeType;
    
    UPROPERTY()
    TArray<ESBJob> ValidJobArray;
    
    UPROPERTY()
    TArray<FName> ValidTagArray;
    
    UPROPERTY()
    TArray<FName> InvalidTagArray;
    
    UPROPERTY()
    float RoadWidth;
    
    UPROPERTY()
    float RoadArriveBounds;
    
    UPROPERTY()
    ESBMetaAIBehavior Behavior;
    
    UPROPERTY()
    ESBMetaAIBehaviorStance BehaviorStance;
    
    UPROPERTY()
    FString BehaviorArriveShowPath;
    
    UPROPERTY()
    FString BehaviorLeaveShowPath;
    
    UPROPERTY()
    TArray<USBShowData*> BehaviorActiveShowArray;
    
    UPROPERTY()
    TArray<USBShowData*> BehaviorIdleShowArray;
    
    UPROPERTY()
    TArray<FSBAppearanceShow> BehaviorShowByAppearance;
    
    UPROPERTY()
    float BehaviorIdleShowMinTime;
    
    UPROPERTY()
    float BehaviorIdleShowMaxTime;
    
    UPROPERTY()
    FString BehaviorRunBlendSpaceRelativePath;
    
    UPROPERTY()
    float BehaviorRunBlendSpaceBlendInTime;
    
    UPROPERTY()
    float BehaviorRunBlendSpaceBlendOutTime;
    
    UPROPERTY()
    float BehaviorRunBlendSpaceSetDelayTime;
    
    UPROPERTY()
    FString ConditionActiveBehaviorNodeShowPath;
    
    UPROPERTY()
    TArray<FSBBehaviorIterateShowInfo> BehaviorIterateShowInfoArray;
    
    UPROPERTY()
    float BehaviorRemainTime;
    
    UPROPERTY()
    bool BehaviorInfinity;
    
    UPROPERTY()
    float BehaviorNodeCoolTime;
    
    UPROPERTY()
    int32 BehaviorActivityMinActorCount;
    
    UPROPERTY()
    float BehaviorActivityWatingTime;
    
    UPROPERTY()
    int32 Condition_CheckActiveBehaviorNodeIndex;
    
    UPROPERTY()
    TArray<int32> ConditionActiveBehaviorNodeIndexArray;
    
    UPROPERTY()
    FName SpecialBehaviorTag;
    
    UPROPERTY()
    FName BehaviorAlias;
    
    UPROPERTY()
    float OverrideStopMoveDistanceWithPlayer;
    
    UPROPERTY()
    float OverrideStopMoveAngleWithPlayer;
    
    UPROPERTY()
    ESBMetaAILookAtType OverrideLookAtType;
    
    UPROPERTY()
    float OverrideLookAtYawAngle;
    
    UPROPERTY()
    float OverrideLookAtPitchAngle;
    
    UPROPERTY()
    float OverrideLookAtOnceTime;
    
    UPROPERTY()
    float OverrideLookAtCooltime;
    
    UPROPERTY()
    float OverrideLookAtDistance;
    
    UPROPERTY()
    float LookAtZOffset;
    
    UPROPERTY()
    float OverrideLookAtStopDistance;
    
    UPROPERTY()
    TEnumAsByte<ESBConditionCheckType> OverrideEnableShoulderCharge;
    
    UPROPERTY()
    bool bBehaviorForceInvite;
    
    UPROPERTY()
    float BehaviorForceInviteDistance;
    
    UPROPERTY()
    float BehaviorLocationSnapDistance;
    
    UPROPERTY()
    float BehaviorKeepDistanceWhenArrived;
    
    UPROPERTY()
    bool bDisablePawnCollisionWhenPlayArriveShow;
    
    UPROPERTY()
    bool bDisablePawnCollisionWhenPlayLeaveShow;
    
    UPROPERTY()
    TArray<TSoftObjectPtr<AActor>> IgnoreCollisionActorArray;
    
    UPROPERTY()
    bool bDisableInteraction;
    
    UPROPERTY()
    bool bDisableDistancePooling;
    
    UPROPERTY()
    bool bDisableSelfiePose;
    
    UPROPERTY()
    FString SubBehaviorArriveShowPath;
    
    UPROPERTY()
    FString SubBehaviorLeaveShowPath;
    
    UPROPERTY()
    float SubBehaviorRemainTime;
    
    UPROPERTY()
    FVector Location;
    
    UPROPERTY()
    FVector ForwardVector;
    
    UPROPERTY()
    int32 NodeIndex;
    
    UPROPERTY()
    int32 GroupIndex;
    
    UPROPERTY()
    TArray<int32> LinkNodeIndexArray;
    
    UPROPERTY()
    TArray<int32> LinkSubBehaviorNodeIndexArray;
    
    UPROPERTY()
    TArray<int32> LinkNextBehaviorNodeIndexArray;
    
    UPROPERTY()
    TArray<FSBBehaviorPositionInfo> BehaviorTransformArray;
    
    UPROPERTY()
    FTransform InteractionTransform;
    
    SB_API FSBAIWorldNode();
};

