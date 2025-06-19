#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBSoundEventQuestTableProperty.generated.h"

USTRUCT()
struct FSBSoundEventQuestTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName QuestAcquireSoundEvent;
    
    UPROPERTY(EditAnywhere)
    FName QuestCompleteSoundEvent;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBSoundEventQuestTableProperty();
};

