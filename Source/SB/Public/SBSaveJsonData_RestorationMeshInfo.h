#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "SBSaveJsonData_RestorationMeshInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveJsonData_RestorationMeshInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bVisible;
    
    UPROPERTY(EditAnywhere)
    FTransform Transform;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionEnabled::Type> CollisionEnabled;
    
    UPROPERTY(EditAnywhere)
    bool bSimulatePhysics;
    
    SB_API FSBSaveJsonData_RestorationMeshInfo();
};

