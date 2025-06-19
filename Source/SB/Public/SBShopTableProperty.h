#pragma once
#include "CoreMinimal.h"
#include "ESBSequencerSubtitleType.h"
#include "SBTablePropertyBase.h"
#include "SBShopTableProperty.generated.h"

USTRUCT()
struct FSBShopTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 ID;
    
    UPROPERTY()
    bool UnionLimitedItem;
    
    UPROPERTY(EditAnywhere)
    FName ConditionGroup_ApplyDiscount;
    
    UPROPERTY(EditAnywhere)
    FName CurrencyItemAlias;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> Tags;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ShopItems;
    
    UPROPERTY(EditAnywhere)
    TArray<float> RequiredFriendShipLevelUp;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> FriendShipLevelUpSound;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<ESBSequencerSubtitleType>> FriendShipLevelUpSubtitleType;
    
    UPROPERTY(EditAnywhere)
    TArray<float> FriendShipLevelUpSubtitleDuration;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> FriendShipLevelUpSubtitleTitle;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> FriendShipLevelUpSubtitleMessage;
    
    SB_API FSBShopTableProperty();
};

