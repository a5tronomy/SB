#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SBResetZoneCollisionUpdateInfo.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct FSBResetZoneCollisionUpdateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TEnumAsByte<ECollisionEnabled::Type> RestoreCollisionType;
    
    UPROPERTY(Instanced, Transient)
    UMeshComponent* MeshComponent;
    
    SB_API FSBResetZoneCollisionUpdateInfo();
};

