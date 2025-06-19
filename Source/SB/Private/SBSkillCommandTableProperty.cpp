#include "SBSkillCommandTableProperty.h"

FSBSkillCommandTableProperty::FSBSkillCommandTableProperty() {
    this->ID = 0;
    this->CommandActionType = SkillCommandAction_Skill;
    this->Priority = 0;
    this->CombinationKey1CheckType = ConditionCheckType_None;
    this->CombinationKey2CheckType = ConditionCheckType_None;
    this->CombinationCrossUpCheckType = ConditionCheckType_None;
    this->CombinationCrossDownCheckType = ConditionCheckType_None;
    this->CombinationCrossLeftCheckType = ConditionCheckType_None;
    this->CombinationCrossRightCheckType = ConditionCheckType_None;
    this->Command = SkillCommandState_None;
    this->PressCheckCommand = SkillCommandState_None;
    this->HitResult = SkillHitResult_None;
    this->HitResultTime = 0.00f;
    this->JustActiveTime = 0.00f;
    this->InputTime = 0.00f;
    this->InputDuration = 0.00f;
    this->ActorState = ActorState_None;
    this->WeaponType = EquipmentSubType_None;
    this->bJumping = ConditionCheckType_None;
    this->bWallRun = ConditionCheckType_None;
    this->bSprint = ConditionCheckType_None;
    this->bRun = ConditionCheckType_None;
    this->bLockOn = ConditionCheckType_None;
    this->bFly = ConditionCheckType_None;
    this->bSwimming = ConditionCheckType_None;
    this->bUWSwimming = ConditionCheckType_None;
    this->bFirstSwimming = ConditionCheckType_None;
    this->bEventMoving = ConditionCheckType_None;
    this->bInBreakfallRange = ConditionCheckType_None;
    this->bTachyGaugeMax = ConditionCheckType_None;
    this->InputType = SkillCommandInputType_Press;
    this->bCheckTargetFilter = false;
    this->bPressInputTypeWhenNoOtherCommand = false;
    this->GlobalCommand = false;
    this->bCheckSameSkillActivation = false;
    this->bCheckInputDirectionWhenHold = false;
    this->bCheckInputDirectionAngle = false;
    this->bInputDirectionByActorLocalAxis = false;
    this->MinInputDirectionAngle = 0.00f;
    this->MaxInputDirectionAngle = 0.00f;
    this->HoldDuration = 0.00f;
    this->AICommandActivationRate = 0;
    this->ReqEnergyType = SkillEnergyType_None;
    this->ReqEnergyAmount = 0.00f;
    this->bDisableReservation = false;
    this->bBlockJumpAction = false;
    this->bIgnoreLastUsedHoldSkill = false;
    this->bRemainToggleSprint = false;
    this->DualSenseCheckType = ConditionCheckType_None;
    this->bForceRootTrainingRoomLog = false;
    this->bForceComboTrainingRoomLog = false;
    this->DiableLockOnTargetFrameCount = 0;
}

