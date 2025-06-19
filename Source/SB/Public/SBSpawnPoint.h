#pragma once
#include "CoreMinimal.h"
#include "SBAssetPicker.h"
#include "SBNavigationObjectBase.h"
#include "SBSpawnPoint.generated.h"

class USBSpawnFormationData;
class USceneComponent;

UCLASS()
class SB_API ASBSpawnPoint : public ASBNavigationObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SpawnPointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USBSpawnFormationData* FormationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> ActorActiveVolumeNameArray;
    
    UPROPERTY(EditAnywhere)
    FSBAssetPicker AnimationPreview;
    
    UPROPERTY(EditAnywhere)
    float AnimationPreviewTime;
    
    UPROPERTY(Transient)
    FString CurrentMeshAssetPath;
    
    UPROPERTY(Instanced, Transient)
    TArray<USceneComponent*> LinkTargetComponentList;
    
    UPROPERTY(EditAnywhere)
    bool bIsSpawnToWallOrCeiling;
    
    ASBSpawnPoint(const FObjectInitializer& ObjectInitializer);

};

