#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "Camera/CameraShake.h"
#include "CacheHitBoneInfo.h"
#include "ESBBoneHitShakeMode.h"
#include "SBAnimNode_HitBones.generated.h"

class UCurveFloat;
class USkeleton;

USTRUCT(BlueprintType)
struct SBANIMATION_API FSBAnimNode_HitBones : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float HitForceFallOffValue;
    
    UPROPERTY(EditAnywhere)
    bool bUseHitForceFallOffCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* HitForceFallOffCurve;
    
    UPROPERTY(EditAnywhere)
    FFOscillator ShakeNoise;
    
    UPROPERTY(EditAnywhere)
    bool bUseShakeNoise;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBBoneHitShakeMode> ShakeNoiseMode;
    
    UPROPERTY(EditAnywhere)
    float HitTranslationScale;
    
    UPROPERTY(EditAnywhere)
    float HitRotationScale;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ExclusiveHitBones;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> FollowParentBones;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> MakedFollowParentAllChildBones;
    
    UPROPERTY(EditAnywhere, Transient)
    FName AddFollowParentAllChildBones;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FName, int32> ExclusiveHitBonesMap;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FName, int32> FollowParentBonesMap;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FName, int32> MakedFollowParentAllChildBonesMap;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FCacheHitBoneInfo> CacheHitBones;
    
    UPROPERTY(VisibleAnywhere)
    USkeleton* CacheSkeleton;
    
    FSBAnimNode_HitBones();
};

