#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBCheatProgressQuestCommandsTableProperty.generated.h"

USTRUCT()
struct FSBCheatProgressQuestCommandsTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> CompleteQuestList;
    
    UPROPERTY(EditAnywhere)
    FName GamePlayProgressRecord;
    
    UPROPERTY(EditAnywhere)
    int32 QuestPathIndex;
    
    UPROPERTY(EditAnywhere)
    int32 QuestPathNodeIndex;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBCheatProgressQuestCommandsTableProperty();
};

