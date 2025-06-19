#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "ESBScanDisplayType.h"
#include "SBEventMoveData_CableInfo.h"
#include "SBEventMoveData_RopeMoveInfo.h"
#include "SBEventMoveDataComponent.generated.h"

class AActor;
class UPrimitiveComponent;
class USBEventMoveData;
class USplineComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SB_API USBEventMoveDataComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Priority;
    
    UPROPERTY(Transient)
    bool bDisableInteraction;
    
    UPROPERTY(Transient)
    bool bPendingApplyActorStorage;
    
    UPROPERTY(Transient)
    bool bRegisteActorStorage;
    
    UPROPERTY(Instanced, Transient)
    UPrimitiveComponent* CollisionPrimitiveComponent;
    
    UPROPERTY(Instanced, Transient)
    UPrimitiveComponent* CollisionAtFailedInteraction;
    
    UPROPERTY(EditAnywhere)
    USBEventMoveData* EventMoveData;
    
    UPROPERTY(EditAnywhere)
    bool bDynamic;
    
    UPROPERTY(EditAnywhere)
    bool bSaveActorStorage;
    
    UPROPERTY(EditAnywhere)
    bool bUseDisableInteractionTimer;
    
    UPROPERTY(EditAnywhere)
    float DisableInteractionTimer;
    
    UPROPERTY(EditAnywhere)
    bool bUseDisableInteractionCounter;
    
    UPROPERTY(EditAnywhere)
    int32 DisableInteractionCounter;
    
    UPROPERTY(Transient)
    float RemainEnableInteraction;
    
    UPROPERTY(Transient)
    int32 RemainInteractionCounter;
    
    UPROPERTY(Transient)
    float MakedDisableProgressTimerEventPercent;
    
    UPROPERTY(Transient)
    float MakedDisableProgressCounterEventPercent;
    
    UPROPERTY(Transient)
    FVector StartTargetLocation;
    
    UPROPERTY(Transient)
    FRotator StartTargetRotation;
    
    UPROPERTY(Transient)
    FVector EndTargetLocation;
    
    UPROPERTY(Transient)
    FRotator EndTargetRotation;
    
    UPROPERTY(Transient)
    FVector StartLeaveLocation;
    
    UPROPERTY(Transient)
    FRotator StartLeaveRotation;
    
    UPROPERTY(Transient)
    FVector EndLeaveLocation;
    
    UPROPERTY(Transient)
    FRotator EndLeaveRotation;
    
    UPROPERTY(Transient)
    FVector LevelObjOrigin;
    
    UPROPERTY(Transient)
    FVector LevelObjExtent;
    
    UPROPERTY(Transient)
    AActor* EventVisualMeshActor;
    
    UPROPERTY(Instanced, Transient)
    USplineComponent* BalanceMovingSplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSBEventMoveData_CableInfo CableMoveInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSBEventMoveData_RopeMoveInfo RopeMoveInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RopeOverrideLength;
    
    UPROPERTY(Transient)
    bool bOverrideBalanceMovingIgnoreDistanceAtStart;
    
    UPROPERTY(Transient)
    float OverrideBalanceMovingIgnoreDistanceAtStart;
    
    UPROPERTY(Transient)
    bool bOverrideBalanceMovingIgnoreDistanceAtEnd;
    
    UPROPERTY(Transient)
    float OverrideBalanceMovingIgnoreDistanceAtEnd;
    
    UPROPERTY(Transient)
    bool bOverrideSideRodWallSearch;
    
    UPROPERTY(Transient)
    float OverrideSideRodWallSearchDist;
    
    UPROPERTY(Transient)
    float OverrideSideRodWallSearchRange;
    
    UPROPERTY(Transient)
    float RopeTargetLengthBlendTime;
    
    UPROPERTY(Transient)
    float CurrentRopeTargetLengthBlendTime;
    
    UPROPERTY(Transient)
    float RopeBlendTargetLength;
    
    UPROPERTY(Transient)
    float RopeBlendStartLength;
    
    UPROPERTY(EditAnywhere)
    bool bDisplayScanPoint;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBScanDisplayType> ScanDisplayType;
    
    UPROPERTY(Instanced, Transient)
    TArray<USceneComponent*> ScanPointArray;
    
    UPROPERTY(Transient)
    bool bUpdated;
    
    USBEventMoveDataComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRopeMaxLength(float InMaxLength);
    
    UFUNCTION(BlueprintCallable)
    void SetRopeLeaveDistance(float StartLeaveDistance, float EndLeaveDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetRopeAxisLocation(float InTargetLength, float InBlendTime);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideSideRodWallSearch(float Distance, float Range);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideRopeMaxLength(float InMaxLength);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideBalanceMovingIgnoreDistance(float DistAtStart, float DistAtEnd);
    
    UFUNCTION(BlueprintCallable)
    void SetEventMoveLeaveLocation(const FVector& NewStartLeaveLocation, const FVector& NewEndLeaveLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableRope(bool bEnableRopeFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableInteractionFlag(bool InFlag);
    
    UFUNCTION(BlueprintCallable)
    void NotifyBPHitEvent(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    bool IsDynamic();
    
    UFUNCTION(BlueprintCallable)
    float GetRopeOverrideLength();
    
    UFUNCTION(BlueprintCallable)
    USBEventMoveData* GetData();
    
    UFUNCTION(BlueprintCallable)
    void DirtyRopeCable(float InSubStepTime);
    
};

