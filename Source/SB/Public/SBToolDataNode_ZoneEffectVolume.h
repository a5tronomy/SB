#pragma once
#include "CoreMinimal.h"
#include "ESBEffectVolumeResetType.h"
#include "ESBEffectVolumeType.h"
#include "ESBObjectState.h"
#include "ESBZoneObjectSaveType.h"
#include "SAliasEffectVolumeProperty.h"
#include "SBAliasEffect.h"
#include "SBAliasZone.h"
#include "SBDataNodeBase.h"
#include "SBEffectVolumeDeadCountInfo.h"
#include "SBToolDataNode_ZoneEffectVolume.generated.h"

class USBAliasController;

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_ZoneEffectVolume : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEffectVolumeType> VolumeType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBObjectState> InitActivate;
    
    UPROPERTY(EditAnywhere)
    FSBAliasZone ActiveZoneAlias;
    
    UPROPERTY(EditAnywhere)
    FSBAliasEffect EnterEffectAlias;
    
    UPROPERTY(EditAnywhere)
    FSBAliasEffect AlwaysActiveEffectAlias;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBEffectVolumeDeadCountInfo> DeadCountVolumeInfo;
    
    UPROPERTY(EditAnywhere)
    FSAliasEffectVolumeProperty EffectVolumeProperty;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneObjectSaveType> SaveType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEffectVolumeResetType> ResetType;
    
    UPROPERTY(EditAnywhere)
    FName ResetTargetAlias;
    
    UPROPERTY(EditAnywhere)
    FString ResetTargetState;
    
    UPROPERTY(EditAnywhere)
    bool bUseEveryZone;
    
    UPROPERTY(EditAnywhere)
    bool bUseActiveZoneStorage;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    UPROPERTY()
    USBAliasController* ZoneAliasController;
    
    UPROPERTY()
    USBAliasController* EffectAliasController;
    
    USBToolDataNode_ZoneEffectVolume();

};

