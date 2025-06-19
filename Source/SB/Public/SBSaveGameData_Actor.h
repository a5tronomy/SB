#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SBItemInstance.h"
#include "SBSaveGameData_ActorItemEnhanceState.h"
#include "SBSaveGameData_Actor.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_Actor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString ActorDataAlias;
    
    UPROPERTY(EditAnywhere)
    FVector ActorLocation;
    
    UPROPERTY(EditAnywhere)
    FRotator ActorRotation;
    
    UPROPERTY(EditAnywhere)
    float HP;
    
    UPROPERTY(EditAnywhere)
    float Shield;
    
    UPROPERTY(EditAnywhere)
    float Stamina;
    
    UPROPERTY(EditAnywhere)
    int32 BetaGauge;
    
    UPROPERTY(EditAnywhere)
    int32 BurstGauge;
    
    UPROPERTY(EditAnywhere)
    int32 TachyGauge;
    
    UPROPERTY(EditAnywhere)
    int32 SP;
    
    UPROPERTY(EditAnywhere)
    int32 SPLevel;
    
    UPROPERTY(EditAnywhere)
    int32 SPExp;
    
    UPROPERTY(EditAnywhere)
    FName StanceAlias;
    
    UPROPERTY(EditAnywhere)
    uint32 CostumeIndex;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, FSBItemInstance> Equipment;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ItemQuickSlotArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> BodySuitSlotArray;
    
    UPROPERTY(EditAnywhere)
    FName CampEnvSpawnAlias;
    
    UPROPERTY(EditAnywhere)
    FVector CampInteractActorLocation;
    
    UPROPERTY(EditAnywhere)
    FRotator CampInteractActorRotation;
    
    UPROPERTY(EditAnywhere)
    FName SoundEventAlias;
    
    UPROPERTY(EditAnywhere)
    FName TetrapodCampEnvSpawnAlias;
    
    UPROPERTY(EditAnywhere)
    FVector TetrapodCampInteractActorLocation;
    
    UPROPERTY(EditAnywhere)
    FRotator TetrapodCampInteractActorRotation;
    
    UPROPERTY(EditAnywhere)
    FSBSaveGameData_ActorItemEnhanceState ItemEnhanceState;
    
    UPROPERTY()
    TArray<uint32> LevelArray;
    
    UPROPERTY()
    uint32 MultiMapLevel;
    
    UPROPERTY(EditAnywhere)
    FName LastFullCampEnvSpawnAlias;
    
    UPROPERTY(EditAnywhere)
    FVector LastFullCampInteractActorLocation;
    
    UPROPERTY(EditAnywhere)
    FRotator LastFullCampInteractActorRotation;
    
    UPROPERTY(EditAnywhere)
    FName LastSimplyCampEnvSpawnAlias;
    
    UPROPERTY(EditAnywhere)
    FVector LastSimplyCampInteractActorLocation;
    
    UPROPERTY(EditAnywhere)
    FRotator LastSimplyCampInteractActorRotation;
    
    SB_API FSBSaveGameData_Actor();
};

