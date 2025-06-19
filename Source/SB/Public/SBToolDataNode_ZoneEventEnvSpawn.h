#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBCustomDepthStencilValue.h"
#include "ESBEquation.h"
#include "ESBInteractRelevantType.h"
#include "ESBItemBucketType.h"
#include "ESBItemOverrideSaveType.h"
#include "ESBObjectState.h"
#include "ESBPuzzleDataType.h"
#include "ESBUIWorldMapTargetDisplayType.h"
#include "ESBZoneEnvActiveState.h"
#include "ESBZoneEnvResetFilterType.h"
#include "ESBZoneObjectSaveType.h"
#include "SBAliasCondition.h"
#include "SBAliasConditionGroup.h"
#include "SBAliasNikkeLostArticle.h"
#include "SBAliasPuzzleStringArray.h"
#include "SBAliasShop.h"
#include "SBAliasSpawnPoint.h"
#include "SBAliasZone.h"
#include "SBAliasZoneCamp.h"
#include "SBAliasZoneEnv.h"
#include "SBAliasZoneEnvSpawn.h"
#include "SBAliasZoneEvent.h"
#include "SBDataNodeBase.h"
#include "SBZoneEnvProgressInitProperty.h"
#include "SBZoneEnvRewardGroupInfo.h"
#include "SBZoneEnvSequenceGroupInfo.h"
#include "SBZoneEnvTagEvent.h"
#include "Templates/SubclassOf.h"
#include "SBToolDataNode_ZoneEventEnvSpawn.generated.h"

class ASBZoneEnvActor;
class USBInteractionGraph;
class USBRewardGroupSpawnFormation;

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_ZoneEventEnvSpawn : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FSBAliasZone ZoneAlias;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBAliasZone> ZoneAliasList;
    
    UPROPERTY()
    FName EnvActorName;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ASBZoneEnvActor> EnvBlueprint;
    
    UPROPERTY(EditAnywhere)
    FSBAliasConditionGroup SpawnConditionGroup;
    
    UPROPERTY(EditAnywhere)
    FSBAliasZoneEnv EnvAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBObjectState> InitActivate;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEnvActiveState> InitEnvActiveState;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBZoneEnvTagEvent> EventsByStateTag;
    
    UPROPERTY(EditAnywhere)
    FName InitStateTag;
    
    UPROPERTY()
    bool bEnableSave;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneObjectSaveType> SaveType;
    
    UPROPERTY(EditAnywhere)
    bool bResetByWarpSafeLocation;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEnvResetFilterType> ResetFilterType;
    
    UPROPERTY(EditAnywhere)
    FSBAliasCondition ResetFilterCondition;
    
    UPROPERTY(EditAnywhere)
    float InteractionRange;
    
    UPROPERTY(EditAnywhere)
    float InteractionUpperHeight;
    
    UPROPERTY(EditAnywhere)
    float InteractionLowerHeight;
    
    UPROPERTY(EditAnywhere)
    float InteractionAngle;
    
    UPROPERTY(EditAnywhere)
    float InteractionDotUIAngle;
    
    UPROPERTY(EditAnywhere)
    float InteractionTargetRange;
    
    UPROPERTY(EditAnywhere)
    FSBAliasConditionGroup EventConditionGroup;
    
    UPROPERTY(EditAnywhere)
    float EventDelayTime;
    
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
    TArray<FSBZoneEnvProgressInitProperty> ProgressInit;
    
    UPROPERTY(EditAnywhere)
    int32 TriggerCount;
    
    UPROPERTY(EditAnywhere)
    FSBAliasCondition TriggerCondition;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBAliasZoneEvent> TriggerTrueEvents;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBAliasZoneEvent> TriggerFalseEvents;
    
    UPROPERTY(EditAnywhere)
    FName TrueEnvState;
    
    UPROPERTY(EditAnywhere)
    FName FalseEnvState;
    
    UPROPERTY(EditAnywhere)
    FSBAliasZoneCamp TargetCamp;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBAliasZoneEvent> ActiveEnterEvents;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBAliasZoneEvent> ActiveLeaveEvents;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBAliasZoneEnvSpawn> LinkEnvSpawnList;
    
    UPROPERTY(EditAnywhere)
    float SaveMinIntervalByAutoActivateCamp;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBAliasShop> ShopData;
    
    UPROPERTY(EditAnywhere)
    bool bMaintainNewGamePlus;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USBInteractionGraph> InteractionGraphAsset;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemBucketType> RewardSpawnBucketType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemOverrideSaveType> RewardOverrideSaveType;
    
    UPROPERTY(VisibleAnywhere)
    USBRewardGroupSpawnFormation* RewardGroupSpawnFormation;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBZoneEnvRewardGroupInfo> RewardGroupList;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    UPROPERTY(EditAnywhere)
    FString PuzzleCompareData;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBPuzzleDataType> PuzzleDataType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEquation> PuzzleEq;
    
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
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBZoneEnvSequenceGroupInfo> SequenceInfoList;
    
    UPROPERTY(EditAnywhere)
    ESBCustomDepthStencilValue ScanOverrideStencilValue;
    
    UPROPERTY(EditAnywhere)
    float OverrideNikkeGoodsDetectDistanceMax;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBAliasCondition> InteractionDisable_Condition;
    
    UPROPERTY(EditAnywhere)
    FSBAliasConditionGroup InteractionDisable_ConditionGroup;
    
    UPROPERTY(EditAnywhere)
    FSBAliasNikkeLostArticle NikkeLostArticle;
    
    UPROPERTY(EditAnywhere)
    FSBAliasSpawnPoint NikkeFriendlyNpc;
    
    USBToolDataNode_ZoneEventEnvSpawn();

};

