#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Volume.h"
#include "SBMapSectorID.h"
#include "SBRegionVolume.generated.h"

UCLASS()
class SB_API ASBRegionVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Priority;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FSBMapSectorID SectorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText MainText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText SubText;
    
    UPROPERTY(Transient)
    FVector LevelObjOrigin;
    
    UPROPERTY(Transient)
    FVector LevelObjExtent;
    
    ASBRegionVolume(const FObjectInitializer& ObjectInitializer);

};

