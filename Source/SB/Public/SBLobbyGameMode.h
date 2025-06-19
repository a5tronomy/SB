#pragma once
#include "CoreMinimal.h"
#include "SBGameMode.h"
#include "SBLobbyGameMode.generated.h"

UCLASS(MinimalAPI, NonTransient)
class ASBLobbyGameMode : public ASBGameMode {
    GENERATED_BODY()
public:
    ASBLobbyGameMode(const FObjectInitializer& ObjectInitializer);

};

