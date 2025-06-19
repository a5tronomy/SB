#pragma once
#include "CoreMinimal.h"
#include "SBTextureStyleInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct SB_API FSBTextureStyleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTexture2D* Default;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* StanardKeyboard;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* StanardJoystic;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* PS4;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* XBox;
    
    FSBTextureStyleInfo();
};

