#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBShowKeyContainer.h"
#include "SBShowKeyStep.h"
#include "SBShowData.generated.h"

UCLASS()
class SB_API USBShowData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, VisibleAnywhere)
    uint32 Version;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    FString Annotation;
    
    UPROPERTY(EditAnywhere)
    bool bCutScenePhotoMode;
    
    UPROPERTY(EditAnywhere)
    float StartTime;
    
    UPROPERTY(EditAnywhere)
    float EndTime;
    
    UPROPERTY(EditAnywhere)
    bool bLoop;
    
    UPROPERTY(EditAnywhere)
    int32 LoopCount;
    
    UPROPERTY(EditAnywhere)
    bool bUseStep;
    
    UPROPERTY(EditAnywhere)
    bool bUseKeyLimitFrame;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, FSBShowKeyContainer> KeyContanerMap;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBShowKeyStep> ShowStepArray;
    
    USBShowData();

};

