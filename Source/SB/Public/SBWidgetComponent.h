#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/MeshComponent.h"
#include "ESBWidgetBlendMode.h"
#include "ESBWidgetGeometryMode.h"
#include "ESBWidgetSpace.h"
#include "ESBWidgetTimingPolicy.h"
#include "Templates/SubclassOf.h"
#include "SBWidgetComponent.generated.h"

class UBodySetup;
class ULocalPlayer;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UTextureRenderTarget2D;
class UUserWidget;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SB_API USBWidgetComponent : public UMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ESBWidgetSpace Space;
    
    UPROPERTY(EditAnywhere)
    ESBWidgetTimingPolicy TimingPolicy;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UUserWidget> WidgetClass;
    
    UPROPERTY(EditAnywhere)
    FIntPoint DrawSize;
    
    UPROPERTY(EditAnywhere)
    bool bManuallyRedraw;
    
    UPROPERTY()
    bool bRedrawRequested;
    
    UPROPERTY(EditAnywhere)
    float RedrawTime;
    
    UPROPERTY()
    FIntPoint CurrentDrawSize;
    
    UPROPERTY(EditAnywhere)
    bool bDrawAtDesiredSize;
    
    UPROPERTY(EditAnywhere)
    FVector2D Pivot;
    
    UPROPERTY(EditAnywhere)
    bool bReceiveHardwareInput;
    
    UPROPERTY(EditAnywhere)
    bool bWindowFocusable;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bApplyGammaCorrection;
    
    UPROPERTY()
    ULocalPlayer* OwnerPlayer;
    
    UPROPERTY(EditAnywhere)
    FLinearColor BackgroundColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor TintColorAndOpacity;
    
    UPROPERTY(EditAnywhere)
    float OpacityFromTexture;
    
    UPROPERTY(EditAnywhere)
    ESBWidgetBlendMode BlendMode;
    
    UPROPERTY(EditAnywhere)
    bool bIsTwoSided;
    
    UPROPERTY(EditAnywhere)
    bool TickWhenOffscreen;
    
    UPROPERTY(DuplicateTransient, Instanced, Transient)
    UUserWidget* Widget;
    
    UPROPERTY(DuplicateTransient, Transient)
    UBodySetup* BodySetup;
    
    UPROPERTY()
    UMaterialInterface* TranslucentMaterial;
    
    UPROPERTY()
    UMaterialInterface* TranslucentMaterial_OneSided;
    
    UPROPERTY()
    UMaterialInterface* OpaqueMaterial;
    
    UPROPERTY()
    UMaterialInterface* OpaqueMaterial_OneSided;
    
    UPROPERTY()
    UMaterialInterface* MaskedMaterial;
    
    UPROPERTY()
    UMaterialInterface* MaskedMaterial_OneSided;
    
    UPROPERTY(DuplicateTransient, Transient)
    UTextureRenderTarget2D* RenderTarget;
    
    UPROPERTY(DuplicateTransient, Transient)
    UMaterialInstanceDynamic* MaterialInstance;
    
    UPROPERTY(DuplicateTransient, Transient)
    bool bAddedToScreen;
    
    UPROPERTY()
    bool bEditTimeUsable;
    
    UPROPERTY(EditDefaultsOnly)
    FName SharedLayerName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 LayerZOrder;
    
    UPROPERTY(EditAnywhere)
    ESBWidgetGeometryMode GeometryMode;
    
    UPROPERTY(EditAnywhere)
    float CylinderArcAngle;
    
    UPROPERTY(EditAnywhere)
    float BillboardScale;
    
    UPROPERTY(EditAnywhere)
    bool BillboardNearScale;
    
    UPROPERTY(EditAnywhere)
    float BillboardNearDistance;
    
public:
    USBWidgetComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWindowFocusable(bool bInWindowFocusable);
    
    UFUNCTION(BlueprintCallable)
    void SetWidgetSpace(ESBWidgetSpace NewSpace);
    
    UFUNCTION(BlueprintCallable)
    void SetWidget(UUserWidget* NewWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetTwoSided(const bool bWantTwoSided);
    
    UFUNCTION(BlueprintCallable)
    void SetTintColorAndOpacity(const FLinearColor NewTintColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetTickWhenOffscreen(const bool bWantTickWhenOffscreen);
    
    UFUNCTION(BlueprintCallable)
    void SetRedrawTime(float bInRedrawTime);
    
    UFUNCTION(BlueprintCallable)
    void SetPivot(const FVector2D& InPivot);
    
    UFUNCTION(BlueprintCallable)
    void SetOwnerPlayer(ULocalPlayer* LocalPlayer);
    
    UFUNCTION(BlueprintCallable)
    void SetManuallyRedraw(bool bUseManualRedraw);
    
    UFUNCTION(BlueprintCallable)
    void SetGeometryMode(ESBWidgetGeometryMode InGeometryMode);
    
    UFUNCTION(BlueprintCallable)
    void SetDrawSize(FVector2D Size);
    
    UFUNCTION(BlueprintCallable)
    void SetDrawAtDesiredSize(bool InbDrawAtDesiredSize);
    
    UFUNCTION(BlueprintCallable)
    void SetCylinderArcAngle(const float InCylinderArcAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetBillboardScale(const float InBillboardScale);
    
    UFUNCTION(BlueprintCallable)
    void SetBackgroundColor(const FLinearColor NewBackgroundColor);
    
    UFUNCTION(BlueprintCallable)
    void RequestRedraw();
    
    UFUNCTION(BlueprintPure)
    bool GetWindowFocusable() const;
    
    UFUNCTION(BlueprintPure)
    ESBWidgetSpace GetWidgetSpace() const;
    
    UFUNCTION(BlueprintPure)
    UUserWidget* GetUserWidgetObject() const;
    
    UFUNCTION(BlueprintPure)
    bool GetTwoSided() const;
    
    UFUNCTION(BlueprintPure)
    bool GetTickWhenOffscreen() const;
    
    UFUNCTION(BlueprintPure)
    UTextureRenderTarget2D* GetRenderTarget() const;
    
    UFUNCTION(BlueprintPure)
    float GetRedrawTime() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetPivot() const;
    
    UFUNCTION(BlueprintPure)
    ULocalPlayer* GetOwnerPlayer() const;
    
    UFUNCTION(BlueprintPure)
    UMaterialInstanceDynamic* GetMaterialInstance() const;
    
    UFUNCTION(BlueprintPure)
    bool GetManuallyRedraw() const;
    
    UFUNCTION(BlueprintPure)
    ESBWidgetGeometryMode GetGeometryMode() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetDrawSize() const;
    
    UFUNCTION(BlueprintPure)
    bool GetDrawAtDesiredSize() const;
    
    UFUNCTION(BlueprintPure)
    float GetCylinderArcAngle() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetCurrentDrawSize() const;
    
    UFUNCTION(BlueprintPure)
    float GetBillboardScale() const;
    
};

