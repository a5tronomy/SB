#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESBItemSpawnRangeType.h"
#include "SBItemSpawnFormation.generated.h"

USTRUCT()
struct FSBItemSpawnFormation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool UseSpawnShow;
    
    UPROPERTY(EditAnywhere)
    bool UseSimulatePhysics;
    
    UPROPERTY(EditAnywhere)
    bool UsePostLocationVerifyCheck;
    
    UPROPERTY(EditAnywhere)
    bool IgnoreFinishSimulatePhysics;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemSpawnRangeType> SpawnRangeType;
    
    UPROPERTY(EditAnywhere)
    float SpawnStartInterval;
    
    UPROPERTY(EditAnywhere)
    float SpawnNextInterval;
    
    UPROPERTY(EditAnywhere)
    bool SpawnCheckLocation;
    
    UPROPERTY(EditAnywhere)
    float SpawnCheckStartDist;
    
    UPROPERTY(EditAnywhere)
    float SpawnCheckEndDist;
    
    UPROPERTY(EditAnywhere)
    bool SpawnCheckForward;
    
    UPROPERTY(EditAnywhere)
    bool RandomRangeUseGlobalSetting;
    
    UPROPERTY(EditAnywhere)
    float RandomRangeDropDistMin;
    
    UPROPERTY(EditAnywhere)
    float RandomRangeDropDistMax;
    
    UPROPERTY(EditAnywhere)
    float RandomRangeDropDirXMin;
    
    UPROPERTY(EditAnywhere)
    float RandomRangeDropDirXMax;
    
    UPROPERTY(EditAnywhere)
    float RandomRangeDropDirYMin;
    
    UPROPERTY(EditAnywhere)
    float RandomRangeDropDirYMax;
    
    UPROPERTY(EditAnywhere)
    float RandomRangeDropDirZMin;
    
    UPROPERTY(EditAnywhere)
    float RandomRangeDropDirZMax;
    
    UPROPERTY(EditAnywhere)
    float RandomRangeDropOffsetZ;
    
    UPROPERTY(EditAnywhere)
    FName RandomRangeCharSocket;
    
    UPROPERTY(EditAnywhere)
    float SequentialArcDistance;
    
    UPROPERTY(EditAnywhere)
    float SequentialArcDegree;
    
    UPROPERTY(EditAnywhere)
    int32 SequentialArcColumnCount;
    
    UPROPERTY(EditAnywhere)
    float SequentialArcDistanceAdditional;
    
    UPROPERTY(EditAnywhere)
    float SequentialArcDecreaseCountFactor;
    
    UPROPERTY(EditAnywhere)
    float SequentialArcDecreaseDegree;
    
    UPROPERTY(EditAnywhere)
    FVector SequentialArcOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator SequentialArcForwardRotation;
    
    UPROPERTY(Transient)
    FVector SequentialArcForward;
    
    SB_API FSBItemSpawnFormation();
};

