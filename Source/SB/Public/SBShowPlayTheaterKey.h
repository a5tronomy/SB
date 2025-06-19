#pragma once
#include "CoreMinimal.h"
#include "SBShowKey.h"
#include "SBShowPlayTheaterKey.generated.h"

class USBTheaterData;

UCLASS(EditInlineNew)
class SB_API USBShowPlayTheaterKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY()
    USBTheaterData* TheaterData;
    
    UPROPERTY(EditAnywhere)
    FString TheaterAssetPath;
    
    UPROPERTY(EditAnywhere)
    bool bPlayerOnly;
    
    USBShowPlayTheaterKey();

};

