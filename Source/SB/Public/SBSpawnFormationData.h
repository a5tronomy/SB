#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBSpawnLocationInfo.h"
#include "SBSpawnFormationData.generated.h"

UCLASS()
class SB_API USBSpawnFormationData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSBSpawnLocationInfo> FormationLocationInfos;
    
    USBSpawnFormationData();

};

