#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "StreamlineSettings.generated.h"

UCLASS(Config = Engine)
class STREAMLINERHI_API UStreamlineSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool bEnableStreamlineD3D12;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableStreamlineD3D11;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableDLSSFGInPlayInEditorViewports;
    
    UPROPERTY(Config, EditAnywhere)
    bool bLoadDebugOverlay;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAllowOTAUpdate;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 NVIDIANGXApplicationId;
    
    UStreamlineSettings();

};

