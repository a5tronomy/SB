#include "SBEventMoveDataComponent.h"

USBEventMoveDataComponent::USBEventMoveDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Priority = 0.00f;
    this->bDisableInteraction = false;
    this->bPendingApplyActorStorage = false;
    this->bRegisteActorStorage = false;
    this->CollisionPrimitiveComponent = NULL;
    this->CollisionAtFailedInteraction = NULL;
    this->EventMoveData = NULL;
    this->bDynamic = false;
    this->bSaveActorStorage = false;
    this->bUseDisableInteractionTimer = false;
    this->DisableInteractionTimer = 0.00f;
    this->bUseDisableInteractionCounter = false;
    this->DisableInteractionCounter = 0;
    this->RemainEnableInteraction = 0.00f;
    this->RemainInteractionCounter = 0;
    this->MakedDisableProgressTimerEventPercent = -1.00f;
    this->MakedDisableProgressCounterEventPercent = -1.00f;
    this->EventVisualMeshActor = NULL;
    this->BalanceMovingSplineComponent = NULL;
    this->RopeOverrideLength = 0.00f;
    this->bOverrideBalanceMovingIgnoreDistanceAtStart = false;
    this->OverrideBalanceMovingIgnoreDistanceAtStart = 0.00f;
    this->bOverrideBalanceMovingIgnoreDistanceAtEnd = false;
    this->OverrideBalanceMovingIgnoreDistanceAtEnd = 0.00f;
    this->bOverrideSideRodWallSearch = false;
    this->OverrideSideRodWallSearchDist = 0.00f;
    this->OverrideSideRodWallSearchRange = 0.00f;
    this->RopeTargetLengthBlendTime = 0.00f;
    this->CurrentRopeTargetLengthBlendTime = 0.00f;
    this->RopeBlendTargetLength = 0.00f;
    this->RopeBlendStartLength = 0.00f;
    this->bDisplayScanPoint = false;
    this->ScanDisplayType = ESBScanDisplayType_EventMovePath;
    this->bUpdated = false;
}

void USBEventMoveDataComponent::SetRopeMaxLength(float InMaxLength) {
}

void USBEventMoveDataComponent::SetRopeLeaveDistance(float StartLeaveDistance, float EndLeaveDistance) {
}

void USBEventMoveDataComponent::SetRopeAxisLocation(float InTargetLength, float InBlendTime) {
}

void USBEventMoveDataComponent::SetOverrideSideRodWallSearch(float Distance, float Range) {
}

void USBEventMoveDataComponent::SetOverrideRopeMaxLength(float InMaxLength) {
}

void USBEventMoveDataComponent::SetOverrideBalanceMovingIgnoreDistance(float DistAtStart, float DistAtEnd) {
}

void USBEventMoveDataComponent::SetEventMoveLeaveLocation(const FVector& NewStartLeaveLocation, const FVector& NewEndLeaveLocation) {
}

void USBEventMoveDataComponent::SetEnableRope(bool bEnableRopeFlag) {
}

void USBEventMoveDataComponent::SetDisableInteractionFlag(bool InFlag) {
}

void USBEventMoveDataComponent::NotifyBPHitEvent(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) {
}

bool USBEventMoveDataComponent::IsDynamic() {
    return false;
}

float USBEventMoveDataComponent::GetRopeOverrideLength() {
    return 0.0f;
}

USBEventMoveData* USBEventMoveDataComponent::GetData() {
    return NULL;
}

void USBEventMoveDataComponent::DirtyRopeCable(float InSubStepTime) {
}


