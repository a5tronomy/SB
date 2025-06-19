#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "ESBBroadcastMoveType.h"
#include "ESBCharacterMoveType.h"
#include "SBCharacterMoveInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBCharacterMoveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FVector_NetQuantize100 LastMovementInputVector;
    
    UPROPERTY(Transient)
    FVector_NetQuantizeNormal LastForwardVector;
    
    UPROPERTY(Transient)
    FVector_NetQuantizeNormal TargetCharacterForward;
    
    UPROPERTY(Transient)
    FVector_NetQuantize RopeAxisLocation;
    
    UPROPERTY(Transient)
    TEnumAsByte<EMovementMode> NewMovementMode;
    
    UPROPERTY(Transient)
    uint8 NewCustomMode;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBCharacterMoveType> LastMoveType;
    
    UPROPERTY(Transient)
    bool bWalkingFlag;
    
    UPROPERTY(Transient)
    bool bWalkingWhenMoving;
    
    UPROPERTY(Transient)
    bool bJoggingRun;
    
    UPROPERTY(Transient)
    bool bSprintFlag;
    
    UPROPERTY(Transient)
    bool bFlyingActionFlag;
    
    UPROPERTY(Transient)
    bool bJumpFlag;
    
    UPROPERTY(Transient)
    float RemainMoveAnimSpeedInterpolAfterAction;
    
    UPROPERTY(Transient)
    float LastMoveFowardInput;
    
    UPROPERTY(Transient)
    float LastMoveRightInput;
    
    UPROPERTY(Transient)
    FVector_NetQuantize10 InputDuration;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBBroadcastMoveType> BroadcastMoveType;
    
    UPROPERTY(Transient)
    int32 BroadcastMoveParam;
    
    SB_API FSBCharacterMoveInfo();
};

