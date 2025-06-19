#pragma once
#include "CoreMinimal.h"
#include "ESBItemBucketType.h"
#include "ESBItemOverrideSaveType.h"
#include "SBAliasEffect.h"
#include "SBAliasRewardGroup.h"
#include "SBAliasZoneEvent.h"
#include "SBDataNodeBase.h"
#include "SBJsonEffectAlias.h"
#include "SBTableIndexRewardGroup.h"
#include "SBZoneEventActorProperty.h"
#include "SBToolDataNode_ZoneEventActor.generated.h"

class USBRewardGroupSpawnFormation;

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_ZoneEventActor : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    bool bCollisionHitToActor;
    
    UPROPERTY(EditAnywhere)
    float CollisionActorDistance;
    
    UPROPERTY(EditAnywhere)
    FString CustomEffectValue;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBJsonEffectAlias> CustomEffectValueByFireElement;
    
    UPROPERTY(EditAnywhere)
    float EventInterval;
    
    UPROPERTY(EditAnywhere)
    int32 DestructCountMax;
    
    UPROPERTY(EditAnywhere)
    float DestructionTimer;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBZoneEventActorProperty> EventStepProperty;
    
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
    float DestructionEvent_DelayMinTime;
    
    UPROPERTY(EditAnywhere)
    float DestructionEvent_DelayMaxTime;
    
    UPROPERTY(EditAnywhere)
    FSBAliasEffect DestructionEventEffectAlias;
    
    UPROPERTY()
    FSBAliasRewardGroup DestructionEventRewardGroupAlias;
    
    UPROPERTY(EditAnywhere)
    FSBTableIndexRewardGroup DestructionEventRewardGroupIndex;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemBucketType> DestructionEvent_RewardBucketType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemOverrideSaveType> DestructionEvent_RewardOverrideSaveType;
    
    UPROPERTY(EditAnywhere)
    bool DestructionEvent_RewardRemoveItemWithResetZone;
    
    UPROPERTY(EditAnywhere)
    FSBAliasZoneEvent DestructionEventZoneEventAlias;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBAliasZoneEvent> DestructionEventZoneEventAliasArray;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBAliasEffect> DestructionEventEffectAliasArray;
    
    UPROPERTY(EditAnywhere)
    USBRewardGroupSpawnFormation* RewardGroupSpawnFormation;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    USBToolDataNode_ZoneEventActor();

};

