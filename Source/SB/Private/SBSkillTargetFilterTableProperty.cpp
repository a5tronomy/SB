#include "SBSkillTargetFilterTableProperty.h"

FSBSkillTargetFilterTableProperty::FSBSkillTargetFilterTableProperty() {
    this->ID = 0;
    this->TargetType = Target_None;
    this->bMultipleTargets = false;
    this->bDynamicShapeScale = false;
    this->MinShapeScale = 0.00f;
    this->MaxShapeScale = 0.00f;
    this->NearDistance = 0.00f;
    this->FarDistance = 0.00f;
    this->SortType = ActorSortType_None;
    this->CheckHitStepTimeWhenSortParry = 0.00f;
    this->ShapeForwardDistance = 0.00f;
    this->ShapeRightDistance = 0.00f;
    this->ShapeUpDistance = 0.00f;
    this->TargetCheckShape = CheckShape_None;
    this->TargetCheckValue1 = 0.00f;
    this->TargetCheckValue2 = 0.00f;
    this->TargetCheckValue3 = 0.00f;
    this->ActorState1 = ActorState_None;
    this->ActorState2 = ActorState_None;
    this->ActorState3 = ActorState_None;
    this->ActorState4 = ActorState_None;
    this->ActorState5 = ActorState_None;
    this->NonActorState1 = ActorState_None;
    this->NonActorState2 = ActorState_None;
    this->NonActorState3 = ActorState_None;
    this->NonActorState4 = ActorState_None;
    this->NonActorState5 = ActorState_None;
    this->ActorStat1 = ActorStatType_None;
    this->ActorStatCheck1 = ActorStatCheckType_None;
    this->ActorStatCheckValue1 = 0;
    this->CheckMinAngleToTarget = 0.00f;
    this->CheckMaxAngleToTarget = 0.00f;
    this->bDisableBlockingCheck = false;
    this->bBlockingCheckWithTopLocation = false;
    this->bValidEngineHandle = false;
    this->CheckBattleMode = ConditionCheckType_None;
    this->GroundHeightToTarget = 0.00f;
    this->bSwimming = ConditionCheckType_None;
    this->bEncroachmentable = ConditionCheckType_None;
    this->bDead = ConditionCheckType_None;
    this->bNotSupportedZoneEventActor = false;
}

