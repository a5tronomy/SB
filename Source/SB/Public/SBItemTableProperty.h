#pragma once
#include "CoreMinimal.h"
#include "ESBActorStatType.h"
#include "ESBCharacterLevelType.h"
#include "ESBEquipType.h"
#include "ESBItemCategory.h"
#include "ESBItemNotificationType.h"
#include "ESBItemRarityType.h"
#include "ESBItemSaveType.h"
#include "ESBScanDisplayType.h"
#include "SBTablePropertyBase.h"
#include "SBItemTableProperty.generated.h"

USTRUCT()
struct FSBItemTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName InventoryAlias;
    
    UPROPERTY(EditAnywhere)
    uint32 InventoryPriority;
    
    UPROPERTY(EditAnywhere)
    FString NamePlural;
    
    UPROPERTY(EditAnywhere)
    FString Name;
    
    UPROPERTY(EditAnywhere)
    FString Desc;
    
    UPROPERTY(EditAnywhere)
    FString DescFunction;
    
    UPROPERTY(EditAnywhere)
    FString DescContent;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemCategory> Category;
    
    UPROPERTY(EditAnywhere)
    FName CategoryTag;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemRarityType> Rarity;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemSaveType> SaveType;
    
    UPROPERTY(EditAnywhere)
    bool IncludeDropPool;
    
    UPROPERTY(EditAnywhere)
    int32 StackAmount;
    
    UPROPERTY(EditAnywhere)
    int32 MaxAmount;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorStatType> MaxAmountOverrideActorStat;
    
    UPROPERTY(EditAnywhere)
    int32 ChargeCount;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorStatType> ChargeOverrideActorStat;
    
    UPROPERTY(EditAnywhere)
    bool AbleBroken;
    
    UPROPERTY(EditAnywhere)
    bool AblePrice;
    
    UPROPERTY(EditAnywhere)
    bool AbleDrop;
    
    UPROPERTY(EditAnywhere)
    int32 RequireLevel;
    
    UPROPERTY(EditAnywhere)
    FString StudioAsset3D;
    
    UPROPERTY(EditAnywhere)
    FString Asset3D;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> Asset3DArg;
    
    UPROPERTY(EditAnywhere)
    float AssetZOffset;
    
    UPROPERTY(EditAnywhere)
    float Asset3DScale;
    
    UPROPERTY(EditAnywhere)
    FString Asset2D;
    
    UPROPERTY(EditAnywhere)
    FString AlbumAsset2D;
    
    UPROPERTY(EditAnywhere)
    FString SpecialRewardAsset2D;
    
    UPROPERTY(EditAnywhere)
    bool FastNotifySpecialReward;
    
    UPROPERTY(EditAnywhere)
    FString GainAllowShowPath;
    
    UPROPERTY(EditAnywhere)
    FString AfterGainShowPath;
    
    UPROPERTY(EditAnywhere)
    FName AfterGainShowParam;
    
    UPROPERTY(EditAnywhere)
    float ActorBlockTime;
    
    UPROPERTY(EditAnywhere)
    bool InteractionImmidateUse;
    
    UPROPERTY(EditAnywhere)
    float InteractionDist;
    
    UPROPERTY(EditAnywhere)
    bool AutoInteraction;
    
    UPROPERTY(EditAnywhere)
    float AutoInteractionDist;
    
    UPROPERTY(EditAnywhere)
    FName EquipableAlias;
    
    UPROPERTY(EditAnywhere)
    FName ConsumableAlias;
    
    UPROPERTY(EditAnywhere)
    FName SkillEquipableAlias;
    
    UPROPERTY(EditAnywhere)
    FName EquipmentAlias;
    
    UPROPERTY(EditAnywhere)
    FName EquipmentAlias2;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<ESBEquipType>> ApplyEquipType;
    
    UPROPERTY(EditAnywhere)
    FName BulletAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBCharacterLevelType> AutoCharacterLevelUpType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemNotificationType> NotiType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBScanDisplayType> ScanDisplayType;
    
    UPROPERTY(EditAnywhere)
    FName ScanDisplayGroup;
    
    UPROPERTY(EditAnywhere)
    float WeightMin;
    
    UPROPERTY(EditAnywhere)
    float WeightMax;
    
    UPROPERTY(EditAnywhere)
    FName LureAlias;
    
    UPROPERTY(EditAnywhere)
    bool bMaintainNewGamePlus;
    
    UPROPERTY(EditAnywhere)
    uint32 MaintainMaxAmountForFirstNewGamePlus;
    
    UPROPERTY(EditAnywhere)
    FName ValidConditionGroup;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBItemTableProperty();
};

