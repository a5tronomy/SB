#pragma once
#include "CoreMinimal.h"
#include "SBAssetPicker.generated.h"

USTRUCT(BlueprintType)
struct FSBAssetPicker {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    FString BaseResourcePath;
    
    UPROPERTY(EditAnywhere)
    FString ResultResourcePath;
    
    UPROPERTY(EditAnywhere)
    bool bReadOnly;
    
    UPROPERTY(EditAnywhere)
    FName Custom_BrowseClassName;
    
    SB_API FSBAssetPicker();
};

