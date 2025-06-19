#pragma once
#include "CoreMinimal.h"
#include "ESBUIRedDotState.h"
#include "SBHairSalonItemData.generated.h"

USTRUCT(BlueprintType)
struct FSBHairSalonItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Index;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ShopItemAlias;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ItemAlias;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText ItemName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString IconAssetPath;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool Purchased;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool Equiped;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBUIRedDotState> RedDotState;
    
    UPROPERTY(EditAnywhere)
    bool bAddedByFriendShipLevelUp;
    
    UPROPERTY(EditAnywhere)
    bool bNeedPlayAddGoods;
    
    SB_API FSBHairSalonItemData();
};

