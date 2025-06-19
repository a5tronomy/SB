#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBPhotoModeImageTableProperty.generated.h"

USTRUCT()
struct FSBPhotoModeImageTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> UIOperateArray;
    
    UPROPERTY(EditAnywhere)
    FString OptionStringKey;
    
    UPROPERTY(EditAnywhere)
    FString ImagePath;
    
    UPROPERTY(EditAnywhere)
    FName EnableConditionGroup;
    
    SB_API FSBPhotoModeImageTableProperty();
};

