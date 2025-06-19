#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBSoundEventLevelSequenceTableProperty.generated.h"

USTRUCT()
struct SB_API FSBSoundEventLevelSequenceTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName LevelSequenceBeginSoundEvent;
    
    UPROPERTY(EditAnywhere)
    float BeginSoundEventDelayTime;
    
    UPROPERTY(EditAnywhere)
    FName LevelSequenceFinishSoundEvent;
    
    UPROPERTY(EditAnywhere)
    float FinishSoundEventDelayTime;
    
    UPROPERTY(EditAnywhere)
    FString SoundMixPath;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    FSBSoundEventLevelSequenceTableProperty();
};

