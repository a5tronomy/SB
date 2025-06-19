#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SBEventMoveDataUpdate.generated.h"

USTRUCT()
struct SB_API FSBEventMoveDataUpdate {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FVector StartTargetLocation;
    
    UPROPERTY(Transient)
    FRotator StartTargetRotation;
    
    UPROPERTY(Transient)
    FVector EndTargetLocation;
    
    UPROPERTY(Transient)
    FRotator EndTargetRotation;
    
    UPROPERTY(Transient)
    FVector StartLeaveLocation;
    
    UPROPERTY(Transient)
    FRotator StartLeaveRotation;
    
    UPROPERTY(Transient)
    FVector EndLeaveLocation;
    
    UPROPERTY(Transient)
    FRotator EndLeaveRotation;
    
    FSBEventMoveDataUpdate();
};

