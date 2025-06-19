#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/Scene.h"
#include "SBCineCameraPostProcessActor.generated.h"

UCLASS()
class ASBCineCameraPostProcessActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool bRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float PostProcessBlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FPostProcessSettings PostProcessSettings;
    
    ASBCineCameraPostProcessActor(const FObjectInitializer& ObjectInitializer);

};

