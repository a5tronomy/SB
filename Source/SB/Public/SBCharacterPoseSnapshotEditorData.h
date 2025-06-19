#pragma once
#include "CoreMinimal.h"
#include "SBCharacterPoseSnapshotEditorData.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FSBCharacterPoseSnapshotEditorData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* AnimSequence;
    
    SB_API FSBCharacterPoseSnapshotEditorData();
};

