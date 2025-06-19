#pragma once
#include "CoreMinimal.h"
#include "SBSequencerInputCounterActorInfo.generated.h"

class UWidget;

USTRUCT(BlueprintType)
struct FSBSequencerInputCounterActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, Transient)
    UWidget* PanelWidget;
    
    SB_API FSBSequencerInputCounterActorInfo();
};

