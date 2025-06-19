#pragma once
#include "CoreMinimal.h"
#include "SBAliasEffect.h"
#include "SBDataNodeBase.h"
#include "SBToolDataNode_AliasEffect.generated.h"

class USBAliasController;

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_AliasEffect : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBAliasEffect EffectAlias;
    
    UPROPERTY()
    USBAliasController* AliasController;
    
    USBToolDataNode_AliasEffect();

};

