#pragma once
#include "CoreMinimal.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventTrainingRoomSkillCommand.generated.h"

USTRUCT()
struct FSBUIActionEventTrainingRoomSkillCommand : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName SkillCommandAlias;
    
    UPROPERTY()
    bool IsRoot;
    
    SB_API FSBUIActionEventTrainingRoomSkillCommand();
};

