#pragma once
#include "CoreMinimal.h"
#include "SBSaveOptionData_PhotoModeEyeTrackingData.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveOptionData_PhotoModeEyeTrackingData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEVE;
    
    UPROPERTY(EditAnywhere)
    float EVE_EyeRL;
    
    UPROPERTY(EditAnywhere)
    float EVE_EyeUD;
    
    UPROPERTY(EditAnywhere)
    bool bLily;
    
    UPROPERTY(EditAnywhere)
    float Lily_EyeRL;
    
    UPROPERTY(EditAnywhere)
    float Lily_EyeUD;
    
    UPROPERTY(EditAnywhere)
    bool bAdam;
    
    UPROPERTY(EditAnywhere)
    float Adam_EyeRL;
    
    UPROPERTY(EditAnywhere)
    float Adam_EyeUD;
    
    SB_API FSBSaveOptionData_PhotoModeEyeTrackingData();
};

