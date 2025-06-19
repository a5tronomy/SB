#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "SBNetworkPlayerState.generated.h"

UCLASS()
class ASBNetworkPlayerState : public APlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_ActorGuid)
    int32 ActorNetGuid;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_PlayerSessionId)
    FString PlayerSessionId;
    
    ASBNetworkPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void OnRep_PlayerSessionId();
    
    UFUNCTION()
    void OnRep_ActorGuid();
    
};

