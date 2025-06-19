#pragma once
#include "CoreMinimal.h"
#include "SBLevelSequenceBookmarkSectionData.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceBookmarkSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName BookmarkName;
    
    UPROPERTY(EditAnywhere)
    bool EndTimeStopSequencer;
    
    UPROPERTY(EditAnywhere)
    uint32 EndTimeTheaterNextTakeIndex;
    
    SB_API FSBLevelSequenceBookmarkSectionData();
};

