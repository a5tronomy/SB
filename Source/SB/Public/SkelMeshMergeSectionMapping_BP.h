#pragma once
#include "CoreMinimal.h"
#include "SkelMeshMergeSectionMapping_BP.generated.h"

USTRUCT(BlueprintType)
struct SB_API FSkelMeshMergeSectionMapping_BP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<int32> SectionIDs;
    
    FSkelMeshMergeSectionMapping_BP();
};

