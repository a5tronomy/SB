#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Components/ContentWidget.h"
#include "EMaskTextureChannel.h"
#include "MaskMaterialSetting.h"
#include "BackgroundBlurWithMask.generated.h"

class UTexture;
class UTexture2D;
class UTextureRenderTarget2D;

UCLASS()
class BACKGROUNDBLURWITHMASK_API UBackgroundBlurWithMask : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bApplyAlphaToBlur;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BlurStrength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseMaskMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* MaskTexture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMaskMaterialSetting MaskMaterialSetting;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EMaskTextureChannel> MaskTextureChannel;
    
    UPROPERTY()
    bool bOverrideAutoRadiusCalculation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    int32 BlurRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush LowQualityFallbackBrush;
    
protected:
    UPROPERTY(Transient)
    UTextureRenderTarget2D* MaskMaterialRenderTarget;
    
public:
    UBackgroundBlurWithMask();

    UFUNCTION(BlueprintCallable)
    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetUseMaskMaterial(bool bInUseMaskMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetPadding(FMargin InPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetMaskTextureChannel(TEnumAsByte<EMaskTextureChannel> InMaskTextureChannel);
    
    UFUNCTION(BlueprintCallable)
    void SetMaskTexture(UTexture2D* InMaskTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetMaskMaterialSetting(const FMaskMaterialSetting& InMaskMaterialSetting);
    
    UFUNCTION(BlueprintCallable)
    void SetLowQualityFallbackBrush(const FSlateBrush& InBrush);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetBlurStrength(float InStrength);
    
    UFUNCTION(BlueprintCallable)
    void SetBlurRadius(int32 InBlurRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);
    
    UFUNCTION(BlueprintCallable)
    void RedrawMaskMaterial();
    
    UFUNCTION(BlueprintPure)
    UTexture* GetMaskTextureInUse() const;
    
};

