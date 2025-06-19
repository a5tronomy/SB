#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "SBBehaviorTreeComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SB_API USBBehaviorTreeComponent : public UBehaviorTreeComponent {
    GENERATED_BODY()
public:
    USBBehaviorTreeComponent(const FObjectInitializer& ObjectInitializer);

};

