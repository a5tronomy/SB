#pragma once
#include "CoreMinimal.h"
#include "ESBShowActorTarget.h"
#include "SBAliasCharacterMove.h"
#include "SBCharacterMoveTableProperty.h"
#include "SBShowKey.h"
#include "SBShowRuleMoveKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowRuleMoveKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FSBAliasCharacterMove TableAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowActorTarget> Target;
    
    UPROPERTY(EditAnywhere)
    FSBCharacterMoveTableProperty MoveTableProperty;
    
    UPROPERTY(EditAnywhere)
    bool bSelfMove;
    
    USBShowRuleMoveKey();

};

