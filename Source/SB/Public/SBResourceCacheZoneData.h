#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "SBResourceCacheZoneData.generated.h"

UCLASS()
class USBResourceCacheZoneData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FName, FName> ZoneMerges;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ExclusiveZoneAliases;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FVector> ZoneBoundPadOverrides;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FVector> ZoneBoundOriginOverrides;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FVector> ZoneBoundExtentOverrides;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FVector> ZoneBoundScaleOnExtraSprit;
    
    USBResourceCacheZoneData();

};

