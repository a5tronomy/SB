#pragma once
#include "CoreMinimal.h"
#include "IpConnection.h"
#include "NetConnectionEOS.generated.h"

UCLASS(NonTransient)
class UNetConnectionEOS : public UIpConnection {
    GENERATED_BODY()
public:
    UNetConnectionEOS();

};

