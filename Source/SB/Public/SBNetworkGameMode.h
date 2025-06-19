#pragma once
#include "CoreMinimal.h"
#include "SBGameMode.h"
#include "SBNetworkGameMode.generated.h"

UCLASS(MinimalAPI, NonTransient)
class ASBNetworkGameMode : public ASBGameMode {
    GENERATED_BODY()
public:
    ASBNetworkGameMode(const FObjectInitializer& ObjectInitializer);

};

