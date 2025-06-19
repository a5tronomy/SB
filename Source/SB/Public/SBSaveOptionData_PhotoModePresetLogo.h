#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBSaveOptionData_PhotoModePresetLogo.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveOptionData_PhotoModePresetLogo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector2D Location;
    
    UPROPERTY(EditAnywhere)
    float angle;
    
    UPROPERTY(EditAnywhere)
    FVector2D Size;
    
    SB_API FSBSaveOptionData_PhotoModePresetLogo();
};

