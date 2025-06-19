#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "SBAIControlVolume.generated.h"

UCLASS()
class SB_API ASBAIControlVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bNotDetectTarget;
    
    ASBAIControlVolume(const FObjectInitializer& ObjectInitializer);

};

