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
#include "SBAliasCondition.h"
#include "SBAliasZoneEvent.h"
#include "SBDataNodeBase.h"
#include "SBZoneEnvProgressProperty.h"
#include "SBZoneEnvTagProperty.h"
#include "SBToolDataNode_ZoneEnv.generated.h"

class USBInteractionGraph;
class USBObjectMaterialData;
class USBRewardGroupSpawnFormation;

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_ZoneEnv : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEnvironmentType> EnvType;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBZoneEnvTagProperty> EnvTagProperty;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemBucketType> RewardBucketType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemOverrideSaveType> RewardOverrideSaveType;
    
    UPROPERTY(EditAnywhere)
    USBRewardGroupSpawnFormation* RewardGroupSpawnFormation;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USBObjectMaterialData> EnvObjectMaterial;
    
    UPROPERTY(VisibleAnywhere)
    bool bUseAutoActivateCamp;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBAliasZoneEvent> ActiveEnterEvents;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBAliasZoneEvent> ActiveLeaveEvents;
    
    UPROPERTY(VisibleAnywhere)
    TArray<float> ProgressMaxValue;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBZoneEnvProgressProperty> ProgressInfo;
    
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
    TSoftObjectPtr<USBInteractionGraph> InteractionGraph;
    
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
    TArray<FSBAliasZoneEvent> NikkeDefenseArea_EnemyEnter_Events;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBAliasZoneEvent> NikkeDefenseArea_EnemyEmpty_Events;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    USBToolDataNode_ZoneEnv();

};

