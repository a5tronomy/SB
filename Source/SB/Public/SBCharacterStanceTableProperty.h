#pragma once
#include "CoreMinimal.h"
#include "ESBActorCombatType.h"
#include "ESBActorStatCheckType.h"
#include "ESBActorStatType.h"
#include "ESBActorState.h"
#include "ESBBoneBlendType.h"
#include "ESBConditionCheckType.h"
#include "ESBSkillCommandState.h"
#include "SBJsonEffect.h"
#include "SBTablePropertyBase.h"
#include "SBCharacterStanceTableProperty.generated.h"

USTRUCT()
struct FSBCharacterStanceTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    int32 Priority;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorCombatType> CombatType;
    
    UPROPERTY(EditAnywhere)
    bool bGroupAttacker;
    
    UPROPERTY(EditAnywhere)
    bool bDetectCloakingTarget;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBBoneBlendType> BoneBlendType;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> Condition_DestroyCollisionGroupArray;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorStatType> Condition_ActorStat;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorStatCheckType> Condition_ActorStatCheck;
    
    UPROPERTY(EditAnywhere)
    int32 Condition_ActorStatCheckValue;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorState> Condition_DeactiveActorState1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorState> Condition_DeactiveActorState2;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorState> Condition_DeactiveActorState3;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorState> Condition_DeactiveActorState4;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorState> Condition_DeactiveActorState5;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> Condition_BattleMode;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> Condition_Jumping;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> Condition_Swimming;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> Condition_EventMoving;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> Condition_ChildGuideAction;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> Condition_ActiveEffectAliasArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> Condition_NoneEffectAliasArray;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkillCommandState> Condition_PressCommandKey1;
    
    UPROPERTY(EditAnywhere)
    bool bActiveCheck_PressCommandKey1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkillCommandState> Condition_PressCommandKey2;
    
    UPROPERTY(EditAnywhere)
    bool bActiveCheck_PressCommandKey2;
    
    UPROPERTY(EditAnywhere)
    FName Condition_WeaponEquipmentAlias;
    
    UPROPERTY(EditAnywhere)
    FName Condition_SecondaryWeaponEquipmentAlias;
    
    UPROPERTY(EditAnywhere)
    FName Condition_ThirdlyWeaponEquipmentAlias;
    
    UPROPERTY(EditAnywhere)
    FName Condition_FourthlyWeaponEquipmentAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> Condition_MetaAI_TiredState;
    
    UPROPERTY(EditAnywhere)
    bool bInfiniteStance;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> CommandArray;
    
    UPROPERTY(EditAnywhere)
    bool bWallHitPossible;
    
    UPROPERTY(EditAnywhere)
    bool bImpossibleLockOn;
    
    UPROPERTY(EditAnywhere)
    bool bImpossibleAutoLockOn;
    
    UPROPERTY(EditAnywhere)
    bool bDropAttackTarget;
    
    UPROPERTY(EditAnywhere)
    bool bBackStabTarget;
    
    UPROPERTY(EditAnywhere)
    bool bForceFoldingWeapon;
    
    UPROPERTY(EditAnywhere)
    bool bDisableCollision;
    
    UPROPERTY(EditAnywhere)
    bool bDisableGravity;
    
    UPROPERTY(EditAnywhere)
    float WalkSpeed;
    
    UPROPERTY(EditAnywhere)
    float RunSpeed;
    
    UPROPERTY(EditAnywhere)
    float LockOnRunSpeed;
    
    UPROPERTY(EditAnywhere)
    float LockOnWalkSpeed;
    
    UPROPERTY(EditAnywhere)
    float JoggingRunSpeed;
    
    UPROPERTY(EditAnywhere)
    float RotateAnglePerSecond;
    
    UPROPERTY(EditAnywhere)
    float OverrideCustomMovementMaxSpeed;
    
    UPROPERTY(EditAnywhere)
    float WalkSoundDecibel;
    
    UPROPERTY(EditAnywhere)
    float WalkSoundLife;
    
    UPROPERTY(EditAnywhere)
    float WalkSoundPeriod;
    
    UPROPERTY(EditAnywhere)
    float RunSoundDecibel;
    
    UPROPERTY(EditAnywhere)
    float RunSoundLife;
    
    UPROPERTY(EditAnywhere)
    float RunSoundPeriod;
    
    UPROPERTY(EditAnywhere)
    float SprintSoundDecibel;
    
    UPROPERTY(EditAnywhere)
    float SprintSoundLife;
    
    UPROPERTY(EditAnywhere)
    float SprintSoundPeriod;
    
    UPROPERTY(EditAnywhere)
    float JumpSoundDecibel;
    
    UPROPERTY(EditAnywhere)
    float JumpSoundLife;
    
    UPROPERTY(EditAnywhere)
    FString StartShowPathWhenPeaceful;
    
    UPROPERTY(EditAnywhere)
    FString StartShowPathWhenBattle;
    
    UPROPERTY()
    FString StartEffect;
    
    UPROPERTY(EditAnywhere)
    FString EndShowPathWhenPeaceful;
    
    UPROPERTY(EditAnywhere)
    FString EndShowPathWhenBattle;
    
    UPROPERTY()
    FString EndEffect;
    
    UPROPERTY(EditAnywhere)
    FName AnimSet_Peaceful_UpperBody;
    
    UPROPERTY(EditAnywhere)
    FName AnimSet_Peaceful_LowerBody;
    
    UPROPERTY(EditAnywhere)
    FName AnimSet_Battle_UpperBody;
    
    UPROPERTY(EditAnywhere)
    FName AnimSet_Battle_LowerBody;
    
    UPROPERTY(EditAnywhere)
    FName AnimSet_Groggy_UpperBody;
    
    UPROPERTY(EditAnywhere)
    FName AnimSet_Groggy_LowerBody;
    
    UPROPERTY(EditAnywhere)
    FName AnimSet_Down_UpperBody;
    
    UPROPERTY(EditAnywhere)
    FName AnimSet_Down_LowerBody;
    
    UPROPERTY(EditAnywhere)
    FName AnimSet_Dead_UpperBody;
    
    UPROPERTY(EditAnywhere)
    FName AnimSet_Dead_LowerBody;
    
    UPROPERTY(EditAnywhere)
    FName AnimSet_Airborne_UpperBody;
    
    UPROPERTY(EditAnywhere)
    FName AnimSet_Airborne_LowerBody;
    
    UPROPERTY(EditAnywhere)
    bool bDisableMovingTransit;
    
    UPROPERTY(EditAnywhere)
    bool bDisableIdleAdditiveAnimWhenPeaceful;
    
    UPROPERTY(EditAnywhere)
    bool bDisableIdleAdditiveAnimWhenBattle;
    
    UPROPERTY(EditAnywhere)
    FString OverridePhysicsAsset;
    
    UPROPERTY(EditAnywhere)
    FName DeadSkillAlias;
    
    UPROPERTY(EditAnywhere)
    float DeadSkillPercentage;
    
    UPROPERTY(EditAnywhere)
    FName DeadSkillSelfDeadType;
    
    UPROPERTY(EditAnywhere)
    int32 DeadSkillRewardDelayTime;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> MountableEquipmentAliasArray;
    
    UPROPERTY(EditAnywhere)
    bool bOptimizeWithSignificanceManager;
    
    UPROPERTY(EditAnywhere)
    bool bClearCommandInputWhenEnd;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> StartEffectArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> EndEffectArray;
    
    SB_API FSBCharacterStanceTableProperty();
};

