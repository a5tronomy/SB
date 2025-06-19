#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBTheaterData.generated.h"

class USBTheaterTakeData;

UCLASS()
class SB_API USBTheaterData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    uint32 Version;
    
    UPROPERTY()
    int32 Priority;
    
    UPROPERTY(EditAnywhere)
    bool bAllowDuplicatePlay;
    
    UPROPERTY(EditAnywhere)
    bool bRandomTakeStart;
    
    UPROPERTY(EditAnywhere)
    bool bUseRegionFunc_JP;
    
    UPROPERTY(EditAnywhere)
    bool bUseTransitTake;
    
    UPROPERTY(EditAnywhere)
    bool bUseTransitTakeCommonSet;
    
    UPROPERTY(Instanced)
    USBTheaterTakeData* TransitTakeData;
    
    UPROPERTY(Instanced)
    TArray<USBTheaterTakeData*> TakeArray;
    
    UPROPERTY()
    int32 RootTakeUID;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> CommonAttachActorTagNames;
    
    USBTheaterData();

};

