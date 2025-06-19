#pragma once
#include "CoreMinimal.h"
#include "ESBActorAction.h"
#include "ESBActorStatType.h"
#include "ESBAttributeType.h"
#include "ESBConditionCheckType.h"
#include "ESBSkillConsumeItemCount.h"
#include "ESBSkillEnergyType.h"
#include "ESBSkillExpansionType.h"
#include "ESBSkillType.h"
#include "SBJsonSkillBranchEffect.h"
#include "SBTablePropertyBase.h"
#include "SBSkillTableProperty.generated.h"

USTRUCT()
struct FSBSkillTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FString Loc_SkillName;
    
    UPROPERTY(EditAnywhere)
    FString Loc_SystemNotice_IsBeingCooltime;
    
    UPROPERTY(EditAnywhere)
    FString Loc_SystemNotice_CannotUse;
    
    UPROPERTY(EditAnywhere)
    FName Flag;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorStatType> AdditiveSkillDamageGroup;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> AchievementTags;
    
    UPROPERTY(EditAnywhere)
    float StartDelay;
    
    UPROPERTY(EditAnywhere)
    int32 StartDelayTick;
    
    UPROPERTY(EditAnywhere)
    int32 HitLevel;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBAttributeType> AttributeType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkillType> SkillType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorAction> ActorAction;
    
    UPROPERTY(EditAnywhere)
    FName EffectSkillFlag;
    
    UPROPERTY(EditAnywhere)
    FName AISkillFlag;
    
    UPROPERTY(EditAnywhere)
    bool bCheckTargetExists;
    
    UPROPERTY(EditAnywhere)
    bool bCheckNoTargeting;
    
    UPROPERTY(EditAnywhere)
    bool bUsableSkillWhenTargetSwimming;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> CheckValidMoveAliasArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> CheckInvalidMoveAliasArray;
    
    UPROPERTY(EditAnywhere)
    bool bCheckActiveStepValidMove;
    
    UPROPERTY(EditAnywhere)
    FName TargetFilterAlias;
    
    UPROPERTY(EditAnywhere)
    FName LockOnOverrideTargetFilterAlias;
    
    UPROPERTY(EditAnywhere)
    FName ZoneEventActorTargetFilterAlias;
    
    UPROPERTY(EditAnywhere)
    float AIAttackableDistance;
    
    UPROPERTY(EditAnywhere)
    bool bBranchActiveStepByTargetFlag;
    
    UPROPERTY(EditAnywhere)
    bool bBranchActiveStepByPrevSkill;
    
    UPROPERTY(EditAnywhere)
    bool bBranchActiveStepByFoot;
    
    UPROPERTY(EditAnywhere)
    bool bBranchActiveStepByActivatingSkill;
    
    UPROPERTY(EditAnywhere)
    bool bBranchActiveStepByBulletItemAlias;
    
    UPROPERTY(EditAnywhere)
    uint32 BranchActiveStepByUsedCount;
    
    UPROPERTY(EditAnywhere)
    bool bBranchActiveStepByCheckConsumeItem;
    
    UPROPERTY(EditAnywhere)
    int32 BranchRandomStep;
    
    UPROPERTY(EditAnywhere)
    bool bBranchLinkSkillRandomStep;
    
    UPROPERTY(EditAnywhere)
    FString FirstActiveStepByEffect;
    
    UPROPERTY(EditAnywhere)
    FName NextSkillBranchStep;
    
    UPROPERTY(EditAnywhere)
    FName FirstSkillActiveAlias;
    
    UPROPERTY(EditAnywhere)
    float JustActionTime;
    
    UPROPERTY(EditAnywhere)
    float JustActionTime_StoryMode;
    
    UPROPERTY(EditAnywhere)
    FName JustSkillActiveAlias;
    
    UPROPERTY(EditAnywhere)
    float ConditionJustAction_MoveDirectionToTargetAngle;
    
    UPROPERTY(EditAnywhere)
    FName UseableCheckGroup;
    
    UPROPERTY(EditAnywhere)
    float CoolTime;
    
    UPROPERTY(EditAnywhere)
    int32 UsableCount;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkillEnergyType> UseEnergyType;
    
    UPROPERTY(EditAnywhere)
    float UseEnergyAmount;
    
    UPROPERTY(EditAnywhere)
    FName ConsumeItemAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkillConsumeItemCount> ConsumeItemCountType;
    
    UPROPERTY(EditAnywhere)
    float AttackDamageRate;
    
    UPROPERTY(EditAnywhere)
    float ShieldAttackDamageRate;
    
    UPROPERTY(EditAnywhere)
    float FixedDamage;
    
    UPROPERTY(EditAnywhere)
    bool Cancelable;
    
    UPROPERTY(EditAnywhere)
    bool ActiveSkillWhileCutoff;
    
    UPROPERTY(EditAnywhere)
    FName TargetDeadAnimBS;
    
    UPROPERTY(EditAnywhere)
    FName TargetDeadType;
    
    UPROPERTY(EditAnywhere)
    FString WorldObjectHitShow;
    
    UPROPERTY(EditAnywhere)
    bool RotateInputDirection;
    
    UPROPERTY(EditAnywhere)
    bool RotateInputDirectionIgnoreLockOn;
    
    UPROPERTY(EditAnywhere)
    bool bSwitchBattleMode;
    
    UPROPERTY(EditAnywhere)
    bool bUnlockOn;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreBlockSkill;
    
    UPROPERTY(EditAnywhere)
    bool bDelayAutoLockOn;
    
    UPROPERTY(EditAnywhere)
    bool bDisableWorldCustomTimeScale;
    
    UPROPERTY(EditAnywhere)
    bool bDisableSkillShowStepWhenStandalone;
    
    UPROPERTY(EditAnywhere)
    bool bDisableEventMove;
    
    UPROPERTY(EditAnywhere)
    bool bDisableStopWhenAttachedLevelSeq;
    
    UPROPERTY(EditAnywhere)
    FName AcquisitionSkillAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> ConditionEnd_Swimming;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> ConditionEnd_UWSwimming;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> ConditionEnd_MeleeCombat;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> ConditionEnd_RangedCombat;
    
    UPROPERTY(EditAnywhere)
    bool ConditionEnd_bTargetDead;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreAttackSpeedStat;
    
    UPROPERTY(EditAnywhere)
    bool bStopCloaking;
    
    UPROPERTY(EditAnywhere)
    FName ExpansionFromAcquisitionAlias1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkillExpansionType> ExpansionType1;
    
    UPROPERTY(EditAnywhere)
    FString ExpansionValue1;
    
    UPROPERTY(EditAnywhere)
    FName ExpansionFromAcquisitionAlias2;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkillExpansionType> ExpansionType2;
    
    UPROPERTY(EditAnywhere)
    FString ExpansionValue2;
    
    UPROPERTY(EditAnywhere)
    FName ExpansionFromAcquisitionAlias3;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkillExpansionType> ExpansionType3;
    
    UPROPERTY(EditAnywhere)
    FString ExpansionValue3;
    
    UPROPERTY(EditAnywhere)
    FName ExpansionFromAcquisitionAlias4;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkillExpansionType> ExpansionType4;
    
    UPROPERTY(EditAnywhere)
    FString ExpansionValue4;
    
    UPROPERTY(EditAnywhere)
    FName ExpansionFromAcquisitionAlias5;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkillExpansionType> ExpansionType5;
    
    UPROPERTY(EditAnywhere)
    FString ExpansionValue5;
    
    UPROPERTY(EditAnywhere)
    FName ExpansionFromAcquisitionAlias6;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkillExpansionType> ExpansionType6;
    
    UPROPERTY(EditAnywhere)
    FString ExpansionValue6;
    
    UPROPERTY(EditAnywhere)
    FName ExpansionFromAcquisitionAlias7;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkillExpansionType> ExpansionType7;
    
    UPROPERTY(EditAnywhere)
    FString ExpansionValue7;
    
    UPROPERTY(EditAnywhere)
    FName ExpansionFromAcquisitionAlias8;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkillExpansionType> ExpansionType8;
    
    UPROPERTY(EditAnywhere)
    FString ExpansionValue8;
    
    UPROPERTY(EditAnywhere)
    FName ExpansionFromAcquisitionAlias9;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkillExpansionType> ExpansionType9;
    
    UPROPERTY(EditAnywhere)
    FString ExpansionValue9;
    
    UPROPERTY(EditAnywhere)
    FName ExpansionFromAcquisitionAlias10;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkillExpansionType> ExpansionType10;
    
    UPROPERTY(EditAnywhere)
    FString ExpansionValue10;
    
    UPROPERTY(EditAnywhere)
    bool bApplyOffScreenIndicator;
    
    UPROPERTY(EditAnywhere)
    FString AimLockOnTargetVibrationSetPath;
    
    UPROPERTY(EditAnywhere)
    FString TrainingRoomLogStringKey;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonSkillBranchEffect> FirstActiveStepByEffectArray;
    
    SB_API FSBSkillTableProperty();
};

