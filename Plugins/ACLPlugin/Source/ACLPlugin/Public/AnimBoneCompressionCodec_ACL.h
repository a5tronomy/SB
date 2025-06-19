#pragma once
#include "CoreMinimal.h"
#include "AnimBoneCompressionCodec_ACLBase.h"
#include "AnimBoneCompressionCodec_ACL.generated.h"

class UAnimBoneCompressionCodec;

UCLASS(EditInlineNew, MinimalAPI)
class UAnimBoneCompressionCodec_ACL : public UAnimBoneCompressionCodec_ACLBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UAnimBoneCompressionCodec* SafetyFallbackCodec;
    
    UAnimBoneCompressionCodec_ACL();

};

