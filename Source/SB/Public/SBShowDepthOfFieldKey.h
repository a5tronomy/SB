#pragma once
#include "CoreMinimal.h"
#include "ESBDOFFocalDistanceType.h"
#include "SBPostProcessDepthOfFieldData.h"
#include "SBShowKey.h"
#include "SBShowDepthOfFieldKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowDepthOfFieldKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Priority;
    
    UPROPERTY(EditAnywhere)
    bool bPlayerCharacterOnly;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBDOFFocalDistanceType::Type> DOFFocalDistanceType;
    
    UPROPERTY(EditAnywhere)
    bool bFocalDistanceTargetToMainCharacter;
    
    UPROPERTY(EditAnywhere)
    int32 FocalDistanceTargetIndex;
    
    UPROPERTY(EditAnywhere)
    FSBPostProcessDepthOfFieldData DOFData;
    
    USBShowDepthOfFieldKey();

};

