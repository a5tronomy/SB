#pragma once
#include "CoreMinimal.h"
#include "SBSocialAnimDescAlias.generated.h"

USTRUCT(BlueprintType)
struct FSBSocialAnimDescAlias {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Group;
    
    UPROPERTY(EditAnywhere)
    FName Motion;
    
    SB_API FSBSocialAnimDescAlias();
};

