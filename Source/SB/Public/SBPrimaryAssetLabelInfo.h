#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "SBPrimaryAssetLabelInfo.generated.h"

class UObject;
class UPrimaryAssetLabel;

USTRUCT(BlueprintType)
struct SB_API FSBPrimaryAssetLabelInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UPrimaryAssetLabel* PrimaryAssetLabel;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UObject>> LevelArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FDirectoryPath> AssetDirectoryArray;
    
    UPROPERTY(EditAnywhere)
    FFilePath FileOpenLogPath;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UObject>> ExplicitAssets;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<UObject>> ExplicitBlueprints;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UObject>> AssetsToAppend;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> ResourceCacheCharacterAliasToAppend;
    
    FSBPrimaryAssetLabelInfo();
};

