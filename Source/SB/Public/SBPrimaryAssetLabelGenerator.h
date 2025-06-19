#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBPrimaryAssetLabelInfo.h"
#include "SBPrimaryAssetLabelGenerator.generated.h"

UCLASS()
class SB_API USBPrimaryAssetLabelGenerator : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSBPrimaryAssetLabelInfo> PrimaryAssetLabelInfoArray;
    
    UPROPERTY(EditAnywhere)
    int32 ChunkCount;
    
    USBPrimaryAssetLabelGenerator();

};

