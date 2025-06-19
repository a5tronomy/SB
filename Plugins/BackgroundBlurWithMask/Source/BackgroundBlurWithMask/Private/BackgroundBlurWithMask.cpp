#include "BackgroundBlurWithMask.h"
#include "Components/SlateWrapperTypes.h"

UBackgroundBlurWithMask::UBackgroundBlurWithMask() {
    this->bIsVariable = false;
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->HorizontalAlignment = HAlign_Fill;
    this->VerticalAlignment = VAlign_Fill;
    this->bApplyAlphaToBlur = true;
    this->BlurStrength = 0.00f;
    this->bUseMaskMaterial = false;
    this->MaskTexture = NULL;
    this->MaskTextureChannel = A;
    this->bOverrideAutoRadiusCalculation = false;
    this->BlurRadius = 0;
    this->MaskMaterialRenderTarget = NULL;
}

void UBackgroundBlurWithMask::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UBackgroundBlurWithMask::SetUseMaskMaterial(bool bInUseMaskMaterial) {
}

void UBackgroundBlurWithMask::SetPadding(FMargin InPadding) {
}

void UBackgroundBlurWithMask::SetMaskTextureChannel(TEnumAsByte<EMaskTextureChannel> InMaskTextureChannel) {
}

void UBackgroundBlurWithMask::SetMaskTexture(UTexture2D* InMaskTexture) {
}

void UBackgroundBlurWithMask::SetMaskMaterialSetting(const FMaskMaterialSetting& InMaskMaterialSetting) {
}

void UBackgroundBlurWithMask::SetLowQualityFallbackBrush(const FSlateBrush& InBrush) {
}

void UBackgroundBlurWithMask::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}

void UBackgroundBlurWithMask::SetBlurStrength(float InStrength) {
}

void UBackgroundBlurWithMask::SetBlurRadius(int32 InBlurRadius) {
}

void UBackgroundBlurWithMask::SetApplyAlphaToBlur(bool bInApplyAlphaToBlur) {
}

void UBackgroundBlurWithMask::RedrawMaskMaterial() {
}

UTexture* UBackgroundBlurWithMask::GetMaskTextureInUse() const {
    return NULL;
}


