#include "SBWidgetComponent.h"

USBWidgetComponent::USBWidgetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRenderCustomDepth = true;
    this->Space = ESBWidgetSpace::World;
    this->TimingPolicy = ESBWidgetTimingPolicy::RealTime;
    this->WidgetClass = NULL;
    this->bManuallyRedraw = false;
    this->bRedrawRequested = true;
    this->RedrawTime = 0.00f;
    this->bDrawAtDesiredSize = false;
    this->bReceiveHardwareInput = false;
    this->bWindowFocusable = true;
    this->bApplyGammaCorrection = false;
    this->OwnerPlayer = NULL;
    this->OpacityFromTexture = 1.00f;
    this->BlendMode = ESBWidgetBlendMode::Masked;
    this->bIsTwoSided = false;
    this->TickWhenOffscreen = false;
    this->Widget = NULL;
    this->BodySetup = NULL;
    this->RenderTarget = NULL;
    this->MaterialInstance = NULL;
    this->bAddedToScreen = false;
    this->bEditTimeUsable = false;
    this->SharedLayerName = TEXT("SBWidgetComponentScreenLayer");
    this->LayerZOrder = -100;
    this->GeometryMode = ESBWidgetGeometryMode::Plane;
    this->CylinderArcAngle = 180.00f;
    this->BillboardScale = 1.00f;
    this->BillboardNearScale = false;
    this->BillboardNearDistance = 1000.00f;
}

void USBWidgetComponent::SetWindowFocusable(bool bInWindowFocusable) {
}

void USBWidgetComponent::SetWidgetSpace(ESBWidgetSpace NewSpace) {
}

void USBWidgetComponent::SetWidget(UUserWidget* NewWidget) {
}

void USBWidgetComponent::SetTwoSided(const bool bWantTwoSided) {
}

void USBWidgetComponent::SetTintColorAndOpacity(const FLinearColor NewTintColorAndOpacity) {
}

void USBWidgetComponent::SetTickWhenOffscreen(const bool bWantTickWhenOffscreen) {
}

void USBWidgetComponent::SetRedrawTime(float bInRedrawTime) {
}

void USBWidgetComponent::SetPivot(const FVector2D& InPivot) {
}

void USBWidgetComponent::SetOwnerPlayer(ULocalPlayer* LocalPlayer) {
}

void USBWidgetComponent::SetManuallyRedraw(bool bUseManualRedraw) {
}

void USBWidgetComponent::SetGeometryMode(ESBWidgetGeometryMode InGeometryMode) {
}

void USBWidgetComponent::SetDrawSize(FVector2D Size) {
}

void USBWidgetComponent::SetDrawAtDesiredSize(bool InbDrawAtDesiredSize) {
}

void USBWidgetComponent::SetCylinderArcAngle(const float InCylinderArcAngle) {
}

void USBWidgetComponent::SetBillboardScale(const float InBillboardScale) {
}

void USBWidgetComponent::SetBackgroundColor(const FLinearColor NewBackgroundColor) {
}

void USBWidgetComponent::RequestRedraw() {
}

bool USBWidgetComponent::GetWindowFocusable() const {
    return false;
}

ESBWidgetSpace USBWidgetComponent::GetWidgetSpace() const {
    return ESBWidgetSpace::World;
}

UUserWidget* USBWidgetComponent::GetUserWidgetObject() const {
    return NULL;
}

bool USBWidgetComponent::GetTwoSided() const {
    return false;
}

bool USBWidgetComponent::GetTickWhenOffscreen() const {
    return false;
}

UTextureRenderTarget2D* USBWidgetComponent::GetRenderTarget() const {
    return NULL;
}

float USBWidgetComponent::GetRedrawTime() const {
    return 0.0f;
}

FVector2D USBWidgetComponent::GetPivot() const {
    return FVector2D{};
}

ULocalPlayer* USBWidgetComponent::GetOwnerPlayer() const {
    return NULL;
}

UMaterialInstanceDynamic* USBWidgetComponent::GetMaterialInstance() const {
    return NULL;
}

bool USBWidgetComponent::GetManuallyRedraw() const {
    return false;
}

ESBWidgetGeometryMode USBWidgetComponent::GetGeometryMode() const {
    return ESBWidgetGeometryMode::Plane;
}

FVector2D USBWidgetComponent::GetDrawSize() const {
    return FVector2D{};
}

bool USBWidgetComponent::GetDrawAtDesiredSize() const {
    return false;
}

float USBWidgetComponent::GetCylinderArcAngle() const {
    return 0.0f;
}

FVector2D USBWidgetComponent::GetCurrentDrawSize() const {
    return FVector2D{};
}

float USBWidgetComponent::GetBillboardScale() const {
    return 0.0f;
}


