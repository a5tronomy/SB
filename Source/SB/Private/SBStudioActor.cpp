#include "SBStudioActor.h"
#include "Components/SceneComponent.h"
#include "SBSkeletalMeshComponent.h"

ASBStudioActor::ASBStudioActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraSplineMoveFactor = 0.05f;
    this->CameraSplineDampingAlpha = 0.10f;
    this->CameraRotationDampingAlpha = 0.10f;
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->MeshBody = CreateDefaultSubobject<USBSkeletalMeshComponent>(TEXT("Mesh_Body"));
    this->bStateEnter = false;
    this->ExitTryRemainTime = 0.00f;
    this->bLastCameraMoveableWhenPaused = false;
    this->RemainSetViewTargetCount = 0;
    this->BodyCustomAnimNodeName = TEXT("CustomAnimNode");
    this->BodyCustomAnimAdditiveNodeName = TEXT("CustomAnimNodeAdditiveNode");
    this->TemplateSequenceActor = NULL;
    this->SequenceResourceDataAsset = NULL;
    this->KawaiiPhysicsAlpha = 1.00f;
    this->bShortPonyTail = false;
    this->ShowResourceDataAsset = NULL;
    this->ItemRoot = NULL;
    this->ItemRotationSpeed = 30.00f;
    this->bItemVisible = false;
    this->bEnableStudioTickableWhenPaused = true;
    this->bLastActiveWaterPP = false;
    this->bCaptureCameraPivot = false;
    this->TargetSplineProgress = 0.00f;
    this->LastSplineProgress = 0.00f;
    this->TargetCameraRotationYaw = 0.00f;
    this->LastCameraRotationYaw = 0.00f;
    this->bCacheParentSpline = false;
    this->ClothResetCount = 0;
    this->bFirstClothReset = false;
    this->bDepthOfFieldCheckFocalDistance = false;
    this->bEnableDepthOfFieldForceAllowSupportsSlightOutOfFocus = false;
    this->ResetPhysicsBlnedTime = 0.03f;
    this->ResetPhysicsHoldTime = 0.07f;
    this->RemainResetPhysics = 0.00f;
    this->bDisableIdleAdditiveAnim = false;
    this->InputMoveStopRemainCount = 0;
    this->MeshBody->SetupAttachment(Root);
}


void ASBStudioActor::StopShow(FName inShowTag) {
}

void ASBStudioActor::StopLevelSequence(FName inSequenceTag) {
}

void ASBStudioActor::StopAllShow() {
}

void ASBStudioActor::StopAllLevelSequence() {
}

bool ASBStudioActor::PlayStudioShow(const FString& inShowPath) {
    return false;
}

bool ASBStudioActor::PlayShow(FName inShowTag, FSBStudioSequenceParameter inLevelSeqParam, bool bSamePlayThenStop) {
    return false;
}

bool ASBStudioActor::PlayLevelSequence(FName inSequenceTag, FSBStudioSequenceParameter InParam, bool bSamePlayThenStop) {
    return false;
}





void ASBStudioActor::ItemVisible(bool bVisible, bool bForce) {
}

bool ASBStudioActor::IsShortPonyTail() {
    return false;
}

bool ASBStudioActor::IsPlayingShow(FName inShowTag) {
    return false;
}

bool ASBStudioActor::IsPlayingLevelSequence(FName inSequenceTag) {
    return false;
}

bool ASBStudioActor::IsPlayingAnyLevelSequence() {
    return false;
}

bool ASBStudioActor::IsDisableIdleAdditiveAnim() {
    return false;
}

float ASBStudioActor::GetKawaiiPhysicsAlpha() {
    return 0.0f;
}

TEnumAsByte<ESBCharaterAdditiveBodyType> ASBStudioActor::GetIdleAdditiveAnimType() {
    return AdditiveBody_None;
}

float ASBStudioActor::GetIdleAdditiveAnimAlpha() {
    return 0.0f;
}

float ASBStudioActor::GetCurrentCustomAnimByMeshSlotAlpha(FName inComponentTag, TEnumAsByte<ESBSkelMeshSlot> InMeshSlotType) {
    return 0.0f;
}

float ASBStudioActor::GetCurrentCustomAnimAlpha(FName inComponentTag) {
    return 0.0f;
}

float ASBStudioActor::GetCurrentCustomAnimAdditiveAlpha(FName inComponentTag) {
    return 0.0f;
}

FName ASBStudioActor::GetBodyMeshName(FName inSBSkeletalTag) {
    return NAME_None;
}




