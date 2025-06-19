#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNode_SequencePlayer.h"
#include "MotionBoneTackID.h"
#include "PreMotionSampleData.h"
#include "SBMotionBoneInfo.h"
#include "SBMotionFutureData.h"
#include "SBAnimNode_SBSMotionPlayer.generated.h"

class USBMotionDB;

USTRUCT(BlueprintType)
struct SBANIMATION_API FSBAnimNode_SBSMotionPlayer : public FAnimNode_SequencePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USBMotionDB* MotionDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MatchPowerMoveInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MatchPowerMoveDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MatchPowerVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MatchPowerBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PrevSampleBlendingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeForUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 IgnoreBoneBlendIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveAnimIndexTimeInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ComputeMotionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName NodeIDName;
    
    UPROPERTY(Transient)
    float UpdateTime;
    
    UPROPERTY(Transient)
    int32 ComputeCount;
    
    UPROPERTY(Transient)
    int32 CurrentMotionIndex;
    
    UPROPERTY(Transient)
    TArray<FPreMotionSampleData> PrevSampleData;
    
    UPROPERTY(Transient)
    float PrevBlendTotalWeight;
    
    UPROPERTY(Transient)
    TArray<FSBMotionBoneInfo> CurrentMotionBoneData;
    
    UPROPERTY(Transient)
    TArray<FVector> CurrentMotionBonePos;
    
    UPROPERTY(Transient)
    TMap<FMotionBoneTackID, int32> CachedBoneToTrackMap;
    
    UPROPERTY(Transient)
    FVector CurrentLocalVelocity;
    
    UPROPERTY(Transient)
    FSBMotionFutureData CurrentFutureData;
    
    UPROPERTY(Transient)
    FTransform CurrentTM;
    
    UPROPERTY(Transient)
    float CurrentTMDeltaTime;
    
    UPROPERTY(Transient)
    int32 CurrentMarkerIndex;
    
    FSBAnimNode_SBSMotionPlayer();
};

