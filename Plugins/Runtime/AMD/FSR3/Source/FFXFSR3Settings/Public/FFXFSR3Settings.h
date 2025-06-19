#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Engine/EngineTypes.h"
#include "EFFXFSR3DeDitherMode.h"
#include "EFFXFSR3FrameGenUIMode.h"
#include "EFFXFSR3HistoryFormat.h"
#include "EFFXFSR3LandscapeHISMMode.h"
#include "EFFXFSR3PaceRHIFrameMode.h"
#include "EFFXFSR3QualityMode.h"
#include "FFXFSR3Settings.generated.h"

UCLASS(Config = Engine)
class FFXFSR3SETTINGS_API UFFXFSR3Settings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAutoExposure;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnabledInEditorViewport;
    
    UPROPERTY(Config, EditAnywhere)
    bool bUseSSRExperimentalDenoiser;
    
    UPROPERTY(Config, EditAnywhere)
    bool bRHIBackend;
    
    UPROPERTY(Config, EditAnywhere)
    bool bD3D12Backend;
    
    UPROPERTY(Config, EditAnywhere)
    bool bFrameGenEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    bool bCaptureDebugUI;
    
    UPROPERTY(Config, EditAnywhere)
    bool bUpdateGlobalFrameTime;
    
    UPROPERTY(Config, EditAnywhere)
    bool bModifySlateDeltaTime;
    
    UPROPERTY(Config, EditAnywhere)
    EFFXFSR3FrameGenUIMode UIMode;
    
    UPROPERTY(Config, EditAnywhere)
    bool bD3D12AsyncInterpolation;
    
    UPROPERTY(Config, EditAnywhere)
    bool bD3D12AsyncPresent;
    
    UPROPERTY(Config, EditAnywhere)
    EFFXFSR3PaceRHIFrameMode PaceMode;
    
    UPROPERTY(Config, EditAnywhere)
    EFFXFSR3QualityMode QualityMode;
    
    UPROPERTY(Config, EditAnywhere)
    EFFXFSR3HistoryFormat HistoryFormat;
    
    UPROPERTY(Config, EditAnywhere)
    EFFXFSR3DeDitherMode DeDither;
    
    UPROPERTY(Config, EditAnywhere)
    float Sharpness;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAdjustMipBias;
    
    UPROPERTY(Config, EditAnywhere)
    bool bForceVertexDeformationOutputsVelocity;
    
    UPROPERTY(Config, EditAnywhere)
    EFFXFSR3LandscapeHISMMode ForceLandscapeHISMMobility;
    
    UPROPERTY(Config, EditAnywhere)
    float VelocityFactor;
    
    UPROPERTY(Config, EditAnywhere)
    bool bReactiveMask;
    
    UPROPERTY(Config, EditAnywhere)
    float ReflectionScale;
    
    UPROPERTY(Config, EditAnywhere)
    float ReflectionLuminanceBias;
    
    UPROPERTY(Config, EditAnywhere)
    float RoughnessScale;
    
    UPROPERTY(Config, EditAnywhere)
    float RoughnessBias;
    
    UPROPERTY(Config, EditAnywhere)
    float RoughnessMaxDistance;
    
    UPROPERTY(Config, EditAnywhere)
    bool bReactiveMaskRoughnessForceMaxDistance;
    
    UPROPERTY(Config, EditAnywhere)
    float TranslucencyBias;
    
    UPROPERTY(Config, EditAnywhere)
    float TranslucencyLuminanceBias;
    
    UPROPERTY(Config, EditAnywhere)
    float TranslucencyMaxDistance;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<EMaterialShadingModel> ReactiveShadingModelID;
    
    UPROPERTY(Config, EditAnywhere)
    float ForceReactiveMaterialValue;
    
    UPROPERTY(Config, EditAnywhere)
    float ReactiveHistoryTranslucencyBias;
    
    UPROPERTY(Config, EditAnywhere)
    float ReactiveHistoryTranslucencyLumaBias;
    
    UPROPERTY(Config, EditAnywhere)
    float PreDOFTranslucencyScale;
    
    UPROPERTY(Config, EditAnywhere)
    bool bPreDOFTranslucencyMax;
    
    UFFXFSR3Settings();

};

