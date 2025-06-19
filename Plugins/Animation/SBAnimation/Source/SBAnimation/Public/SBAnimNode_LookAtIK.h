#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "CommonAnimTypes.h"
#include "UObject/NoExportTypes.h"
#include "BoneContainer.h"
#include "ESBLookAtIKBacksideType.h"
#include "ESBLookAtIKType.h"
#include "SBLookAtIKControlData.h"
#include "SBAnimNode_LookAtIK.generated.h"

USTRUCT(BlueprintType)
struct SBANIMATION_API FSBAnimNode_LookAtIK : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBLookAtIKType> LookAtIKType;
    
    UPROPERTY(EditAnywhere)
    FBoneReference StartBone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference EndBone;
    
    UPROPERTY(EditAnywhere)
    bool bUseRelativeLocation;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FSBLookAtIKControlData> LookAtIKControlDatas;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBLookAtIKControlData> AdditiveLookAtIKControlDatas;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    float RotationSpeed;
    
    UPROPERTY(Transient)
    float OverrideRotationSpeed;
    
    UPROPERTY(Transient)
    float OverrideAlpha;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    float RotationEndSpeed;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    float BacksideChangeYawOverAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector LookAtWorldLocation;
    
    UPROPERTY(EditAnywhere)
    FAxis LookAt_Axis;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBLookAtIKBacksideType> LookAtIKBacksideType;
    
    UPROPERTY(Transient)
    float CurrentRotationDegreePerFrame;
    
    UPROPERTY(Transient)
    float PrevChangeYawAngle;
    
    UPROPERTY(Transient)
    float PrevChangePitchAngle;
    
    UPROPERTY(Transient)
    float DeltaTime;
    
    UPROPERTY(Transient)
    bool bValidLocation;
    
    UPROPERTY(Transient)
    bool bEnable;
    
    UPROPERTY(Transient)
    bool bControlByCode;
    
    UPROPERTY(Transient)
    float CurrentAlpha;
    
    FSBAnimNode_LookAtIK();
};

