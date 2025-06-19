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
#include "ESBSequencePlayTransformType.h"
#include "ESBUIWorldMapTargetDisplayType.h"
#include "ESBZoneEnvActiveState.h"
#include "ESBZoneEnvResetFilterType.h"
#include "ESBZoneObjectSaveType.h"
#include "SBTablePropertyBase.h"
#include "SBZoneEnvProgressNotifyInfo.h"
#include "SBZoneEnvTargetStateInfo.h"
#include "SBZoneEnvSpawnTableProperty.generated.h"

USTRUCT()
struct FSBZoneEnvSpawnTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName Zone;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ZoneList;
    
    UPROPERTY(EditAnywhere)
    FName EnvActorName;
    
    UPROPERTY(EditAnywhere)
    FString EnvBPPath;
    
    UPROPERTY(EditAnywhere)
    FName SpawnPointName;
    
    UPROPERTY(EditAnywhere)
    FName SpawnConditionGroup;
    
    UPROPERTY(EditAnywhere)
    FName EnvAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBObjectState> InitActivate;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEnvActiveState> InitEnvActiveState;
    
    UPROPERTY(EditAnywhere)
    FName InitStateTag;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneObjectSaveType> SaveType;
    
    UPROPERTY(EditAnywhere)
    FName EventTagName1;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> TagEventList1;
    
    UPROPERTY(EditAnywhere)
    FName EventTagName2;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> TagEventList2;
    
    UPROPERTY(EditAnywhere)
    FName EventTagName3;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> TagEventList3;
    
    UPROPERTY(EditAnywhere)
    FName EventTagName4;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> TagEventList4;
    
    UPROPERTY(EditAnywhere)
    FName EventTagName5;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> TagEventList5;
    
    UPROPERTY(EditAnywhere)
    FName EventTagName6;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> TagEventList6;
    
    UPROPERTY(EditAnywhere)
    FName EventTagName7;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> TagEventList7;
    
    UPROPERTY(EditAnywhere)
    FName EventTagName8;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> TagEventList8;
    
    UPROPERTY(EditAnywhere)
    FName EventTagName9;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> TagEventList9;
    
    UPROPERTY(EditAnywhere)
    FName EventTagName10;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> TagEventList10;
    
    UPROPERTY(EditAnywhere)
    FName RewardTagName1;
    
    UPROPERTY(EditAnywhere)
    FName State_RewardGroup1;
    
    UPROPERTY(EditAnywhere)
    FName RewardTagName2;
    
    UPROPERTY(EditAnywhere)
    FName State_RewardGroup2;
    
    UPROPERTY(EditAnywhere)
    FName RewardTagName3;
    
    UPROPERTY(EditAnywhere)
    FName State_RewardGroup3;
    
    UPROPERTY(EditAnywhere)
    FName RewardTagName4;
    
    UPROPERTY(EditAnywhere)
    FName State_RewardGroup4;
    
    UPROPERTY(EditAnywhere)
    FName RewardTagName5;
    
    UPROPERTY(EditAnywhere)
    FName State_RewardGroup5;
    
    UPROPERTY(EditAnywhere)
    FName RewardTagName6;
    
    UPROPERTY(EditAnywhere)
    FName State_RewardGroup6;
    
    UPROPERTY(EditAnywhere)
    FName RewardTagName7;
    
    UPROPERTY(EditAnywhere)
    FName State_RewardGroup7;
    
    UPROPERTY(EditAnywhere)
    FName RewardTagName8;
    
    UPROPERTY(EditAnywhere)
    FName State_RewardGroup8;
    
    UPROPERTY(EditAnywhere)
    FName RewardTagName9;
    
    UPROPERTY(EditAnywhere)
    FName State_RewardGroup9;
    
    UPROPERTY(EditAnywhere)
    FName RewardTagName10;
    
    UPROPERTY(EditAnywhere)
    FName State_RewardGroup10;
    
    UPROPERTY(EditAnywhere)
    FString RewardSpawnFormationAsset;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemBucketType> RewardSpawnBucketType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemOverrideSaveType> RewardOverrideSaveType;
    
    UPROPERTY(EditAnywhere)
    float InteractionRange;
    
    UPROPERTY(EditAnywhere)
    float InteractionUpperHeight;
    
    UPROPERTY(EditAnywhere)
    float InteractionLowerHeight;
    
    UPROPERTY(EditAnywhere)
    float InteractionAngle;
    
    UPROPERTY(EditAnywhere)
    float InteractionTargetRange;
    
    UPROPERTY(EditAnywhere)
    float InteractionDotUIAngle;
    
    UPROPERTY(EditAnywhere)
    FString Interaction;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ActiveEnterEvents;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ActiveLeaveEvents;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> LinkEnvSpawnList;
    
    UPROPERTY(EditAnywhere)
    FName TargetCamp;
    
    UPROPERTY(EditAnywhere)
    int32 TriggerCount;
    
    UPROPERTY(EditAnywhere)
    FName TriggerCondition;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> TriggerTrueEvents;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> TriggerFalseEvents;
    
    UPROPERTY(EditAnywhere)
    FName TrueEnvState;
    
    UPROPERTY(EditAnywhere)
    FName FalseEnvState;
    
    UPROPERTY(EditAnywhere)
    TArray<float> InitProgressValue;
    
    UPROPERTY(EditAnywhere)
    TArray<float> StartProgressValue;
    
    UPROPERTY(EditAnywhere)
    TArray<float> EndProgressValue;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBZoneEnvProgressNotifyInfo> ProgressNotifyEventList;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    UPROPERTY(EditAnywhere)
    FString PuzzleCompareData;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBPuzzleDataType> PuzzleDataType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEquation> PuzzleEq;
    
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
    TArray<FName> SequenceTagNameList;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> OutTransitTheaterList;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> OutTransitSequenceList;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> OutTransitTemplatePath;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> OutTransitAttachTagNames;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> ActiveTheaterList;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> ActiveSequenceList;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> ActiveTemplatePath;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> ActiveAttachTagNames;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> LoopSequenceList;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> LoopTemplatePath;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> LoopAttachTagNames;
    
    UPROPERTY(EditAnywhere)
    TArray<bool> ForceLoopStopWhenChangeState;
    
    UPROPERTY(EditAnywhere)
    TArray<bool> DontStopLoopSequenceAtDestoryOptionList;
    
    UPROPERTY(EditAnywhere)
    TArray<bool> UseTemplateTransformList;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBZoneEnvTargetStateInfo> ToTargetStateInfoList;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<ESBSequencePlayTransformType>> PlayTransformOwnerTypeList;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ShopDataList;
    
    UPROPERTY(EditAnywhere)
    FVector SpawnPosition;
    
    UPROPERTY(EditAnywhere)
    bool bResetByWarpSafeLocation;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEnvResetFilterType> ResetFilterType;
    
    UPROPERTY(EditAnywhere)
    FName ResetFilterCondition;
    
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
    bool bMaintainNewGamePlus;
    
    UPROPERTY(EditAnywhere)
    float SaveMinIntervalByAutoActivateCamp;
    
    UPROPERTY(EditAnywhere)
    ESBCustomDepthStencilValue ScanOverrideStencilValue;
    
    UPROPERTY(EditAnywhere)
    float OverrideNikkeGoodsDetectDistanceMax;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> InteractionDisable_Condition;
    
    UPROPERTY(EditAnywhere)
    FName InteractionDisable_ConditionGroup;
    
    UPROPERTY(EditAnywhere)
    FName NikkeLostArticle;
    
    UPROPERTY(EditAnywhere)
    FName NikkeFriendlyNpc;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBZoneEnvSpawnTableProperty();
};

