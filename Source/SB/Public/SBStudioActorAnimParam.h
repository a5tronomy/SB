#pragma once
#include "CoreMinimal.h"
#include "SBStudioActorAnimParam.generated.h"

USTRUCT(BlueprintType)
struct FSBStudioActorAnimParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LoopCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Priority;
    
    SB_API FSBStudioActorAnimParam();
};

