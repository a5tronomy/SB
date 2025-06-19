#pragma once
#include "CoreMinimal.h"
#include "ESBKeyMappingAxisScaleType.h"
#include "SBTablePropertyBase.h"
#include "SBUIKeyImageAssetProperty.generated.h"

USTRUCT()
struct FSBUIKeyImageAssetProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName Key;
    
    UPROPERTY(EditAnywhere)
    FName Platform;
    
    UPROPERTY(EditAnywhere)
    FName Tag;
    
    UPROPERTY(EditAnywhere)
    ESBKeyMappingAxisScaleType AxisScale;
    
    UPROPERTY(EditAnywhere)
    FString AssetPath;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBUIKeyImageAssetProperty();
};

