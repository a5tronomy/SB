#pragma once
#include "CoreMinimal.h"
#include "ESBPhotoModeOptionType.h"
#include "SBSaveOptionData_PhotoModeEyeTrackingData.h"
#include "SBSaveOptionData_PhotoModePresetLight.h"
#include "SBSaveOptionData_PhotoModePresetLogo.h"
#include "SBSaveOptionData_PhotoModePresetSlot.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveOptionData_PhotoModePresetSlot {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 SlotIndex;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, int32> IntValues;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, float> FloatValues;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBSaveOptionData_PhotoModePresetLight> LightDataArray;
    
    UPROPERTY(EditAnywhere)
    TMap<TEnumAsByte<ESBPhotoModeOptionType>, FSBSaveOptionData_PhotoModePresetLogo> LogoDataMap;
    
    UPROPERTY(EditAnywhere)
    FSBSaveOptionData_PhotoModeEyeTrackingData EyeTrackingData;
    
    SB_API FSBSaveOptionData_PhotoModePresetSlot();
};

