#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBSaveBase.h"
#include "SBSaveOptionData_BossChallenge.h"
#include "SBSaveOptionData_PhotoModePreset.h"
#include "SBGameOptionSaveData.generated.h"

UCLASS()
class SB_API USBGameOptionSaveData : public USBSaveBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    int32 Version;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, bool> DataMap_bool;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, float> DataMap_float;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FString> DataMap_FString;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, int32> DataMap_int32;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FIntPoint> DataMap_IntPoint;
    
    UPROPERTY(EditAnywhere)
    FSBSaveOptionData_BossChallenge BossChallengeData;
    
    UPROPERTY(EditAnywhere)
    FSBSaveOptionData_PhotoModePreset PhotoModePresetData;
    
public:
    USBGameOptionSaveData();

};

