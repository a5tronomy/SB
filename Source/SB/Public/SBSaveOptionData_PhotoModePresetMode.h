#pragma once
#include "CoreMinimal.h"
#include "SBSaveOptionData_PhotoModePresetSlot.h"
#include "SBSaveOptionData_PhotoModePresetMode.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveOptionData_PhotoModePresetMode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSBSaveOptionData_PhotoModePresetSlot> PresetSlots;
    
    SB_API FSBSaveOptionData_PhotoModePresetMode();
};

