#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "SaveSlotInfo.h"
#include "SBGameInstance.generated.h"

class ASBCharacterOverlapManager;
class USBSaveManager;
class UWorld;

UCLASS(NonTransient)
class SB_API USBGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    bool bDebugSaveGame;
    
private:
    UPROPERTY(Transient)
    TArray<FSaveSlotInfo> CachedSaveSlots;
    
    UPROPERTY(Transient)
    FString LobbyAutoStartMap;
    
    UPROPERTY(Transient)
    FString APP_ID;
    
    UPROPERTY(Transient)
    ASBCharacterOverlapManager* pCharacterOverlapManager;
    
    UPROPERTY(Transient)
    USBSaveManager* SaveObjectManager;
    
public:
    USBGameInstance();

    UFUNCTION()
    void PreLoadMap(const FString& MapName);
    
    UFUNCTION()
    void PostLoadMap(UWorld* InLoadedWorld);
    
};

