#pragma once
#include "CoreMinimal.h"
#include "MaterialChangeID.generated.h"

USTRUCT(BlueprintType)
struct FMaterialChangeID {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 MaterialIndex;
    
    UPROPERTY(Transient)
    int32 MeshIndex;
    
    SB_API FMaterialChangeID();
};
FORCEINLINE uint32 GetTypeHash(const FMaterialChangeID) { return 0; }

