#pragma once
#include "CoreMinimal.h"
#include "MaterialParamID.generated.h"

USTRUCT(BlueprintType)
struct FMaterialParamID {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 MaterialIndex;
    
    UPROPERTY(Transient)
    int32 MeshSlotIndex;
    
    UPROPERTY(Transient)
    FName Name;
    
    SB_API FMaterialParamID();
};
FORCEINLINE uint32 GetTypeHash(const FMaterialParamID) { return 0; }

