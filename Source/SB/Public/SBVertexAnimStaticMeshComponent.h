#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "SBVertexAnimStaticMeshComponent.generated.h"

class UMaterialInterface;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBVertexAnimStaticMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AnimParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayTimeLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FadeBeginTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FadeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName FadeParameterName;
    
private:
    UPROPERTY(Transient)
    float CurrentTime;
    
public:
    USBVertexAnimStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVertexAnim(float DelayTime, float TimeLength, FName ParameterName);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterials(TArray<UMaterialInterface*> Materials);
    
    UFUNCTION(BlueprintCallable)
    void SetDissolveFade(float BeginTime, float Duration, FName ParameterName);
    
};

