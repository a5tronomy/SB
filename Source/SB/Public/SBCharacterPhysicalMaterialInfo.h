#pragma once
#include "CoreMinimal.h"
#include "SBCharacterPhysicalMaterialInfo.generated.h"

class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct SB_API FSBCharacterPhysicalMaterialInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName CollisionGroupName;
    
    UPROPERTY(EditAnywhere)
    UPhysicalMaterial* PhysicalMaterial;
    
    FSBCharacterPhysicalMaterialInfo();
};

