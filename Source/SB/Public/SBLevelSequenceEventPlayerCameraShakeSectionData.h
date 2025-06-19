#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SBLevelSequenceEventPlayerCameraShakeSectionData.generated.h"

class UCameraShakeBase;

USTRUCT(BlueprintType)
struct FSBLevelSequenceEventPlayerCameraShakeSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UCameraShakeBase> ShakeClass;
    
    UPROPERTY(EditAnywhere)
    float ShakeInnerRadius;
    
    UPROPERTY(EditAnywhere)
    float ShakeOuterRadius;
    
    UPROPERTY(EditAnywhere)
    float ShakeFallOff;
    
    UPROPERTY(EditAnywhere)
    bool bOrientShakeTowardsEpicenter;
    
    UPROPERTY(EditAnywhere)
    float ShakeScale;
    
    UPROPERTY(EditAnywhere)
    bool bCheckCameraVolume;
    
    SB_API FSBLevelSequenceEventPlayerCameraShakeSectionData();
};

