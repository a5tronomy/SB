#pragma once
#include "CoreMinimal.h"
#include "SBActorRootMotionData.generated.h"

class UCurveVector;
class USBRootMotionData;

USTRUCT(BlueprintType)
struct FSBActorRootMotionData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    USBRootMotionData* pRootMotionData;
    
    UPROPERTY(Transient)
    UCurveVector* TranslationCurve;
    
    UPROPERTY(Transient)
    UCurveVector* RotationCurve;
    
    SB_API FSBActorRootMotionData();
};

