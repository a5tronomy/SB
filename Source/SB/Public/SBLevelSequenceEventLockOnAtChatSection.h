#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceEventLockOnAtChatSectionData.h"
#include "SBLevelSequenceEventLockOnAtChatSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceEventLockOnAtChatSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceEventLockOnAtChatSectionData Data;
    
    USBLevelSequenceEventLockOnAtChatSection();

};

