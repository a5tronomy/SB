#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Volume.h"
#include "SBMapSectorID.h"
#include "SBLimitedScanVolume.generated.h"

UCLASS()
class SB_API ASBLimitedScanVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FSBMapSectorID SectorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool bActive;
    
    UPROPERTY(Transient)
    FVector LevelObjOrigin;
    
    UPROPERTY(Transient)
    FVector LevelObjExtent;
    
    ASBLimitedScanVolume(const FObjectInitializer& ObjectInitializer);

};

