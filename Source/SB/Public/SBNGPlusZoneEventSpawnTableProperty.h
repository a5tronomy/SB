#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBAdjustInteractPosType.h"
#include "ESBConditionTriggerExecType.h"
#include "ESBConditionTriggerRunType.h"
#include "ESBInteractRelevantType.h"
#include "ESBInteractionOwnerRotationType.h"
#include "ESBItemBucketType.h"
#include "ESBItemOverrideSaveType.h"
#include "ESBMetaAIThink.h"
#include "ESBObjectState.h"
#include "ESBSaveSubProperty.h"
#include "ESBSpawnRotationType.h"
#include "ESBSpawnRuleType.h"
#include "ESBStayZoneSaveType.h"
#include "ESBUIWorldMapTargetDisplayType.h"
#include "ESBZoneObjectSaveType.h"
#include "ESBZoneResetKeepObjTMType.h"
#include "ESBZoneSpawnType.h"
#include "SBTablePropertyBase.h"
#include "SBNGPlusZoneEventSpawnTableProperty.generated.h"

USTRUCT()
struct FSBNGPlusZoneEventSpawnTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName SpawnPointName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBObjectState> InitActivate;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> CharacterAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneSpawnType> SpawnType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSpawnRotationType> SpawnRotationType;
    
    UPROPERTY(EditAnywhere)
    FName Zone;
    
    UPROPERTY(EditAnywhere)
    FName SpawnGroupRuleAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneObjectSaveType> SaveType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSaveSubProperty> SaveSubProperty;
    
    UPROPERTY(EditAnywhere)
    bool bResetZoneKeepObject;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneResetKeepObjTMType> KeepObjResetTransformType;
    
    UPROPERTY(EditAnywhere)
    bool bKeepObjApplyResetState;
    
    UPROPERTY(EditAnywhere)
    bool bSaveWithBlackBoard;
    
    UPROPERTY(EditAnywhere)
    bool bSpawnToActive;
    
    UPROPERTY(EditAnywhere)
    float DrawDistance;
    
    UPROPERTY(EditAnywhere)
    bool bDisableDrawDistanceScale;
    
    UPROPERTY(EditAnywhere)
    float AlwaysTickDistance;
    
    UPROPERTY(EditAnywhere)
    bool bKeepSBCharacterWhenActiveAreaControlVolume;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EventOnSpawning;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EventOnDead;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EventOnBattle;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EventFirstTimeOnBattle;
    
    UPROPERTY(EditAnywhere)
    FString SpawnShow;
    
    UPROPERTY(EditAnywhere)
    bool bEnableActorTickAtSpawning;
    
    UPROPERTY(EditAnywhere)
    bool GoPathAfterSpawn;
    
    UPROPERTY(EditAnywhere)
    FString PathWay;
    
    UPROPERTY(EditAnywhere)
    FName RewardGroup;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemBucketType> RewardSpawnBucketType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemOverrideSaveType> RewardOverrideSaveType;
    
    UPROPERTY(EditAnywhere)
    FName TagName;
    
    UPROPERTY(EditAnywhere)
    bool bHidden;
    
    UPROPERTY(EditAnywhere)
    FName AIGroupAlias;
    
    UPROPERTY(EditAnywhere)
    FName AIGroupName;
    
    UPROPERTY(EditAnywhere)
    bool bAIGroupLeader;
    
    UPROPERTY(EditAnywhere)
    FName MetaAIAlias;
    
    UPROPERTY(EditAnywhere)
    ESBMetaAIThink MetaAI_InitThink;
    
    UPROPERTY(EditAnywhere)
    FName MetaAI_SpecialBehaviorTag;
    
    UPROPERTY(EditAnywhere)
    float InteractionRange;
    
    UPROPERTY(EditAnywhere)
    float InteractionAngle;
    
    UPROPERTY(EditAnywhere)
    float InteractionTargetRange;
    
    UPROPERTY(EditAnywhere)
    float InteractionDotUIAngle;
    
    UPROPERTY(EditAnywhere)
    float InteractionUpperHeight;
    
    UPROPERTY(EditAnywhere)
    float InteractionLowerHeight;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBInteractionOwnerRotationType> OwnerRotationType;
    
    UPROPERTY(EditAnywhere)
    bool bEnableTransitZone;
    
    UPROPERTY(EditAnywhere)
    bool bEnableTransitZoneByEnemyActor;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBStayZoneSaveType> TransitStayZoneSaveType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBAdjustInteractPosType> AdjustInteractTargetPosType;
    
    UPROPERTY(EditAnywhere)
    FString Interaction;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ConditionsTrigger;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ConditionTriggerEvent;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<ESBConditionTriggerRunType>> ConditionTriggerRunType;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<ESBConditionTriggerExecType>> ConditionTriggerExecType;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> CheckAchievements;
    
    UPROPERTY(EditAnywhere)
    TArray<bool> bCheckAchievementNotOperate;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> CheckAchievementProgress;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ShopDataList;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> SpawnEffectList;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSpawnRuleType> SpawnRuleType;
    
    UPROPERTY(EditAnywhere)
    float RespawnIntervalTimeMin;
    
    UPROPERTY(EditAnywhere)
    float RespawnIntervalTimeMax;
    
    UPROPERTY(EditAnywhere)
    FName PuzzleInputText1;
    
    UPROPERTY(EditAnywhere)
    FName PuzzleInputText2;
    
    UPROPERTY(EditAnywhere)
    FName PuzzleInputText3;
    
    UPROPERTY(EditAnywhere)
    FName PuzzleInputText4;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> PuzzleInputTextList5;
    
    UPROPERTY(EditAnywhere)
    FVector SpawnPosition;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBUIWorldMapTargetDisplayType> WorldMapDisplayType;
    
    UPROPERTY(EditAnywhere)
    FString WorldMapDisplayTitle;
    
    UPROPERTY(EditAnywhere)
    FString WorldMapDisplayDesc;
    
    UPROPERTY(EditAnywhere)
    FName WorldMapDisplayConditionGroup;
    
    UPROPERTY(EditAnywhere)
    FName WorldMapIconTag;
    
    UPROPERTY(EditAnywhere)
    float WorldMapOverlapDistance;
    
    UPROPERTY(EditAnywhere)
    float OverrideCustomTrackNearDistance;
    
    UPROPERTY(EditAnywhere)
    bool DontCheckZAxisCustomTrackNear;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBInteractRelevantType> InteractionRelevantType;
    
    UPROPERTY(EditAnywhere)
    FString ObjectMaterial;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> InteractionDisable_Condition;
    
    UPROPERTY(EditAnywhere)
    FName InteractionDisable_ConditionGroup;
    
    UPROPERTY(EditAnywhere)
    bool bMultiSpawnPoint;
    
    UPROPERTY(EditAnywhere)
    bool bPendingTheaterByNiike;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBNGPlusZoneEventSpawnTableProperty();
};

