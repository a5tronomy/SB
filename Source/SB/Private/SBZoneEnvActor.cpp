#include "SBZoneEnvActor.h"

ASBZoneEnvActor::ASBZoneEnvActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseEndPhysicsTick = true;
    this->bFixedSpawnLocation = false;
    this->bScanTargeted = false;
    this->bScanNoBlock = false;
    this->bScanExclusion = false;
    this->bIgnoreRenderControl = false;
    this->bScanOverrided = false;
    this->InteractableMarkerDistanceOverride = 0.00f;
    this->ResetBufferDataAtRelease = false;
    this->InteractAdjustPosType = ESBAdjustInteractPosType_TargetRange;
    this->ActiveBoundType = ESBENV_BoundType_None;
    this->bEnableChangeWorldLevelEvent = false;
    this->bDisableCollsiionPlayerAttachToSeq = false;
    this->FloorCheckDistance = 1500.00f;
    this->bPhotoModeSubject = false;
    this->bIgnoreCollisionAtInteraction = false;
    this->bIgnoreTraceInteractinPoint = false;
    this->InteractionValidAreaTraceRadius = 0.00f;
    this->CampRespawnActor = NULL;
    this->bEnterTriggerWithFloor = false;
    this->bMoveInputIgnore = false;
    this->SoundSet = NULL;
    this->bResetRopeWhenWarpSafeLocation = false;
    this->bEnableAdjustSpawnLocation = false;
    this->bDisableComponentsClothTick = false;
    this->ComponentsClothTickDistance = 0.00f;
    this->bIgnoreBlockingWhenCharacterPenetrating = true;
    this->MeshClipingApplyType1 = ESBMeshClipingApplyType_All;
    this->MeshClipingApplyType2 = ESBMeshClipingApplyType_All;
    this->MeshClipingApplyType3 = ESBMeshClipingApplyType_All;
    this->MeshClipingApplyType4 = ESBMeshClipingApplyType_All;
    this->EnvSkeletalMeshComponent = NULL;
    this->EnvStaticMeshComponent = NULL;
    this->PhysicsEnablePrimitiveComponent = NULL;
    this->bNeedEnableTick = false;
    this->OriginComponent = NULL;
    this->EventMoveDataComponent = NULL;
    this->QuestMarkerComponent = NULL;
    this->bActiveActor = true;
    this->bIgnoreHiddenInGame = false;
    this->bExistFloor = false;
    this->PendingEventIndex = -1;
    this->bOcclusion = false;
    this->LastCheckOcclusionFrameCount = 0;
    this->bHideByEventContents = false;
    this->bIgnoreArriveWhenHitProjectile = false;
    this->LastStencilValue = 0;
    this->PendingStencilValue = 0;
    this->InitCollisionAtRootComponent = ECollisionEnabled::NoCollision;
    this->bInitRootComponentActivate = false;
    this->bInitEnableSimulatePhysics = false;
    this->bTickEnabled = false;
    this->bStaticUntilInteraction = false;
    this->ActiveTimeAfterInteraction = 10.00f;
    this->bDisableOptimization = false;
    this->bBPTickEnabled = true;
    this->TickDistance = 0.00f;
    this->bIgnoreHiddenWhenOcclusion = false;
    this->bForceNotOcclusionFromLevelSequence = false;
    this->bDisableOcclusionFromLevelSequence = false;
    this->bControlInertiaTensorScale = false;
    this->ControlInertiaTensorScaleHighFrame = 160.00f;
}


void ASBZoneEnvActor::SetVectorBufferData(TEnumAsByte<ESBBufferDataSlot> Slot, FVector Data) {
}

void ASBZoneEnvActor::SetStringBufferData(TEnumAsByte<ESBBufferDataSlot> Slot, const FString& Data) {
}

void ASBZoneEnvActor::SetPuzzleData(const FString& PuzzleData) {
}

void ASBZoneEnvActor::SetPendingCustomDepthStencil() {
}

void ASBZoneEnvActor::SetIntBufferData(TEnumAsByte<ESBBufferDataSlot> Slot, int32 Data) {
}

void ASBZoneEnvActor::SetFloatBufferData(TEnumAsByte<ESBBufferDataSlot> Slot, float Data) {
}

void ASBZoneEnvActor::SetEnvActorName(FName InEnvName) {
}

void ASBZoneEnvActor::SetBPTickEnable(bool bEnable) {
}

void ASBZoneEnvActor::SetBoolBufferData(TEnumAsByte<ESBBufferDataSlot> Slot, bool Data) {
}

bool ASBZoneEnvActor::PlaySingleShow(const FString& inShowPath, bool inFullPath, FVector InTargetLocation) {
    return false;
}







void ASBZoneEnvActor::MakeBufferData() {
}

bool ASBZoneEnvActor::IsPuzzleSuccess() {
    return false;
}

bool ASBZoneEnvActor::IsGrabAllow() {
    return false;
}

bool ASBZoneEnvActor::IsGrabActive() {
    return false;
}

bool ASBZoneEnvActor::IsDataEmpty() {
    return false;
}





void ASBZoneEnvActor::InputAxis(float Value, TEnumAsByte<ESBInputAxisType> InputAxisType) {
}

void ASBZoneEnvActor::InitPhysicsChannel() {
}

bool ASBZoneEnvActor::HaveBufferData() {
    return false;
}

FVector ASBZoneEnvActor::GetVectorBufferData(TEnumAsByte<ESBBufferDataSlot> Slot) {
    return FVector{};
}

FString ASBZoneEnvActor::GetStringBufferData(TEnumAsByte<ESBBufferDataSlot> Slot) {
    return TEXT("");
}

FName ASBZoneEnvActor::GetStateTagname() {
    return NAME_None;
}

int32 ASBZoneEnvActor::GetStateProgressMaxCount(FName StateName) {
    return 0;
}

FString ASBZoneEnvActor::GetPuzzleData() {
    return TEXT("");
}

int32 ASBZoneEnvActor::GetProgressValue(FName InTagName) {
    return 0;
}

FVector ASBZoneEnvActor::GetPendingMovementLocalInputVector() const {
    return FVector{};
}

FVector ASBZoneEnvActor::GetPendingMovementInputVector() const {
    return FVector{};
}

USBZoneEnvMovementComponent* ASBZoneEnvActor::GetMovementComponent() const {
    return NULL;
}

FVector ASBZoneEnvActor::GetLastMovementLocalInputVector() const {
    return FVector{};
}

FVector ASBZoneEnvActor::GetLastMovementInputVector() const {
    return FVector{};
}

int32 ASBZoneEnvActor::GetIntBufferData(TEnumAsByte<ESBBufferDataSlot> Slot) {
    return 0;
}

float ASBZoneEnvActor::GetFloatBufferData(TEnumAsByte<ESBBufferDataSlot> Slot) {
    return 0.0f;
}

USkeletalMeshComponent* ASBZoneEnvActor::GetEnvSkeletalMeshComponent() {
    return NULL;
}

USBSkeletalMeshComponent* ASBZoneEnvActor::GetEnvSBSkeletalMeshComponent() {
    return NULL;
}

USBZoneEnvGrabComponent* ASBZoneEnvActor::GetEnvGrabComponent() {
    return NULL;
}

bool ASBZoneEnvActor::GetBoolBufferData(TEnumAsByte<ESBBufferDataSlot> Slot) {
    return false;
}









FVector ASBZoneEnvActor::ConsumeMovementInputVector() {
    return FVector{};
}

void ASBZoneEnvActor::CompletePuzzle() {
}




void ASBZoneEnvActor::AddMovementInput(FVector WorldDirection, FVector LocalDirection, float ScaleValue, bool bForce) {
}

int32 ASBZoneEnvActor::AddEnvProgressInfo(USplineComponent* ProgressSpline, FRuntimeFloatCurve InterpGraph) {
    return 0;
}


