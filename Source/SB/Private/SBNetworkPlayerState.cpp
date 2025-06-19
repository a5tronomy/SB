#include "SBNetworkPlayerState.h"
#include "Net/UnrealNetwork.h"

ASBNetworkPlayerState::ASBNetworkPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActorNetGuid = 0;
}

void ASBNetworkPlayerState::OnRep_PlayerSessionId() {
}

void ASBNetworkPlayerState::OnRep_ActorGuid() {
}

void ASBNetworkPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBNetworkPlayerState, ActorNetGuid);
    DOREPLIFETIME(ASBNetworkPlayerState, PlayerSessionId);
}


