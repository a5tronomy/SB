#pragma once
#include "CoreMinimal.h"
#include "SBShowKey.h"
#include "SBShowSoundEventKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowSoundEventKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName SoundEventAlias;
    
    USBShowSoundEventKey();

};

