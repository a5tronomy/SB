#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBTablePropertyBase.h"
#include "SBCheatQuestTableProperty.generated.h"

USTRUCT()
struct FSBCheatQuestTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName CheatProgressQuestCommandsTable;
    
    UPROPERTY(EditAnywhere)
    bool bMaintainSubQuest;
    
    UPROPERTY(EditAnywhere)
    FName StartWorld;
    
    UPROPERTY(EditAnywhere)
    FVector StartSpawnLocation;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> CheatGroupCommands;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBCheatQuestTableProperty();
};

