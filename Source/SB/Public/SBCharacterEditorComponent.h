#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "SBCharacterPoseSnapshotEditorData.h"
#include "SBCharacterEditorComponent.generated.h"

class ASBCharacter;
class UBlendSpaceBase;
class UBlueprint;
class UPhysicsAsset;
class USBCharacterPoseSnapshotDataAsset;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SB_API USBCharacterEditorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bVisibleDronLocation;
    
    UPROPERTY(EditAnywhere)
    bool bVisibleCharacterBinding;
    
    UPROPERTY(EditAnywhere)
    UBlueprint* BlueprintObject;
    
    UPROPERTY(EditAnywhere)
    FName BindingSocketName;
    
    UPROPERTY(EditAnywhere)
    FVector BindingRelativeLocation;
    
    UPROPERTY(EditAnywhere)
    UBlendSpaceBase* BindingIdleBlendSpace;
    
    UPROPERTY(EditAnywhere)
    UPhysicsAsset* BindingPhysicsAsset;
    
    UPROPERTY(Transient)
    ASBCharacter* BindingCharacterObject;
    
    UPROPERTY(EditAnywhere)
    bool bVisibleEyeTracking;
    
    UPROPERTY(EditAnywhere)
    FVector EyeOffsetFromHead;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAxis::Type> EyeForwardAxis;
    
    UPROPERTY(EditAnywhere)
    bool EyeForwardAxisInverse;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAxis::Type> EyeRightAxis;
    
    UPROPERTY(EditAnywhere)
    bool EyeRightAxisInverse;
    
    UPROPERTY(EditAnywhere)
    float EyeBetweenDistance;
    
    UPROPERTY(EditAnywhere)
    float EyeAngleHorizontal;
    
    UPROPERTY(EditAnywhere)
    float EyeAngleVertical;
    
    UPROPERTY(Transient, VisibleAnywhere)
    USBCharacterPoseSnapshotDataAsset* PoseSnapshotData;
    
    UPROPERTY(Transient, VisibleAnywhere)
    USBCharacterPoseSnapshotDataAsset* PonytailSnapshotData;
    
    UPROPERTY(Transient, VisibleAnywhere)
    USBCharacterPoseSnapshotDataAsset* HairSnapshotData;
    
    UPROPERTY(Transient, VisibleAnywhere)
    USBCharacterPoseSnapshotDataAsset* TachyWingSnapshotData;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBCharacterPoseSnapshotEditorData> PoseArray;
    
    USBCharacterEditorComponent(const FObjectInitializer& ObjectInitializer);

};

