#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/PhysicsVolume.h"
#include "ESBWaterVolumeType.h"
#include "SBMapSectorID.h"
#include "SBWaterVolume.generated.h"

class AActor;
class UPhysicalMaterial;

UCLASS()
class SB_API ASBWaterVolume : public APhysicsVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* WaterPlaneActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESBWaterVolumeType> Type;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FSBMapSectorID SectorID;
    
    UPROPERTY(EditAnywhere)
    FName RewardGroup;
    
    UPROPERTY(EditAnywhere)
    UPhysicalMaterial* PhysMaterial;
    
    UPROPERTY(Transient)
    FVector LevelObjOrigin;
    
    UPROPERTY(Transient)
    FVector LevelObjExtent;
    
    ASBWaterVolume(const FObjectInitializer& ObjectInitializer);

};

