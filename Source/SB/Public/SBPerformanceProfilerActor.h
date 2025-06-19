#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBLevelStreamVolumeTracker.h"
#include "SBPerformanceProfilerActor.generated.h"

class ACameraActor;
class UCameraComponent;
class USceneComponent;
class USplineComponent;

UCLASS()
class SB_API ASBPerformanceProfilerActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, VisibleAnywhere)
    UCameraComponent* CameraComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    USceneComponent* SceneComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    USplineComponent* CameraSpline;
    
    UPROPERTY(EditAnywhere)
    float CameraPreviewDistance;
    
    UPROPERTY(EditAnywhere)
    float LimitValue;
    
    UPROPERTY(EditAnywhere)
    float MoveDistancePerSecond;
    
    UPROPERTY(Transient)
    bool bStart;
    
    UPROPERTY(Transient)
    float CurrentDistance;
    
    UPROPERTY(Transient)
    float RemainCheckDistance;
    
    UPROPERTY(Transient)
    bool bCheckGPU;
    
    UPROPERTY(Transient)
    bool bCheckLevel;
    
    UPROPERTY(Transient)
    float MoveSpeedScale;
    
    UPROPERTY(Transient)
    ACameraActor* ViewTargetActor;
    
    UPROPERTY(Transient)
    FString Filename;
    
    UPROPERTY(Transient)
    int32 RecordCount;
    
    UPROPERTY(Transient)
    float LockCameraDistance;
    
    UPROPERTY(Transient)
    float MaxUsedMem;
    
    UPROPERTY(Transient)
    FSBLevelStreamVolumeTracker LevelStreamVolumeTracker;
    
    UPROPERTY(Transient)
    bool bCheckFinishedLevelStreaming;
    
    UPROPERTY(Transient)
    float CheckFinishedLevelStreamingTime;
    
    UPROPERTY(Transient)
    bool bPrintProfileLog;
    
public:
    ASBPerformanceProfilerActor(const FObjectInitializer& ObjectInitializer);

};

