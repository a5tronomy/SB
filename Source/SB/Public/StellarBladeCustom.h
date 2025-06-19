#pragma once
#include "Components/ExponentialHeightFogComponent.h"

#include "StellarBladeCustom.generated.h"

class StellarBladeCustom;

UENUM()
enum class ESlateBrushResourceType : uint8
{
	ESlateBrushResourceType_Default,
	ESlateBrushResourceType_StandardKeyboard,
	ESlateBrushResourceType_AZERTYKeyboard,
	ESlateBrushResourceType_StandardGamepad,
	ESlateBrushResourceType_PS4,
	ESlateBrushResourceType_PS5,
	ESlateBrushResourceType_XBox,
	ESlateBrushResourceType_MAX
};

UENUM()
enum class ESBSkyAtmosphereTransformMode : uint8
{
	SBPlanetTopAtAbsoluteWorldOrigin,
	SBPlanetTopAtComponentTransform,
	SBPlanetCenterAtComponentTransform,
	ESBSkyAtmosphereTransformMode_MAX
};

UENUM()
enum class EProcMeshVertexType : uint8
{
	ProcMeshVertexType_Static,
	ProcMeshVertexType_ParentSkinned,
	ProcMeshVertexType_ChildSkinned,
	ProcMeshVertexType_MAX
};


USTRUCT(BlueprintType)
struct FSBTentDistribution
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TentDistribution", meta=(Interp))
	float TipAltitude;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TentDistribution", meta=(Interp))
	float TipValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TentDistribution", meta=(Interp))
	float Width;

	FSBTentDistribution();
};

USTRUCT(BlueprintType)
struct FSBEnvControlSettings
{
    GENERATED_BODY()

public:
    UPROPERTY(Transient)
    float Priority;

    UPROPERTY(Transient)
    FVector Origin;

    UPROPERTY(Transient)
    float InnerRadius;

    UPROPERTY(Transient)
    float OuterRadius;

    UPROPERTY(Transient)
    AVolume* VolumeActor;

    UPROPERTY(Transient)
    UObject* DataPtr;

    UPROPERTY(Transient)
    TArray<FPostProcessSettings> BlendPPSettings;

    UPROPERTY(Transient)
    TArray<float> BlendPPSettingsWeight;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SBEnvControl|Sun")
    bool bUseDirection_Sun;

    uint8 UnknownData_FSBEnvControlSettings01[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SBEnvControl|Sun")
    FVector Direction_Sun;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, Category = "SBEnvControl|Sun")
    bool bUseColor_Sun;

    uint8 UnknownData_FSBEnvControlSettings02[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, Category = "SBEnvControl|Sun")
    FLinearColor Color_Sun;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, Category = "SBEnvControl|Sun")
    bool bUseIntensity_Sun;

    uint8 UnknownData_FSBEnvControlSettings03[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|Sun")
    float Intensity_Sun;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|Sun")
    bool bUseMultipleBaseByViewDirLight;

    uint8 UnknownData_FSBEnvControlSettings04[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|Sun")
    float MultipleBaseByViewDirLight;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|Sun")
    bool bUseVolumetricScatteringIntensity_Sun;

    uint8 UnknownData_FSBEnvControlSettings05[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|Sun")
    float VolumetricScatteringIntensity_Sun;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|Sun")
    bool bUseSourceAngle_Sun;

    uint8 UnknownData_FSBEnvControlSettings06[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|Sun")
    float SourceAngle_Sun;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|Sun")
    bool bUseSourceSoftAngle_Sun;

    uint8 UnknownData_FSBEnvControlSettings07[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|Sun")
    float SourceSoftAngle_Sun;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|Sun")
    bool bUseTemperature_Sun;

    uint8 UnknownData_FSBEnvControlSettings08[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|Sun")
    float Temperature_Sun;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Sun")
    uint8 bEnableLightShaftOcclusion;

    uint8 UnknownData_FSBEnvControlSettings09[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Sun")
    bool bEnableAffectsTranslucentLighting;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp, AdvancedDisplay), Category = "SBEnvControl|Sun")
    bool bUseLightShaftOverrideDirection;

    uint8 UnknownData_FSBEnvControlSettings10[0x2] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp, AdvancedDisplay), Category = "SBEnvControl|Sun")
    FVector LightShaftOverrideDirection;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp, AdvancedDisplay), Category = "SBEnvControl|Sun")
    bool bUseShadowAmount;

    uint8 UnknownData_FSBEnvControlSettings11[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp, AdvancedDisplay), Category = "SBEnvControl|Sun")
    float ShadowAmount;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp, AdvancedDisplay), Category = "SBEnvControl|Sun")
    bool bUseSpecularScale;

    uint8 UnknownData_FSBEnvControlSettings12[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp, AdvancedDisplay), Category = "SBEnvControl|Sun")
    float SpecularScale;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp, AdvancedDisplay), Category = "SBEnvControl|Sun")
    bool bUseShadowResolutionScale;

    uint8 UnknownData_FSBEnvControlSettings13[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp, AdvancedDisplay), Category = "SBEnvControl|Sun")
    float ShadowResolutionScale;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp, AdvancedDisplay), Category = "SBEnvControl|Sun")
    bool bUseShadowBias;

    uint8 UnknownData_FSBEnvControlSettings14[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp, AdvancedDisplay), Category = "SBEnvControl|Sun")
    float ShadowBias;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp, AdvancedDisplay), Category = "SBEnvControl|Sun")
    bool bUseShadowSlopeBias;

    uint8 UnknownData_FSBEnvControlSettings15[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp, AdvancedDisplay), Category = "SBEnvControl|Sun")
    float ShadowSlopeBias;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp, AdvancedDisplay), Category = "SBEnvControl|Sun")
    bool bUseShadowTransitionScale;

    uint8 UnknownData_FSBEnvControlSettings16[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp, AdvancedDisplay), Category = "SBEnvControl|Sun")
    float ShadowTransitionScale;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp, AdvancedDisplay), Category = "SBEnvControl|Sun")
    bool bUseShadowSharpen;

    uint8 UnknownData_FSBEnvControlSettings17[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp, AdvancedDisplay), Category = "SBEnvControl|Sun")
    float ShadowSharpen;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp, AdvancedDisplay), Category = "SBEnvControl|Sun")
    bool bUseContactShadowLength;

    uint8 UnknownData_FSBEnvControlSettings18[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp, AdvancedDisplay), Category = "SBEnvControl|Sun")
    float ContactShadowLength;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Sun")
    bool bUseOcclusionMaskDarkness;

    uint8 UnknownData_FSBEnvControlSettings19[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Sun")
    float OcclusionMaskDarkness;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Sun")
    bool bUseOcclusionDepthRange;

    uint8 UnknownData_FSBEnvControlSettings20[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Sun")
    float OcclusionDepthRange;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Sun")
    uint8 bEnableLightShaftBloom;

    uint8 UnknownData_FSBEnvControlSettings21[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Sun")
    bool bUseBloomScale;

    uint8 UnknownData_FSBEnvControlSettings22[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Sun")
    float BloomScale;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Sun")
    bool bUseBloomThreshold;

    uint8 UnknownData_FSBEnvControlSettings23[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Sun")
    float BloomThreshold;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Sun")
    bool bUseBloomTint;

    uint8 UnknownData_FSBEnvControlSettings24[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Sun")
    FColor BloomTint;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Sun")
    bool bUseDynamicShadowDistanceMovableLight;

    uint8 UnknownData_FSBEnvControlSettings25[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Sun")
    float DynamicShadowDistanceMovableLight;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Sun")
    bool bUseDynamicShadowCascades;

    uint8 UnknownData_FSBEnvControlSettings26[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Sun")
    int32 DynamicShadowCascades;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Sun")
    bool bUseCascadeDistributionExponent;

    uint8 UnknownData_FSBEnvControlSettings27[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Sun")
    float CascadeDistributionExponent;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Sun")
    bool bUseLightFunctionMaterial;

    uint8 UnknownData_FSBEnvControlSettings28[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Sun")
    UMaterialInterface* LightFunctionMaterial;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Sun")
    FVector LightFunctionScale;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Sun")
    float LightFunctionFadeDistance;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Sun")
    float DisabledBrightness;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|SkyLight")
    bool bUseColor_SkyLight;

    uint8 UnknownData_FSBEnvControlSettings29[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|SkyLight")
    FLinearColor Color_SkyLight;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|SkyLight")
    bool bUseLowerHemisphereColor_SkyLight;

    uint8 UnknownData_FSBEnvControlSettings30[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|SkyLight")
    FLinearColor LowerHemisphereColor_SkyLight;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|SkyLight")
    bool bUseIntensity_SkyLight;

    uint8 UnknownData_FSBEnvControlSettings31[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|SkyLight")
    float Intensity_SkyLight;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyLight")
    bool bUseOcclusionMaxDistance;

    uint8 UnknownData_FSBEnvControlSettings32[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyLight")
    float OcclusionMaxDistance;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyLight")
    float Contrast;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyLight")
    bool bUseOcclusionExponent;

    uint8 UnknownData_FSBEnvControlSettings33[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyLight")
    float OcclusionExponent;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyLight")
    bool bUseMinOcclusion;

    uint8 UnknownData_FSBEnvControlSettings34[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyLight")
    float MinOcclusion;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyLight")
    bool bUseOcclusionTint;

    uint8 UnknownData_FSBEnvControlSettings35[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyLight")
    FColor OcclusionTint;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|SkyLight")
    bool bUseVolumetricScatteringIntensity_SkyLight;

    uint8 UnknownData_FSBEnvControlSettings36[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|SkyLight")
    float VolumetricScatteringIntensity_SkyLight;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyLight")
    bool bUseOverrideSkyLightCubeMap;

    uint8 UnknownData_FSBEnvControlSettings37[0x7] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyLight")
    UTextureCube* OverrideSkyLightCubeMap;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|Character")
    bool bUseColor_Character;

    uint8 UnknownData_FSBEnvControlSettings38[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|Character")
    FLinearColor Color_Character;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|Character")
    bool bUseIntensity_Character;

    uint8 UnknownData_FSBEnvControlSettings39[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|Character")
    float Intensity_Character;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|Character")
    bool bUseSourceAngle_Character;

    uint8 UnknownData_FSBEnvControlSettings40[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|Character")
    float SourceAngle_Character;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|Character")
    bool bUseSourceSoftAngle_Character;

    uint8 UnknownData_FSBEnvControlSettings41[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|Character")
    float SourceSoftAngle_Character;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|Character")
    bool bUseTemperature_Character;

    uint8 UnknownData_FSBEnvControlSettings42[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|Character")
    float Temperature_Character;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|CharacterSub")
    bool bUseColor_CharacterSub;

    uint8 UnknownData_FSBEnvControlSettings43[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|CharacterSub")
    FLinearColor Color_CharacterSub;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|CharacterSub")
    bool bUseIntensity_CharacterSub;

    uint8 UnknownData_FSBEnvControlSettings44[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|CharacterSub")
    float Intensity_CharacterSub;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|CharacterSub")
    bool bUseSourceAngle_CharacterSub;

    uint8 UnknownData_FSBEnvControlSettings45[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|CharacterSub")
    float SourceAngle_CharacterSub;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|CharacterSub")
    bool bUseSourceSoftAngle_CharacterSub;

    uint8 UnknownData_FSBEnvControlSettings46[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|CharacterSub")
    float SourceSoftAngle_CharacterSub;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|CharacterSub")
    bool bUseTemperature_CharacterSub;

    uint8 UnknownData_FSBEnvControlSettings47[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|CharacterSub")
    float Temperature_CharacterSub;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Fog")
    bool bUseFogCenterLocationZ;

    uint8 UnknownData_FSBEnvControlSettings48[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Fog")
    float FogCenterLocationZ;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Fog")
    bool bUseFogDensity;

    uint8 UnknownData_FSBEnvControlSettings49[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Fog")
    float FogDensity;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Fog")
    bool bUseFogHeightFalloff;

    uint8 UnknownData_FSBEnvControlSettings50[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Fog")
    float FogHeightFalloff;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Fog")
    bool bUseSecondFogData;

    uint8 UnknownData_FSBEnvControlSettings51[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Fog")
    FExponentialHeightFogData SecondFogData;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Fog")
    bool bUseFogInscatteringColor;

    uint8 UnknownData_FSBEnvControlSettings52[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Fog")
    FLinearColor FogInscatteringColor;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|Fog")
    bool bOverrideFogColorCubemapInfo;

    uint8 UnknownData_FSBEnvControlSettings53[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|Fog")
    UTextureCube* OverrideFogInscatteringColorCubemap;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|Fog")
    FLinearColor OverrideFogInscatteringCubeTextureTint;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Fog")
    bool bUseFogMaxOpacity;

    uint8 UnknownData_FSBEnvControlSettings54[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Fog")
    float FogMaxOpacity;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Fog")
    bool bUseStartDistance;

    uint8 UnknownData_FSBEnvControlSettings55[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Fog")
    float StartDistance;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Fog")
    bool bUseFogCutoffDistance;

    uint8 UnknownData_FSBEnvControlSettings56[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Fog")
    float FogCutoffDistance;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Fog")
    bool bUseDirectionalInscatteringExponent;

    uint8 UnknownData_FSBEnvControlSettings57[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Fog")
    float DirectionalInscatteringExponent;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Fog")
    bool bUseDirectionalInscatteringStartDistance;

    uint8 UnknownData_FSBEnvControlSettings58[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Fog")
    float DirectionalInscatteringStartDistance;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Fog")
    bool bUseDirectionalInscatteringColor;

    uint8 UnknownData_FSBEnvControlSettings59[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Fog")
    FLinearColor DirectionalInscatteringColor;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Fog")
    bool bEnableVolumetricFog;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Fog")
    bool bUseVolumetricFogScatteringDistribution;

    uint8 UnknownData_FSBEnvControlSettings60[0x2] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Fog")
    float VolumetricFogScatteringDistribution;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Fog")
    bool bUseVolumetricFogAlbedo;

    uint8 UnknownData_FSBEnvControlSettings61[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Fog")
    FColor VolumetricFogAlbedo;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Fog")
    bool bUseVolumetricFogEmissive;

    uint8 UnknownData_FSBEnvControlSettings62[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Fog")
    FLinearColor VolumetricFogEmissive;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Fog")
    bool bUseVolumetricFogExtinctionScale;

    uint8 UnknownData_FSBEnvControlSettings63[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Fog")
    float VolumetricFogExtinctionScale;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Fog")
    bool bUseVolumetricFogDistance;

    uint8 UnknownData_FSBEnvControlSettings64[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Fog")
    float VolumetricFogDistance;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Fog")
    bool bUseVolumetricFogStaticLightingScatteringIntensity;

    uint8 UnknownData_FSBEnvControlSettings65[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|Fog")
    float VolumetricFogStaticLightingScatteringIntensity;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    bool bUseTransformMode;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    ESBSkyAtmosphereTransformMode TransformMode;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    bool bUseSkyAtmosphereCenter;

    uint8 UnknownData_FSBEnvControlSettings66[0x1] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    FVector SkyAtmosphereCenter;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    bool bUseBottomRadius;

    uint8 UnknownData_FSBEnvControlSettings67[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    float BottomRadius;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    bool bUseGroundAlbedo;

    uint8 UnknownData_FSBEnvControlSettings68[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    FColor GroundAlbedo;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    bool bUseAtmosphereHeight;

    uint8 UnknownData_FSBEnvControlSettings69[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    float AtmosphereHeight;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    bool bUseMultiScatteringFactor;

    uint8 UnknownData_FSBEnvControlSettings70[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    float MultiScatteringFactor;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    bool bUseRayleighScatteringScale;

    uint8 UnknownData_FSBEnvControlSettings71[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    float RayleighScatteringScale;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    bool bUseRayleighScattering;

    uint8 UnknownData_FSBEnvControlSettings72[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    FLinearColor RayleighScattering;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    bool bUseRayleighExponentialDistribution;

    uint8 UnknownData_FSBEnvControlSettings73[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    float RayleighExponentialDistribution;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    bool bUseMieScatteringScale;

    uint8 UnknownData_FSBEnvControlSettings74[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    float MieScatteringScale;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    bool bUseMieScattering;

    uint8 UnknownData_FSBEnvControlSettings75[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    FLinearColor MieScattering;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    bool bUseMieAbsorptionScale;

    uint8 UnknownData_FSBEnvControlSettings76[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    float MieAbsorptionScale;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    bool bUseMieAbsorption;

    uint8 UnknownData_FSBEnvControlSettings77[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    FLinearColor MieAbsorption;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    bool bUseMieAnisotropy;

    uint8 UnknownData_FSBEnvControlSettings78[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    float MieAnisotropy;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    bool bUseMieExponentialDistribution;

    uint8 UnknownData_FSBEnvControlSettings79[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    float MieExponentialDistribution;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    bool bUseOtherAbsorptionScale;

    uint8 UnknownData_FSBEnvControlSettings80[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    float OtherAbsorptionScale;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    bool bUseOtherAbsorption;

    uint8 UnknownData_FSBEnvControlSettings81[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    FLinearColor OtherAbsorption;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    bool bUseOtherTentDistribution;

    uint8 UnknownData_FSBEnvControlSettings82[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    FSBTentDistribution OtherTentDistribution;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    bool bUseSkyLuminanceFactor;

    uint8 UnknownData_FSBEnvControlSettings83[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    FLinearColor SkyLuminanceFactor;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    bool bUseAerialPespectiveViewDistanceScale;

    uint8 UnknownData_FSBEnvControlSettings84[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    float AerialPespectiveViewDistanceScale;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    bool bUseHeightFogContribution;

    uint8 UnknownData_FSBEnvControlSettings85[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    float HeightFogContribution;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    bool bUseTransmittanceMinLightElevationAngle;

    uint8 UnknownData_FSBEnvControlSettings86[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|SkyAtmosphere")
    float TransmittanceMinLightElevationAngle;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|Cloud")
    bool bUseColor_Cloud;

    uint8 UnknownData_FSBEnvControlSettings87[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|Cloud")
    FLinearColor Color_Cloud;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|Cloud")
    bool bUseColor_VolumeCloudTop;

    uint8 UnknownData_FSBEnvControlSettings88[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|Cloud")
    FLinearColor Color_VolumeCloudTop;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|Cloud")
    bool bUseColor_VolumeCloudBottom;

    uint8 UnknownData_FSBEnvControlSettings89[0x3] = {};

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|Cloud")
    FLinearColor Color_VolumeCloudBottom;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|PostProcess")
    bool bUsePostProcessData;

    uint8 UnknownData_FSBEnvControlSettings90[0x7] = {};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(Interp), Category = "SBEnvControl|PostProcess")
    FPostProcessSettings PostProcessData;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SBEnvControl|GlobalMaterialParameters")
    bool bUseGlobalMaterialScalarParameterMap;

    uint8 UnknownData_FSBEnvControlSettings91[0x7] = {};

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SBEnvControl|GlobalMaterialParameters")
    TMap<FName, float> GlobalMaterialScalarParameterMap;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SBEnvControl|GlobalMaterialParameters")
    bool bUseGlobalMaterialVectorParameterMap;

    uint8 UnknownData_FSBEnvControlSettings92[0x7] = {};

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SBEnvControl|GlobalMaterialParameters")
    TMap<FName, FVector> GlobalMaterialVectorParameterMap;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|GlobalNiagaraParameters")
    bool bUseGlobalNiagaraParameterScalarMap;

    uint8 UnknownData_FSBEnvControlSettings93[0x7] = {};

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SBEnvControl|GlobalNiagaraParameters")
    TMap<FName, float> GlobalNiagaraParameterScalarMap;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Interp), Category = "SBEnvControl|GlobalNiagaraParameters")
    bool bUseGlobalNiagaraParameterVectorMap;

    uint8 UnknownData_FSBEnvControlSettings94[0x7] = {};

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SBEnvControl|GlobalNiagaraParameters")
    TMap<FName, FVector> GlobalNiagaraParameterVectorMap;

	FSBEnvControlSettings();
};
