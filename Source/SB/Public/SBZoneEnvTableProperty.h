#pragma once
#include "CoreMinimal.h"
#include "ESBEnvironmentType.h"
#include "ESBEquation.h"
#include "ESBItemBucketType.h"
#include "ESBItemOverrideSaveType.h"
#include "ESBPuzzleDataType.h"
#include "ESBScanDisplayType.h"
#include "ESBZoneCampObjectType.h"
#include "ESBZoneCampType.h"
#include "SBEffectDataList.h"
#include "SBTablePropertyBase.h"
#include "SBZoneEnvProgressNotifyInfo.h"
#include "SBZoneEventDataList.h"
#include "SBZoneEnvTableProperty.generated.h"

USTRUCT()
struct FSBZoneEnvTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEnvironmentType> EnvType;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> StateTagNameList;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBEffectDataList> StateEffectList;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBZoneEventDataList> StateZoneEventList;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> StateConditionGroupList;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> StateRewardGroupList;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> StateCasterShowPathList;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> StateProgressCountList;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> StateProgressChangeTagNameList;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemBucketType> RewardSpawnBucketType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemOverrideSaveType> RewardOverrideSaveType;
    
    UPROPERTY(EditAnywhere)
    FString RewardSpawnFormationAsset;
    
    UPROPERTY(EditAnywhere)
    FString EnvObjectMaterial;
    
    UPROPERTY(EditAnywhere)
    bool bUseAutoActivateCamp;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ActiveEnterEvents;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ActiveLeaveEvents;
    
    UPROPERTY(EditAnywhere)
    TArray<float> ProgressMaxValue;
    
    UPROPERTY(EditAnywhere)
    TArray<bool> bProgressAlwaysUpdates;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBZoneEnvProgressNotifyInfo> ProgressNotifyEventList;
    
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
    bool bForceFoldInteraction;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneCampType> CampType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneCampObjectType> CampObjectType;
    
    UPROPERTY(EditAnywhere)
    FString PuzzleCompareData;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBPuzzleDataType> PuzzleDataType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEquation> PuzzleEq;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBScanDisplayType> ScanDisplayType;
    
    UPROPERTY(EditAnywhere)
    float NikkeGoodsDetectDistance_Max;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> NikkeDefenseArea_EnemyEnter_Events;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> NikkeDefenseArea_EnemyEmpty_Events;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBZoneEnvTableProperty();
};

