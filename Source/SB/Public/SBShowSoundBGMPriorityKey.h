#pragma once
#include "CoreMinimal.h"
#include "SBShowKey.h"
#include "SBShowSoundBGMPriorityKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowSoundBGMPriorityKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName BGMVolumeName;
    
    UPROPERTY(EditAnywhere)
    float Priority;
    
    USBShowSoundBGMPriorityKey();

};

