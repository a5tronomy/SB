#pragma once
#include "CoreMinimal.h"
#include "SBCineCameraActorBoundsBoneData.generated.h"

USTRUCT(BlueprintType)
struct FSBCineCameraActorBoundsBoneData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bUseBoneData;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> BoneArray;
    
    UPROPERTY(EditAnywhere)
    bool bUseAutoFocus;
    
    UPROPERTY(EditAnywhere)
    FName FocusBone;
    
    SB_API FSBCineCameraActorBoundsBoneData();
};

