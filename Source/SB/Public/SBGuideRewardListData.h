#pragma once
#include "CoreMinimal.h"
#include "ESBItemRarityType.h"
#include "SBGuideRewardListData.generated.h"

USTRUCT()
struct FSBGuideRewardListData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText ItemName;
    
    UPROPERTY(EditAnywhere)
    int32 ItemCount;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemRarityType> Rarity;
    
    UPROPERTY(EditAnywhere)
    FString IconAssetPath;
    
    UPROPERTY(EditAnywhere)
    bool Core;
    
    UPROPERTY(EditAnywhere)
    FName ItemAlias;
    
    SB_API FSBGuideRewardListData();
};

