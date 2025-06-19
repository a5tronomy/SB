#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBAIFormationInfo.h"
#include "SBAIFormationData.generated.h"

UCLASS()
class SB_API USBAIFormationData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSBAIFormationInfo> AIFormationInfoArray;
    
private:
    UPROPERTY(Transient)
    TMap<FName, int32> AIFormationInfoMap;
    
public:
    USBAIFormationData();

};

