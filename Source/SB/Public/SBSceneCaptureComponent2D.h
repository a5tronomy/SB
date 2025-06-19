#pragma once
#include "CoreMinimal.h"
#include "Components/SceneCaptureComponent2D.h"
#include "SBSceneCaptureComponent2D.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SB_API USBSceneCaptureComponent2D : public USceneCaptureComponent2D {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    bool bRegisterdTick;
    
public:
    USBSceneCaptureComponent2D(const FObjectInitializer& ObjectInitializer);

};

