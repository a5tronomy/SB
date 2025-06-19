#pragma once
#include "CoreMinimal.h"
#include "ESBItemRarityType.h"
#include "ESBUIEquipSlotType.h"
#include "ESBUIRedDotState.h"
#include "SBGameMenuEquipInvenData.generated.h"

USTRUCT()
struct FSBGameMenuEquipInvenData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText ItemName;
    
    UPROPERTY(EditAnywhere)
    FName ItemAlias;
    
    UPROPERTY(EditAnywhere)
    FString IconAssetPath;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBUIEquipSlotType> SlotType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemRarityType> Rarity;
    
    UPROPERTY(EditAnywhere)
    bool Equiped;
    
    UPROPERTY(EditAnywhere)
    bool ShowCount;
    
    UPROPERTY(EditAnywhere)
    int32 Count;
    
    UPROPERTY(EditAnywhere)
    int32 ChargeCount;
    
    UPROPERTY(EditAnywhere)
    int32 StoreCount;
    
    UPROPERTY(EditAnywhere)
    int32 DataIndex;
    
    UPROPERTY(EditAnywhere)
    int32 EnhanceLevel;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBUIRedDotState> RedDotState;
    
    UPROPERTY(EditAnywhere)
    bool OverrideHide;
    
    UPROPERTY(EditAnywhere)
    bool bFavorites;
    
    SB_API FSBGameMenuEquipInvenData();
};

