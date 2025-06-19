#pragma once
#include "CoreMinimal.h"
#include "ESBSpawnRotationType.h"
#include "ESBTrainningRoomNpcAIType.h"
#include "SBTablePropertyBase.h"
#include "SBTrainningRoomSettingTableProperty.generated.h"

USTRUCT()
struct FSBTrainningRoomSettingTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName Zone;
    
    UPROPERTY(EditAnywhere)
    FName RegionActorName;
    
    UPROPERTY(EditAnywhere)
    FName InitRegionActorEvent;
    
    UPROPERTY(EditAnywhere)
    bool bInitApplyPlayerInfiniteEffect;
    
    UPROPERTY(EditAnywhere)
    FString PlayerStartPoint;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> PlayerStartEffects;
    
    UPROPERTY(EditAnywhere)
    FName PlayerStartSkill;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EnemyStartEffects;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBTrainningRoomNpcAIType> EnemyNpcAIType;
    
    UPROPERTY(EditAnywhere)
    FString EnemyNpcSpawnPointPreFix;
    
    UPROPERTY(EditAnywhere)
    FString EnemyNpcReSpawnPointPreFix;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EnemySpawnList;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<ESBSpawnRotationType>> EnemySpawnRotationTypeList;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBTrainningRoomSettingTableProperty();
};

