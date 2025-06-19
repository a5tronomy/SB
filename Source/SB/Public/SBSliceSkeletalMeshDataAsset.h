#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBSliceSkeletalMeshHeader.h"
#include "SBSliceSkeletalMeshLOD.h"
#include "SBSliceSkeletalMeshDataAsset.generated.h"

UCLASS()
class SB_API USBSliceSkeletalMeshDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FSBSliceSkeletalMeshHeader Header;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBSliceSkeletalMeshLOD> LODMeshs;
    
    USBSliceSkeletalMeshDataAsset();

};

