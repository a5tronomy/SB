#pragma once
#include "CoreMinimal.h"
#include "ESBTribeRelation.h"
#include "SBTablePropertyBase.h"
#include "SBCharacterTribeTableProperty.generated.h"

USTRUCT()
struct FSBCharacterTribeTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName TargetTribe1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBTribeRelation> TargetRelation1;
    
    UPROPERTY(EditAnywhere)
    FName TargetTribe2;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBTribeRelation> TargetRelation2;
    
    UPROPERTY(EditAnywhere)
    FName TargetTribe3;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBTribeRelation> TargetRelation3;
    
    UPROPERTY(EditAnywhere)
    FName TargetTribe4;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBTribeRelation> TargetRelation4;
    
    UPROPERTY(EditAnywhere)
    FName TargetTribe5;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBTribeRelation> TargetRelation5;
    
    UPROPERTY(EditAnywhere)
    FName TargetTribe6;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBTribeRelation> TargetRelation6;
    
    UPROPERTY(EditAnywhere)
    FName TargetTribe7;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBTribeRelation> TargetRelation7;
    
    UPROPERTY(EditAnywhere)
    FName TargetTribe8;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBTribeRelation> TargetRelation8;
    
    UPROPERTY(EditAnywhere)
    FName TargetTribe9;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBTribeRelation> TargetRelation9;
    
    UPROPERTY(EditAnywhere)
    FName TargetTribe10;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBTribeRelation> TargetRelation10;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBCharacterTribeTableProperty();
};

