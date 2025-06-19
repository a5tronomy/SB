#pragma once
#include "CoreMinimal.h"
#include "SBLevelSequenceBookmarkAlias.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FSBLevelSequenceBookmarkAlias {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName BookmarkName;
    
    UPROPERTY(EditAnywhere)
    ULevelSequence* Sequence;
    
    SB_API FSBLevelSequenceBookmarkAlias();
};

