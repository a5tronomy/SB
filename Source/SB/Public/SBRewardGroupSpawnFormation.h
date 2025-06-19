#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "ESBItemBucketType.h"
#include "ESBItemSpawnRangeType.h"
#include "SBRewardGroupSpawnFormation.generated.h"

UCLASS()
class SB_API USBRewardGroupSpawnFormation : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemSpawnRangeType> SpawnRangeType;
    
    UPROPERTY(EditAnywhere)
    bool UseSpawnShow;
    
    UPROPERTY(EditAnywhere)
    bool UseSimulatePhysics;
    
    UPROPERTY(EditAnywhere)
    bool UsePostLocationVerifyCheck;
    
    UPROPERTY(EditAnywhere)
    bool IgnoreFinishSimulatePhysics;
    
    UPROPERTY(EditAnywhere)
    float SpawnStartInterval;
    
    UPROPERTY(EditAnywhere)
    float SpawnNextInterval;
    
    UPROPERTY(EditAnywhere)
    float SpawnDelayTime;
    
    UPROPERTY(EditAnywhere)
    bool SpawnCheckLocation;
    
    UPROPERTY(EditAnywhere)
    float SpawnCheckStartDist;
    
    UPROPERTY(EditAnywhere)
    float SpawnCheckEndDist;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemBucketType> SpawnTargetType;
    
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
    
    USBRewardGroupSpawnFormation();

};

