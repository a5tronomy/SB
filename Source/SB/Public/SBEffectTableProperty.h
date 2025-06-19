#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESBActorStance.h"
#include "ESBActorStatCheckType.h"
#include "ESBActorStatType.h"
#include "ESBActorState.h"
#include "ESBActorType.h"
#include "ESBAttackedCollisionGroupResultType.h"
#include "ESBCompare.h"
#include "ESBConditionCheckType.h"
#include "ESBCreateEffectAxis.h"
#include "ESBCreateEffectPosition.h"
#include "ESBEffectAction.h"
#include "ESBEffectAttackType.h"
#include "ESBEffectAttributeType.h"
#include "ESBEffectCalculationTarget.h"
#include "ESBEffectCalculationType.h"
#include "ESBEffectConditionChainType.h"
#include "ESBEffectExpansionType.h"
#include "ESBEffectLifeType.h"
#include "ESBEffectOverlap.h"
#include "ESBEffectUIType.h"
#include "ESBElementType.h"
#include "ESBSkillHitResult.h"
#include "ESBTargetActor.h"
#include "SBJsonEffectEndCondition.h"
#include "SBTablePropertyBase.h"
#include "SBEffectTableProperty.generated.h"

USTRUCT(BlueprintType)
struct SB_API FSBEffectTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName Flag;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> DispelFlagsArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> Tags;
    
    UPROPERTY(EditAnywhere)
    FName OverrideTribe;
    
    UPROPERTY(EditAnywhere)
    FName EffectGroupName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEffectAttributeType> EffectAttributeType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEffectAttackType> EffectAttackType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> ConditionDelay_Jump;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> ConditionDelay_Swimming;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> ConditionDelay_Down;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> ConditionDelay_Airborne;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> ConditionDelay_KnockBack;
    
    UPROPERTY(EditAnywhere)
    float ConditionActive_ChancePercent;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> ConditionActive_Swimming;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> ConditionActive_UnderWater;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> ConditionActive_Airborne;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> ConditionActive_Jump;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> ConditionActive_BattleMode;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBTargetActor> ConditionActive_TargetType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorState> ConditionActive_ActiveActorState1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorState> ConditionActive_ActiveActorState2;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorState> ConditionActive_ActiveActorState3;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorState> ConditionActive_DeactiveActorState1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorState> ConditionActive_DeactiveActorState2;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorState> ConditionActive_DeactiveActorState3;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorType> ConditionActive_ActorType1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorType> ConditionActive_ActorType2;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorType> ConditionActive_ActorType3;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorStatType> ConditionActive_ActorStat1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorStatCheckType> ConditionActive_ActorStatCheck1;
    
    UPROPERTY(EditAnywhere)
    int32 ConditionActive_ActorStatCheckValue1;
    
    UPROPERTY(EditAnywhere)
    float ConditionActive_MinAngleFromConstructor;
    
    UPROPERTY(EditAnywhere)
    float ConditionActive_MaxAngleFromConstructor;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ConditionActive_CheckEffectAliasArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ConditionActive_CheckNoneEffectAliasArray;
    
    UPROPERTY(EditAnywhere)
    FName ConditionActive_ConstructorActorAcquisitionAlias;
    
    UPROPERTY(EditAnywhere)
    FName ConditionActive_DeactiveConstructorActorAcquisitionAlias;
    
    UPROPERTY(EditAnywhere)
    FName ConditionActive_MainActorAcquisitionAlias;
    
    UPROPERTY(EditAnywhere)
    FName ConditionActive_DeactiveMainActorAcquisitionAlias;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ConditionActive_ActiveTribe;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ConditionActive_DeactiveTribe;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ConditionActive_CheckCharacterRankArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ConditionActive_CheckNoneCharacterRankArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ConditionActive_CheckCharacterFlagAliasArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ConditionActive_CheckNoneCharacterFlagAliasArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ConditionActive_CheckEffectSkillFlagArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ConditionActive_ConstructorEffectActiveTag;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ConditionActive_ConstructorEffectDeactiveTag;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkillHitResult> ConditionActive_SkillHitResult;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> ConditionActive_StoryMode;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> ConditionActive_EventMove;
    
    UPROPERTY(EditAnywhere)
    FName ConditionActive_ItemAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBCompare::Type> ConditionActive_ItemCompare;
    
    UPROPERTY(EditAnywhere)
    int32 ConditionActive_ItemCount;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorStatType> StatType;
    
    UPROPERTY(EditAnywhere)
    FName StatSecondCategory;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEffectCalculationType> StatCalculationType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEffectCalculationTarget> StatCalculationTarget;
    
    UPROPERTY(EditAnywhere)
    float CalculationValue;
    
    UPROPERTY(EditAnywhere)
    float CalculationValueRandomMin;
    
    UPROPERTY(EditAnywhere)
    float CalculationValueRandomMax;
    
    UPROPERTY(EditAnywhere)
    float CalculationMultipleWhenBacksideHit;
    
    UPROPERTY(EditAnywhere)
    float CalculationMultipleValue;
    
    UPROPERTY(EditAnywhere)
    bool bAdditionalCalculationWithShield;
    
    UPROPERTY(EditAnywhere)
    bool bAdditionalCalculationWithCritical;
    
    UPROPERTY(EditAnywhere)
    bool bAdditionalCalculationWithAttribute;
    
    UPROPERTY(EditAnywhere)
    bool bAdditionalCalculationWithRange;
    
    UPROPERTY(EditAnywhere)
    bool bAdditionalCalculationWithWeakPoint;
    
    UPROPERTY(EditAnywhere)
    bool bDrainHpByAttack;
    
    UPROPERTY(EditAnywhere)
    bool bBetaGaugeEventByDamage;
    
    UPROPERTY(EditAnywhere)
    bool bTachyGaugeEventByDamage;
    
    UPROPERTY(EditAnywhere)
    bool bNotGainTachyGaugeByDamage;
    
    UPROPERTY(EditAnywhere)
    bool bNotVisibleHPBarWhenDamage;
    
    UPROPERTY(EditAnywhere)
    bool bStatRestore;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEffectOverlap> Overlap;
    
    UPROPERTY(EditAnywhere)
    int32 OverlapCount;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEffectLifeType> LifeType;
    
    UPROPERTY(EditAnywhere)
    float LifeTime;
    
    UPROPERTY(EditAnywhere)
    float StartDelayTime;
    
    UPROPERTY(EditAnywhere)
    float LoopIntervalTime;
    
    UPROPERTY(EditAnywhere)
    TArray<float> FixedTime;
    
    UPROPERTY(EditAnywhere)
    FName ActiveTargetFilterAlias;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ActiveTargetEffectAliasArray;
    
    UPROPERTY(EditAnywhere)
    FString ActiveTargetResultShowPath;
    
    UPROPERTY(EditAnywhere)
    bool bActiveTargetApplyConditionHitMe;
    
    UPROPERTY(EditAnywhere)
    FName LoopTargetFilterAlias;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> LoopTargetEffectAliasArray;
    
    UPROPERTY(EditAnywhere)
    FString LoopTargetResultShowPath;
    
    UPROPERTY(EditAnywhere)
    bool bLoopTargetApplyConditionHitMe;
    
    UPROPERTY(EditAnywhere)
    FName FixedTargetFilterAlias;
    
    UPROPERTY(EditAnywhere)
    FName DeactiveTargetFilterAlias;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> DeactiveTargetEffectAliasArray;
    
    UPROPERTY(EditAnywhere)
    FString DeactiveTargetResultShowPath;
    
    UPROPERTY(EditAnywhere)
    bool bDeactiveTargetApplyConditionHitMe;
    
    UPROPERTY(EditAnywhere)
    bool AvailableJustEvade;
    
    UPROPERTY(EditAnywhere)
    bool bKeepPlayedShowWhenDeactive;
    
    UPROPERTY(EditAnywhere)
    FString ActiveShowPath;
    
    UPROPERTY(EditAnywhere)
    FString LoopShowPath;
    
    UPROPERTY(EditAnywhere)
    FString DeactiveShowPath;
    
    UPROPERTY(EditAnywhere)
    FString CollisionBPPath;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ChainEffectAliasArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> TargetChainEffectAliasWhenZeroShieldArray;
    
    UPROPERTY(EditAnywhere)
    FName StanceAlias;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ActiveAttackedCollisionGroupArray;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorState> ActorState1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorState> ActorState2;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorState> ActorState3;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorState> ActorState4;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorState> ActorState5;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorState> ActorState6;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorState> ActorState7;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorState> ActorState8;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorState> ActorState9;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorState> ActorState10;
    
    UPROPERTY(EditAnywhere)
    float DelayActorState1;
    
    UPROPERTY(EditAnywhere)
    float DelayActorState2;
    
    UPROPERTY(EditAnywhere)
    float DelayActorState3;
    
    UPROPERTY(EditAnywhere)
    float DelayActorState4;
    
    UPROPERTY(EditAnywhere)
    float DelayActorState5;
    
    UPROPERTY(EditAnywhere)
    float DelayActorState6;
    
    UPROPERTY(EditAnywhere)
    float DelayActorState7;
    
    UPROPERTY(EditAnywhere)
    float DelayActorState8;
    
    UPROPERTY(EditAnywhere)
    float DelayActorState9;
    
    UPROPERTY(EditAnywhere)
    float DelayActorState10;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEffectAction> Action1;
    
    UPROPERTY(EditAnywhere)
    FString ActionValue1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEffectAction> Action2;
    
    UPROPERTY(EditAnywhere)
    FString ActionValue2;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEffectAction> Action3;
    
    UPROPERTY(EditAnywhere)
    FString ActionValue3;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEffectAction> Action4;
    
    UPROPERTY(EditAnywhere)
    FString ActionValue4;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEffectAction> Action5;
    
    UPROPERTY(EditAnywhere)
    FString ActionValue5;
    
    UPROPERTY(EditAnywhere)
    FName AttackedCollisionGroup;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBAttackedCollisionGroupResultType> AttackedCollisionGroupResultType;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ImmuneEffectGroupArray;
    
    UPROPERTY(EditAnywhere)
    FName MoveAlias;
    
    UPROPERTY(EditAnywhere)
    bool bUseGetupMoveAlias;
    
    UPROPERTY()
    FString ConditionEnd1;
    
    UPROPERTY()
    FString ConditionEnd2;
    
    UPROPERTY()
    FString ConditionEnd3;
    
    UPROPERTY()
    FString ConditionEnd4;
    
    UPROPERTY()
    FString ConditionEnd5;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorStance> ActiveStanceAnimType;
    
    UPROPERTY(EditAnywhere)
    bool bEnableSave;
    
    UPROPERTY(EditAnywhere)
    bool bPlayOnDead;
    
    UPROPERTY(EditAnywhere)
    bool bStopOnRevival;
    
    UPROPERTY(EditAnywhere)
    bool bWarpToSafeLocationOnDead;
    
    UPROPERTY(EditAnywhere)
    FName WarpToSafeLocationEffectAlias;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreTimeScale;
    
    UPROPERTY(EditAnywhere)
    bool bAggroToConstructorActor;
    
    UPROPERTY(EditAnywhere)
    FName TargetDeadType;
    
    UPROPERTY(EditAnywhere)
    float SoundDecibel;
    
    UPROPERTY(EditAnywhere)
    float SoundLife;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEffectConditionChainType> ConditionChainType;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ConditionChainSelfEffectAliasArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ConditionChainTargetEffectAliasArray;
    
    UPROPERTY(EditAnywhere)
    bool bUseCreateEffectPosition;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBCreateEffectPosition::Type> CreateEffectStartPosition;
    
    UPROPERTY(EditAnywhere)
    bool bCreateEffectPositionOnGround;
    
    UPROPERTY(EditAnywhere)
    float EffectPositionOnGroundCheckDistance;
    
    UPROPERTY(EditAnywhere)
    FVector CreateEffectRelativeLocation;
    
    UPROPERTY(EditAnywhere)
    FVector CreateEffectLocationRandomRange;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBCreateEffectAxis::Type> CreateEffectRelativeAxisType;
    
    UPROPERTY(EditAnywhere)
    FRotator CreateEffectRelativeRotation;
    
    UPROPERTY(EditAnywhere)
    FRotator CreateEffectRotationRandomRange;
    
    UPROPERTY(EditAnywhere)
    bool bShowEffectTimeUI;
    
    UPROPERTY(EditAnywhere)
    FString Loc_EffectTimeUIText;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEffectUIType> EffectUIType;
    
    UPROPERTY(EditAnywhere)
    FName ExpansionFromAcquisitionAlias1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEffectExpansionType> ExpansionType1;
    
    UPROPERTY(EditAnywhere)
    FString ExpansionValue1;
    
    UPROPERTY(EditAnywhere)
    FName ExpansionFromAcquisitionAlias2;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEffectExpansionType> ExpansionType2;
    
    UPROPERTY(EditAnywhere)
    FString ExpansionValue2;
    
    UPROPERTY(EditAnywhere)
    FName ExpansionFromAcquisitionAlias3;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEffectExpansionType> ExpansionType3;
    
    UPROPERTY(EditAnywhere)
    FString ExpansionValue3;
    
    UPROPERTY(EditAnywhere)
    FName ExpansionFromAcquisitionAlias4;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEffectExpansionType> ExpansionType4;
    
    UPROPERTY(EditAnywhere)
    FString ExpansionValue4;
    
    UPROPERTY(EditAnywhere)
    FName ExpansionFromAcquisitionAlias5;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEffectExpansionType> ExpansionType5;
    
    UPROPERTY(EditAnywhere)
    FString ExpansionValue5;
    
    UPROPERTY(EditAnywhere)
    FName ShowKeyTag;
    
    UPROPERTY(EditAnywhere)
    bool LoopElement;
    
    UPROPERTY(EditAnywhere)
    FName ElementTargetFilterAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBElementType> ElementType;
    
    UPROPERTY(EditAnywhere)
    float ElementAmount;
    
    UPROPERTY(EditAnywhere)
    bool bProjectileAttackPossible;
    
    UPROPERTY(EditAnywhere)
    float ProjectileAttackDamage;
    
    UPROPERTY(EditAnywhere)
    FName ActiveProjectileTargetFilterAlias;
    
    UPROPERTY(EditAnywhere)
    FName ActiveProjectileAlias;
    
    UPROPERTY(EditAnywhere)
    bool bPauseWhenAttachLevelSequence;
    
    UPROPERTY(EditAnywhere)
    bool bPauseWhenPlayerAttachLevelSequence;
    
    UPROPERTY(EditAnywhere)
    FName ActionAssistTargetFilter;
    
    UPROPERTY(EditAnywhere)
    float ActionAssistCheckDelay;
    
    UPROPERTY(EditAnywhere)
    float ActionAssistActiveTime;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffectEndCondition> EndConditionArray;
    
    FSBEffectTableProperty();
};

