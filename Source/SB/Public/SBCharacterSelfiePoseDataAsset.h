#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBCharacterSelfiePoseData.h"
#include "SBCharacterSelfiePoseDataAsset.generated.h"

UCLASS()
class USBCharacterSelfiePoseDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSBCharacterSelfiePoseData> SelfiePoseDataAray;
    
    USBCharacterSelfiePoseDataAsset();

};

