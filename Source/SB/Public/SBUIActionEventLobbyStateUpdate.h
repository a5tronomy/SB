#pragma once
#include "CoreMinimal.h"
#include "ESBUILobbyState.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventLobbyStateUpdate.generated.h"

USTRUCT()
struct FSBUIActionEventLobbyStateUpdate : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    ESBUILobbyState LobbyUIState;
    
    SB_API FSBUIActionEventLobbyStateUpdate();
};

