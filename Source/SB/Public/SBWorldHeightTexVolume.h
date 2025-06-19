#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Volume.h"
#include "SBMapSectorID.h"
#include "SBWorldHeightTexVolume.generated.h"

UCLASS()
class SB_API ASBWorldHeightTexVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TextureSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TEnumAsByte<ECollisionChannel>> CollisionChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseCustomCollisionCheckHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseCustomCollisionHeightForMinMaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CustomCollisionCheckStartHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CustomCollisionCheckEndHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CollisionCapsuleHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CollisionCapsuleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString strGeneratedTexturePackage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString strGeneratedTextureName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bGenerateTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GenBaseX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GenBaseY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GenBaseZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GenSideSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GenHeightUnitSize;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FSBMapSectorID SectorID;
    
    UPROPERTY(Transient)
    FVector LevelObjOrigin;
    
    UPROPERTY(Transient)
    FVector LevelObjExtent;
    
    ASBWorldHeightTexVolume(const FObjectInitializer& ObjectInitializer);

};

