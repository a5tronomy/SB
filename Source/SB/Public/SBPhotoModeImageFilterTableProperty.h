#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBPhotoModeImageFilterTableProperty.generated.h"

USTRUCT()
struct FSBPhotoModeImageFilterTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FString AssetPath;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBPhotoModeImageFilterTableProperty();
};

