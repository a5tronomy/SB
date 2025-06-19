#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_ActorStorageProperty.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_ActorStorageProperty {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 CustomIntValue;
    
    UPROPERTY(EditAnywhere)
    float CustomFloatValue;
    
    SB_API FSBSaveGameData_ActorStorageProperty();
};

