#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Volume.h"
#include "SBSoundEventVolume.generated.h"

UCLASS()
class SB_API ASBSoundEventVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName SoundEventAlias;
    
    UPROPERTY(EditAnywhere)
    float Priority;
    
private:
    UPROPERTY(Transient)
    FVector LevelObjOrigin;
    
    UPROPERTY(Transient)
    FVector LevelObjExtent;
    
public:
    ASBSoundEventVolume(const FObjectInitializer& ObjectInitializer);

};

