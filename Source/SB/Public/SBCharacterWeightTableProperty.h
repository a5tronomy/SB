#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBCharacterWeightTableProperty.generated.h"

USTRUCT()
struct FSBCharacterWeightTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 ID;
    
    UPROPERTY()
    float Small_MoveXY;
    
    UPROPERTY()
    float Small_MoveZ;
    
    UPROPERTY()
    float Normal_MoveXY;
    
    UPROPERTY()
    float Normal_MoveZ;
    
    UPROPERTY()
    float Medium_MoveXY;
    
    UPROPERTY()
    float Medium_MoveZ;
    
    UPROPERTY()
    float Large_MoveXY;
    
    UPROPERTY()
    float Large_MoveZ;
    
    UPROPERTY()
    float SuperLarge_MoveXY;
    
    UPROPERTY()
    float SuperLarge_MoveZ;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBCharacterWeightTableProperty();
};

