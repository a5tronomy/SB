#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "SBShowCreateDestructibleCollisionResponseToChannel.generated.h"

USTRUCT(BlueprintType)
struct FSBShowCreateDestructibleCollisionResponseToChannel {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> Channel;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionResponse> Response;
    
    SB_API FSBShowCreateDestructibleCollisionResponseToChannel();
};

