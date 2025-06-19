#include "SBBobber.h"

ASBBobber::ASBBobber(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BindingFish = NULL;
    this->State = ESBFishingBobberState_None;
    this->bReel = false;
    this->FightingFishVelocity = 0.00f;
    this->TensionRate = 0.00f;
    this->LiftUpBobberScale = 1.00f;
    this->TimingFinalPullSpeed = NULL;
    this->CurrentMovePattern = NULL;
    this->SkeletalMeshComponent = NULL;
}







TEnumAsByte<ESBFishingBobberState> ASBBobber::GetState() {
    return ESBFishingBobberState_None;
}


