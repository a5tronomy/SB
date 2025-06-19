#pragma once
#include "CoreMinimal.h"
#include "ESBItemRarityType.h"
#include "ESBUINanoSuitCraftState.h"
#include "ESBUIRedDotState.h"
#include "SBWorkshopNanoSuitTitleData.generated.h"

USTRUCT()
struct FSBWorkshopNanoSuitTitleData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText title;
    
    UPROPERTY(EditAnywhere)
    ESBUINanoSuitCraftState State;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBUIRedDotState> RedDotState;
    
    UPROPERTY(EditAnywhere)
    FString IconAssetPath;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemRarityType> Rarity;
    
    UPROPERTY(EditAnywhere)
    bool bEquip;
    
    SB_API FSBWorkshopNanoSuitTitleData();
};

