#pragma once
#include "CoreMinimal.h"
#include "Engine/Scene.h"
#include "SBShowKey.h"
#include "SBShowPostProcessKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowPostProcessKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(EditAnywhere)
    float BlendOutTime;
    
    UPROPERTY(EditAnywhere)
    bool bInfinite;
    
    UPROPERTY(EditAnywhere)
    bool bPlayToMainCharacter;
    
    UPROPERTY(EditAnywhere)
    int32 PlayTargetIndex;
    
    UPROPERTY(EditAnywhere)
    bool bPlayerCharacterOnly;
    
    UPROPERTY(EditAnywhere)
    FPostProcessSettings PostProcessSettings;
    
    USBShowPostProcessKey();

};

