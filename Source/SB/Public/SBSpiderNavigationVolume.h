#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Volume.h"
#include "SBSpiderNavigationVolume.generated.h"

class AActor;
class ASBSpiderNavigationVolume_Invalid;
class ASBSpiderNavigationVolume_Point;
class USBSpiderNavigationDataAsset;

UCLASS()
class SB_API ASBSpiderNavigationVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(EditAnywhere)
    TArray<TWeakObjectPtr<ASBSpiderNavigationVolume_Invalid>> InvalidPlaceVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDebug_ShowNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDebug_ShowNeighbors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GridStepSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TracerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BounceNavigationDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TraceDistanceModificator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ClosePointsFilterModificator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ConnectionSphereRadiusModificator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TraceDistanceForEdgesModificator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EgdeDeviationModificator;
    
protected:
    UPROPERTY(Transient)
    FVector VolumeStartLocation;
    
    UPROPERTY(Transient)
    FVector VolumeEndLocation;
    
    UPROPERTY(Transient)
    FIntVector VolumeLength;
    
    UPROPERTY(Transient)
    int32 IDAllocator;
    
    UPROPERTY(Transient)
    TArray<FVector> TracerLocations;
    
    UPROPERTY(Transient)
    TArray<ASBSpiderNavigationVolume_Point*> NavigationVolumePoints;
    
    UPROPERTY(Transient)
    USBSpiderNavigationDataAsset* NavigationDataAsset;
    
    UPROPERTY(Transient)
    TMap<int32, int32> NavigationDataIndex;
    
public:
    ASBSpiderNavigationVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SaveGrid();
    
private:
    UFUNCTION()
    void OnEndOverlapActor(AActor* Overlapped, AActor* Other);
    
    UFUNCTION()
    void OnBeginOverlapActor(AActor* Overlapped, AActor* Other);
    
public:
    UFUNCTION(BlueprintCallable)
    void DrawDebugRelations(float InShowDuration);
    
    UFUNCTION(BlueprintCallable)
    bool BuildGrid(bool bForceBuild);
    
};

