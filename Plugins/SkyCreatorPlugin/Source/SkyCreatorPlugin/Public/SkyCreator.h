#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/Scene.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/SkyAtmosphereComponent.h"
#include "ESkyCreatorEditorWeatherType.h"
#include "ESkyCreatorMoonOrbitType.h"
#include "ESkyCreatorStarMapRotationType.h"
#include "ESkyCreatorSunOrbitType.h"
#include "SkyCreatorExponentialHeightFogSettings.h"
#include "SkyCreatorExposureSettings.h"
#include "SkyCreatorMoonLightSettings.h"
#include "SkyCreatorSkyAtmosphereSettings.h"
#include "SkyCreatorSkyLightSettings.h"
#include "SkyCreatorStarMapSettings.h"
#include "SkyCreatorSunLightSettings.h"
#include "SkyCreatorVolumetricCloudMaterials.h"
#include "SkyCreatorVolumetricCloudSettings.h"
#include "SkyCreatorWeatherFXSettings.h"
#include "SkyCreatorWeatherSettings.h"
#include "SkyCreatorWindSettings.h"
#include "SkyCreator.generated.h"

class UBillboardComponent;
class UCurveFloat;
class UDirectionalLightComponent;
class UExponentialHeightFogComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UNiagaraComponent;
class UPostProcessComponent;
class USceneComponent;
class USkyAtmosphereComponent;
class USkyCreatorWeatherPreset;
class USkyLightComponent;
class UStaticMeshComponent;
class UTexture;
class UTexture2D;
class UVolumetricCloudComponent;

UCLASS()
class SKYCREATORPLUGIN_API ASkyCreator : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UBillboardComponent* Billboard;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* Compass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USkyAtmosphereComponent* SkyAtmosphere;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UVolumetricCloudComponent* VolumetricCloud;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USkyLightComponent* SkyLight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UDirectionalLightComponent* SunLight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UDirectionalLightComponent* MoonLight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UExponentialHeightFogComponent* ExponentialHeightFog;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UPostProcessComponent* Exposure;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* StarMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* SunSphere;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* MoonSphere;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UNiagaraComponent* WeatherFX;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* SkySphere;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMaterialInterface* SkySphereMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMaterialInstanceDynamic* SkySphereMID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseEditorTimeOfDay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EditorTimeOfDay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseEditorWeatherSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ESkyCreatorEditorWeatherType> EditorWeatherType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USkyCreatorWeatherPreset* EditorWeatherPreset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSkyCreatorWeatherSettings EditorWeatherSettings;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsEditorTickEnabled;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float SkySphereRadius;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly)
    bool bLightOptimization;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EComponentMobility::Type> SkyAtmosphereMobility;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESkyAtmosphereTransformMode TransformMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PlanetRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AtmosphereHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TraceSampleCountScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LayerBottomAltitude;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LayerHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TracingStartMaxDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TracingMaxDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bPerSampleAtmosphericLightTransmittance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bGroundContribution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MultiScatteringApproximationOctaveCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ViewSampleCountScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ReflectionSampleCountScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ShadowViewSampleCountScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ShadowReflectionSampleCountScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ShadowTracingDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LowCloudMapScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D LowCloudMapOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HighCloudMapScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D HighCloudMapOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HighCloudHorizonFadeHardness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAutoScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ShapeNoiseScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DetailNoiseScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EComponentMobility::Type> SkyLightMobility;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRealTimeCapture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bLowerHemisphereIsSolidColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EComponentMobility::Type> SunLightMobility;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bControlSunDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSunUseTemperature;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SunAngularDiameter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSunConstantAtmosphereDiskColorScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor SunAtmosphereDiskColorScale;
    
    UPROPERTY(BlueprintReadOnly)
    TEnumAsByte<ESkyCreatorSunOrbitType> SunOrbitType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SunriseTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SunsetTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SunDawnOffsetTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SunDuskOffsetTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float SunDawnTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float SunDuskTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SunElevation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SunAzimuth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SunMinAngleAtDawnDusk;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SunFadeInOutTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EComponentMobility::Type> MoonLightMobility;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bControlMoonDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bMoonUseTemperature;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MoonAngularDiameter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bMoonConstantAtmosphereDiskColorScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor MoonAtmosphereDiskColorScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MoonPhase;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MoonRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ESkyCreatorMoonOrbitType> MoonOrbitType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MoonriseTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MoonsetTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MoonElevation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MoonAzimuth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MoonFadeInOutTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EComponentMobility::Type> ExponentialHeightFogMobility;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnableExponentialHeightFog;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bVolumetricFog;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FogHeightOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SecondFogHeightOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* StarMapTexture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ESkyCreatorStarMapRotationType> StarMapRotationType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator StarMapAdditionalRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PrecipitationSpawnRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnableDistantPrecipitation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DistantPrecipitationSpawnRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PrecipitationMaxViewDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PrecipitationVerticalCheckDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ECollisionChannel> PrecipitationCollisionChannel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PrecipitationDepthFadeDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PrecipitationCameraFadeDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PrecipitationCameraFadeOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RainSpawnRateMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RainDistantSpawnRateMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RainDistanceScaleFactor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RainIndexOfRefraction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RainSplashSpawnRateMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SnowSpawnRateMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SnowDistantSpawnRateMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SnowDistanceScaleFactor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SnowMaskHardness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnableWind;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIndependentWindControl;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSkyCreatorWindSettings EditorIndependentWindSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CloudWindSkewAmount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseExposureSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EAutoExposureMethod> ExposureMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* ExposureBiasCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* ExposureMeterMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ExposureMinBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ExposureMaxBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ExposureMinEV100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ExposureMaxEV100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ExposureSpeedUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ExposureSpeedDown;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float ExposureLowPercent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float ExposureHighPercent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float ExposureHistogramLogMin;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float ExposureHistogramLogMax;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float ExposureHistogramMinEV100;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float ExposureHistogramMaxEV100;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShowDebugVariables;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_UpdateTime)
    float TimeOfDay;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_UpdateWeather)
    FSkyCreatorWeatherSettings WeatherSettings;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FSkyCreatorVolumetricCloudMaterials VolumetricCloudMaterials;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UMaterialInterface* CurrentVolumetricCloudMaterial;
    
    UPROPERTY(VisibleAnywhere)
    UMaterialInstanceDynamic* VolumetricCloudMID;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float CurrentShapeNoiseScale;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float CurrentDetailNoiseScale;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector LowCloudWindOffset;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector LowCloudWindSkewDirection;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float LowCloudWindSkewForce;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector HighCloudWindOffset;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector CloudNoiseWindOffset;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bExtendDefaultLuminanceRange;
    
    ASkyCreator(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateSunMoonIntensity(float InTime);
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateSettings();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetWindSettings(FSkyCreatorWindSettings InWindSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetWindIndependentSettings(FSkyCreatorWindSettings InWindSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetWeatherSettings(FSkyCreatorWeatherSettings InWeatherSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetWeatherFXSettings(FSkyCreatorWeatherFXSettings InWeatherFXSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetVolumetricCloudSettings(FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetTime(float InTime);
    
    UFUNCTION(BlueprintCallable)
    void SetSunMoonPosition(float InTime);
    
    UFUNCTION(BlueprintCallable)
    void SetSunLightSettings(FSkyCreatorSunLightSettings InSunLightSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetStarMapSettings(FSkyCreatorStarMapSettings InStarMapSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetSkyLightSettings(FSkyCreatorSkyLightSettings InSkyLightSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetSkyAtmosphereSettings(FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetMoonPhase(float InMoonPhase);
    
    UFUNCTION(BlueprintCallable)
    void SetMoonLightSettings(FSkyCreatorMoonLightSettings InMoonLightSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetExposureSettings(FSkyCreatorExposureSettings InExposureSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetExponentialHeightFogSettings(FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettings);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetComponentsSettings();
    
    UFUNCTION(BlueprintCallable)
    void RerunConstructionScript();
    
public:
    UFUNCTION()
    void RealtimeVolumetricCloudWind(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void RealtimeTimeOfDay(float DeltaSeconds, float DayCycleDuration);
    
private:
    UFUNCTION()
    void OnRep_UpdateWeather();
    
    UFUNCTION()
    void OnRep_UpdateTime();
    
public:
    UFUNCTION(BlueprintCallable)
    void LerpWindSettings(FSkyCreatorWindSettings InWindSettingsA, FSkyCreatorWindSettings InWindSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpWindIndependentSettings(FSkyCreatorWindSettings InWindSettingsA, FSkyCreatorWindSettings InWindSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpWeatherSettings(FSkyCreatorWeatherSettings InWeatherSettingsA, FSkyCreatorWeatherSettings InWeatherSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpWeatherFXSettings(FSkyCreatorWeatherFXSettings InWeatherFXSettingsA, FSkyCreatorWeatherFXSettings InWeatherFXSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpVolumetricCloudSettings(FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettingsA, FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpSunLightSettings(FSkyCreatorSunLightSettings InSunLightSettingsA, FSkyCreatorSunLightSettings InSunLightSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpStarMapSettings(FSkyCreatorStarMapSettings InStarMapSettingsA, FSkyCreatorStarMapSettings InStarMapSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpSkyLightSettings(FSkyCreatorSkyLightSettings InSkyLightSettingsA, FSkyCreatorSkyLightSettings InSkyLightSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpSkyAtmosphereSettings(FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettingsA, FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpMoonLightSettings(FSkyCreatorMoonLightSettings InMoonLightSettingsA, FSkyCreatorMoonLightSettings InMoonLightSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpExposureSettings(FSkyCreatorExposureSettings InExposureSettingsA, FSkyCreatorExposureSettings InExposureSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpExponentialHeightFogSettings(FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsA, FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsB, float Alpha);
    
    UFUNCTION(BlueprintPure)
    FSkyCreatorWindSettings GetWindSettings();
    
    UFUNCTION(BlueprintPure)
    FSkyCreatorWeatherSettings GetWeatherSettings();
    
    UFUNCTION(BlueprintPure)
    FSkyCreatorWeatherFXSettings GetWeatherFXSettings();
    
    UFUNCTION(BlueprintPure)
    FSkyCreatorVolumetricCloudSettings GetVolumetricCloudSettings();
    
    UFUNCTION(BlueprintPure)
    float GetTime();
    
    UFUNCTION()
    FRotator GetSunPosition(float Time);
    
    UFUNCTION(BlueprintPure)
    FSkyCreatorSunLightSettings GetSunLightSettings();
    
    UFUNCTION(BlueprintPure)
    FSkyCreatorStarMapSettings GetStarMapSettings();
    
    UFUNCTION()
    FRotator GetStarMapRotation(float Time);
    
    UFUNCTION(BlueprintPure)
    FSkyCreatorSkyLightSettings GetSkyLightSettings();
    
    UFUNCTION(BlueprintPure)
    FSkyCreatorSkyAtmosphereSettings GetSkyAtmosphereSettings();
    
    UFUNCTION()
    FRotator GetMoonPosition(float Time);
    
    UFUNCTION(BlueprintPure)
    float GetMoonPhase();
    
    UFUNCTION(BlueprintPure)
    FSkyCreatorMoonLightSettings GetMoonLightSettings();
    
    UFUNCTION(BlueprintPure)
    FSkyCreatorExposureSettings GetExposureSettings();
    
    UFUNCTION(BlueprintPure)
    FSkyCreatorExponentialHeightFogSettings GetExponentialHeightFogSettings();
    
    UFUNCTION()
    void CreateVolumetricCloudMID();
    
    UFUNCTION()
    void CreateAndAssignMID(UMaterialInterface* InMaterial, UMaterialInstanceDynamic* InMID);
    
};

