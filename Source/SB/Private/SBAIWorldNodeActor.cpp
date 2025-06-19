#include "SBAIWorldNodeActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TextRenderComponent.h"
#include "SBAIWorldNodeComponent.h"

ASBAIWorldNodeActor::ASBAIWorldNodeActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnlyActor = true;
    this->RootComponent = CreateDefaultSubobject<USBAIWorldNodeComponent>(TEXT("SBAIWorldNodeComponent0"));
    this->ActorRootComponent = (USBAIWorldNodeComponent*)RootComponent;
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0"));
    this->TextRenderComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextRenderComponent0"));
    this->NodeType = ESBAIWorldNodeType::Road;
    this->NodeIndex = -1;
    this->RoadWidth = 50.00f;
    this->RoadArriveBounds = 100.00f;
    this->Behavior = ESBMetaAIBehavior::None;
    this->BehaviorStance = ESBMetaAIBehaviorStance::Default;
    this->BehaviorActivityMinActorCount = 0;
    this->BehaviorActivityWatingTime = 0.00f;
    this->BehaviorRemainTime = 5.00f;
    this->BehaviorInfinity = false;
    this->bDisablePawnCollisionWhenPlayArriveShow = false;
    this->bDisablePawnCollisionWhenPlayLeaveShow = false;
    this->BehaviorArriveShow = NULL;
    this->BehaviorLeaveShow = NULL;
    this->BehaviorIdleShowMinTime = 0.00f;
    this->BehaviorIdleShowMaxTime = 0.00f;
    this->BehaviorRunBlendSpaceBlendInTime = 0.30f;
    this->BehaviorRunBlendSpaceBlendOutTime = 0.30f;
    this->BehaviorRunBlendSpaceSetDelayTime = 0.50f;
    this->BehaviorNodeCoolTime = 0.00f;
    this->ConditionActiveBehaviorNodeShow = NULL;
    this->bDisableInteraction = false;
    this->bDisableDistancePooling = false;
    this->bDisableSelfiePose = false;
    this->OverrideStopMoveDistanceWithPlayer = -1.00f;
    this->OverrideStopMoveAngleWithPlayer = -1.00f;
    this->OverrideLookAtType = ESBMetaAILookAtType::None;
    this->OverrideLookAtYawAngle = -1.00f;
    this->OverrideLookAtPitchAngle = -1.00f;
    this->OverrideLookAtOnceTime = -1.00f;
    this->OverrideLookAtCooltime = -1.00f;
    this->OverrideLookAtDistance = -1.00f;
    this->LookAtZOffset = 0.00f;
    this->OverrideLookAtStopDistance = -1.00f;
    this->OverrideEnableShoulderCharge = ConditionCheckType_None;
    this->bBehaviorForceInvite = false;
    this->BehaviorForceInviteDistance = 0.00f;
    this->BehaviorLocationSnapDistance = 50.00f;
    this->BehaviorKeepDistanceWhenArrived = 300.00f;
    this->SubBehaviorArriveShow = NULL;
    this->SubBehaviorLeaveShow = NULL;
    this->SubBehaviorRemainTime = 0.00f;
    this->ShowOtherActorIndex = -1;
    this->StaticMeshComponent->SetupAttachment(RootComponent);
    this->TextRenderComponent->SetupAttachment(RootComponent);
}


