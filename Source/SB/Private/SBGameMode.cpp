#include "SBGameMode.h"
#include "SBGameState.h"
#include "SBHUD.h"
#include "SBNetworkPlayerController.h"
#include "SBNetworkPlayerState.h"

ASBGameMode::ASBGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = ASBGameState::StaticClass();
    this->PlayerControllerClass = ASBNetworkPlayerController::StaticClass();
    this->PlayerStateClass = ASBNetworkPlayerState::StaticClass();
    this->HUDClass = ASBHUD::StaticClass();
    this->bDrawPlayerHUDInfo = true;
    this->BattleMusicStartEventPath = TEXT("/Game/Sound/EVE_BGM_04_BridgeZone");
    this->BattleMusicStopEventPath = TEXT("/Game/Sound/EVE_BGM_04_BridgeZone_Stop");
}


