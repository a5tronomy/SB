#pragma once
#include "CoreMinimal.h"
#include "ESBItemBucketType.h"
#include "ESBItemOverrideSaveType.h"
#include "SBJsonEffect.h"
#include "SBTablePropertyBase.h"
#include "SBZoneEventActorTableProperty.generated.h"

USTRUCT()
struct FSBZoneEventActorTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    bool bCollisionHitToActor;
    
    UPROPERTY(EditAnywhere)
    float CollisionActorDistance;
    
    UPROPERTY()
    FString CustomEffectValue;
    
    UPROPERTY()
    FString CustomEffectValueByFireElement;
    
    UPROPERTY(EditAnywhere)
    float EventInterval;
    
    UPROPERTY(EditAnywhere)
    float DespawnDelayTime;
    
    UPROPERTY(EditAnywhere)
    float TargetFilterExtentX;
    
    UPROPERTY(EditAnywhere)
    float TargetFilterExtentY;
    
    UPROPERTY(EditAnywhere)
    float TargetFilterCheckHeight;
    
    UPROPERTY(EditAnywhere)
    float ScaleTickDistance;
    
    UPROPERTY(EditAnywhere)
    FString RewardSpawnFormationAsset;
    
    UPROPERTY(EditAnywhere)
    float DestructionEvent_DelayMinTime;
    
    UPROPERTY(EditAnywhere)
    float DestructionEvent_DelayMaxTime;
    
    UPROPERTY(EditAnywhere)
    FName DestructionEvent_EffectAlias;
    
    UPROPERTY(EditAnywhere)
    FName DestructionEvent_RewardGroupAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemBucketType> DestructionEvent_RewardBucketType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemOverrideSaveType> DestructionEvent_RewardOverrideSaveType;
    
    UPROPERTY(EditAnywhere)
    bool DestructionEvent_RewardRemoveItemWithResetZone;
    
    UPROPERTY(EditAnywhere)
    FName DestructionEvent_ZoneEventAlias;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> DestructionEvent_ZoneEventAliasArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> DestructionEvent_EffectAliasArray;
    
    UPROPERTY(EditAnywhere)
    int32 DestructCountMax;
    
    UPROPERTY(EditAnywhere)
    float DestructionTimer;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> CountEventStepArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> CountEventRewardGroupAliasArray;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<ESBItemBucketType>> CountEventRewardBucketTypeArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> CountEventEffectAliasArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> CountEventZoneEventAliasArray;
    
    UPROPERTY()
    FName CountEvent1_RewardGroupAlias;
    
    UPROPERTY()
    FName CountEvent1_EffectAlias;
    
    UPROPERTY()
    FName CountEvent1_ZoneEventAlias;
    
    UPROPERTY()
    FName CountEvent2_RewardGroupAlias;
    
    UPROPERTY()
    FName CountEvent2_EffectAlias;
    
    UPROPERTY()
    FName CountEvent2_ZoneEventAlias;
    
    UPROPERTY()
    FName CountEvent3_RewardGroupAlias;
    
    UPROPERTY()
    FName CountEvent3_EffectAlias;
    
    UPROPERTY()
    FName CountEvent3_ZoneEventAlias;
    
    UPROPERTY()
    FName CountEvent4_RewardGroupAlias;
    
    UPROPERTY()
    FName CountEvent4_EffectAlias;
    
    UPROPERTY()
    FName CountEvent4_ZoneEventAlias;
    
    UPROPERTY()
    FName CountEvent5_RewardGroupAlias;
    
    UPROPERTY()
    FName CountEvent5_EffectAlias;
    
    UPROPERTY()
    FName CountEvent5_ZoneEventAlias;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> EffectAliasArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> EffectAliasArrayByFireElement;
    
    SB_API FSBZoneEventActorTableProperty();
};

