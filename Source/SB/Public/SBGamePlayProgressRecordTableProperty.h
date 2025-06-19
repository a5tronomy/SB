#pragma once
#include "CoreMinimal.h"
#include "ESBGameProgressRecordFilter.h"
#include "ESBObjectState.h"
#include "ESBQuestMissionType.h"
#include "SBTablePropertyBase.h"
#include "SBGamePlayProgressRecordTableProperty.generated.h"

USTRUCT()
struct FSBGamePlayProgressRecordTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName QuestTaskGroup;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBQuestMissionType> QuestTaskType;
    
    UPROPERTY(EditAnywhere)
    FName DataAlias;
    
    UPROPERTY(EditAnywhere)
    FName EnvState;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBObjectState> Enable;
    
    UPROPERTY(EditAnywhere)
    FName Zone;
    
    UPROPERTY(EditAnywhere)
    FName InteractionKey;
    
    UPROPERTY(EditAnywhere)
    FString InteractionValue;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBGameProgressRecordFilter> RecordFilterType;
    
    UPROPERTY(EditAnywhere)
    FName DebugTargetCamp;
    
    UPROPERTY(EditAnywhere)
    FName DebugSpawnPoint;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> DebugCommands;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> DebugCommands2;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> DebugCommands3;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> DebugCommands4;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> DebugCommandsForNewGamePlus;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> DebugCommandsForNewGamePlus2;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> DebugCommandsForNewGamePlus3;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> DebugCommandsForNewGamePlus4;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBGamePlayProgressRecordTableProperty();
};

