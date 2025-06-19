#include "SBMetaAITableProperty.h"

FSBMetaAITableProperty::FSBMetaAITableProperty() {
    this->ID = 0;
    this->Job = ESBJob::None;
    this->bKeepNodeGroupIndex = false;
    this->bEnableCollisionOverlap = false;
    this->MoveAroundIntervalTime = 0.00f;
    this->MoveAroundProbability = 0.00f;
    this->bUseOnlyTagNode = false;
    this->bLookAtOnly = false;
    this->LookAtType = ESBMetaAILookAtType::None;
    this->LookAtYawAngle = 0.00f;
    this->LookAtPitchAngle = 0.00f;
    this->LookAtOnceTime = 0.00f;
    this->LookAtCooltime = 0.00f;
    this->LookAtDistance = 0.00f;
    this->LookAtStopDistance = 0.00f;
    this->StopMoveDistanceWithPlayer = 0.00f;
    this->StopMoveAngleWithPlayer = 0.00f;
    this->StopMoveOnceTime = 0.00f;
    this->StopMoveCoolTime = 0.00f;
    this->bEnableShoulderCharge = false;
    this->MoveAroundCustomBehaviorCheckTime = 0.00f;
    this->MoveAroundCustomBehaviorActivationRate = 0.00f;
    this->MoveAroundCustomBehavior1_ActivationRate = 0.00f;
    this->MoveAroundCustomBehavior2_ActivationRate = 0.00f;
    this->MoveAroundCustomBehavior3_ActivationRate = 0.00f;
    this->MoveAroundCustomBehavior4_ActivationRate = 0.00f;
    this->MoveAroundCustomBehavior5_ActivationRate = 0.00f;
    this->bInitZeroTiredness = false;
}

