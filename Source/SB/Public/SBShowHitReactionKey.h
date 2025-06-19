#pragma once
#include "CoreMinimal.h"
#include "SBShowKey.h"
#include "SBShowHitReactionKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowHitReactionKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString FrontAnimResourcePath;
    
    UPROPERTY(EditAnywhere)
    FString BackAnimResourcePath;
    
    UPROPERTY(EditAnywhere)
    FString LeftAnimResourcePath;
    
    UPROPERTY(EditAnywhere)
    FString RightAnimResourcePath;
    
    UPROPERTY(EditAnywhere)
    bool bAdditiveAnim;
    
    UPROPERTY(EditAnywhere)
    bool bStopAtMove;
    
    UPROPERTY(EditAnywhere)
    float PlayStartTime;
    
    UPROPERTY(EditAnywhere)
    float PlayEndTime;
    
    UPROPERTY(EditAnywhere)
    float AnimPlayRate;
    
    UPROPERTY(EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(EditAnywhere)
    float BlendOutTime;
    
    UPROPERTY(EditAnywhere)
    bool bLoop;
    
    UPROPERTY(EditAnywhere)
    int32 LoopCount;
    
    UPROPERTY(EditAnywhere)
    float AnimWeight;
    
    UPROPERTY(EditAnywhere)
    int32 CustomIndex;
    
    UPROPERTY(EditAnywhere)
    int32 Priority;
    
    USBShowHitReactionKey();

};

