#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SpiderNavigationDataHeader.generated.h"

USTRUCT(BlueprintType)
struct FSpiderNavigationDataHeader {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 Version;
    
    UPROPERTY(VisibleAnywhere)
    float GridStepSize;
    
    UPROPERTY(VisibleAnywhere)
    float TracerRadius;
    
    UPROPERTY(VisibleAnywhere)
    float BounceNavigationDistance;
    
    UPROPERTY(VisibleAnywhere)
    float TraceDistanceModificator;
    
    UPROPERTY(VisibleAnywhere)
    float ClosePointsFilterModificator;
    
    UPROPERTY(VisibleAnywhere)
    float ConnectionSphereRadiusModificator;
    
    UPROPERTY(VisibleAnywhere)
    float TraceDistanceForEdgesModificator;
    
    UPROPERTY(VisibleAnywhere)
    float EgdeDeviationModificator;
    
    UPROPERTY(VisibleAnywhere)
    FTransform Transform;
    
    UPROPERTY(VisibleAnywhere)
    FVector VolumeStartLocation;
    
    UPROPERTY(VisibleAnywhere)
    FVector VolumeEndLocation;
    
    UPROPERTY(VisibleAnywhere)
    FIntVector VolumeLength;
    
    UPROPERTY(VisibleAnywhere)
    TArray<uint32> InvalidPlaceVolumeUniqueIDs;
    
    SB_API FSpiderNavigationDataHeader();
};

