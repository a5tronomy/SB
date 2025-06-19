#pragma once
#include "CoreMinimal.h"
#include "SBUILogicHUDTPSBulletData.generated.h"

USTRUCT(BlueprintType)
struct FSBUILogicHUDTPSBulletData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ItemAlias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AcquisionSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUsableBullet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 GroupIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SubIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCoolTimeChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CoolTimeProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCoolTimeComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText ItemName;
    
    SB_API FSBUILogicHUDTPSBulletData();
};

