#pragma once
#include "CoreMinimal.h"
#include "StellarBladeCustom.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ProceduralMeshComponent -ObjectName=EProcMeshVertexType -FallbackName=EProcMeshVertexType
#include "SBSliceSkeletalMeshTriangle.generated.h"

USTRUCT(BlueprintType)
struct FSBSliceSkeletalMeshTriangle {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 StartTriangleIndex;
    
    UPROPERTY(VisibleAnywhere)
    int32 TriangleCount;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<EProcMeshVertexType> VertexType;
    
    SB_API FSBSliceSkeletalMeshTriangle();
};

