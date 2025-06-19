#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "LiveLinkGameInstance.generated.h"

UCLASS(NonTransient)
class LIVELINKMVNPLUGIN_API ULiveLinkGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint16 PortNumber;
    
    ULiveLinkGameInstance();

};

