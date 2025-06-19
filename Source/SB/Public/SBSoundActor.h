#pragma once
#include "CoreMinimal.h"
#include "Sound/AmbientSound.h"
#include "SBSoundActor.generated.h"

UCLASS()
class ASBSoundActor : public AAmbientSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bMuteWhenLoading;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bMuteWhenWarp;
    
    ASBSoundActor(const FObjectInitializer& ObjectInitializer);

};

