#pragma once
#include "CoreMinimal.h"
#include "SBLevelSequenceBKMovieSectionData.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceBKMovieSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString BKAssetPath;
    
    UPROPERTY(EditAnywhere)
    FString BKAssetPath_Low;
    
    UPROPERTY(EditAnywhere)
    float FadeInTime;
    
    UPROPERTY(EditAnywhere)
    float FadeOutTime;
    
    SB_API FSBLevelSequenceBKMovieSectionData();
};

