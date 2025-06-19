#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SBZoneEventActor_RestoreChunkInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBZoneEventActor_RestoreChunkInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bVisible;
    
    UPROPERTY(EditAnywhere)
    bool bDynamic;
    
    UPROPERTY(EditAnywhere)
    FVector Location;
    
    UPROPERTY(EditAnywhere)
    FRotator Rotation;
    
    SB_API FSBZoneEventActor_RestoreChunkInfo();
};

