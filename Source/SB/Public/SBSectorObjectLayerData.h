#pragma once
#include "CoreMinimal.h"
#include "SBSectorObjectInfoData.h"
#include "SBSectorObjectLayerData.generated.h"

USTRUCT(BlueprintType)
struct FSBSectorObjectLayerData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSBSectorObjectInfoData> ObjectLists;
    
    SB_API FSBSectorObjectLayerData();
};

