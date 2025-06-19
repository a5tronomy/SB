#pragma once
#include "CoreMinimal.h"
#include "SBSoundInfo_HitType.h"
#include "SBSoundInfo_HitArray.generated.h"

USTRUCT(BlueprintType)
struct FSBSoundInfo_HitArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSBSoundInfo_HitType> HitTypeArray;
    
    UPROPERTY()
    TMap<int32, int32> FindArrayMaps;
    
    SB_API FSBSoundInfo_HitArray();
};

