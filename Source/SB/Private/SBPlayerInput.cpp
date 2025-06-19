#include "SBPlayerInput.h"

USBPlayerInput::USBPlayerInput() {
    this->HoldKeyDuration = 0.10f;
    this->ForceWalkBlockDuration = 0.30f;
    this->DefinedSprintActionLists.AddDefaulted(1);
    this->DefinedSwimUpActionLists.AddDefaulted(1);
    this->DefinedSwimDownActionLists.AddDefaulted(1);
    this->DefinedFlyActionKeyLists.AddDefaulted(2);
    this->DefinedEventMoveSlidingKeyLists.AddDefaulted(2);
    this->DefinedCinematicSpeedUpComboKeyLists.AddDefaulted(2);
    this->CinematicSpeedUpScale = 10.00f;
    this->bOnCinematicSpeedUp = false;
    this->DefinedTimeControlKeyLists.AddDefaulted(1);
    this->MoveInputSizeForWalk = 0.60f;
    this->MoveInputSizeForJogging = 0.80f;
    this->FirstPressedForceWalkKeyIndex = -1;
    this->SkipPressedForceWalkKeyIndex = -1;
    this->DefinedForceWalkActionLists.AddDefaulted(1);
    this->RemainHoldSprintKeyDuration = 0.00f;
    this->RemainHoldJumpKeyDuration = 0.00f;
    this->RemainHoldEventSlidingKeyDuration = 0.00f;
    this->RemainForceWalkKeyBlockDuration = 0.00f;
    this->bHoldJumpKey = false;
    this->bHoldSprintKey = false;
    this->bHoldEventMoveSlidingKey = false;
    this->bPushedFlyingActionKey = false;
    this->bPushedSwimUpKey = false;
    this->bPushedSwimDownKey = false;
    this->bPushedTimeControlKey = false;
    this->bPushedJumpKey = false;
    this->bPushedSprintKey = false;
    this->bPushedForceWalkKey = false;
    this->bToggleForceWalk = false;
    this->BlockCountUpdateToggleWalk = 0;
    this->bMoveInputFromPad = false;
    this->MoveInputX = 0.00f;
    this->MoveInputY = 0.00f;
    this->GamePadMoveInputHoldTime = 0.00f;
    this->GamePadMoveValueCorrection = 0.10f;
    this->bLeftStickHit = false;
    this->LeftStickSize = 0.00f;
    this->bRightStickHit = false;
    this->RightStickSize = 0.00f;
}


