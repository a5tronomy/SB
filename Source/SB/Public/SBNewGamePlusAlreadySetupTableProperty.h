#pragma once
#include "CoreMinimal.h"
#include "ESBNGPlusAlreadySetupType.h"
#include "ESBObjectState.h"
#include "SBTablePropertyBase.h"
#include "SBNewGamePlusAlreadySetupTableProperty.generated.h"

USTRUCT()
struct FSBNewGamePlusAlreadySetupTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBNGPlusAlreadySetupType> ObjectType;
    
    UPROPERTY(EditAnywhere)
    FName DataAlias;
    
    UPROPERTY(EditAnywhere)
    FName StateName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBObjectState> Enable;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBNewGamePlusAlreadySetupTableProperty();
};

