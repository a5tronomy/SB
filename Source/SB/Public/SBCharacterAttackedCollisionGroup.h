#pragma once
#include "CoreMinimal.h"
#include "SBCharacterAttackedCollisionGroup.generated.h"

USTRUCT(BlueprintType)
struct SB_API FSBCharacterAttackedCollisionGroup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName GroupName;
    
    UPROPERTY(EditAnywhere)
    bool bDefaultActive;
    
    UPROPERTY(EditAnywhere)
    bool bPhotoMode;
    
    UPROPERTY(EditAnywhere)
    bool bPhotoModeImportantPart;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ShapeNameArray;
    
    FSBCharacterAttackedCollisionGroup();
};

