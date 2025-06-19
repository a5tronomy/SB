#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EStreamlineSettingOverride.h"
#include "StreamlineOverrideSettings.generated.h"

UCLASS(Config = Game)
class STREAMLINERHI_API UStreamlineOverrideSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    EStreamlineSettingOverride EnableDLSSFGInPlayInEditorViewportsOverride;
    
    UPROPERTY(Config, EditAnywhere)
    EStreamlineSettingOverride LoadDebugOverlayOverride;
    
    UStreamlineOverrideSettings();

};

