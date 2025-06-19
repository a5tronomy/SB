#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBCharacterDeadTableProperty.generated.h"

USTRUCT()
struct FSBCharacterDeadTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FString> DefaultDeadShowArray;
    
    UPROPERTY(EditAnywhere)
    int32 DefaultDeadRewardDelayTime;
    
    UPROPERTY(EditAnywhere)
    bool DefaultDeadSkipDespawnShow;
    
    UPROPERTY(EditAnywhere)
    float DefaultDeadUIDelayTime;
    
    UPROPERTY(EditAnywhere)
    FName MoveAliasWhenDead;
    
    UPROPERTY(EditAnywhere)
    FString StandDeadShow;
    
    UPROPERTY(EditAnywhere)
    int32 StandDeadRewardDelayTime;
    
    UPROPERTY(EditAnywhere)
    bool StandDeadSkipDespawnShow;
    
    UPROPERTY(EditAnywhere)
    float StandDeadUIDelayTime;
    
    UPROPERTY(EditAnywhere)
    FString Step0DeadShow;
    
    UPROPERTY(EditAnywhere)
    int32 Step0DeadRewardDelayTime;
    
    UPROPERTY(EditAnywhere)
    bool Step0DeadSkipDespawnShow;
    
    UPROPERTY(EditAnywhere)
    float Step0DeadUIDelayTime;
    
    UPROPERTY(EditAnywhere)
    FString Step1DeadShow;
    
    UPROPERTY(EditAnywhere)
    int32 Step1DeadRewardDelayTime;
    
    UPROPERTY(EditAnywhere)
    bool Step1DeadSkipDespawnShow;
    
    UPROPERTY(EditAnywhere)
    float Step1DeadUIDelayTime;
    
    UPROPERTY(EditAnywhere)
    FString Step2DeadShow;
    
    UPROPERTY(EditAnywhere)
    int32 Step2DeadRewardDelayTime;
    
    UPROPERTY(EditAnywhere)
    bool Step2DeadSkipDespawnShow;
    
    UPROPERTY(EditAnywhere)
    float Step2DeadUIDelayTime;
    
    UPROPERTY(EditAnywhere)
    FString Step3DeadShow;
    
    UPROPERTY(EditAnywhere)
    int32 Step3DeadRewardDelayTime;
    
    UPROPERTY(EditAnywhere)
    bool Step3DeadSkipDespawnShow;
    
    UPROPERTY(EditAnywhere)
    float Step3DeadUIDelayTime;
    
    UPROPERTY(EditAnywhere)
    FString Explosion1DeadShow;
    
    UPROPERTY(EditAnywhere)
    int32 Explosion1DeadRewardDelayTime;
    
    UPROPERTY(EditAnywhere)
    bool Explosion1DeadSkipDespawnShow;
    
    UPROPERTY(EditAnywhere)
    float Explosion1DeadUIDelayTime;
    
    UPROPERTY(EditAnywhere)
    FString Explosion2DeadShow;
    
    UPROPERTY(EditAnywhere)
    int32 Explosion2DeadRewardDelayTime;
    
    UPROPERTY(EditAnywhere)
    bool Explosion2DeadSkipDespawnShow;
    
    UPROPERTY(EditAnywhere)
    float Explosion2DeadUIDelayTime;
    
    UPROPERTY(EditAnywhere)
    FString Custom1DeadShow;
    
    UPROPERTY(EditAnywhere)
    int32 Custom1DeadRewardDelayTime;
    
    UPROPERTY(EditAnywhere)
    bool Custom1DeadSkipDespawnShow;
    
    UPROPERTY(EditAnywhere)
    float Custom1DeadUIDelayTime;
    
    UPROPERTY(EditAnywhere)
    FString Custom2DeadShow;
    
    UPROPERTY(EditAnywhere)
    int32 Custom2DeadRewardDelayTime;
    
    UPROPERTY(EditAnywhere)
    bool Custom2DeadSkipDespawnShow;
    
    UPROPERTY(EditAnywhere)
    float Custom2DeadUIDelayTime;
    
    UPROPERTY(EditAnywhere)
    FString Custom3DeadShow;
    
    UPROPERTY(EditAnywhere)
    int32 Custom3DeadRewardDelayTime;
    
    UPROPERTY(EditAnywhere)
    bool Custom3DeadSkipDespawnShow;
    
    UPROPERTY(EditAnywhere)
    float Custom3DeadUIDelayTime;
    
    UPROPERTY(EditAnywhere)
    FString Custom4DeadShow;
    
    UPROPERTY(EditAnywhere)
    int32 Custom4DeadRewardDelayTime;
    
    UPROPERTY(EditAnywhere)
    bool Custom4DeadSkipDespawnShow;
    
    UPROPERTY(EditAnywhere)
    float Custom4DeadUIDelayTime;
    
    UPROPERTY(EditAnywhere)
    FString Custom5DeadShow;
    
    UPROPERTY(EditAnywhere)
    int32 Custom5DeadRewardDelayTime;
    
    UPROPERTY(EditAnywhere)
    bool Custom5DeadSkipDespawnShow;
    
    UPROPERTY(EditAnywhere)
    float Custom5DeadUIDelayTime;
    
    UPROPERTY(EditAnywhere)
    FString Custom6DeadShow;
    
    UPROPERTY(EditAnywhere)
    int32 Custom6DeadRewardDelayTime;
    
    UPROPERTY(EditAnywhere)
    bool Custom6DeadSkipDespawnShow;
    
    UPROPERTY(EditAnywhere)
    float Custom6DeadUIDelayTime;
    
    UPROPERTY(EditAnywhere)
    FString Custom7DeadShow;
    
    UPROPERTY(EditAnywhere)
    int32 Custom7DeadRewardDelayTime;
    
    UPROPERTY(EditAnywhere)
    bool Custom7DeadSkipDespawnShow;
    
    UPROPERTY(EditAnywhere)
    float Custom7DeadUIDelayTime;
    
    UPROPERTY(EditAnywhere)
    FString Custom8DeadShow;
    
    UPROPERTY(EditAnywhere)
    int32 Custom8DeadRewardDelayTime;
    
    UPROPERTY(EditAnywhere)
    bool Custom8DeadSkipDespawnShow;
    
    UPROPERTY(EditAnywhere)
    float Custom8DeadUIDelayTime;
    
    UPROPERTY(EditAnywhere)
    FString Custom9DeadShow;
    
    UPROPERTY(EditAnywhere)
    int32 Custom9DeadRewardDelayTime;
    
    UPROPERTY(EditAnywhere)
    bool Custom9DeadSkipDespawnShow;
    
    UPROPERTY(EditAnywhere)
    float Custom9DeadUIDelayTime;
    
    UPROPERTY(EditAnywhere)
    FString Custom10DeadShow;
    
    UPROPERTY(EditAnywhere)
    int32 Custom10DeadRewardDelayTime;
    
    UPROPERTY(EditAnywhere)
    bool Custom10DeadSkipDespawnShow;
    
    UPROPERTY(EditAnywhere)
    float Custom10DeadUIDelayTime;
    
    UPROPERTY(EditAnywhere)
    FString DownDeadShow;
    
    UPROPERTY(EditAnywhere)
    int32 DownDeadRewardDelayTime;
    
    UPROPERTY(EditAnywhere)
    bool DownDeadSkipDespawnShow;
    
    UPROPERTY(EditAnywhere)
    float DownDeadUIDelayTime;
    
    UPROPERTY(EditAnywhere)
    FString AirborneDeadShow;
    
    UPROPERTY(EditAnywhere)
    int32 AirborneDeadRewardDelayTime;
    
    UPROPERTY(EditAnywhere)
    bool AirborneDeadSkipDespawnShow;
    
    UPROPERTY(EditAnywhere)
    float AirborneDeadUIDelayTime;
    
    UPROPERTY(EditAnywhere)
    FString SwimmingDeadShow;
    
    UPROPERTY(EditAnywhere)
    int32 SwimmingDeadRewardDelayTime;
    
    UPROPERTY(EditAnywhere)
    bool SwimmingDeadSkipDespawnShow;
    
    UPROPERTY(EditAnywhere)
    float SwimmingDeadUIDelayTime;
    
    UPROPERTY(EditAnywhere)
    FString AdditiveDeadShow;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBCharacterDeadTableProperty();
};

