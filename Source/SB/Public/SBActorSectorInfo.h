#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBActorSectorInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBActorSectorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    bool bRegisteActor;
    
    UPROPERTY(Transient)
    int32 MinSectorX;
    
    UPROPERTY(Transient)
    int32 MinSectorY;
    
    UPROPERTY(Transient)
    int32 MaxSectorX;
    
    UPROPERTY(Transient)
    int32 MaxSectorY;
    
    UPROPERTY(Transient)
    FVector ActorOrigin;
    
    UPROPERTY(Transient)
    FVector ActorExtent;
    
    SB_API FSBActorSectorInfo();
};

