#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DecoratorUsableTime.h"
#include "ESBObjectState.h"
#include "ESBZoneObjectSaveType.h"
#include "SBSaveGameData_InteractInfo.h"
#include "SBSaveGameData_MetaAI.h"
#include "SBSaveGameData_ZoneNpcStorage.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_ZoneNpcStorage {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 EventSpawnId;
    
    UPROPERTY(EditAnywhere)
    uint8 SpawnIndex;
    
    UPROPERTY(EditAnywhere)
    FName CharacterDataAlias;
    
    UPROPERTY(EditAnywhere)
    FVector ActorLocation;
    
    UPROPERTY(EditAnywhere)
    FRotator ActorRotation;
    
    UPROPERTY(EditAnywhere)
    int32 LifeState;
    
    UPROPERTY(EditAnywhere)
    bool bHiddenGame;
    
    UPROPERTY(EditAnywhere)
    bool bActiveActor;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBObjectState> ObjectState;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneObjectSaveType> SaveType;
    
    UPROPERTY(EditAnywhere)
    FName StayZoneAlias;
    
    UPROPERTY(EditAnywhere)
    FName RetargetSpawnPointName;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, int32> AI_Int32Map;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, float> AI_FloatMap;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FVector> AI_VectorMap;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, bool> AI_BoolMap;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FDecoratorUsableTime> AI_UsableTimeMap;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, float> AI_ReactTimerMap;
    
    UPROPERTY(EditAnywhere)
    FSBSaveGameData_InteractInfo InteractData;
    
    UPROPERTY(EditAnywhere)
    FSBSaveGameData_MetaAI MetaAIData;
    
    SB_API FSBSaveGameData_ZoneNpcStorage();
};

