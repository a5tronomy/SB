#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CollisionMasterMeshDataBase.h"
#include "PlanarMasterMeshData.generated.h"

USTRUCT(BlueprintType)
struct FPlanarMasterMeshData : public FCollisionMasterMeshDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPlane Plane;
    
    KAWAIIPHYSICS_API FPlanarMasterMeshData();
};

