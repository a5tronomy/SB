#pragma once
#include "CoreMinimal.h"
#include "ESBUILobbyState.generated.h"

UENUM()
enum class ESBUILobbyState : uint8 {
    None,
    InitialSetup,
    Splash,
    MainScreen,
    GameSetup,
    FirstMainScreen,
};

