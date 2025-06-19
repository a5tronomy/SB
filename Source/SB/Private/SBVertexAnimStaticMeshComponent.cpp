#include "SBVertexAnimStaticMeshComponent.h"

USBVertexAnimStaticMeshComponent::USBVertexAnimStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AnimParameterName = TEXT("Time");
    this->PlayTimeLength = 0.00f;
    this->PlayDelayTime = 0.00f;
    this->FadeBeginTime = 0.00f;
    this->FadeDuration = 0.00f;
    this->FadeParameterName = TEXT("Fade");
    this->CurrentTime = 0.00f;
}

void USBVertexAnimStaticMeshComponent::SetVertexAnim(float DelayTime, float TimeLength, FName ParameterName) {
}

void USBVertexAnimStaticMeshComponent::SetMaterials(TArray<UMaterialInterface*> Materials) {
}

void USBVertexAnimStaticMeshComponent::SetDissolveFade(float BeginTime, float Duration, FName ParameterName) {
}


