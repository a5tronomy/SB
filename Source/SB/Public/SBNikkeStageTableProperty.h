#pragma once
#include "CoreMinimal.h"
#include "ESBNikkeStageType.h"
#include "SBTablePropertyBase.h"
#include "SBNikkeStageTableProperty.generated.h"

USTRUCT()
struct FSBNikkeStageTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FString StageName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBNikkeStageType> StageType;
    
    UPROPERTY(EditAnywhere)
    int32 WaveCount;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> PlayerStartEffects;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> PlayerStartItems;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> PlayerStartItemsCount;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> PlayerAcquisitionSkillList;
    
    UPROPERTY(EditAnywhere)
    int32 DefenseMaxScore;
    
    UPROPERTY(EditAnywhere)
    int32 DefenseAddScore;
    
    UPROPERTY(EditAnywhere)
    int32 DefenseSubScore;
    
    UPROPERTY(EditAnywhere)
    FName DefenseAreaEnv;
    
    UPROPERTY(EditAnywhere)
    FString EnterStagePlayShow;
    
    UPROPERTY(EditAnywhere)
    FString StartTheater;
    
    UPROPERTY(EditAnywhere)
    float PlayStartGameDelayTime;
    
    UPROPERTY(EditAnywhere)
    FString VictoryTheater;
    
    UPROPERTY(EditAnywhere)
    FString DefeatTheater;
    
    UPROPERTY(EditAnywhere)
    FString TimeoutTheater;
    
    UPROPERTY(EditAnywhere)
    FString PlayerDeadTheater;
    
    UPROPERTY(EditAnywhere)
    FName StartCamp;
    
    UPROPERTY(EditAnywhere)
    float TimieLimit;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> BossEnemySpawnList;
    
    UPROPERTY(EditAnywhere)
    FName TipGroup;
    
    UPROPERTY(EditAnywhere)
    FName DronStateAfterClear;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> DronFriendlyNpcEffectAfterClear;
    
    UPROPERTY(EditAnywhere)
    FName DebugCheatGroupName;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBNikkeStageTableProperty();
};

