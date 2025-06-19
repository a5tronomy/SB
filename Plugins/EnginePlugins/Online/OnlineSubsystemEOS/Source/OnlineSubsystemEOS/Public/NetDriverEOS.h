#pragma once
#include "CoreMinimal.h"
#include "IpNetDriver.h"
#include "NetDriverEOS.generated.h"

UCLASS(NonTransient)
class ONLINESUBSYSTEMEOS_API UNetDriverEOS : public UIpNetDriver {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bIsPassthrough;
    
    UPROPERTY(Config)
    bool bIsUsingP2PSockets;
    
    UNetDriverEOS();

};

