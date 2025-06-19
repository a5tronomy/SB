#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/TextureRenderTarget2D.h"
#include "SBSplineTexture.generated.h"

class USplineComponent;
class UTextureRenderTarget2D;

UCLASS()
class SB_API ASBSplineTexture : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FrameCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseConstantVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETextureRenderTargetFormat> TextureRenderTargetFormat;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UTextureRenderTarget2D* SplineTexture;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 TextureSize;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector MinLocation;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector MaxLocation;
    
    ASBSplineTexture(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Bake();
    
};

