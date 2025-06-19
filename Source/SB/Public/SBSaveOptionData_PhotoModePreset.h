#pragma once
#include "CoreMinimal.h"
#include "ESBPhotoModeCameraType.h"
#include "SBSaveOptionData_PhotoModePresetMode.h"
#include "SBSaveOptionData_PhotoModePreset.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveOptionData_PhotoModePreset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<TEnumAsByte<ESBPhotoModeCameraType>, FSBSaveOptionData_PhotoModePresetMode> PresetModes;
    
    SB_API FSBSaveOptionData_PhotoModePreset();
};

