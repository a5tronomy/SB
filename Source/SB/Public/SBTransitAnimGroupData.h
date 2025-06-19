#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBTransitAnimGroup.h"
#include "SBTransitAnimGroupData.generated.h"

UCLASS()
class USBTransitAnimGroupData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FName, FSBTransitAnimGroup> TransitAnimGroupMap;
    
    USBTransitAnimGroupData();

};

