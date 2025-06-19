#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ArtifactSettings.h"
#include "EOSSettings.generated.h"

UCLASS(BlueprintType, Config = Engine)
class ONLINESUBSYSTEMEOS_API UEOSSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FString CacheDir;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FString DefaultArtifactName;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    int32 TickBudgetInMilliseconds;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bEnableOverlay;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bEnableSocialOverlay;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bShouldEnforceBeingLaunchedByEGS;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TArray<FString> TitleStorageTags;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    int32 TitleStorageReadChunkLength;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TArray<FArtifactSettings> Artifacts;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bUseEAS;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bUseEOSConnect;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bMirrorStatsToEOS;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bMirrorAchievementsToEOS;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bUseEOSSessions;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bMirrorPresenceToEAS;
    
    UEOSSettings();

};

