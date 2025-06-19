#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "SBFootStepSetInfo.h"
#include "SBCharacterFootStepSet.generated.h"

UCLASS()
class SB_API USBCharacterFootStepSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FName, FSBFootStepSetInfo> FootStepInfo;
    
    UPROPERTY(EditAnywhere)
    float MinWaterDepth;
    
    UPROPERTY(EditAnywhere)
    float TraceZLength;
    
    UPROPERTY(EditAnywhere)
    float TraceStartZSubLength;
    
    UPROPERTY(EditAnywhere)
    bool bUseCharacterParticleScale;
    
    UPROPERTY(EditAnywhere)
    bool bUseParticleSocketPosOnly;
    
    UPROPERTY(EditAnywhere)
    bool bUseDecalSocketPosOnly;
    
    UPROPERTY(EditAnywhere)
    FVector SoundRelativeLocation;
    
    USBCharacterFootStepSet();

};

