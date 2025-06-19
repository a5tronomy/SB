#pragma once
#include "CoreMinimal.h"
#include "ESBActorType.h"
#include "ESBActorWeightType.h"
#include "ESBEquipType.h"
#include "ESBItemBucketType.h"
#include "ESBItemOverrideSaveType.h"
#include "ESBScanDisplayType.h"
#include "SBJsonEffect.h"
#include "SBTablePropertyBase.h"
#include "SBCharacterTableProperty.generated.h"

USTRUCT()
struct FSBCharacterTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName Rank;
    
    UPROPERTY(EditAnywhere)
    FString Type;
    
    UPROPERTY(EditAnywhere)
    FName Tribe;
    
    UPROPERTY(EditAnywhere)
    FName OverrideTribe;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ConditionList_OverrideTribe;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> Tags;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> LinkSkillRandomActiveStepFlagArray;
    
    UPROPERTY(EditAnywhere)
    FName Flag;
    
    UPROPERTY(EditAnywhere)
    int32 MaxHP;
    
    UPROPERTY(EditAnywhere)
    int32 MaxShield;
    
    UPROPERTY(EditAnywhere)
    int32 MaxStamina;
    
    UPROPERTY(EditAnywhere)
    float PhysicAttackPower;
    
    UPROPERTY(EditAnywhere)
    float RangeAttackPower;
    
    UPROPERTY(EditAnywhere)
    float ShieldAttackPower;
    
    UPROPERTY(EditAnywhere)
    float StaminaAttackPower;
    
    UPROPERTY(EditAnywhere)
    float ShieldBlock;
    
    UPROPERTY(EditAnywhere)
    float BaseDamageReductionByShield;
    
    UPROPERTY(EditAnywhere)
    float DamageReductionPerShieldBock;
    
    UPROPERTY(EditAnywhere)
    float ShieldRegenPerSecond;
    
    UPROPERTY(EditAnywhere)
    float ShieldRegenPerSecondWhenBattle;
    
    UPROPERTY(EditAnywhere)
    float StaminaRegenPerSecond;
    
    UPROPERTY(EditAnywhere)
    float HPRegenPerSecond;
    
    UPROPERTY(EditAnywhere)
    int32 BetaGauge;
    
    UPROPERTY(EditAnywhere)
    int32 MaxBetaGauge;
    
    UPROPERTY(EditAnywhere)
    int32 BurstGauge;
    
    UPROPERTY(EditAnywhere)
    int32 MaxBurstGauge;
    
    UPROPERTY(EditAnywhere)
    int32 MaxTachyGauge;
    
    UPROPERTY(EditAnywhere)
    int32 UnlockBurstGauge;
    
    UPROPERTY(EditAnywhere)
    int32 UnlockTachyGauge;
    
    UPROPERTY(EditAnywhere)
    int32 UnlockTPSMode;
    
    UPROPERTY(EditAnywhere)
    int32 GainTachyGaugeOnDead;
    
    UPROPERTY(EditAnywhere)
    int32 MoveSpeed;
    
    UPROPERTY(EditAnywhere)
    float AttackSpeed;
    
    UPROPERTY(EditAnywhere)
    float CriticalPercentage;
    
    UPROPERTY(EditAnywhere)
    float CriticalValueRate;
    
    UPROPERTY(EditAnywhere)
    float ShieldIgnorePercentage;
    
    UPROPERTY(EditAnywhere)
    float SmallWeightTypeDamageAdditiveRate;
    
    UPROPERTY(EditAnywhere)
    float LargeWeightTypeDamageAdditiveRate;
    
    UPROPERTY(EditAnywhere)
    float RangeAttackDamageAdditiveRate;
    
    UPROPERTY(EditAnywhere)
    float MeleeAttackDamageReductionRate;
    
    UPROPERTY(EditAnywhere)
    float RangeAttackDamageReductionRate;
    
    UPROPERTY(EditAnywhere)
    float DownStateDamageAdditiveRate;
    
    UPROPERTY(EditAnywhere)
    float GroggyStateDamageAdditiveRate;
    
    UPROPERTY(EditAnywhere)
    float AirborneStateDamageAdditiveRate;
    
    UPROPERTY(EditAnywhere)
    float FireAttributeDamageReductionRate;
    
    UPROPERTY(EditAnywhere)
    float IceAttributeDamageReductionRate;
    
    UPROPERTY(EditAnywhere)
    float LightningAttributeDamageReductionRate;
    
    UPROPERTY(EditAnywhere)
    float PoisonAttributeDamageReductionRate;
    
    UPROPERTY(EditAnywhere)
    float AdditiveFixedDamage;
    
    UPROPERTY(EditAnywhere)
    float LowHpDamageAdditiveRate;
    
    UPROPERTY(EditAnywhere)
    float HighHpDamageAdditiveRate;
    
    UPROPERTY(EditAnywhere)
    float DOTDamageAdditiveRate;
    
    UPROPERTY(EditAnywhere)
    float FinalHPDamageReduceRate;
    
    UPROPERTY(EditAnywhere)
    float FinalShieldDamageReduceRate;
    
    UPROPERTY(EditAnywhere)
    float BetaGaugeAdditiveRate;
    
    UPROPERTY(EditAnywhere)
    float Luck;
    
    UPROPERTY(EditAnywhere)
    float DrainHpByAttackPowerRate;
    
    UPROPERTY(EditAnywhere)
    float DrainHpFixedValue;
    
    UPROPERTY(EditAnywhere)
    float SprintableStaminaValue;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EffectAliasWhenZeroHPArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EffectAliasWhenZeroShieldArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EffectAliasWhenZeroStaminaArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EffectAliasByRageSkillArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EffectAliasBy1ComboSkillArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EffectAliasBy2ComboSkillArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EffectAliasBy3ComboSkillArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EffectAliasBy4ComboSkillArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EffectAliasBy5ComboSkillArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EffectAliasByCriticalHitArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EffectAliasToTargetByCriticalHitArray;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorWeightType> WeightType;
    
    UPROPERTY(EditAnywhere)
    float MeshScale;
    
    UPROPERTY(EditAnywhere)
    float TargetFilterRadius;
    
    UPROPERTY(EditAnywhere)
    float ProjectileTargetFilterRadius;
    
    UPROPERTY(EditAnywhere)
    float RuleMoveBlockAreaRadius;
    
    UPROPERTY(EditAnywhere)
    float RuleMoveBlockAreaZHeight;
    
    UPROPERTY(EditAnywhere)
    float RuleMoveBlockAreaOffsetX;
    
    UPROPERTY(EditAnywhere)
    float RuleMoveBlockAreaOffsetY;
    
    UPROPERTY(EditAnywhere)
    float RuleMoveBlockAreaOffsetZ;
    
    UPROPERTY(EditAnywhere)
    float RuleMoveBlockCheckRadius;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> DefaultEffectArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EffectAliasByPlayerCount2;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EffectAliasByPlayerCount3;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EffectAliasByPlayerCount4;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EffectAliasArrayForStoryMode;
    
    UPROPERTY(EditAnywhere)
    FName DifficultyStatGroupAlias;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> DefaultEquipmentAliasArray;
    
    UPROPERTY()
    FString AttackerEffectWhenDead;
    
    UPROPERTY(EditAnywhere)
    FName DeadAlias;
    
    UPROPERTY(EditAnywhere)
    float DespawnTimeAfterDeath;
    
    UPROPERTY(EditAnywhere)
    FString DespawnShow;
    
    UPROPERTY(EditAnywhere)
    FString SpawnShow;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> SpawnEffectList;
    
    UPROPERTY(EditAnywhere)
    FString MonsterWarpShow;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> MonsterWarpEffectList;
    
    UPROPERTY(EditAnywhere)
    FName CollisionGroupName1;
    
    UPROPERTY(EditAnywhere)
    float CollisionGroupGauge1;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EffectAliasArrayWhenCollisionGroupGaugeZero1;
    
    UPROPERTY(EditAnywhere)
    FName CollisionGroupName2;
    
    UPROPERTY(EditAnywhere)
    float CollisionGroupGauge2;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EffectAliasArrayWhenCollisionGroupGaugeZero2;
    
    UPROPERTY(EditAnywhere)
    FName CollisionGroupName3;
    
    UPROPERTY(EditAnywhere)
    float CollisionGroupGauge3;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EffectAliasArrayWhenCollisionGroupGaugeZero3;
    
    UPROPERTY(EditAnywhere)
    FName CollisionGroupName4;
    
    UPROPERTY(EditAnywhere)
    float CollisionGroupGauge4;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EffectAliasArrayWhenCollisionGroupGaugeZero4;
    
    UPROPERTY(EditAnywhere)
    FName CollisionGroupName5;
    
    UPROPERTY(EditAnywhere)
    float CollisionGroupGauge5;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EffectAliasArrayWhenCollisionGroupGaugeZero5;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> StanceAliasArray;
    
    UPROPERTY(EditAnywhere)
    FName DefaultStanceAlias;
    
    UPROPERTY(EditAnywhere)
    float GetupTime;
    
    UPROPERTY(EditAnywhere)
    FName GetupMoveAlias;
    
    UPROPERTY(EditAnywhere)
    float GroggyEndTime;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> JumpEffectArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> SprintEffectArray;
    
    UPROPERTY(EditAnywhere)
    float VelocityWhenWallHitBounce;
    
    UPROPERTY(EditAnywhere)
    float VelocityDelayWhenWallHitBounce;
    
    UPROPERTY(EditAnywhere)
    FString BehaviorTreeRes;
    
    UPROPERTY(EditAnywhere)
    FName DefaultDetectAIAlias;
    
    UPROPERTY(EditAnywhere)
    FName NarrowDetectAIAlias;
    
    UPROPERTY(EditAnywhere)
    FName DetectViewingSocketName;
    
    UPROPERTY(EditAnywhere)
    float AIAuditorySenseRadius;
    
    UPROPERTY(EditAnywhere)
    float AIAuditorySenseDecibel;
    
    UPROPERTY(EditAnywhere)
    float AIAuditorySenseDuration;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorType> ActorType;
    
    UPROPERTY(EditAnywhere)
    FName RefAppearance;
    
    UPROPERTY(EditAnywhere)
    int32 HitDefenseLevel;
    
    UPROPERTY(EditAnywhere)
    float BackSideHitAngle;
    
    UPROPERTY(EditAnywhere)
    float InteractionRange;
    
    UPROPERTY(EditAnywhere)
    float InteractionAngle;
    
    UPROPERTY(EditAnywhere)
    FString Interaction;
    
    UPROPERTY(EditAnywhere)
    float InteractionUpperHeight;
    
    UPROPERTY(EditAnywhere)
    float InteractionLowerHeight;
    
    UPROPERTY(EditAnywhere)
    FName RewardGroupAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemBucketType> RewardSpawnBucketType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemOverrideSaveType> RewardOverrideSaveType;
    
    UPROPERTY(EditAnywhere)
    FString RewardFormationAssetPath;
    
    UPROPERTY(EditAnywhere)
    bool bDisableCollisionWhenDead;
    
    UPROPERTY(EditAnywhere)
    float DisableCollisionDelayTime;
    
    UPROPERTY(EditAnywhere)
    FString UITextWhenDead;
    
    UPROPERTY(EditAnywhere)
    int32 StackRecoveryPotion;
    
    UPROPERTY(EditAnywhere)
    int32 StackBullet1;
    
    UPROPERTY(EditAnywhere)
    int32 StackBullet2;
    
    UPROPERTY(EditAnywhere)
    int32 StackBullet3;
    
    UPROPERTY(EditAnywhere)
    int32 StackBullet4;
    
    UPROPERTY(EditAnywhere)
    int32 StackBullet5;
    
    UPROPERTY(EditAnywhere)
    int32 StackBullet6;
    
    UPROPERTY(EditAnywhere)
    int32 StackConsumable1;
    
    UPROPERTY(EditAnywhere)
    int32 StackConsumable2;
    
    UPROPERTY(EditAnywhere)
    int32 StackConsumable3;
    
    UPROPERTY(EditAnywhere)
    int32 StackConsumable4;
    
    UPROPERTY(EditAnywhere)
    int32 StackConsumable5;
    
    UPROPERTY(EditAnywhere)
    int32 StackConsumable6;
    
    UPROPERTY(EditAnywhere)
    int32 StackConsumable7;
    
    UPROPERTY(EditAnywhere)
    int32 GearSlotCount;
    
    UPROPERTY(EditAnywhere)
    int32 ExoSpineSlotCount;
    
    UPROPERTY(EditAnywhere)
    float FishingAttackPower;
    
    UPROPERTY(EditAnywhere)
    bool bEncroachmentable;
    
    UPROPERTY(EditAnywhere)
    FName EncroachmentType;
    
    UPROPERTY(EditAnywhere)
    bool bExcludingRuleMoveIgnoreTarget;
    
    UPROPERTY(EditAnywhere)
    FString RelativeShowPath;
    
    UPROPERTY(EditAnywhere)
    float LockOnCameraBoomHeight;
    
    UPROPERTY(EditAnywhere)
    float LockOnCameraBoomLeftRight;
    
    UPROPERTY(EditAnywhere)
    float LockOnCameraBoomLength;
    
    UPROPERTY(EditAnywhere)
    bool bKeepData;
    
    UPROPERTY(EditAnywhere)
    bool bUseDistancePooling;
    
    UPROPERTY(EditAnywhere)
    bool bUseDelayBattleStanceTime;
    
    UPROPERTY(EditAnywhere)
    bool bApplyDamageWhenPlayerAlive;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBScanDisplayType> ScanDisplayType;
    
    UPROPERTY(EditAnywhere)
    FString Name;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEquipType> OverrideEquip;
    
    UPROPERTY(EditAnywhere)
    bool bSequenceCharacter;
    
    UPROPERTY(EditAnywhere)
    FString OverrideCharacterSoundSet;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> AttackerEffectWhenDeadArray;
    
    SB_API FSBCharacterTableProperty();
};

