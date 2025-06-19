#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESBAIWorldNodeType.h"
#include "ESBConditionCheckType.h"
#include "ESBJob.h"
#include "ESBMetaAIBehavior.h"
#include "ESBMetaAIBehaviorStance.h"
#include "ESBMetaAILookAtType.h"
#include "SBAIWorldNodeBehaviorIterateShowInfo.h"
#include "SBAppearanceShow.h"
#include "SBAIWorldNodeActor.generated.h"

class ASBAIWorldNodeActor;
class USBAIWorldNodeComponent;
class USBShowData;
class UStaticMeshComponent;
class UTextRenderComponent;

UCLASS()
class SB_API ASBAIWorldNodeActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    USBAIWorldNodeComponent* ActorRootComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(Instanced)
    UTextRenderComponent* TextRenderComponent;
    
public:
    UPROPERTY(EditAnywhere)
    FString Description;
    
    UPROPERTY(VisibleAnywhere)
    TArray<TWeakObjectPtr<ASBAIWorldNodeActor>> LinkNodeArray;
    
    UPROPERTY(EditAnywhere)
    ESBAIWorldNodeType NodeType;
    
    UPROPERTY(VisibleAnywhere)
    int32 NodeIndex;
    
    UPROPERTY(EditAnywhere)
    TArray<ESBJob> ValidJobArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ValidTagArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> InvalidTagArray;
    
    UPROPERTY(EditAnywhere)
    float RoadWidth;
    
    UPROPERTY(EditAnywhere)
    float RoadArriveBounds;
    
    UPROPERTY(EditAnywhere)
    ESBMetaAIBehavior Behavior;
    
    UPROPERTY(EditAnywhere)
    ESBMetaAIBehaviorStance BehaviorStance;
    
    UPROPERTY(EditAnywhere)
    int32 BehaviorActivityMinActorCount;
    
    UPROPERTY(EditAnywhere)
    float BehaviorActivityWatingTime;
    
    UPROPERTY(EditAnywhere)
    float BehaviorRemainTime;
    
    UPROPERTY(EditAnywhere)
    bool BehaviorInfinity;
    
    UPROPERTY(EditAnywhere)
    bool bDisablePawnCollisionWhenPlayArriveShow;
    
    UPROPERTY(EditAnywhere)
    bool bDisablePawnCollisionWhenPlayLeaveShow;
    
    UPROPERTY(EditAnywhere)
    USBShowData* BehaviorArriveShow;
    
    UPROPERTY(EditAnywhere)
    USBShowData* BehaviorLeaveShow;
    
    UPROPERTY(EditAnywhere)
    TArray<USBShowData*> BehaviorActiveShowArray;
    
    UPROPERTY(EditAnywhere)
    TArray<USBShowData*> BehaviorIdleShowArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBAppearanceShow> BehaviorShowByAppearance;
    
    UPROPERTY(EditAnywhere)
    float BehaviorIdleShowMinTime;
    
    UPROPERTY(EditAnywhere)
    float BehaviorIdleShowMaxTime;
    
    UPROPERTY(EditAnywhere)
    FString BehaviorRunBlendSpaceRelativePath;
    
    UPROPERTY(EditAnywhere)
    float BehaviorRunBlendSpaceBlendInTime;
    
    UPROPERTY(EditAnywhere)
    float BehaviorRunBlendSpaceBlendOutTime;
    
    UPROPERTY(EditAnywhere)
    float BehaviorRunBlendSpaceSetDelayTime;
    
    UPROPERTY(EditAnywhere)
    float BehaviorNodeCoolTime;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<ASBAIWorldNodeActor> Condition_CheckActiveBehaviorNode;
    
    UPROPERTY(EditAnywhere)
    USBShowData* ConditionActiveBehaviorNodeShow;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBAIWorldNodeBehaviorIterateShowInfo> BehaviorIterateShowArray;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<AActor>> IgnoreCollisionActorArray;
    
    UPROPERTY(EditAnywhere)
    bool bDisableInteraction;
    
    UPROPERTY(EditAnywhere)
    bool bDisableDistancePooling;
    
    UPROPERTY(EditAnywhere)
    bool bDisableSelfiePose;
    
    UPROPERTY(EditAnywhere)
    FName BehaviorAlias;
    
    UPROPERTY(EditAnywhere)
    FName SpecialBehaviorTag;
    
    UPROPERTY(EditAnywhere)
    float OverrideStopMoveDistanceWithPlayer;
    
    UPROPERTY(EditAnywhere)
    float OverrideStopMoveAngleWithPlayer;
    
    UPROPERTY(EditAnywhere)
    ESBMetaAILookAtType OverrideLookAtType;
    
    UPROPERTY(EditAnywhere)
    float OverrideLookAtYawAngle;
    
    UPROPERTY(EditAnywhere)
    float OverrideLookAtPitchAngle;
    
    UPROPERTY(EditAnywhere)
    float OverrideLookAtOnceTime;
    
    UPROPERTY(EditAnywhere)
    float OverrideLookAtCooltime;
    
    UPROPERTY(EditAnywhere)
    float OverrideLookAtDistance;
    
    UPROPERTY(EditAnywhere)
    float LookAtZOffset;
    
    UPROPERTY(EditAnywhere)
    float OverrideLookAtStopDistance;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> OverrideEnableShoulderCharge;
    
    UPROPERTY(EditAnywhere)
    TArray<TWeakObjectPtr<ASBAIWorldNodeActor>> NextBehaviorNodeArray;
    
    UPROPERTY(EditAnywhere)
    bool bBehaviorForceInvite;
    
    UPROPERTY(EditAnywhere)
    float BehaviorForceInviteDistance;
    
    UPROPERTY(EditAnywhere)
    float BehaviorLocationSnapDistance;
    
    UPROPERTY(EditAnywhere)
    float BehaviorKeepDistanceWhenArrived;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<ASBAIWorldNodeActor> NextSubBehaviorNode;
    
    UPROPERTY(EditAnywhere)
    USBShowData* SubBehaviorArriveShow;
    
    UPROPERTY(EditAnywhere)
    USBShowData* SubBehaviorLeaveShow;
    
    UPROPERTY(EditAnywhere)
    float SubBehaviorRemainTime;
    
    UPROPERTY(EditAnywhere)
    int32 ShowOtherActorIndex;
    
    ASBAIWorldNodeActor(const FObjectInitializer& ObjectInitializer);

};

