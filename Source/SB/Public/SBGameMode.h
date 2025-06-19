#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "SBGamdeModePostUpdateWorkTickFunction.h"
#include "SBGamdeModeSecondaryTickFunction.h"
#include "SBGameMode.generated.h"

class ULevelStreaming;
class USBLevelStreamingContext;

UCLASS(MinimalAPI, NonTransient)
class ASBGameMode : public AGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TMap<FName, USBLevelStreamingContext*> LevelStreamingContextMap;
    
    UPROPERTY(Transient)
    TArray<ULevelStreaming*> CustomLoadStreaming;
    
    UPROPERTY(Transient)
    TArray<ULevelStreaming*> CustomUnLoadStreaming;
    
protected:
    UPROPERTY(Config)
    FString PlayerBlueprintPath;
    
    UPROPERTY(Config)
    bool bDrawPlayerHUDInfo;
    
    UPROPERTY(Config)
    FString BattleMusicStartEventPath;
    
    UPROPERTY(Config)
    FString BattleMusicStopEventPath;
    
public:
    UPROPERTY(EditDefaultsOnly)
    FSBGamdeModeSecondaryTickFunction SecondaryActorTick;
    
    UPROPERTY(EditDefaultsOnly)
    FSBGamdeModePostUpdateWorkTickFunction PostUpdateWorkActorTick;
    
    ASBGameMode(const FObjectInitializer& ObjectInitializer);

};

