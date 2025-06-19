#pragma once
#include "CoreMinimal.h"
#include "ESBDualSenseTriggerEffect.h"
#include "ESBElementType.h"
#include "ESBSkillActiveStepType.h"
#include "ESBSkillActiveStepUIEvent.h"
#include "ESBSkillAttackDirection.h"
#include "ESBSkillHitDetectionType.h"
#include "ESBSkillProjectileTargetType.h"
#include "ESBSkillTargetDetectionType.h"
#include "ESBUIChargingVisibleType.h"
#include "SBJsonCollisionGroup.h"
#include "SBJsonEffect.h"
#include "SBJsonNextStepCheckEffect.h"
#include "SBJsonSkillStepEndCondition.h"
#include "SBTablePropertyBase.h"
#include "SBSkillActiveStepTableProperty.generated.h"

USTRUCT()
struct FSBSkillActiveStepTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkillActiveStepType> Type;
    
    UPROPERTY(EditAnywhere)
    float Duration;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkillAttackDirection> AttackDirection;
    
    UPROPERTY(EditAnywhere)
    float SkillAttackDamageRate;
    
    UPROPERTY(EditAnywhere)
    float SkillShieldAttackDamageRate;
    
    UPROPERTY(EditAnywhere)
    float SkillFixedDamageRate;
    
    UPROPERTY(EditAnywhere)
    bool AvailableParry;
    
    UPROPERTY(EditAnywhere)
    bool AvailableSuperParry;
    
    UPROPERTY(EditAnywhere)
    bool AvailableGuard;
    
    UPROPERTY(EditAnywhere)
    bool AvailableJustParry;
    
    UPROPERTY(EditAnywhere)
    bool AvailableJustAction;
    
    UPROPERTY(EditAnywhere)
    bool AvailableJustGuard;
    
    UPROPERTY(EditAnywhere)
    FName NextStepAlias;
    
    UPROPERTY(EditAnywhere)
    FName NextStepAliasWhenParry;
    
    UPROPERTY(EditAnywhere)
    FName NextStepAliasWhenJustParry;
    
    UPROPERTY(EditAnywhere)
    FName NextStepAliasWhenPerfectParry;
    
    UPROPERTY(EditAnywhere)
    FName NextStepAliasWhenSuperParry;
    
    UPROPERTY(EditAnywhere)
    FName NextStepAliasWhenGuard;
    
    UPROPERTY(EditAnywhere)
    FName NextStepAliasWhenBreakGuard;
    
    UPROPERTY(EditAnywhere)
    FName NextStepAliasWhenCancel;
    
    UPROPERTY(EditAnywhere)
    FName NextStepAliasWhenHit;
    
    UPROPERTY(EditAnywhere)
    FName NextStepAliasWhenPerfectHit;
    
    UPROPERTY(EditAnywhere)
    FName NextStepAliasWhenHoldRelease;
    
    UPROPERTY(EditAnywhere)
    FName NextStepAliasWhenHoldAndDualSenseTriggerEffectWeaponFired;
    
    UPROPERTY(EditAnywhere)
    FName NextStepAliasWhenAttacked;
    
    UPROPERTY(EditAnywhere)
    FName NextStepAliasWhenNoTarget;
    
    UPROPERTY(EditAnywhere)
    FName NextStepAliasWhenLinkBreak;
    
    UPROPERTY(EditAnywhere)
    FName NextStepAliasWhenInvalidItemConsume;
    
    UPROPERTY(EditAnywhere)
    FString NextStepCheckEffectArray;
    
    UPROPERTY(EditAnywhere)
    float ResultInterval;
    
    UPROPERTY(EditAnywhere)
    FName SkillResultAlias;
    
    UPROPERTY(EditAnywhere)
    FName SkillResultAliasWhenParry;
    
    UPROPERTY(EditAnywhere)
    FName SkillResultAliasWhenJustParry;
    
    UPROPERTY(EditAnywhere)
    FName SkillResultAliasWhenPerfectParry;
    
    UPROPERTY(EditAnywhere)
    FName SkillResultAliasWhenSuperParry;
    
    UPROPERTY(EditAnywhere)
    FName SkillResultAliasWhenGuard;
    
    UPROPERTY(EditAnywhere)
    FName SkillResultAliasWhenBreakGuard;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBElementType> SkillResultElementType;
    
    UPROPERTY(EditAnywhere)
    float SkillResultElementAmount;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreAttackSpeedStat;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreNoDamageState;
    
    UPROPERTY()
    FString StartSelfEffect;
    
    UPROPERTY()
    FString StartTargetEffect;
    
    UPROPERTY(EditAnywhere)
    bool StopSelfMove;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> SelfMoveAliasArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> TargetMoveAliasArray;
    
    UPROPERTY(EditAnywhere)
    FName PeacefulShowPath;
    
    UPROPERTY(EditAnywhere)
    FName ShowPath;
    
    UPROPERTY(EditAnywhere)
    bool bShowWithCasterDrone;
    
    UPROPERTY(EditAnywhere)
    FName TargetShowPath;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkillProjectileTargetType> UsableNonTargetProjectileTargetType;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> UsableNonTargetProjectileAliasArray;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkillProjectileTargetType> UsableTargetProjectileTargetType;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> UsableTargetProjectileAliasArray;
    
    UPROPERTY(EditAnywhere)
    float UsableProjectileConsecutiveDelay;
    
    UPROPERTY(EditAnywhere)
    bool bEveryFrameHitCheck;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkillHitDetectionType> HitDetectionType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkillTargetDetectionType> TargetDetectionType;
    
    UPROPERTY(EditAnywhere)
    int32 AimLockOnTargetMaxCount;
    
    UPROPERTY(EditAnywhere)
    int32 AimLockOnTargetOverlapCount;
    
    UPROPERTY(EditAnywhere)
    bool bRetargeting;
    
    UPROPERTY(EditAnywhere)
    FName OverrideTargetFilterAlias;
    
    UPROPERTY()
    FString AttackCollisionGroupArray;
    
    UPROPERTY(EditAnywhere)
    FString AttackedCollisionGroupArray;
    
    UPROPERTY(EditAnywhere)
    float BlockingCollisionDelayTime;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> BlockingCollisionArray;
    
    UPROPERTY(EditAnywhere)
    bool bDisableRuleMoveBlockArea;
    
    UPROPERTY(EditAnywhere)
    bool bLookAtTarget;
    
    UPROPERTY(EditAnywhere)
    float LookAtTargetRotationTime;
    
    UPROPERTY(EditAnywhere)
    float LookAtTargetLeftMaxAngle;
    
    UPROPERTY(EditAnywhere)
    float LookAtTargetRightMaxAngle;
    
    UPROPERTY()
    FString CreateEffectSelfPosition;
    
    UPROPERTY()
    FString CreateEffectTargetPosition;
    
    UPROPERTY()
    FString TargetDeadEffect;
    
    UPROPERTY(EditAnywhere)
    bool bCritical;
    
    UPROPERTY(EditAnywhere)
    bool PostStep;
    
    UPROPERTY(EditAnywhere)
    float PostStepDelay;
    
    UPROPERTY(EditAnywhere)
    bool CanCutoff;
    
    UPROPERTY(EditAnywhere)
    bool bStopWhenMoving;
    
    UPROPERTY(EditAnywhere)
    bool bDisableLockOnRotation;
    
    UPROPERTY(EditAnywhere)
    bool bSkipWhenZeroVelocity;
    
    UPROPERTY()
    FString ConditionEnd1;
    
    UPROPERTY()
    FString ConditionEnd2;
    
    UPROPERTY(EditAnywhere)
    float SoundDecibel;
    
    UPROPERTY(EditAnywhere)
    float SoundLife;
    
    UPROPERTY(EditAnywhere)
    bool IgnoreNextComboTime;
    
    UPROPERTY(EditAnywhere)
    bool bKeepResulted;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreHitStop;
    
    UPROPERTY(EditAnywhere)
    float ZoneEventDestructionDelayMinTime;
    
    UPROPERTY(EditAnywhere)
    float ZoneEventDestructionDelayMaxTime;
    
    UPROPERTY(EditAnywhere)
    FName UIActionRequestGroup;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBUIChargingVisibleType> UIChargingVisibleType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkillActiveStepUIEvent> StepUIEvent;
    
    UPROPERTY(EditAnywhere)
    int32 TPS_AimChargingCount;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBDualSenseTriggerEffect> DualSenseTriggerEffect;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> DualSenseTriggerEffectParameters;
    
    UPROPERTY(EditAnywhere)
    bool bReleaseCommandKeyWhenStop;
    
    UPROPERTY(EditAnywhere)
    bool bResetComboTime;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> CheckValidMoveAliasArray;
    
    UPROPERTY(EditAnywhere)
    FString Loc_SystemNotice;
    
    UPROPERTY(EditAnywhere)
    FName TrainingRoomOverrideAcquisitionSkillAlias;
    
    UPROPERTY(EditAnywhere)
    FString TrainingRoomLogStringKey;
    
    UPROPERTY(EditAnywhere)
    bool TrainingRoomForceLearned;
    
    UPROPERTY(EditAnywhere)
    FName ActionAssistTargetFilter;
    
    UPROPERTY(EditAnywhere)
    float ActionAssistCheckDelay;
    
    UPROPERTY(EditAnywhere)
    float ActionAssistActiveTime;
    
    UPROPERTY(EditAnywhere)
    float ActionAssistCollisionPreCheckTime;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> StartSelfEffectArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> StartTargetEffectArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> CreateEffectSelfPositionArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> CreateEffectTargetPositionArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> TargetDeadEffectArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonSkillStepEndCondition> EndConditionArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonCollisionGroup> AttackedCollisionGroupJsonArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonCollisionGroup> AttackCollisionGroupJsonArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonNextStepCheckEffect> NextStepCheckEffectJsonArray;
    
    SB_API FSBSkillActiveStepTableProperty();
};

