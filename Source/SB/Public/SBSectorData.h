#pragma once
#include "CoreMinimal.h"
#include "SBSectorObjectLayerData.h"
#include "SBSectorData.generated.h"

class USBMapObjectResourceMap;

USTRUCT(BlueprintType)
struct FSBSectorData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 SectorX;
    
    UPROPERTY(EditAnywhere)
    int32 SectorY;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBSectorObjectLayerData> ObjectLayerList;
    
    UPROPERTY(EditAnywhere)
    TArray<USBMapObjectResourceMap*> ResourceMapList;
    
    SB_API FSBSectorData();
};

