#pragma once
#include "CoreMinimal.h"
#include "ESBActorState.h"
#include "ESBConditionCheckType.h"
#include "ESBDualSenseTriggerEffectState.h"
#include "ESBEquipmentSubType.h"
#include "ESBSkillCommandActionType.h"
#include "ESBSkillCommandInputType.h"
#include "ESBSkillCommandState.h"
#include "ESBSkillEnergyType.h"
#include "ESBSkillHitResult.h"
#include "SBTablePropertyBase.h"
#include "SBSkillCommandTableProperty.generated.h"

USTRUCT()
struct FSBSkillCommandTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkillCommandActionType> CommandActionType;
    
    UPROPERTY(EditAnywhere)
    FName SkillAlias;
    
    UPROPERTY(EditAnywhere)
    FName SkillPriorityAlias;
    
    UPROPERTY(EditAnywhere)
    int32 Priority;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> CombinationKey1CheckType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> CombinationKey2CheckType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> CombinationCrossUpCheckType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> CombinationCrossDownCheckType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> CombinationCrossLeftCheckType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> CombinationCrossRightCheckType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkillCommandState> Command;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkillCommandState> PressCheckCommand;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkillHitResult> HitResult;
    
    UPROPERTY(EditAnywhere)
    float HitResultTime;
    
    UPROPERTY(EditAnywhere)
    float JustActiveTime;
    
    UPROPERTY(EditAnywhere)
    float InputTime;
    
    UPROPERTY(EditAnywhere)
    float InputDuration;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorState> ActorState;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEquipmentSubType> WeaponType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> bJumping;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> bWallRun;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> bSprint;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> bRun;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> bLockOn;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> bFly;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> bSwimming;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> bUWSwimming;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> bFirstSwimming;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> bEventMoving;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> bInBreakfallRange;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> bTachyGaugeMax;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> CheckActiveEffectAliasArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> CheckActiveNoneEffectAliasArray;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkillCommandInputType> InputType;
    
    UPROPERTY(EditAnywhere)
    FName Stance;
    
    UPROPERTY(EditAnywhere)
    FName BulletItemAlias;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> NextComboCommandArray;
    
    UPROPERTY(EditAnywhere)
    bool bCheckTargetFilter;
    
    UPROPERTY(EditAnywhere)
    bool bPressInputTypeWhenNoOtherCommand;
    
    UPROPERTY(EditAnywhere)
    bool GlobalCommand;
    
    UPROPERTY(EditAnywhere)
    bool bCheckSameSkillActivation;
    
    UPROPERTY(EditAnywhere)
    bool bCheckInputDirectionWhenHold;
    
    UPROPERTY(EditAnywhere)
    bool bCheckInputDirectionAngle;
    
    UPROPERTY(EditAnywhere)
    bool bInputDirectionByActorLocalAxis;
    
    UPROPERTY(EditAnywhere)
    float MinInputDirectionAngle;
    
    UPROPERTY(EditAnywhere)
    float MaxInputDirectionAngle;
    
    UPROPERTY(EditAnywhere)
    float HoldDuration;
    
    UPROPERTY(EditAnywhere)
    int32 AICommandActivationRate;
    
    UPROPERTY(EditAnywhere)
    FString TargetShowPath;
    
    UPROPERTY(EditAnywhere)
    FName CommandUIImage;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkillEnergyType> ReqEnergyType;
    
    UPROPERTY(EditAnywhere)
    float ReqEnergyAmount;
    
    UPROPERTY(EditAnywhere)
    bool bDisableReservation;
    
    UPROPERTY(EditAnywhere)
    bool bBlockJumpAction;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreLastUsedHoldSkill;
    
    UPROPERTY(EditAnywhere)
    bool bRemainToggleSprint;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> DualSenseCheckType;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<ESBDualSenseTriggerEffectState>> DualSenseTriggerEffectStateConditions;
    
    UPROPERTY(EditAnywhere)
    bool bForceRootTrainingRoomLog;
    
    UPROPERTY(EditAnywhere)
    bool bForceComboTrainingRoomLog;
    
    UPROPERTY(EditAnywhere)
    int32 DiableLockOnTargetFrameCount;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBSkillCommandTableProperty();
};

