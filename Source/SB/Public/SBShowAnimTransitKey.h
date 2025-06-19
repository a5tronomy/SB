#pragma once
#include "CoreMinimal.h"
#include "ESBCharacterTransitAnim.h"
#include "ESBAnimTransitChannel.h"
#include "ESBShowActorTarget.h"
#include "SBShowKey.h"
#include "SBShowAnimTransitKey.generated.h"

class USBTransitAnimGroupData;

UCLASS(EditInlineNew)
class SB_API USBShowAnimTransitKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBCharacterTransitAnim> TransitAnimType;
    
    UPROPERTY(EditAnywhere)
    bool UseTransitAnimGroup;
    
    UPROPERTY(EditAnywhere)
    USBTransitAnimGroupData* TransitAnimGroupData;
    
    UPROPERTY(EditAnywhere)
    FName TransitAnimGroupName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBAnimTransitChannel::Type> TransitAnimChannel;
    
    UPROPERTY(EditAnywhere)
    bool bStopActiveTransitAnim;
    
    UPROPERTY(EditAnywhere)
    bool bExecIfRunning;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowActorTarget> Target;
    
    UPROPERTY(EditAnywhere)
    int32 PlayTargetIndex;
    
    UPROPERTY(EditAnywhere)
    bool bAbsoluteResourcePath;
    
    UPROPERTY(EditAnywhere)
    FString DefaultResourcePath;
    
    USBShowAnimTransitKey();

};

