#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBGamePlayProgressCheatTableProperty.generated.h"

USTRUCT()
struct FSBGamePlayProgressCheatTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName CommandGroup;
    
    UPROPERTY(EditAnywhere)
    FString PreCommand;
    
    UPROPERTY(EditAnywhere)
    FString CommandSlot1;
    
    UPROPERTY(EditAnywhere)
    FString CommandSlot1NewGamePlus;
    
    UPROPERTY(EditAnywhere)
    FString CommandSlot2;
    
    UPROPERTY(EditAnywhere)
    FString CommandSlot2NewGamePlus;
    
    UPROPERTY(EditAnywhere)
    FString CommandSlot3;
    
    UPROPERTY(EditAnywhere)
    FString CommandSlot3NewGamePlus;
    
    UPROPERTY(EditAnywhere)
    FString CommandSlot4;
    
    UPROPERTY(EditAnywhere)
    FString CommandSlot4NewGamePlus;
    
    UPROPERTY(EditAnywhere)
    FString PostCommand;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBGamePlayProgressCheatTableProperty();
};

