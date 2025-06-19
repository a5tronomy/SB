#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESBBufferDataSlot.h"
#include "ESBObjectState.h"
#include "ESBZoneEnvActiveState.h"
#include "ESBZoneObjectSaveType.h"
#include "SBSaveGameData_InteractInfo.h"
#include "SBSaveGameData_ZoneEnvChildObjInfo.h"
#include "SBSaveGameData_ZoneEnvProgressInfo.h"
#include "SBSaveGameData_ZoneEnvStateInfo.h"
#include "SBSaveGameData_ZoneEnvStorage.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_ZoneEnvStorage {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName EnvStateSlotTag;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBObjectState> EnvActivate;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEnvActiveState> EnvActiveState;
    
    UPROPERTY(EditAnywhere)
    FName EnvAlias;
    
    UPROPERTY(EditAnywhere)
    TMap<TEnumAsByte<ESBBufferDataSlot>, FString> StringBufferData;
    
    UPROPERTY(EditAnywhere)
    TMap<TEnumAsByte<ESBBufferDataSlot>, FVector> VectorBufferData;
    
    UPROPERTY(EditAnywhere)
    TMap<TEnumAsByte<ESBBufferDataSlot>, float> FloatBufferData;
    
    UPROPERTY(EditAnywhere)
    TMap<TEnumAsByte<ESBBufferDataSlot>, int32> IntBufferData;
    
    UPROPERTY(EditAnywhere)
    TMap<TEnumAsByte<ESBBufferDataSlot>, bool> BoolBufferData;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneObjectSaveType> SaveType;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBSaveGameData_ZoneEnvStateInfo> StateInfoList;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBSaveGameData_ZoneEnvProgressInfo> EnvProgressInfo;
    
    UPROPERTY(EditAnywhere)
    int32 CurrentTriggerCount;
    
    UPROPERTY(EditAnywhere)
    FVector ActorLocation;
    
    UPROPERTY(EditAnywhere)
    FRotator ActorRotation;
    
    UPROPERTY(EditAnywhere)
    FVector QuestMarkerLocation;
    
    UPROPERTY(EditAnywhere)
    FSBSaveGameData_InteractInfo InteractData;
    
    UPROPERTY(EditAnywhere)
    FSBSaveGameData_ZoneEnvChildObjInfo PhysMainObject;
    
    SB_API FSBSaveGameData_ZoneEnvStorage();
};

