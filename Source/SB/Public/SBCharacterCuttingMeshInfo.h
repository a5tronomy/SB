#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SBCharacterCuttingMeshInfo.generated.h"

class UProceduralMeshComponent;

USTRUCT(BlueprintType)
struct FSBCharacterCuttingMeshInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, Transient)
    UProceduralMeshComponent* ProcMeshComp;
    
    UPROPERTY(Transient)
    FName AttachBone;
    
    UPROPERTY(Transient)
    FTransform AttachedTM;
    
    UPROPERTY(Transient)
    FVector SliceNormal;
    
    UPROPERTY(Transient)
    bool bIsAttachedParentBone;
    
    UPROPERTY(Transient)
    int32 LOD;
    
    SB_API FSBCharacterCuttingMeshInfo();
};

