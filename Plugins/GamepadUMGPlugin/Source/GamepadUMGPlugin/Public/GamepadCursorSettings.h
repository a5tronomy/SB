#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "Curves/CurveFloat.h"
#include "GamepadCursorSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class GAMEPADUMGPLUGIN_API UGamepadCursorSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config, EditAnywhere)
    FRuntimeFloatCurve AnalogCursorAccelerationCurve;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxAnalogCursorSpeed;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxAnalogCursorSpeedWhenHovered;
    
    UPROPERTY(Config, EditAnywhere)
    float AnalogCursorDragCoefficient;
    
    UPROPERTY(Config, EditAnywhere)
    float AnalogCursorDragCoefficientWhenHovered;
    
    UPROPERTY(Config, EditAnywhere)
    float MinAnalogCursorSpeed;
    
    UPROPERTY(Config, EditAnywhere)
    float AnalogCursorDeadZone;
    
    UPROPERTY(Config, EditAnywhere)
    float AnalogCursorAccelerationMultiplier;
    
    UPROPERTY(Config, EditAnywhere)
    float AnalogCursorSize;
    
    UPROPERTY(Config, EditAnywhere)
    bool bUseEngineAnalogCursor;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAnalogCursorNoAcceleration;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath SoftwareCursor;
    
public:
    UGamepadCursorSettings();

};

