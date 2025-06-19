#include "SBCharacterSlopeMovVolume.h"
#include "Components/SplineComponent.h"

ASBCharacterSlopeMovVolume::ASBCharacterSlopeMovVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->Priority = 0.00f;
    this->MovingSplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("MovingSplineComponent"));
    this->bMakFromMovingSplineMeshActor = false;
    this->MakedMovingSplineComponent = NULL;
    this->bIgnoreSlopeMovingCancelRayCheck = false;
    this->MovingSplineAreaRadius = 0.00f;
    this->EndPointMovingStartBlockAreaRadius = 0.00f;
    this->IdleRunBlendSpaceName = TEXT("BlendSpace'/Game/Art/Character/PC/CH_P_EVE_01/Animation/BlendSpace/SlopeMoveBS.SlopeMoveBS'");
    this->MoveForwardScale = 0.00f;
    this->MoveRightScale = 1.00f;
    this->SplineForceScale = 1.00f;
    this->GravityScale = 1.00f;
    this->bControlRelativeLocZ = false;
    this->RelativeLocZ = 0.00f;
    this->MoveControlScale = 0.20f;
    this->MoveControlScaleRatioFromHitNormal = 1.00f;
    this->MoveAcceleration = 700.00f;
    this->MaxSpeed = 1800.00f;
    this->MaxJumpSpeed = 700.00f;
    this->MaxToAnotherMovSpeed = 400.00f;
    this->bDisableJump = false;
    this->EnableSlopeCheckExtraRange = 0.00f;
    this->SlopeMoveJumpLandingCustomValidCheck = false;
    this->SlopeMoveJumpLandingDegUpVecToHit = 40.00f;
    this->bOverrideSlopeMoveUpVectorBlendTime = false;
    this->SlopeMoveUpVectorBlendTime = 0.00f;
    this->CamDollyIndex = 0;
    this->LastEnableInteractionSegmentIndex = -1;
    this->EnableInteractionSegmentSearchRange = 10;
    this->MovingSplineComponent->SetupAttachment(RootComponent);
}


