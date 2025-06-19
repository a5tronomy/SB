#pragma once
#include "CoreMinimal.h"
#include "ESBItemCategory.h"
#include "ESBItemRarityType.h"
#include "ESBRewardGiveType.h"
#include "ESBRewardGroupDropType.h"
#include "ESBRewardUIType.h"
#include "SBTablePropertyBase.h"
#include "SBRewardGroupTableProperty.generated.h"

USTRUCT()
struct FSBRewardGroupTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName Group;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBRewardGiveType> GiveType;
    
    UPROPERTY(EditAnywhere)
    bool MustAcquisition;
    
    UPROPERTY(EditAnywhere)
    FName GroupAlias;
    
    UPROPERTY(EditAnywhere)
    FName ItemAlias;
    
    UPROPERTY(EditAnywhere)
    FName ItemVisualAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemCategory> ItemCategory;
    
    UPROPERTY(EditAnywhere)
    FName ItemCategoryTag;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemRarityType> ItemRarity;
    
    UPROPERTY(EditAnywhere)
    FName ConditionGroup;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBRewardGroupDropType> DropType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemRarityType> DropRateRarity;
    
    UPROPERTY(EditAnywhere)
    int32 DropRate;
    
    UPROPERTY(EditAnywhere)
    int32 ItemMinCount;
    
    UPROPERTY(EditAnywhere)
    int32 ItemMaxCount;
    
    UPROPERTY(EditAnywhere)
    bool StatParentDependency;
    
    UPROPERTY(EditAnywhere)
    int32 ItemStatLevelMin;
    
    UPROPERTY(EditAnywhere)
    int32 ItemStatLevelMax;
    
    UPROPERTY(EditAnywhere)
    int32 OverrideInteractionTime;
    
    UPROPERTY(EditAnywhere)
    ESBRewardUIType RewardUIType;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBRewardGroupTableProperty();
};

