#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBCharacterDSocketInfo.h"
#include "SBCharacterFactorSetComponent.generated.h"

class USBCharacterFactorSet;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SB_API USBCharacterFactorSetComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USBCharacterFactorSet* TargetFactorSet;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBCharacterDSocketInfo> DynamicSocketInstances;
    
    USBCharacterFactorSetComponent(const FObjectInitializer& ObjectInitializer);

};

