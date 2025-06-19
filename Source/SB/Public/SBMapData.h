#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBSectorData.h"
#include "SBMapData.generated.h"

UCLASS()
class SB_API USBMapData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSBSectorData> SectorDataLists;
    
    USBMapData();

};

