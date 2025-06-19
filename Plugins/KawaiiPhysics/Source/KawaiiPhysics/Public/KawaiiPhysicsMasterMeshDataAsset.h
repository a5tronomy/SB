#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "CapsuleLimit.h"
#include "PlanarLimit.h"
#include "SphericalLimit.h"
#include "KawaiiPhysicsMasterMeshDataAsset.generated.h"

UCLASS()
class KAWAIIPHYSICS_API UKawaiiPhysicsMasterMeshDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName AttachBoneNameToMasterMesh;
    
    UPROPERTY(EditAnywhere)
    FTransform AttachTransformToMasterMesh;
    
    UPROPERTY()
    TArray<FSphericalLimit> SphericalLimits;
    
    UPROPERTY()
    TArray<FCapsuleLimit> CapsuleLimits;
    
    UPROPERTY()
    TArray<FPlanarLimit> PlanarLimits;
    
    UKawaiiPhysicsMasterMeshDataAsset();

};

