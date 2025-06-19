#pragma once
#include "CoreMinimal.h"
#include "ESBObjectState.h"
#include "ESBZoneObjectSaveType.h"
#include "SBTablePropertyBase.h"
#include "SBAreaControlVolumeTableProperty.generated.h"

USTRUCT()
struct FSBAreaControlVolumeTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBObjectState> InitActivate;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> AdmissionPossibleTribeArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> AdmissionPossibleCharacterTagArray;
    
    UPROPERTY(EditAnywhere)
    bool bRemoveNotKeepSBCharacter;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneObjectSaveType> SaveType;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBAreaControlVolumeTableProperty();
};

