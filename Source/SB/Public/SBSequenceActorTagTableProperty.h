#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBSequenceActorTagTableProperty.generated.h"

USTRUCT()
struct FSBSequenceActorTagTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName TextActorKey;
    
    UPROPERTY(EditAnywhere)
    FName ActorTag;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBSequenceActorTagTableProperty();
};

