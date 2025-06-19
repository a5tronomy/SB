#pragma once
#include "CoreMinimal.h"
#include "SBMapSectorID.generated.h"

USTRUCT(BlueprintType)
struct FSBMapSectorID {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 SectorIDX;
    
    UPROPERTY(EditAnywhere)
    int32 SectorIDY;
    
    SB_API FSBMapSectorID();
};

