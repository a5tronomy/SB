#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Volume.h"
#include "SBMapSectorID.h"
#include "SBFishingVolume.generated.h"

UCLASS()
class SB_API ASBFishingVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Priority;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FSBMapSectorID SectorID;
    
    UPROPERTY(EditAnywhere)
    FName RewardGroup;
    
    UPROPERTY(Transient)
    FVector LevelObjOrigin;
    
    UPROPERTY(Transient)
    FVector LevelObjExtent;
    
    ASBFishingVolume(const FObjectInitializer& ObjectInitializer);

};

