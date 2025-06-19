#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBAdjustInteractPosType.h"
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
#include "SBAliasAIGroup.h"
#include "SBAliasAchievement.h"
#include "SBAliasCharacter.h"
#include "SBAliasCondition.h"
#include "SBAliasConditionGroup.h"
#include "SBAliasCustom_GotoPathwayActor.h"
#include "SBAliasEffect.h"
#include "SBAliasMetaAI.h"
#include "SBAliasPuzzleStringArray.h"
#include "SBAliasRewardGroup.h"
#include "SBAliasShop.h"
#include "SBAliasZone.h"
#include "SBAliasZoneEvent.h"
#include "SBDataNodeBase.h"
#include "SBObjectConditionTriggerInfo.h"
#include "SBSpawnConditionInfo.h"
#include "SBTableIndexRewardGroup.h"
#include "SBToolDataNode_NGPlusZoneEventCharacterSpawn.generated.h"

class USBInteractionGraph;
class USBObjectMaterialData;
class USBShowData;

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_NGPlusZoneEventCharacterSpawn : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY()
    FName SpawnPointName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBObjectState> InitActivate;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBAliasCharacter> CharacterAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneSpawnType> SpawnType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSpawnRotationType> SpawnRotationType;
    
    UPROPERTY(EditAnywhere)
    FSBAliasZone SpawnZone;
    
    UPROPERTY(EditAnywhere)
    FName SpawnGroupRuleAlias;
    
    UPROPERTY()
    bool bEnableSave;
    
    UPROPERTY(EditAnywhere)
    bool bEnableTransitZone;
    
    UPROPERTY(EditAnywhere)
    bool bEnableTransitZoneByEnemyActor;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBStayZoneSaveType> TransitStayZoneSaveType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneObjectSaveType> SaveType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSaveSubProperty> SaveSubProperty;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSpawnRuleType> SpawnRuleType;
    
    UPROPERTY(EditAnywhere)
    float RespawnIntervalTimeMin;
    
    UPROPERTY(EditAnywhere)
    float RespawnIntervalTimeMax;
    
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
    bool bMultiSpawnPoint;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBAliasZoneEvent> EventOnSpawning;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBAliasZoneEvent> EventOnDead;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBAliasZoneEvent> EventOnBattle;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBAliasZoneEvent> EventFirstTimeOnBattle;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USBObjectMaterialData> ObjectMaterial;
    
    UPROPERTY()
    FString PathWay;
    
    UPROPERTY(EditAnywhere)
    bool GoPathAfterSpawn;
    
    UPROPERTY(EditAnywhere)
    FSBAliasCustom_GotoPathwayActor PathWayAlias;
    
    UPROPERTY()
    FSBAliasRewardGroup RewardGroup;
    
    UPROPERTY(EditAnywhere)
    FSBTableIndexRewardGroup RewardGroupIndex;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemBucketType> RewardSpawnBucketType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemOverrideSaveType> RewardOverrideSaveType;
    
    UPROPERTY(EditAnywhere)
    FName TagName;
    
    UPROPERTY(EditAnywhere)
    bool bHidden;
    
    UPROPERTY(EditAnywhere)
    FSBAliasAIGroup AIGroupAlias;
    
    UPROPERTY(EditAnywhere)
    FName AIGroupName;
    
    UPROPERTY(EditAnywhere)
    bool bAIGroupLeader;
    
    UPROPERTY(EditAnywhere)
    FSBAliasMetaAI MetaAIAlias;
    
    UPROPERTY(EditAnywhere)
    ESBMetaAIThink MetaAI_InitThink;
    
    UPROPERTY(EditAnywhere)
    FName MetaAI_SpecialBehaviorTag;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USBInteractionGraph> InteractionGraphAsset;
    
    UPROPERTY()
    FString InteractionGraph;
    
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
    TEnumAsByte<ESBAdjustInteractPosType> AdjustInteractTargetPosType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBInteractionOwnerRotationType> OwnerRotationType;
    
    UPROPERTY(EditAnywhere)
    FString FormationData;
    
    UPROPERTY()
    TArray<FSBAliasAchievement> CheckAchievements;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBSpawnConditionInfo> SpawnConditions;
    
    UPROPERTY(EditAnywhere)
    float EventDelayTime;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBObjectConditionTriggerInfo> ConditionTriggerList;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USBShowData> SpawnShow;
    
    UPROPERTY(EditAnywhere)
    bool bEnableActorTickAtSpawning;
    
    UPROPERTY(EditAnywhere)
    bool bPendingTheaterByNiike;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBAliasShop> ShopData;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBAliasEffect> SpawnEffectList;
    
    UPROPERTY(EditAnywhere)
    FSBAliasPuzzleStringArray PuzzleInputText1;
    
    UPROPERTY(EditAnywhere)
    FSBAliasPuzzleStringArray PuzzleInputText2;
    
    UPROPERTY(EditAnywhere)
    FSBAliasPuzzleStringArray PuzzleInputText3;
    
    UPROPERTY(EditAnywhere)
    FSBAliasPuzzleStringArray PuzzleInputText4;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> PuzzleInputTextList5;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
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
    TEnumAsByte<ESBInteractRelevantType> InteractionRelevantType;
    
    UPROPERTY(EditAnywhere)
    float OverrideCustomTrackNearDistance;
    
    UPROPERTY(EditAnywhere)
    bool DontCheckZAxisCustomTrackNear;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBAliasCondition> InteractionDisable_Condition;
    
    UPROPERTY(EditAnywhere)
    FSBAliasConditionGroup InteractionDisable_ConditionGroup;
    
    USBToolDataNode_NGPlusZoneEventCharacterSpawn();

};

