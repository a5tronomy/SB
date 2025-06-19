#include "SkyCreator.h"
#include "Components/DirectionalLightComponent.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "Components/PostProcessComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkyAtmosphereComponent.h"
#include "Components/SkyLightComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/VolumetricCloudComponent.h"
#include "NiagaraComponent.h"
#include "Net/UnrealNetwork.h"

ASkyCreator::ASkyCreator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->Root = (USceneComponent*)RootComponent;
    this->Billboard = NULL;
    this->Compass = NULL;
    this->SkyAtmosphere = CreateDefaultSubobject<USkyAtmosphereComponent>(TEXT("Sky Atmosphere Component"));
    this->VolumetricCloud = CreateDefaultSubobject<UVolumetricCloudComponent>(TEXT("Volumetric Cloud Component"));
    this->SkyLight = CreateDefaultSubobject<USkyLightComponent>(TEXT("Sky Light Component"));
    this->SunLight = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("Sun Light Component"));
    this->MoonLight = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("Moon Light Component"));
    this->ExponentialHeightFog = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("Exponential Height Fog Component"));
    this->Exposure = CreateDefaultSubobject<UPostProcessComponent>(TEXT("Exposure Component"));
    this->StarMap = NULL;
    this->SunSphere = NULL;
    this->MoonSphere = NULL;
    this->WeatherFX = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Weather FX Component"));
    this->SkySphere = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sky Sphere Component"));
    this->SkySphereMID = NULL;
    this->bUseEditorTimeOfDay = true;
    this->EditorTimeOfDay = 12.00f;
    this->bUseEditorWeatherSettings = true;
    this->EditorWeatherType = EditorWeather_WeatherPreset;
    this->bIsEditorTickEnabled = true;
    this->SkySphereRadius = 1000.00f;
    this->bLightOptimization = true;
    this->SkyAtmosphereMobility = EComponentMobility::Movable;
    this->TransformMode = ESkyAtmosphereTransformMode::PlanetTopAtAbsoluteWorldOrigin;
    this->PlanetRadius = 6360.00f;
    this->AtmosphereHeight = 60.00f;
    this->TraceSampleCountScale = 4.00f;
    this->LayerBottomAltitude = 1.50f;
    this->LayerHeight = 6.00f;
    this->TracingStartMaxDistance = 350.00f;
    this->TracingMaxDistance = 50.00f;
    this->bPerSampleAtmosphericLightTransmittance = true;
    this->bGroundContribution = false;
    this->MultiScatteringApproximationOctaveCount = 2;
    this->ViewSampleCountScale = 3.00f;
    this->ReflectionSampleCountScale = 3.00f;
    this->ShadowViewSampleCountScale = 1.00f;
    this->ShadowReflectionSampleCountScale = 3.00f;
    this->ShadowTracingDistance = 10.00f;
    this->LowCloudMapScale = 25.00f;
    this->HighCloudMapScale = 25.00f;
    this->HighCloudHorizonFadeHardness = 0.50f;
    this->bAutoScale = true;
    this->ShapeNoiseScale = 2.00f;
    this->DetailNoiseScale = 0.50f;
    this->SkyLightMobility = EComponentMobility::Movable;
    this->bRealTimeCapture = true;
    this->bLowerHemisphereIsSolidColor = false;
    this->SunLightMobility = EComponentMobility::Movable;
    this->bControlSunDirection = true;
    this->bSunUseTemperature = false;
    this->SunAngularDiameter = 0.54f;
    this->bSunConstantAtmosphereDiskColorScale = false;
    this->SunOrbitType = SunOrbitType_SimplifiedCycle;
    this->SunriseTime = 6.50f;
    this->SunsetTime = 19.50f;
    this->SunDawnOffsetTime = 1.50f;
    this->SunDuskOffsetTime = 1.50f;
    this->SunDawnTime = 0.00f;
    this->SunDuskTime = 0.00f;
    this->SunElevation = 55.00f;
    this->SunAzimuth = 180.00f;
    this->SunMinAngleAtDawnDusk = 8.00f;
    this->SunFadeInOutTime = 0.10f;
    this->MoonLightMobility = EComponentMobility::Movable;
    this->bControlMoonDirection = true;
    this->bMoonUseTemperature = false;
    this->MoonAngularDiameter = 0.54f;
    this->bMoonConstantAtmosphereDiskColorScale = false;
    this->MoonPhase = 0.00f;
    this->MoonRotation = 0.00f;
    this->MoonOrbitType = MoonOrbitType_SimplifiedCycle;
    this->MoonriseTime = 18.00f;
    this->MoonsetTime = 8.00f;
    this->MoonElevation = 45.00f;
    this->MoonAzimuth = 180.00f;
    this->MoonFadeInOutTime = 0.10f;
    this->ExponentialHeightFogMobility = EComponentMobility::Movable;
    this->bEnableExponentialHeightFog = true;
    this->bVolumetricFog = false;
    this->FogHeightOffset = 0.00f;
    this->SecondFogHeightOffset = 0.00f;
    this->StarMapRotationType = StarMapRotationType_FollowMoon;
    this->PrecipitationSpawnRadius = 600.00f;
    this->bEnableDistantPrecipitation = true;
    this->DistantPrecipitationSpawnRadius = 2000.00f;
    this->PrecipitationMaxViewDistance = 4000.00f;
    this->PrecipitationVerticalCheckDistance = 10000.00f;
    this->PrecipitationCollisionChannel = ECC_WorldStatic;
    this->PrecipitationDepthFadeDistance = 100.00f;
    this->PrecipitationCameraFadeDistance = 100.00f;
    this->PrecipitationCameraFadeOffset = 50.00f;
    this->RainSpawnRateMax = 4000.00f;
    this->RainDistantSpawnRateMax = 2000.00f;
    this->RainDistanceScaleFactor = 2.00f;
    this->RainIndexOfRefraction = 1.33f;
    this->RainSplashSpawnRateMax = 2000.00f;
    this->SnowSpawnRateMax = 2000.00f;
    this->SnowDistantSpawnRateMax = 1000.00f;
    this->SnowDistanceScaleFactor = 2.00f;
    this->SnowMaskHardness = 0.50f;
    this->bEnableWind = true;
    this->bIndependentWindControl = true;
    this->CloudWindSkewAmount = 0.25f;
    this->bUseExposureSettings = true;
    this->ExposureMethod = AEM_Histogram;
    this->ExposureBiasCurve = NULL;
    this->ExposureMeterMask = NULL;
    this->ExposureMinBrightness = 0.02f;
    this->ExposureMaxBrightness = 20.00f;
    this->ExposureMinEV100 = -6.00f;
    this->ExposureMaxEV100 = 20.00f;
    this->ExposureSpeedUp = 4.00f;
    this->ExposureSpeedDown = 4.00f;
    this->ExposureLowPercent = 50.00f;
    this->ExposureHighPercent = 90.00f;
    this->ExposureHistogramLogMin = -16.00f;
    this->ExposureHistogramLogMax = 4.00f;
    this->ExposureHistogramMinEV100 = -12.00f;
    this->ExposureHistogramMaxEV100 = 20.00f;
    this->bShowDebugVariables = false;
    this->TimeOfDay = 0.00f;
    this->VolumetricCloudMID = NULL;
    this->CurrentShapeNoiseScale = 0.00f;
    this->CurrentDetailNoiseScale = 0.00f;
    this->LowCloudWindSkewForce = 0.00f;
    this->bExtendDefaultLuminanceRange = true;
    this->ExponentialHeightFog->SetupAttachment(RootComponent);
    this->Exposure->SetupAttachment(RootComponent);
    this->MoonLight->SetupAttachment(RootComponent);
    this->SkyAtmosphere->SetupAttachment(RootComponent);
    this->SkyLight->SetupAttachment(RootComponent);
    this->SkySphere->SetupAttachment(RootComponent);
    this->SunLight->SetupAttachment(RootComponent);
    this->VolumetricCloud->SetupAttachment(RootComponent);
    this->WeatherFX->SetupAttachment(RootComponent);
}

void ASkyCreator::UpdateSunMoonIntensity(float InTime) {
}

void ASkyCreator::UpdateSettings() {
}

void ASkyCreator::SetWindSettings(FSkyCreatorWindSettings InWindSettings) {
}

void ASkyCreator::SetWindIndependentSettings(FSkyCreatorWindSettings InWindSettings) {
}

void ASkyCreator::SetWeatherSettings(FSkyCreatorWeatherSettings InWeatherSettings) {
}

void ASkyCreator::SetWeatherFXSettings(FSkyCreatorWeatherFXSettings InWeatherFXSettings) {
}

void ASkyCreator::SetVolumetricCloudSettings(FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettings) {
}

void ASkyCreator::SetTime(float InTime) {
}

void ASkyCreator::SetSunMoonPosition(float InTime) {
}

void ASkyCreator::SetSunLightSettings(FSkyCreatorSunLightSettings InSunLightSettings) {
}

void ASkyCreator::SetStarMapSettings(FSkyCreatorStarMapSettings InStarMapSettings) {
}

void ASkyCreator::SetSkyLightSettings(FSkyCreatorSkyLightSettings InSkyLightSettings) {
}

void ASkyCreator::SetSkyAtmosphereSettings(FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettings) {
}

void ASkyCreator::SetMoonPhase(float InMoonPhase) {
}

void ASkyCreator::SetMoonLightSettings(FSkyCreatorMoonLightSettings InMoonLightSettings) {
}

void ASkyCreator::SetExposureSettings(FSkyCreatorExposureSettings InExposureSettings) {
}

void ASkyCreator::SetExponentialHeightFogSettings(FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettings) {
}

void ASkyCreator::SetComponentsSettings() {
}

void ASkyCreator::RerunConstructionScript() {
}

void ASkyCreator::RealtimeVolumetricCloudWind(float DeltaTime) {
}

void ASkyCreator::RealtimeTimeOfDay(float DeltaSeconds, float DayCycleDuration) {
}

void ASkyCreator::OnRep_UpdateWeather() {
}

void ASkyCreator::OnRep_UpdateTime() {
}

void ASkyCreator::LerpWindSettings(FSkyCreatorWindSettings InWindSettingsA, FSkyCreatorWindSettings InWindSettingsB, float Alpha) {
}

void ASkyCreator::LerpWindIndependentSettings(FSkyCreatorWindSettings InWindSettingsA, FSkyCreatorWindSettings InWindSettingsB, float Alpha) {
}

void ASkyCreator::LerpWeatherSettings(FSkyCreatorWeatherSettings InWeatherSettingsA, FSkyCreatorWeatherSettings InWeatherSettingsB, float Alpha) {
}

void ASkyCreator::LerpWeatherFXSettings(FSkyCreatorWeatherFXSettings InWeatherFXSettingsA, FSkyCreatorWeatherFXSettings InWeatherFXSettingsB, float Alpha) {
}

void ASkyCreator::LerpVolumetricCloudSettings(FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettingsA, FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettingsB, float Alpha) {
}

void ASkyCreator::LerpSunLightSettings(FSkyCreatorSunLightSettings InSunLightSettingsA, FSkyCreatorSunLightSettings InSunLightSettingsB, float Alpha) {
}

void ASkyCreator::LerpStarMapSettings(FSkyCreatorStarMapSettings InStarMapSettingsA, FSkyCreatorStarMapSettings InStarMapSettingsB, float Alpha) {
}

void ASkyCreator::LerpSkyLightSettings(FSkyCreatorSkyLightSettings InSkyLightSettingsA, FSkyCreatorSkyLightSettings InSkyLightSettingsB, float Alpha) {
}

void ASkyCreator::LerpSkyAtmosphereSettings(FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettingsA, FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettingsB, float Alpha) {
}

void ASkyCreator::LerpMoonLightSettings(FSkyCreatorMoonLightSettings InMoonLightSettingsA, FSkyCreatorMoonLightSettings InMoonLightSettingsB, float Alpha) {
}

void ASkyCreator::LerpExposureSettings(FSkyCreatorExposureSettings InExposureSettingsA, FSkyCreatorExposureSettings InExposureSettingsB, float Alpha) {
}

void ASkyCreator::LerpExponentialHeightFogSettings(FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsA, FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsB, float Alpha) {
}

FSkyCreatorWindSettings ASkyCreator::GetWindSettings() {
    return FSkyCreatorWindSettings{};
}

FSkyCreatorWeatherSettings ASkyCreator::GetWeatherSettings() {
    return FSkyCreatorWeatherSettings{};
}

FSkyCreatorWeatherFXSettings ASkyCreator::GetWeatherFXSettings() {
    return FSkyCreatorWeatherFXSettings{};
}

FSkyCreatorVolumetricCloudSettings ASkyCreator::GetVolumetricCloudSettings() {
    return FSkyCreatorVolumetricCloudSettings{};
}

float ASkyCreator::GetTime() {
    return 0.0f;
}

FRotator ASkyCreator::GetSunPosition(float Time) {
    return FRotator{};
}

FSkyCreatorSunLightSettings ASkyCreator::GetSunLightSettings() {
    return FSkyCreatorSunLightSettings{};
}

FSkyCreatorStarMapSettings ASkyCreator::GetStarMapSettings() {
    return FSkyCreatorStarMapSettings{};
}

FRotator ASkyCreator::GetStarMapRotation(float Time) {
    return FRotator{};
}

FSkyCreatorSkyLightSettings ASkyCreator::GetSkyLightSettings() {
    return FSkyCreatorSkyLightSettings{};
}

FSkyCreatorSkyAtmosphereSettings ASkyCreator::GetSkyAtmosphereSettings() {
    return FSkyCreatorSkyAtmosphereSettings{};
}

FRotator ASkyCreator::GetMoonPosition(float Time) {
    return FRotator{};
}

float ASkyCreator::GetMoonPhase() {
    return 0.0f;
}

FSkyCreatorMoonLightSettings ASkyCreator::GetMoonLightSettings() {
    return FSkyCreatorMoonLightSettings{};
}

FSkyCreatorExposureSettings ASkyCreator::GetExposureSettings() {
    return FSkyCreatorExposureSettings{};
}

FSkyCreatorExponentialHeightFogSettings ASkyCreator::GetExponentialHeightFogSettings() {
    return FSkyCreatorExponentialHeightFogSettings{};
}

void ASkyCreator::CreateVolumetricCloudMID() {
}

void ASkyCreator::CreateAndAssignMID(UMaterialInterface* InMaterial, UMaterialInstanceDynamic* InMID) {
}

void ASkyCreator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASkyCreator, TimeOfDay);
    DOREPLIFETIME(ASkyCreator, WeatherSettings);
}


