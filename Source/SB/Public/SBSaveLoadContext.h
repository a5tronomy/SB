#pragma once
#include "CoreMinimal.h"
#include "SBSaveLoadContext.generated.h"

class USBSaveGame;

USTRUCT(BlueprintType)
struct FSBSaveLoadContext {
    GENERATED_BODY()
public:
    UPROPERTY()
    USBSaveGame* SaveGameData;
    
    UPROPERTY()
    USBSaveGame* OverrideSaveGameData;
    
    UPROPERTY()
    FString SlotName;
    
    UPROPERTY()
    bool bTickBasedAutoSave;
    
    UPROPERTY()
    bool bShowUI;
    
    UPROPERTY()
    bool bFillAndPending;
    
    UPROPERTY()
    bool bLoadAfterDead;
    
    UPROPERTY()
    bool bWriteAndPending;
    
    UPROPERTY()
    bool bIsPending;
    
    SB_API FSBSaveLoadContext();
};

