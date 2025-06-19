#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CollisionMasterMeshDataBase.generated.h"

USTRUCT(BlueprintType)
struct FCollisionMasterMeshDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MasterMeshBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector OffsetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator OffsetRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat Rotation;
    
    UPROPERTY(VisibleAnywhere)
    FGuid Guid;
    
    KAWAIIPHYSICS_API FCollisionMasterMeshDataBase();
};

