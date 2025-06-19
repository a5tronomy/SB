#pragma once
#include "CoreMinimal.h"
#include "ESBMeshAttachType.h"
#include "SBTablePropertyBase.h"
#include "SBCharacterAppearanceTableProperty.generated.h"

USTRUCT()
struct FSBCharacterAppearanceTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName CharacterAssetPath;
    
    UPROPERTY(EditAnywhere)
    float CapsuleRadius;
    
    UPROPERTY(EditAnywhere)
    float CapsuleHalfHeight;
    
    UPROPERTY(EditAnywhere)
    FName BodyMesh;
    
    UPROPERTY(EditAnywhere)
    FName FaceMesh;
    
    UPROPERTY(EditAnywhere)
    FName BodyAnimAssetPath;
    
    UPROPERTY(EditAnywhere)
    FName FaceAnimAssetPath;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMeshAttachType> FaceAttachType;
    
    UPROPERTY(EditAnywhere)
    FName BattleToPeacefulShowPath;
    
    UPROPERTY(EditAnywhere)
    FName PeacefulToBattleShowPath;
    
    UPROPERTY(EditAnywhere)
    FName PeacefulToBattleShowPath_LockOn;
    
    UPROPERTY(EditAnywhere)
    FName BattleToPeacefulShowPath_Move;
    
    UPROPERTY(EditAnywhere)
    FName PeacefulToBattleShowPath_Move;
    
    UPROPERTY(EditAnywhere)
    FName PeacefulToBattleShowPath_Move_LockOn;
    
    UPROPERTY(EditAnywhere)
    FName BattleToPeacefulShowPath_NoneAnim;
    
    UPROPERTY(EditAnywhere)
    FName PeacefulToBattleShowPath_NoneAnim;
    
    UPROPERTY(EditAnywhere)
    FName PeacefulToBattleShowPath_NoneAnim_LockOn;
    
    UPROPERTY(EditAnywhere)
    FName IdleToGroggyShowPath;
    
    UPROPERTY(EditAnywhere)
    FName IdleToDownShowPath;
    
    UPROPERTY(EditAnywhere)
    FName IdleToDeadShowPath;
    
    UPROPERTY(EditAnywhere)
    FName IdleToAirborneShowPath;
    
    UPROPERTY(EditAnywhere)
    FName DownToIdleShowPath;
    
    UPROPERTY(EditAnywhere)
    FName GroggyToIdleShowPath;
    
    UPROPERTY(EditAnywhere)
    FName AirborneToIdleShowPath;
    
    UPROPERTY(EditAnywhere)
    FName GroggyToAirborneShowPath;
    
    UPROPERTY(EditAnywhere)
    FName DownToAirborneShowPath;
    
    UPROPERTY(EditAnywhere)
    FName GroggyToDownShowPath;
    
    UPROPERTY(EditAnywhere)
    FName AirborneToDownShowPath;
    
    UPROPERTY(EditAnywhere)
    FString StartSlopeShow;
    
    UPROPERTY(EditAnywhere)
    FString EndSlopeShow;
    
    UPROPERTY(EditAnywhere)
    FName FishingAimToTakeBackShowPath;
    
    UPROPERTY(EditAnywhere)
    FName FishingTakeBackToAimShowPath;
    
    UPROPERTY(EditAnywhere)
    FName FishingTakeBackToCastingShowPath;
    
    UPROPERTY(EditAnywhere)
    FName FishingCastingToWaitShowPath;
    
    UPROPERTY(EditAnywhere)
    FName FishingWaitToFightShowPath;
    
    UPROPERTY(EditAnywhere)
    FName FishingWaitToIdleShowPath;
    
    UPROPERTY(EditAnywhere)
    FName FishingFightToIdleShowPath;
    
    UPROPERTY(EditAnywhere)
    FName FishingCatchShowPath;
    
    UPROPERTY(EditAnywhere)
    FName FishingLureChangeShowPath;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBCharacterAppearanceTableProperty();
};

