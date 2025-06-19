#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NavigationObjectBase.h"
#include "SBResourceCacheActor.generated.h"

UCLASS()
class SB_API ASBResourceCacheActor : public ANavigationObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float LoadDistance;
    
    UPROPERTY(EditAnywhere)
    float UnloadDistance;
    
    UPROPERTY(EditAnywhere)
    TArray<FSoftObjectPath> AssetObjects;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> QuestConditions;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
public:
    ASBResourceCacheActor(const FObjectInitializer& ObjectInitializer);

};

