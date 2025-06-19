#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "SBWorldMapVolume.generated.h"

UCLASS()
class SB_API ASBWorldMapVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FName MapAlias;
    
public:
    ASBWorldMapVolume(const FObjectInitializer& ObjectInitializer);

};

