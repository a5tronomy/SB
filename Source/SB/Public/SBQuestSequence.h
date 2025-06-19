#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBQuestSequence.generated.h"

UCLASS()
class SB_API USBQuestSequence : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    uint32 Version;
    
    USBQuestSequence();

};

