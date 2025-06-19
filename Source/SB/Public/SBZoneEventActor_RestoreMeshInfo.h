#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZoneEventActor_RestoreMeshInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBZoneEventActor_RestoreMeshInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bVisible;
    
    UPROPERTY(EditAnywhere)
    FTransform Transform;
    
    SB_API FSBZoneEventActor_RestoreMeshInfo();
};

