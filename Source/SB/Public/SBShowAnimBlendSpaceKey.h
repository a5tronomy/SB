#pragma once
#include "CoreMinimal.h"
#include "ESBAnimNodeBlendSpaceSlot.h"
#include "ESBBlendSpaceChannel.h"
#include "ESBShowActorTarget.h"
#include "SBShowKey.h"
#include "SBShowAnimBlendSpaceKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowAnimBlendSpaceKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Priority;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBAnimNodeBlendSpaceSlot> BlendSpaceSlot;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBBlendSpaceChannel::Type> BlendSpaceChannel;
    
    UPROPERTY(EditAnywhere)
    bool bStopWhenJump;
    
    UPROPERTY(EditAnywhere)
    bool bResetPlayTime;
    
    UPROPERTY(EditAnywhere)
    bool bUseStruggleBSWhenMoveStruggle;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowActorTarget> Target;
    
    UPROPERTY(EditAnywhere)
    int32 PlayTargetIndex;
    
    UPROPERTY(EditAnywhere)
    bool bAbsoluteResourcePath;
    
    UPROPERTY(EditAnywhere)
    FString DefaultResourcePath;
    
    UPROPERTY(EditAnywhere)
    FString DefaultResourcePathWhenStruggle;
    
    UPROPERTY(EditAnywhere)
    bool bUseAreaDirectionCheck;
    
    UPROPERTY(EditAnywhere)
    FString FrontResourcePath;
    
    UPROPERTY(EditAnywhere)
    FString BackResourcePath;
    
    UPROPERTY(EditAnywhere)
    FString LeftResourcePath;
    
    UPROPERTY(EditAnywhere)
    FString RightResourcePath;
    
    UPROPERTY(EditAnywhere)
    bool bStopPlayedCustomAnim;
    
    UPROPERTY(EditAnywhere)
    bool bBlockPlayTransitAnim;
    
    UPROPERTY(EditAnywhere)
    bool bDisableHeadLookAtIK;
    
    UPROPERTY(EditAnywhere)
    bool bDisableBodyLookAtIK;
    
    USBShowAnimBlendSpaceKey();

};

