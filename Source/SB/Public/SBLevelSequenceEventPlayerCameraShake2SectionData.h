#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraShake.h"
#include "SBLevelSequenceEventPlayerCameraShake2Oscillator.h"
#include "SBLevelSequenceEventPlayerCameraShake2SectionData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FSBLevelSequenceEventPlayerCameraShake2SectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EOscillatorWaveform Waveform;
    
    UPROPERTY(EditAnywhere)
    float OscillationBlendInTime;
    
    UPROPERTY(EditAnywhere)
    float OscillationBlendOutTime;
    
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceEventPlayerCameraShake2Oscillator Rot_Pitch;
    
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceEventPlayerCameraShake2Oscillator Rot_Yaw;
    
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceEventPlayerCameraShake2Oscillator Rot_Roll;
    
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceEventPlayerCameraShake2Oscillator Loc_X;
    
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceEventPlayerCameraShake2Oscillator Loc_Y;
    
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceEventPlayerCameraShake2Oscillator Loc_Z;
    
    UPROPERTY(EditAnywhere)
    float ShakeScale;
    
    UPROPERTY(EditAnywhere)
    bool bUseScaleCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* ScaleCurve;
    
    SB_API FSBLevelSequenceEventPlayerCameraShake2SectionData();
};

