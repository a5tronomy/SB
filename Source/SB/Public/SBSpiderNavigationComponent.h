#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SBSpiderNavigationComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SB_API USBSpiderNavigationComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool bUseDebug;
    
public:
    USBSpiderNavigationComponent(const FObjectInitializer& ObjectInitializer);

};

