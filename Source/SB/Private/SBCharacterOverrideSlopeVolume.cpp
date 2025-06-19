#include "SBCharacterOverrideSlopeVolume.h"

ASBCharacterOverrideSlopeVolume::ASBCharacterOverrideSlopeVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->Priority = 0.00f;
    this->bActiveVolume = true;
    this->bOverrideMoveControlScaleRatioFromHitNormal = false;
    this->MoveControlScaleRatioFromHitNormal = 1.00f;
    this->bOverrideSlopeMoveUpSideAutoMoveDegree = false;
    this->SlopeMoveUpSideAutoMoveDegree = 60.00f;
    this->bOverrideSlopeMoveAutoMoveLeaveExtraDegree = false;
    this->SlopeMoveAutoMoveLeaveExtraDegree = 90.00f;
    this->bOverrideEnableMoveInputOnAutoMoveRange = false;
    this->bEnableMoveInputOnAutoMoveRange = false;
    this->bOverrideJumpLandingCustomValidCheck = false;
    this->bUseJumpLandingCustomValidCheck = false;
    this->JumpLandingDegUpVecToHit = 90.00f;
    this->bOverrideEnableSlopeCheckExtraRange = false;
    this->EnableSlopeCheckExtraRange = 0.00f;
}


