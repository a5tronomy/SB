#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBItemAssetData.generated.h"

class USBShowData;

UCLASS()
class SB_API USBItemAssetData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    uint32 Version;
    
    UPROPERTY(EditAnywhere)
    USBShowData* SpawnCommon;
    
    UPROPERTY(EditAnywhere)
    USBShowData* SpawnUncommon;
    
    UPROPERTY(EditAnywhere)
    USBShowData* SpawnRare;
    
    UPROPERTY(EditAnywhere)
    USBShowData* SpawnEpic;
    
    UPROPERTY(EditAnywhere)
    USBShowData* SpawnLegendary;
    
    USBItemAssetData();

};

