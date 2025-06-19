#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_AnimDynamics.h"
#include "CollisionMasterMeshDataBase.h"
#include "SphericalMasterMeshData.generated.h"

USTRUCT(BlueprintType)
struct FSphericalMasterMeshData : public FCollisionMasterMeshDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESphericalLimitType LimitType;
    
    KAWAIIPHYSICS_API FSphericalMasterMeshData();
};

