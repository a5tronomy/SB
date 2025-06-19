#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBZoneLayerTableProperty.generated.h"

USTRUCT()
struct FSBZoneLayerTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName LayerName;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ZoneList;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBZoneLayerTableProperty();
};

