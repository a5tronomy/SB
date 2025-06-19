#pragma once
#include "CoreMinimal.h"
#include "ESBItemRarityType.h"
#include "ESBUIRedDotState.h"
#include "SBWorkshopExospineTitleData.generated.h"

USTRUCT()
struct FSBWorkshopExospineTitleData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText title;
    
    UPROPERTY(EditAnywhere)
    int32 StatLevel;
    
    UPROPERTY(EditAnywhere)
    bool bEquip;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBUIRedDotState> RedDotState;
    
    UPROPERTY(EditAnywhere)
    FString IconAssetPath;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemRarityType> Rarity;
    
    SB_API FSBWorkshopExospineTitleData();
};

