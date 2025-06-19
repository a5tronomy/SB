#pragma once
#include "CoreMinimal.h"
#include "CollisionMasterMeshDataBase.h"
#include "CapsuleMasterMeshData.generated.h"

USTRUCT(BlueprintType)
struct FCapsuleMasterMeshData : public FCollisionMasterMeshDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Length;
    
    KAWAIIPHYSICS_API FCapsuleMasterMeshData();
};

