#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESBCharaterAdditiveBodyType.h"
#include "ESBEquipmentForceBody.h"
#include "ESBEquipmentSubType.h"
#include "ESBEquipmentType.h"
#include "ESBMeshAttachType.h"
#include "SBTablePropertyBase.h"
#include "SBEquipmentTableProperty.generated.h"

USTRUCT()
struct FSBEquipmentTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEquipmentType> Type;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEquipmentSubType> SubType;
    
    UPROPERTY(EditAnywhere)
    FName Tag;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EffectAliasArray;
    
    UPROPERTY(EditAnywhere)
    FString MountingResourcePath;
    
    UPROPERTY(EditAnywhere)
    FName MaterialGroup;
    
    UPROPERTY(EditAnywhere)
    FName MountingResourceCollisionProfileName;
    
    UPROPERTY(EditAnywhere)
    FString UnmountingResourcePath;
    
    UPROPERTY(EditAnywhere)
    float UnmountingEquipmentMassScale;
    
    UPROPERTY(EditAnywhere)
    bool bUnmountingEquipmentNoRemove;
    
    UPROPERTY(EditAnywhere)
    FString MountingShowPath;
    
    UPROPERTY(EditAnywhere)
    FName MountingSocketName;
    
    UPROPERTY(EditAnywhere)
    FString MountingEquipShowPath;
    
    UPROPERTY(EditAnywhere)
    FString CompletedMountingEquipShowPath;
    
    UPROPERTY(EditAnywhere)
    bool bDisableCompletedMountingEquipment;
    
    UPROPERTY(EditAnywhere)
    bool bWorldStaticAndDynamicCollisionUnmounting;
    
    UPROPERTY(EditAnywhere)
    bool bReleasablyMounted;
    
    UPROPERTY(EditAnywhere)
    FName AnimAssetPath;
    
    UPROPERTY(EditAnywhere)
    FString FoldShow;
    
    UPROPERTY(EditAnywhere)
    FString UnFoldShow;
    
    UPROPERTY(EditAnywhere)
    FString ForceFoldShow;
    
    UPROPERTY(EditAnywhere)
    FString UseSkillUnFoldShow;
    
    UPROPERTY(EditAnywhere)
    FString StartSlopeShow;
    
    UPROPERTY(EditAnywhere)
    FString EndSlopeShow;
    
    UPROPERTY(EditAnywhere)
    FString ChangeEquipmentShow;
    
    UPROPERTY(EditAnywhere)
    FString CompleteChangeEquipmentShow;
    
    UPROPERTY(EditAnywhere)
    FName AttachSocket;
    
    UPROPERTY(EditAnywhere)
    FName EditorAttachSocket;
    
    UPROPERTY(EditAnywhere)
    FVector RelativePosition;
    
    UPROPERTY(EditAnywhere)
    FRotator RelativeRotation;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMeshAttachType> AttachType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBCharaterAdditiveBodyType> ActiveIdleAdditiveBody;
    
    UPROPERTY(EditAnywhere)
    float AdditiveBodyAlpha;
    
    UPROPERTY(EditAnywhere)
    float IdleAdditiveAnimationMaxAlpha;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> AttachRopeRelativeSocketName;
    
    UPROPERTY(EditAnywhere)
    TArray<FVector> AttachRopeRelativeLocation;
    
    UPROPERTY(EditAnywhere)
    FString AdditionalComaReviveShowPath;
    
    UPROPERTY(EditAnywhere)
    bool IsEnableLowAngleEvent;
    
    UPROPERTY(EditAnywhere)
    FString CharacterSoundSetOverride;
    
    UPROPERTY(EditAnywhere)
    FString CharacterFootstepSetOverride;
    
    UPROPERTY(EditAnywhere)
    FString PhotoModePoseSnapshotData;
    
    UPROPERTY(EditAnywhere)
    bool bDisablePostProcessWhenPhotoModePoseSnapshot;
    
    UPROPERTY(EditAnywhere)
    FString PhotoModePonytailSnapshotData;
    
    UPROPERTY(EditAnywhere)
    FString PhotoModeHairSnapshotData;
    
    UPROPERTY(EditAnywhere)
    FString PhotoModeTachyWingSnapshotData;
    
    UPROPERTY(EditAnywhere)
    FString SelfieModePoseSnapshotData;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEquipmentType> OverrideMaterialMeshSlot;
    
    UPROPERTY(EditAnywhere)
    FName OverrideMeshMaterialGroup;
    
    UPROPERTY(EditAnywhere)
    bool bUseHidePonytail;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEquipmentType> HideMeshSlot;
    
    UPROPERTY(EditAnywhere)
    bool bLongHair;
    
    UPROPERTY(EditAnywhere)
    FString MountingResourcePathWhenLongHair;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEquipmentForceBody> ForceBodyType;
    
    UPROPERTY(EditAnywhere)
    FString MountingResourcePathWhenForceBodyType1;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBEquipmentTableProperty();
};

