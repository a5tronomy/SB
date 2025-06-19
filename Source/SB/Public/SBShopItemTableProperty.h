#pragma once
#include "CoreMinimal.h"
#include "ESBShopType.h"
#include "SBTablePropertyBase.h"
#include "SBShopItemTableProperty.generated.h"

USTRUCT()
struct FSBShopItemTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShopType> ShopType;
    
    UPROPERTY(EditAnywhere)
    FName ItemAlias;
    
    UPROPERTY(EditAnywhere)
    FName NanosuitAliasForRecipe;
    
    UPROPERTY(EditAnywhere)
    int32 LimitedCount;
    
    UPROPERTY(EditAnywhere)
    FName MoneyItemAlias1;
    
    UPROPERTY(EditAnywhere)
    int32 MoneyItemCount1;
    
    UPROPERTY(EditAnywhere)
    int32 Discount_MoneyItemCount1;
    
    UPROPERTY(EditAnywhere)
    FName MoneyItemAlias2;
    
    UPROPERTY(EditAnywhere)
    int32 MoneyItemCount2;
    
    UPROPERTY(EditAnywhere)
    int32 Discount_MoneyItemCount2;
    
    UPROPERTY(EditAnywhere)
    FName MoneyItemAlias3;
    
    UPROPERTY(EditAnywhere)
    int32 MoneyItemCount3;
    
    UPROPERTY(EditAnywhere)
    int32 Discount_MoneyItemCount3;
    
    UPROPERTY(EditAnywhere)
    FName MoneyItemAlias4;
    
    UPROPERTY(EditAnywhere)
    int32 MoneyItemCount4;
    
    UPROPERTY(EditAnywhere)
    int32 Discount_MoneyItemCount4;
    
    UPROPERTY(EditAnywhere)
    FName CheckAchievement;
    
    UPROPERTY(EditAnywhere)
    FName CheckCondition;
    
    UPROPERTY(EditAnywhere)
    FName CheckConditionGroup;
    
    UPROPERTY(EditAnywhere)
    FName LinkedShopItemAlias;
    
    UPROPERTY(EditAnywhere)
    bool ForceDirtyRedDot;
    
    UPROPERTY(EditAnywhere)
    float FriendShip;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBShopItemTableProperty();
};

