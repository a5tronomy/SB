#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "SBShowStaticMeshActor.generated.h"

UCLASS()
class SB_API ASBShowStaticMeshActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
    ASBShowStaticMeshActor(const FObjectInitializer& ObjectInitializer);

};

