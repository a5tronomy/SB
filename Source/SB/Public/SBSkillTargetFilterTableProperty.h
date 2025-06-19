#pragma once
#include "CoreMinimal.h"
#include "ESBActorSortType.h"
#include "ESBActorStatCheckType.h"
#include "ESBActorStatType.h"
#include "ESBActorState.h"
#include "ESBCheckShape.h"
#include "ESBConditionCheckType.h"
#include "ESBTargetActor.h"
#include "SBTablePropertyBase.h"
#include "SBSkillTargetFilterTableProperty.generated.h"

USTRUCT()
struct FSBSkillTargetFilterTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBTargetActor> TargetType;
    
    UPROPERTY(EditAnywhere)
    bool bMultipleTargets;
    
    UPROPERTY(EditAnywhere)
    bool bDynamicShapeScale;
    
    UPROPERTY(EditAnywhere)
    float MinShapeScale;
    
    UPROPERTY(EditAnywhere)
    float MaxShapeScale;
    
    UPROPERTY(EditAnywhere)
    float NearDistance;
    
    UPROPERTY(EditAnywhere)
    float FarDistance;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorSortType> SortType;
    
    UPROPERTY(EditAnywhere)
    float CheckHitStepTimeWhenSortParry;
    
    UPROPERTY(EditAnywhere)
    float ShapeForwardDistance;
    
    UPROPERTY(EditAnywhere)
    float ShapeRightDistance;
    
    UPROPERTY(EditAnywhere)
    float ShapeUpDistance;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBCheckShape> TargetCheckShape;
    
    UPROPERTY(EditAnywhere)
    float TargetCheckValue1;
    
    UPROPERTY(EditAnywhere)
    float TargetCheckValue2;
    
    UPROPERTY(EditAnywhere)
    float TargetCheckValue3;
    
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
    TEnumAsByte<ESBActorState> NonActorState1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorState> NonActorState2;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorState> NonActorState3;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorState> NonActorState4;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorState> NonActorState5;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorStatType> ActorStat1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorStatCheckType> ActorStatCheck1;
    
    UPROPERTY(EditAnywhere)
    int32 ActorStatCheckValue1;
    
    UPROPERTY(EditAnywhere)
    float CheckMinAngleToTarget;
    
    UPROPERTY(EditAnywhere)
    float CheckMaxAngleToTarget;
    
    UPROPERTY(EditAnywhere)
    bool bDisableBlockingCheck;
    
    UPROPERTY(EditAnywhere)
    bool bBlockingCheckWithTopLocation;
    
    UPROPERTY(EditAnywhere)
    bool bValidEngineHandle;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> CheckBattleMode;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> CheckActiveEffectAliasArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> CheckActiveNoneEffectAliasArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> CheckActiveEffectAliasArrayWhenEasyMode;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> CheckActiveNoneEffectAliasArrayWhenEasyMode;
    
    UPROPERTY(EditAnywhere)
    float GroundHeightToTarget;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> bSwimming;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> bEncroachmentable;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> bDead;
    
    UPROPERTY(EditAnywhere)
    bool bNotSupportedZoneEventActor;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBSkillTargetFilterTableProperty();
};

