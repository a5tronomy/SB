#pragma once
#include "CoreMinimal.h"
#include "ESBGraphicsOptionsDebugger.generated.h"

UENUM()
enum class ESBGraphicsOptionsDebugger {
    VSync,
    FrameLimit,
    Preset,
    EnviromentObjectDetail,
    CharacterObjectDetail,
    EnviromentTextures,
    CharacterTextures,
    AnisotropicFiltering,
    VolumetricFog,
    ShadowQuality,
    EffectQuality,
    EnvironmentQuality,
    Lighting,
    FoliageQuality,
    AmbientOcclusion,
    DepthOfField,
    ScreenSpaceReflection,
    SceneColorFringeQuality,
    GrainQuality,
    MaterialQuality,
    AntiAliasing,
    ResolutionScale,
    NvidiaDLSS,
    NvidiaFrameGeneration,
    NvidiaReflexLowLatency,
    AmdFSR3,
    AmdFrameInterpolation,
    IntelXeSS,
    AnimationQuality,
    CharacterViewDistance,
    EnviromentObjectViewDistance,
    Num,
};

