#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SpiderNavigationPointData.generated.h"

USTRUCT(BlueprintType)
struct FSpiderNavigationPointData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 ID;
    
    UPROPERTY(VisibleAnywhere)
    FVector Location;
    
    UPROPERTY(VisibleAnywhere)
    FVector Normal;
    
    UPROPERTY(VisibleAnywhere)
    TArray<int32> NeighborsID;
    
    SB_API FSpiderNavigationPointData();
};

