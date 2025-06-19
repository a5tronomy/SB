#include "SBMeshStudioActor.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "SBSkeletalMeshComponent.h"

ASBMeshStudioActor::ASBMeshStudioActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MeshStudioType = ESBMeshStudioType::Can;
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Capturer = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("Scene_Capture"));
    this->StaticMeshBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static_Mesh_Body"));
    this->SkeletalMeshBody = CreateDefaultSubobject<USBSkeletalMeshComponent>(TEXT("Skeletal_Mesh_Body"));
    this->bDisableIdleAdditiveAnim = false;
    this->bShortPonyTail = false;
    this->ClothResetCount = 0;
    this->bFirstClothReset = false;
    this->Capturer->SetupAttachment(Root);
    this->SkeletalMeshBody->SetupAttachment(Root);
    this->StaticMeshBody->SetupAttachment(Root);
}

bool ASBMeshStudioActor::SetStaticMeshFromAssetPath(const FString& InPath, FName InTag) {
    return false;
}

bool ASBMeshStudioActor::SetSkeletalMeshFromAssetPath(const FString& InPath, FName InTag) {
    return false;
}

bool ASBMeshStudioActor::SetMaterialFromAssetPath(const FString& InMaterialPath) {
    return false;
}







