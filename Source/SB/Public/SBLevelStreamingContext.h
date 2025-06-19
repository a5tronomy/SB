#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBLevelStreamingContext.generated.h"

class AActor;
class ALevelStreamingVolume;
class ULevelStreaming;
class UWorld;

UCLASS()
class SB_API USBLevelStreamingContext : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FName ZoneAlias;
    
    UPROPERTY(Transient)
    TArray<TSoftObjectPtr<UWorld>> LoadLevels;
    
    UPROPERTY(Transient)
    TArray<TSoftObjectPtr<UWorld>> UnloadLevels;
    
    UPROPERTY(Transient)
    TArray<ULevelStreaming*> CachedLoadLevels;
    
    UPROPERTY(Transient)
    TArray<ULevelStreaming*> CachedUnloadLevels;
    
    UPROPERTY(Transient)
    TArray<ULevelStreaming*> CachedPersistentLevels;
    
    UPROPERTY(Transient)
    TArray<ULevelStreaming*> CachedOriginalLevels;
    
    UPROPERTY(Transient)
    TArray<ULevelStreaming*> CachedRemoveLevels;
    
    UPROPERTY(Transient)
    TArray<ULevelStreaming*> CachedIgnoreRemoveLevels;
    
    UPROPERTY(Transient)
    TArray<ALevelStreamingVolume*> CachedStreamingVolumes;
    
    UPROPERTY(Transient)
    bool bRestoreLevelWhenLeave;
    
    UPROPERTY(Transient)
    bool bVisibleAfterLoad;
    
    UPROPERTY(Transient)
    bool bPersistentChange;
    
    UPROPERTY(Transient)
    bool bReserved_Enter;
    
    UPROPERTY(Transient)
    bool bReserved_Leave;
    
    UPROPERTY(Transient)
    bool bReserved_AsyncLoadLevels;
    
    UPROPERTY(Transient)
    bool bReserved_AsyncUnloadLevels;
    
    UPROPERTY(Transient)
    TArray<TSoftObjectPtr<UWorld>> PendingAsyncLevels;
    
    UPROPERTY(Transient)
    TArray<TSoftObjectPtr<UWorld>> PendingLoadLevels;
    
    UPROPERTY(Transient)
    TArray<TSoftObjectPtr<UWorld>> PendingUnloadLevels;
    
    UPROPERTY(Transient)
    TArray<TSoftObjectPtr<UWorld>> AlreadyLoaded;
    
    UPROPERTY(Transient)
    int32 AlwaysLoadedCount;
    
    UPROPERTY(Transient)
    int32 DynamicLoadedCount;
    
    UPROPERTY(Transient)
    int32 LoadedCount;
    
    UPROPERTY(Transient)
    int32 UnloadedCount;
    
    UPROPERTY(Transient)
    int32 LoadPackageCount;
    
    UPROPERTY(Transient)
    bool bIsRunningEnter;
    
    UPROPERTY(Transient)
    bool bIsRunningLeave;
    
    UPROPERTY(Transient)
    UWorld* NewWorld;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<AActor>> CachedActors;
    
public:
    USBLevelStreamingContext();

private:
    UFUNCTION()
    void OnLevelUnloaded();
    
    UFUNCTION()
    void OnLevelShown();
    
    UFUNCTION()
    void OnLevelLoaded();
    
};

