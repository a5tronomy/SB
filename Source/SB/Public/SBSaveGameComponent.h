#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "ESBSaveGameCompModeType.h"
#include "SBActorSectorInfo.h"
#include "SBSaveGameComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SB_API USBSaveGameComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector BoxExtents;
    
    UPROPERTY()
    FColor VolumeBoxColor;
    
    UPROPERTY(Transient)
    FSBActorSectorInfo SectorInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESBSaveGameCompModeType> ModeType;
    
    UPROPERTY()
    bool bInSideDontSave;
    
protected:
    UPROPERTY()
    float DefaultExtents;
    
public:
    USBSaveGameComponent(const FObjectInitializer& ObjectInitializer);

};

