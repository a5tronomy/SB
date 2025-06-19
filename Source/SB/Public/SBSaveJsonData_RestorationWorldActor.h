#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBSaveJsonData_RestorationMeshInfo.h"
#include "SBSaveJsonData_RestorationWorldActor.generated.h"

USTRUCT()
struct FSBSaveJsonData_RestorationWorldActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FString, FSBSaveJsonData_RestorationMeshInfo> MeshInfoMap;
    
    UPROPERTY(EditAnywhere)
    bool bVisible;
    
    UPROPERTY(EditAnywhere)
    bool bPhysSimulation;
    
    UPROPERTY(EditAnywhere)
    FTransform Transform;
    
    SB_API FSBSaveJsonData_RestorationWorldActor();
};

