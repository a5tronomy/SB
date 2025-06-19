#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBMapObjectResInfoData.h"
#include "SBMapObjectResourceMap.generated.h"

UCLASS(BlueprintType)
class SB_API USBMapObjectResourceMap : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSBMapObjectResInfoData> Objects;
    
    UPROPERTY(EditAnywhere)
    int32 ObjectBoundValue;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<int32> HighDensityObjIndices;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<int32> MidDensityObjIndices;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<int32> LowDensityObjIndices;
    
    USBMapObjectResourceMap();

};

