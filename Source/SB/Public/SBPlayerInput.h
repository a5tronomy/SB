#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InputCoreTypes.h"
#include "SBPlayerInput.generated.h"

UCLASS(Config=Input)
class USBPlayerInput : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config)
    float HoldKeyDuration;
    
    UPROPERTY(Config)
    float ForceWalkBlockDuration;
    
    UPROPERTY(Config)
    TArray<FKey> DefinedSprintKeyLists;
    
    UPROPERTY(Transient)
    TArray<FKey> DefinedSprintActionKeyLists;
    
    UPROPERTY(Config)
    TArray<FName> DefinedSprintActionLists;
    
    UPROPERTY(Config)
    TArray<FKey> DefinedSwimUpKeyLists;
    
    UPROPERTY(Config)
    TArray<FKey> DefinedSwimDownKeyLists;
    
    UPROPERTY(Transient)
    TArray<FKey> DefinedSwimUpActionKeyLists;
    
    UPROPERTY(Config)
    TArray<FName> DefinedSwimUpActionLists;
    
    UPROPERTY(Transient)
    TArray<FKey> DefinedSwimDownActionKeyLists;
    
    UPROPERTY(Config)
    TArray<FName> DefinedSwimDownActionLists;
    
    UPROPERTY(Config)
    TArray<FKey> DefinedFlyActionKeyLists;
    
    UPROPERTY(Config)
    TArray<FKey> DefinedEventMoveSlidingKeyLists;
    
    UPROPERTY(Config)
    TArray<FKey> DefinedCinematicSpeedUpComboKeyLists;
    
    UPROPERTY(Config)
    float CinematicSpeedUpScale;
    
    UPROPERTY(Transient)
    bool bOnCinematicSpeedUp;
    
    UPROPERTY(Config)
    TArray<FKey> DefinedJumpKeyLists;
    
    UPROPERTY(Config)
    TArray<FKey> DefinedTimeControlKeyLists;
    
    UPROPERTY(Config)
    FKey DefinedWireActionPadKey;
    
    UPROPERTY(Config)
    float MoveInputSizeForWalk;
    
    UPROPERTY(Config)
    float MoveInputSizeForJogging;
    
    UPROPERTY(Config)
    TArray<FKey> DefinedForceWalkKey;
    
    UPROPERTY(Transient)
    TArray<FKey> DefinedForceWalkActionKeyLists;
    
    UPROPERTY(Transient)
    TArray<uint8> DefinedForceWalkActionKeyStateLists;
    
    UPROPERTY(Transient)
    int8 FirstPressedForceWalkKeyIndex;
    
    UPROPERTY(Transient)
    int8 SkipPressedForceWalkKeyIndex;
    
    UPROPERTY(Config)
    TArray<FName> DefinedForceWalkActionLists;
    
    UPROPERTY(Transient)
    float RemainHoldSprintKeyDuration;
    
    UPROPERTY(Transient)
    float RemainHoldJumpKeyDuration;
    
    UPROPERTY(Transient)
    float RemainHoldEventSlidingKeyDuration;
    
    UPROPERTY(Transient)
    float RemainForceWalkKeyBlockDuration;
    
    UPROPERTY(Transient)
    bool bHoldJumpKey;
    
    UPROPERTY(Transient)
    bool bHoldSprintKey;
    
    UPROPERTY(Transient)
    bool bHoldEventMoveSlidingKey;
    
    UPROPERTY(Transient)
    bool bPushedFlyingActionKey;
    
    UPROPERTY(Transient)
    bool bPushedSwimUpKey;
    
    UPROPERTY(Transient)
    bool bPushedSwimDownKey;
    
    UPROPERTY(Transient)
    bool bPushedTimeControlKey;
    
    UPROPERTY(Transient)
    bool bPushedJumpKey;
    
    UPROPERTY(Transient)
    bool bPushedSprintKey;
    
    UPROPERTY(Transient)
    bool bPushedForceWalkKey;
    
    UPROPERTY(Transient)
    bool bToggleForceWalk;
    
    UPROPERTY(Transient)
    int32 BlockCountUpdateToggleWalk;
    
    UPROPERTY(Transient)
    bool bMoveInputFromPad;
    
    UPROPERTY(Transient)
    float MoveInputX;
    
    UPROPERTY(Transient)
    float MoveInputY;
    
    UPROPERTY(Transient)
    float GamePadMoveInputHoldTime;
    
    UPROPERTY(Config)
    float GamePadMoveValueCorrection;
    
    UPROPERTY(Transient)
    bool bLeftStickHit;
    
    UPROPERTY(Transient)
    float LeftStickSize;
    
    UPROPERTY(Transient)
    bool bRightStickHit;
    
    UPROPERTY(Transient)
    float RightStickSize;
    
public:
    USBPlayerInput();

};

