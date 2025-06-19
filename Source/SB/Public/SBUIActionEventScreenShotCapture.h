#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventScreenShotCapture.generated.h"

USTRUCT()
struct FSBUIActionEventScreenShotCapture : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bScreenCaptureResult;
    
    UPROPERTY()
    bool bSaveResult;
    
    UPROPERTY()
    FString Path;
    
    UPROPERTY()
    int32 Width;
    
    UPROPERTY()
    int32 Height;
    
    SB_API FSBUIActionEventScreenShotCapture();
};

