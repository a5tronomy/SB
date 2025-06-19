#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SBDeveloperSettings.generated.h"

UCLASS(Config=EditorPerProjectUserSettings)
class SB_API USBDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    uint8 bDisableNiagara: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bUseCharacterResourceCacheData: 1;
    
    USBDeveloperSettings();

};

