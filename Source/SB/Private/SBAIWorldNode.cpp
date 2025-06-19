#include "SBAIWorldNode.h"

FSBAIWorldNode::FSBAIWorldNode() {
    this->NodeType = ESBAIWorldNodeType::Road;
    this->RoadWidth = 0.00f;
    this->RoadArriveBounds = 0.00f;
    this->Behavior = ESBMetaAIBehavior::None;
    this->BehaviorStance = ESBMetaAIBehaviorStance::Default;
    this->BehaviorIdleShowMinTime = 0.00f;
    this->BehaviorIdleShowMaxTime = 0.00f;
    this->BehaviorRunBlendSpaceBlendInTime = 0.00f;
    this->BehaviorRunBlendSpaceBlendOutTime = 0.00f;
    this->BehaviorRunBlendSpaceSetDelayTime = 0.00f;
    this->BehaviorRemainTime = 0.00f;
    this->BehaviorInfinity = false;
    this->BehaviorNodeCoolTime = 0.00f;
    this->BehaviorActivityMinActorCount = 0;
    this->BehaviorActivityWatingTime = 0.00f;
    this->Condition_CheckActiveBehaviorNodeIndex = 0;
    this->OverrideStopMoveDistanceWithPlayer = 0.00f;
    this->OverrideStopMoveAngleWithPlayer = 0.00f;
    this->OverrideLookAtType = ESBMetaAILookAtType::None;
    this->OverrideLookAtYawAngle = 0.00f;
    this->OverrideLookAtPitchAngle = 0.00f;
    this->OverrideLookAtOnceTime = 0.00f;
    this->OverrideLookAtCooltime = 0.00f;
    this->OverrideLookAtDistance = 0.00f;
    this->LookAtZOffset = 0.00f;
    this->OverrideLookAtStopDistance = 0.00f;
    this->OverrideEnableShoulderCharge = ConditionCheckType_None;
    this->bBehaviorForceInvite = false;
    this->BehaviorForceInviteDistance = 0.00f;
    this->BehaviorLocationSnapDistance = 0.00f;
    this->BehaviorKeepDistanceWhenArrived = 0.00f;
    this->bDisablePawnCollisionWhenPlayArriveShow = false;
    this->bDisablePawnCollisionWhenPlayLeaveShow = false;
    this->bDisableInteraction = false;
    this->bDisableDistancePooling = false;
    this->bDisableSelfiePose = false;
    this->SubBehaviorRemainTime = 0.00f;
    this->NodeIndex = 0;
    this->GroupIndex = 0;
}

