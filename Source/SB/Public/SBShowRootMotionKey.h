#pragma once
#include "CoreMinimal.h"
#include "ESBShowActorTarget.h"
#include "SBShowKey.h"
#include "SBShowRootMotionKey.generated.h"

class UCurveVector;

UCLASS(EditInlineNew)
class SB_API USBShowRootMotionKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString RootMotionPath;
    
    UPROPERTY(EditAnywhere)
    int32 Priority;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowActorTarget> Target;
    
    UPROPERTY(EditAnywhere)
    int32 PlayTargetIndex;
    
    UPROPERTY(EditAnywhere)
    UCurveVector* TranslationCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveVector* RotationCurve;
    
    USBShowRootMotionKey();

};

