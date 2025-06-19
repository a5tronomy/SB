#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBItemOverrideSaveType.h"
#include "SBItemInstance.generated.h"

USTRUCT(BlueprintType)
struct FSBItemInstance {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid SavedGuid;
    
    UPROPERTY()
    FGuid PocketGuid;
    
    UPROPERTY()
    FName ItemAlias;
    
    UPROPERTY()
    FName ItemVisualAlias;
    
    UPROPERTY()
    uint32 StatLevel;
    
    UPROPERTY()
    uint32 ItemCount;
    
    UPROPERTY()
    uint32 ItemChargeCount;
    
    UPROPERTY()
    bool Equiped;
    
    UPROPERTY()
    int32 MatVarIndex;
    
    UPROPERTY()
    TEnumAsByte<ESBItemOverrideSaveType> OverrideSaveType;
    
    UPROPERTY()
    bool bWithResetZone;
    
    UPROPERTY()
    bool bFavorites;
    
    UPROPERTY()
    bool bMustAcquisition;
    
    SB_API FSBItemInstance();
};

