#pragma once
#include "CoreMinimal.h"
#include "SBSequencerQTEActorInfo.generated.h"

class UWidget;

USTRUCT(BlueprintType)
struct FSBSequencerQTEActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, Transient)
    UWidget* PanelWidget;
    
    SB_API FSBSequencerQTEActorInfo();
};

