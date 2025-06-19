#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBSelfiePoseInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBSelfiePoseInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName PoseName;
    
    UPROPERTY(EditAnywhere)
    FSoftObjectPath BlendSpace;
    
    SB_API FSBSelfiePoseInfo();
};

