#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBEquipmentMaterialTableProperty.generated.h"

USTRUCT()
struct FSBEquipmentMaterialTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName Group;
    
    UPROPERTY(EditAnywhere)
    int32 VariationIndex;
    
    UPROPERTY(EditAnywhere)
    int32 MaterialIndex;
    
    UPROPERTY(EditAnywhere)
    FString MaterialAssetPath;
    
    UPROPERTY(EditAnywhere)
    FString IconColorAssetPath;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBEquipmentMaterialTableProperty();
};

