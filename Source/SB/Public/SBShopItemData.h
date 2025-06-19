#pragma once
#include "CoreMinimal.h"
#include "ESBItemRarityType.h"
#include "ESBUIRedDotState.h"
#include "SBShopItemData.generated.h"

USTRUCT()
struct FSBShopItemData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText ItemName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemRarityType> Rarity;
    
    UPROPERTY(EditAnywhere)
    FString IconAssetPath;
    
    UPROPERTY(EditAnywhere)
    int32 LimitedCount;
    
    UPROPERTY(EditAnywhere)
    int32 RemainCount;
    
    UPROPERTY(EditAnywhere)
    bool IsDiscount;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBUIRedDotState> RedDotState;
    
    UPROPERTY(EditAnywhere)
    FName MoneyItemAlias1;
    
    UPROPERTY(EditAnywhere)
    FName MoneyItemAlias2;
    
    UPROPERTY(EditAnywhere)
    FName MoneyItemAlias3;
    
    UPROPERTY(EditAnywhere)
    FName MoneyItemAlias4;
    
    UPROPERTY(EditAnywhere)
    bool bAddedByFriendShipLevelUp;
    
    UPROPERTY(EditAnywhere)
    bool bNeedPlayAddGoods;
    
    SB_API FSBShopItemData();
};

