#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBMetaAIBehaviorStance.h"
#include "SBTablePropertyBase.h"
#include "SBSocialAnimTableProperty.generated.h"

USTRUCT()
struct FSBSocialAnimTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName Group;
    
    UPROPERTY(EditAnywhere)
    FName Motion;
    
    UPROPERTY(EditAnywhere)
    ESBMetaAIBehaviorStance Stance;
    
    UPROPERTY(EditAnywhere)
    float BlendIn;
    
    UPROPERTY(EditAnywhere)
    float BlendOut;
    
    UPROPERTY(EditAnywhere)
    FSoftObjectPath AssetPath;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBSocialAnimTableProperty();
};

