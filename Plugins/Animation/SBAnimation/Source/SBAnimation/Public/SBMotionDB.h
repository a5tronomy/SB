#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBMotionKeyData.h"
#include "SBMotionDB.generated.h"

class UAnimSequence;
class USkeleton;

UCLASS()
class SBANIMATION_API USBMotionDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MotionStepTime;
    
    UPROPERTY(EditAnywhere)
    float MotionFutureCheckRangeTime;
    
    UPROPERTY(EditAnywhere)
    USkeleton* SelectedSkeleton;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> RefBones;
    
    UPROPERTY(VisibleAnywhere)
    TArray<int32> RefBonesIndex;
    
    UPROPERTY(EditAnywhere)
    TArray<UAnimSequence*> AnimLists;
    
    UPROPERTY(EditAnywhere)
    int32 SelectMotionIndex;
    
    UPROPERTY()
    TArray<FSBMotionKeyData> MotionDatas;
    
    USBMotionDB();

};

