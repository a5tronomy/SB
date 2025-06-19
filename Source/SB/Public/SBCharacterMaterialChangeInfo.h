#pragma once
#include "CoreMinimal.h"
#include "SBCharacterMaterialChangeInfo.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FSBCharacterMaterialChangeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 MaterialIndex;
    
    UPROPERTY(Transient)
    int32 MeshIndex;
    
    UPROPERTY(Transient)
    UMaterialInterface* ChangeMaterial;
    
    UPROPERTY(Transient)
    float CurrentDuration;
    
    UPROPERTY(Transient)
    float Duration;
    
    UPROPERTY(Transient)
    int32 RemainLoopCount;
    
    SB_API FSBCharacterMaterialChangeInfo();
};

