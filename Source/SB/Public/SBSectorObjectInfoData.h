#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SBSectorObjectInfoData.generated.h"

USTRUCT(BlueprintType)
struct FSBSectorObjectInfoData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector position;
    
    UPROPERTY(EditAnywhere)
    FRotator Rotation;
    
    UPROPERTY(EditAnywhere)
    int32 ObjectResourceMapIndex;
    
    UPROPERTY(EditAnywhere)
    int32 ObjectIndex;
    
    SB_API FSBSectorObjectInfoData();
};

