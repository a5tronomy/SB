#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SBEngineActorPoolingInterface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class USBEngineActorPoolingInterface : public UInterface {
    GENERATED_BODY()
};

class ISBEngineActorPoolingInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool IsPoolingActor() PURE_VIRTUAL(IsPoolingActor, return false;);
    
};

