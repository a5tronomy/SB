#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "ESBItemRarityType.h"
#include "SBUIItemSettingsData.generated.h"

UCLASS(BlueprintType)
class SB_API USBUIItemSettingsData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FColor colorCommon;
    
    UPROPERTY(EditAnywhere)
    FColor colorUncommon;
    
    UPROPERTY(EditAnywhere)
    FColor colorRare;
    
    UPROPERTY(EditAnywhere)
    FColor colorEpic;
    
    UPROPERTY(EditAnywhere)
    FColor colorLegendary;
    
    USBUIItemSettingsData();

    UFUNCTION(BlueprintCallable)
    FColor GetRarityColor(TEnumAsByte<ESBItemRarityType> InType);
    
};

