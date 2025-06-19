#pragma once
#include "CoreMinimal.h"
#include "SBAliasZone.h"
#include "SBDataNodeBase.h"
#include "SBToolDataNode_ZoneLayer.generated.h"

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_ZoneLayer : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName LayerName;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBAliasZone> ZoneList;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    USBToolDataNode_ZoneLayer();

};

