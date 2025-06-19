#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Volume.h"
#include "SBMapSectorID.h"
#include "SBCharacterSwimForceVolume.generated.h"

UCLASS()
class SB_API ASBCharacterSwimForceVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector ForceDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ForceValue;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FSBMapSectorID SectorID;
    
    UPROPERTY(Transient)
    FVector LevelObjOrigin;
    
    UPROPERTY(Transient)
    FVector LevelObjExtent;
    
    ASBCharacterSwimForceVolume(const FObjectInitializer& ObjectInitializer);

};

