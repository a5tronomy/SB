#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Volume.h"
#include "SBAmbientSoundVolume.generated.h"

class USoundBase;

UCLASS()
class SB_API ASBAmbientSoundVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool bActiveVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FadeInDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FadeOutDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float Volume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LPFFrequency;
    
private:
    UPROPERTY(Transient)
    FVector LevelObjOrigin;
    
    UPROPERTY(Transient)
    FVector LevelObjExtent;
    
public:
    ASBAmbientSoundVolume(const FObjectInitializer& ObjectInitializer);

};

