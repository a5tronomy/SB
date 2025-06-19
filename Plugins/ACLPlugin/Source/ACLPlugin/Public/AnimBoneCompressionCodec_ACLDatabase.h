#pragma once
#include "CoreMinimal.h"
#include "AnimBoneCompressionCodec_ACLBase.h"
#include "AnimBoneCompressionCodec_ACLDatabase.generated.h"

class UAnimationCompressionLibraryDatabase;

UCLASS(EditInlineNew, MinimalAPI)
class UAnimBoneCompressionCodec_ACLDatabase : public UAnimBoneCompressionCodec_ACLBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimationCompressionLibraryDatabase* DatabaseAsset;
    
    UAnimBoneCompressionCodec_ACLDatabase();

};

