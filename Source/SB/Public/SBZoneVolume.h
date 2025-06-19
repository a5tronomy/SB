#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Volume.h"
#include "SBMapSectorID.h"
#include "SBZoneVolume.generated.h"

class UWorld;

UCLASS()
class SB_API ASBZoneVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Priority;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FSBMapSectorID SectorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ZoneAlias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UWorld>> LoadLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UWorld>> UnloadLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRestoreLevelWhenLeave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPersistentChange;
    
    UPROPERTY(Transient)
    bool bVisibleAfterLoad;
    
    UPROPERTY(Transient)
    bool bActive;
    
    UPROPERTY(Transient)
    bool bEnterRequested;
    
    UPROPERTY(Transient)
    bool bLeaveRequested;
    
    UPROPERTY(Transient)
    FVector LevelObjOrigin;
    
    UPROPERTY(Transient)
    FVector LevelObjExtent;
    
    ASBZoneVolume(const FObjectInitializer& ObjectInitializer);

};

