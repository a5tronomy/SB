#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SBWidgetComponentInstanceData.generated.h"

USTRUCT()
struct FSBWidgetComponentInstanceData : public FSceneComponentInstanceData {
    GENERATED_BODY()
public:
    SB_API FSBWidgetComponentInstanceData();
};

