#pragma once
#include "CoreMinimal.h"
#include "ESBObjectState.h"
#include "ESBZoneObjectSaveType.h"
#include "SBAliasCharacterTribe.h"
#include "SBDataNodeBase.h"
#include "SBToolDataNode_AreaControlVolume.generated.h"

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_AreaControlVolume : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBObjectState> InitActivate;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBAliasCharacterTribe> AdmissionPossibleTribeArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> AdmissionPossibleCharacterTagArray;
    
    UPROPERTY(EditAnywhere)
    bool bRemoveNotKeepSBCharacter;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneObjectSaveType> SaveType;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    USBToolDataNode_AreaControlVolume();

};

