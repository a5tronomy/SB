#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBCanTableProperty.generated.h"

USTRUCT()
struct FSBCanTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName ItemAlias;
    
    UPROPERTY(EditAnywhere)
    FString StringKeyTitle;
    
    UPROPERTY(EditAnywhere)
    FString StringKeyFunc;
    
    UPROPERTY(EditAnywhere)
    FString StringKeyContent;
    
    UPROPERTY(EditAnywhere)
    FString Asset3D;
    
    UPROPERTY(EditAnywhere)
    FString AssetMaterial;
    
    UPROPERTY(EditAnywhere)
    FName DetectEnvSpawnAlias;
    
    UPROPERTY(EditAnywhere)
    FName AcquireEnvSpawnAlias;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> CollectionEnvSpawnAliases;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> CollectionXList;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> CollectionYList;
    
    UPROPERTY(EditAnywhere)
    FName AchievementAlias;
    
    UPROPERTY(EditAnywhere)
    float OverrideDetectDistance;
    
    UPROPERTY(EditAnywhere)
    float OverrideAutoInteractionDistance;
    
    SB_API FSBCanTableProperty();
};

