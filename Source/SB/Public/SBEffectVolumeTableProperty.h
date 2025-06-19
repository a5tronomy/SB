#pragma once
#include "CoreMinimal.h"
#include "ESBEffectVolumeResetType.h"
#include "ESBEffectVolumeType.h"
#include "ESBObjectState.h"
#include "ESBZoneObjectSaveType.h"
#include "SBTablePropertyBase.h"
#include "SBEffectVolumeTableProperty.generated.h"

USTRUCT()
struct FSBEffectVolumeTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBObjectState> InitActivate;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEffectVolumeType> VolumeType;
    
    UPROPERTY(EditAnywhere)
    FName ActiveZoneAlias;
    
    UPROPERTY(EditAnywhere)
    FName EnterEffectAlias;
    
    UPROPERTY(EditAnywhere)
    FName AlwaysActiveEffectAlias;
    
    UPROPERTY(EditAnywhere)
    int32 ExecuteDeadCount01;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> DeadCountEffectAliasList01;
    
    UPROPERTY(EditAnywhere)
    int32 ExecuteDeadCount02;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> DeadCountEffectAliasList02;
    
    UPROPERTY(EditAnywhere)
    int32 ExecuteDeadCount03;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> DeadCountEffectAliasList03;
    
    UPROPERTY(EditAnywhere)
    int32 ExecuteDeadCount04;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> DeadCountEffectAliasList04;
    
    UPROPERTY(EditAnywhere)
    FName PropertyData;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEffectVolumeResetType> ResetType;
    
    UPROPERTY(EditAnywhere)
    FName ResetTargetAlias;
    
    UPROPERTY(EditAnywhere)
    FString ResetTargetState;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneObjectSaveType> SaveType;
    
    UPROPERTY(EditAnywhere)
    bool bUseEveryZone;
    
    UPROPERTY(EditAnywhere)
    bool bUseActiveZoneStorage;
    
    SB_API FSBEffectVolumeTableProperty();
};

