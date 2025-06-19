#pragma once
#include "CoreMinimal.h"
#include "SBShowKey.h"
#include "SBShowMeshVertexShakeKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowMeshVertexShakeKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ShakePower;
    
    UPROPERTY(EditAnywhere)
    float ShakeTime;
    
    UPROPERTY(EditAnywhere)
    float ShakeInterval;
    
    UPROPERTY(EditAnywhere)
    float ShakeRadius;
    
    UPROPERTY(EditAnywhere)
    float ShakeFallOff;
    
    UPROPERTY(EditAnywhere)
    bool bDrawDebugSphere;
    
    USBShowMeshVertexShakeKey();

};

