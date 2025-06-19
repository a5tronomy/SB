#pragma once
#include "CoreMinimal.h"
#include "LiveLinkRetargetAsset.h"
#include "EXsensMapping.h"
#include "RemappingRowHandle.h"
#include "LiveLinkMvnRetargetAsset.generated.h"

class UAnimSequence;
class UDataTable;
class USkeletalMesh;

UCLASS(BlueprintType)
class LIVELINKMVNPLUGIN_API ULiveLinkMvnRetargetAsset : public ULiveLinkRetargetAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* m_remapping_table;
    
    UPROPERTY(EditAnywhere)
    TMap<EXsensMapping, FRemappingRowHandle> m_remapping_rows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USkeletalMesh* m_skeletal_mesh;
    
private:
    UPROPERTY(EditAnywhere)
    UAnimSequence* TPoseAnimation;
    
public:
    ULiveLinkMvnRetargetAsset();

};

