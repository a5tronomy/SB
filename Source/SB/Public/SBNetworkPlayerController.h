#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ESBAchievementCategoryType.h"
#include "ESBAchievementEventType.h"
#include "ESBActorAction.h"
#include "ESBActorSpeedType.h"
#include "ESBActorStatType.h"
#include "ESBActorState.h"
#include "ESBCharacterLevelType.h"
#include "ESBConditionResultType.h"
#include "ESBElementType.h"
#include "ESBObjectState.h"
#include "ESBQuestEventType.h"
#include "ESBRuleState.h"
#include "ESBSkillAttackDirection.h"
#include "ESBSkillCommandState.h"
#include "ESBSkillHitResult.h"
#include "ESBSkillSlotType.h"
#include "ESBUILogicType.h"
#include "ESBWorldObjectType.h"
#include "ESBZoneEnvActiveState.h"
#include "ESBZoneEventHitAttackerType.h"
#include "SBItemInstanceForRPC.h"
#include "SBItemSpawnCasterInfo.h"
#include "SBPlayerController.h"
#include "SBSaveGameData_Achievement.h"
#include "SBSaveGameData_Actor.h"
#include "SBSaveGameData_Env.h"
#include "SBSaveGameData_Item.h"
#include "SBNetworkPlayerController.generated.h"

UCLASS()
class ASBNetworkPlayerController : public ASBPlayerController {
    GENERATED_BODY()
public:
    ASBNetworkPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_ZoneTriggerDoEvent(uint32 inEventorGUID, uint32 inZoneTriggerGuid, FName inTriggerAlias, TEnumAsByte<ESBConditionResultType> inTriggerTouchResult, int32 inDoingCount);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_ZoneEnvChangeState(uint32 inZoneEnvGuid, FName inZoneEnvName, FName inStateTagName, uint32 inCasterGUID, bool bInIgnoreTransitSeq);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_WarpPosition(int32 inPlayerId, const FVector& InLocation, const FRotator& InRotation);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_UseSkill(uint32 inCasterUID, TEnumAsByte<ESBSkillCommandState> inCommand, uint32 inSkillId, FName inCommandNodeName, const TArray<uint32>& inTargetActorIdList, FVector InTargetLocation, FVector inInputWorldDirection);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_UpdateSkillTargetLocation(const uint32 inCasterGUID, const uint32 inSkillGuid, FVector InTargetLocation);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_StopSkill(const uint32 inCasterUID, const uint32 inSkillGuid, bool inCheckMoveBlock);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_SetSkillSlot(uint32 InActorGUID, TEnumAsByte<ESBSkillSlotType> inSlotType, uint32 inSkill);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_SetMeshInfo(int32 inPlayerId, uint8 MeshInfoSlot, FName MeshResourcePath, FName AnimAssetPath, FVector OffsetPosition, FRotator OffsetRotation, uint8 AttachType, FName AttachSocketName);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_SetAimLockOnTarget(const uint32 inCasterUID, FName inCommandNodeName, const TArray<uint32>& inTargetGUIDArray);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_SetActiveWorldObject(TEnumAsByte<ESBWorldObjectType> InType, FName inWorldObjectUniqueKey, TEnumAsByte<ESBObjectState> InObjState);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_ServerTravel(int32 inPlayerId, const FString& inMultiMapAlias, bool bRandomMap);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_ResetZone(const uint32 InActorGUID, FName inZoneAlias);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_RequestPlayerName(uint32 inPlayerId, uint32 inRequestPlayerId);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_RequestActorRevive(uint32 inPlayerId);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_RegisterSaveGame(const uint32 InActorGUID, const FSBSaveGameData_Actor& InSaveActor, const FSBSaveGameData_Env& InSaveEnv, const FSBSaveGameData_Item& InSaveItem, const FSBSaveGameData_Achievement& InSaveAchievement);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_PlayTheater(uint32 InActorGUID);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_NextStepWhenHoldAndDualSenseTriggerEffectWeaponFired(const uint32 inCasterGUID, const FName inCommandNodeName);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_NextStepSkill(const uint32 inCasterUID, FName inCommandNodeName);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_MultiPlaySetRemainTime(float InRemainTime);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_MultiPlayChangeRule(FName InRuleAlias);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_Login(uint32 inCharacterTableID, FVector InPosition, FRotator InRotation, int32 inPlayerId, bool inSetPlayerPosition);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_LinkSkillBreak(uint32 inSkillGuid, uint32 inBreakerActor);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_LeaveZone(uint32 inPlayerId, uint32 InActorGUID, FName inZoneAlias);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_ItemBucketSpawn(uint8 InType, uint32 inTargetGUID, FName InItemAlias, uint32 InItemCount, FVector InPosition, FRotator InRotation);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_ItemBucketRewardGroupDrop(uint8 inBucketType, uint32 inTargetGUID, const FName& InRewardGroupAlias, FVector InLocation, float InOverrideInteractionTime, float InDelaySpawnTime, uint32 InOverrideLocationActorGUID);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_ItemBucketItemRemove(uint8 InType, uint32 inTargetGUID, const FName& InItemAlias, uint32 InItemCount, int32 InItemPocketIndex);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_ItemBucketItemConsume(uint8 InType, uint32 inTargetGUID, uint32 inApplyActorGUID, const FName& InItemAlias, uint32 InItemCount, int32 InItemPocketIndex, uint32 InConsumeSkillId, FVector inSkillTargetLocation, FName inSkillCommandName);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_ItemBucketItemAdd(uint8 InType, uint32 inTargetGUID, FName InItemAlias, uint32 InItemCount, uint32 InStatLevel, bool bInNotifyUI, bool bNotifyEnhanceUI, bool bInEventLoad, const FSBItemInstanceForRPC& InItemInstance);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_ItemBucketInteraction(uint8 InFromBucketType, uint32 InFromTargetGUID, FGuid inFromPocketGuid, uint8 InToBucketType, uint32 InToTargetGUID);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_EnterZone(uint32 inPlayerId, uint32 InActorGUID, FName inZoneAlias);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_DestructionZoneEventActor(FName inZoneEventActorName, FVector inHitLocation, FVector inHitDirection);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_CreateActor(uint32 inCharacterTableID, FVector InPosition, FRotator InRotation, bool inIsPlayer, bool inCheatCmd, int32 inPlayerId, uint32 inEventSpawnId, uint8 inSpawnIndex, FName inSpawnPointName, bool bInPossess);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_Cheat(const uint32 InActorGUID, const uint32 inPlayerId, const FString& InCmdName, const FString& InArgs);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_ChangeBulletItem(uint32 InActorGUID, FName inBulletItemAlias);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_CancelEventMove(int32 inPlayerId);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_ActorUnequip(const uint32 InActorGUID, int32 InEquipType);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_ActorTransform(const uint32 InActorGUID, FVector InPosition, FRotator InRotation);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_ActorStopAllCloakingEffect(uint32 InActorGUID);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_ActorStancePressCommandKey(const uint32 InActorGUID, FName inStanceAlias, bool inPressCommandKey);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_ActorRevival(const uint32 InActorGUID, const bool bInUseRevivalItem);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_ActorRestoreSkillPoint(uint32 InActorGUID, bool inbConsumeItem, FName InSkillTreeAlias);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_ActorRespawn(const uint32 InActorGUID, bool inWarpToCampPosition);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_ActorRemoveTargetedByEnemy(uint32 InActorGUID, uint32 inEnemyActorGuid);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_ActorRegister(const uint32 InActorGUID, uint32 inRequestPlayerId, const TArray<float>& inActorStat);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_ActorReceiveAchievementReward(const uint32 InActorGUID, uint32 inAchievementId);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_ActorProgressAchievementId(const uint32 InActorGUID, uint32 inAchievementId, int32 inProgressValue);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_ActorProgressAchievement(const uint32 InActorGUID, TEnumAsByte<ESBAchievementEventType> inEvent, TEnumAsByte<ESBAchievementCategoryType> inCategory, const TArray<int32>& inParamTypeArray, const TArray<FString>& inParamValueArray, int32 inProgressValue);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_ActorLockOnTarget(uint32 InActorGUID, uint32 inTargetGUID);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_ActorLevelUp(uint32 InActorGUID, TEnumAsByte<ESBCharacterLevelType> inLevelType, uint32 inLevel, bool bConsumeItem, bool bFromLoad);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_ActorLanded(const uint32 InActorGUID, float InFallingDistance, float InLandingZ);
    
    UFUNCTION(Reliable, Server)
    void ServerRequest_ActorJump(const uint32 InActorGUID, bool bInJump);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_ActorInteraction(const uint32 InActorGUID, const uint32 inTargetGUID);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_ActorInfo(const uint32 InActorGUID, FVector inInputDirection, FVector inInputNonInterpolDirection, FVector inWorldInputDirection, FVector inWorldInputNonInterpolDirection);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_ActorEquipmentRefresh(const uint32 InActorGUID, const TArray<int32>& inEquipmentTypeArray, const TArray<FSBItemInstanceForRPC>& Equipments);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_ActorEquipment(const uint32 InActorGUID, FName inEquipmentAlias, bool inAttach);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_ActorEquipBodySuit(const uint32 InActorGUID, FName inBodySuitItemAlias);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_ActorEquip(const uint32 InActorGUID, int32 InEquipType, const FSBItemInstanceForRPC& InItemInstance);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_ActorCompleteAchievementEvent(const uint32 InActorGUID);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_ActorCompleteAchievement(const uint32 InActorGUID, uint32 inAchievementId, bool bOnlyOne);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_ActorAddTargetedByEnemy(uint32 InActorGUID, uint32 inEnemyActorGuid);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_AcquireSkillAll(uint32 InActorGUID, bool bProgressAchievement);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_AcquireSkill(uint32 InActorGUID, uint32 inAcquisitionSkill, bool bDonotConsumeSP, bool bProgressAchievement);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequest_AcceptPlayerSession(int32 inPlayerId, const FString& inPlayerSessionId);
    
    UFUNCTION(Client, Reliable)
    void ClientResponse_SetMoveInputBlock(int32 inPlayerId, bool inMoveBlock);
    
    UFUNCTION(Client, Reliable)
    void ClientResponse_SetMeshInfo(int32 inPlayerId, uint8 MeshInfoSlot, FName MeshResourcePath, FName AnimAssetPath, FVector OffsetPosition, FRotator OffsetRotation, uint8 AttachType, FName AttachSocketName);
    
    UFUNCTION(Client, Reliable)
    void ClientResponse_DrawSBDebugSphere(const FVector& Center, float Radius, int32 Segments, const FColor& Color);
    
    UFUNCTION(Client, Reliable)
    void ClientResponse_DrawSBDebugLine(const FVector& LineStart, const FVector& LineEnd, const FColor& Color);
    
    UFUNCTION(Client, Reliable)
    void ClientResponse_DrawSBDebugCapsule(const FVector& Center, float HalfHeight, float Radius, const FQuat& Rotation, const FColor& Color);
    
    UFUNCTION(Client, Reliable)
    void ClientResponse_DrawSBDebugBox(const FVector& Center, const FVector& Box, const FQuat& Rotation, const FColor& Color);
    
    UFUNCTION(Client, Unreliable)
    void ClientResponse_DrawSBDebugArrow(const FVector& LineStart, const FVector& LineEnd, float ArrowSize, const FColor& Color);
    
    UFUNCTION(Client, Reliable)
    void ClientResponse_DoJump(int32 inPlayerId);
    
    UFUNCTION(Client, Reliable)
    void ClientResponse_CancelEventMove(int32 inPlayerId);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ZoneTriggerRegister(const uint32 inTurn, FName inZoneAlias, FName inTriggerAlias, uint32 InTriggerGUID, int32 InCurrentDoingCount);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ZoneTriggerDoEvent(const uint32 inTurn, uint32 inEventorGUID, uint32 inZoneTriggerGuid, FName inTriggerAlias, TEnumAsByte<ESBConditionResultType> inTriggerTouchResult, int32 inDoingCount);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ZoneTriggerCreate(const uint32 inTurn, FName inZoneAlais, FName inZoneTriggerAlais, uint32 inZoneTriggerGuid);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ZoneEventActorRemove(const uint32 inTurn, const uint32 inZoneEventActorGUID);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ZoneEventActorPostDestruction(const uint32 inTurn, const uint32 inZoneEventActorGUID);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ZoneEventActorDestructionStep(const uint32 inTurn, const uint32 inZoneEventActorGUID, FVector inHitLocation, FVector inHitDirection, int32 inDestructStep, TEnumAsByte<ESBElementType> inHitElementType, float inHitElementAmount, TEnumAsByte<ESBZoneEventHitAttackerType> ZoneEventHitAttackerType);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ZoneEventActorDestruction(const uint32 inTurn, const uint32 inZoneEventActorGUID, FVector inHitLocation, FVector inHitDirection, TEnumAsByte<ESBZoneEventHitAttackerType> ZoneEventHitAttackerType);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ZoneEventActorCreate(const uint32 inTurn, const uint32 inZoneEventActorGUID, FName inZoneEventActorName, int32 inZoneEventTableID, bool inDestruction, bool inActorEnableCollision, bool inFromStorage, FVector InLocation, FRotator InRotation, bool bResetZone);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ZoneEnvRegister(const uint32 inTurn, FName inZoneAlias, FName InEnvSpawnAlias, uint32 InEnvGUID, FName inStateTagName, TEnumAsByte<ESBObjectState> inObjectState, TEnumAsByte<ESBZoneEnvActiveState> inActiveState);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ZoneEnvCreate(const uint32 inTurn, FName inZoneAlais, FName inZoneEnvSpawnAlais, uint32 inZoneEnvGuid);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ZoneEnvChangeState(const uint32 inTurn, uint32 inZoneEnvGuid, FName inZoneEnvName, FName inStateTagName, uint32 inCasterGUID, bool bInIgnoreTransitSeq);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ZoneEnvChangeEnable(const uint32 inTurn, uint32 inZoneEnvGuid, TEnumAsByte<ESBObjectState> inObjectState);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_UpdateMultiPlayScore(const uint32 inTurn, uint32 inPlayerId, float InRemainRespawnTime, uint32 InKillScore, uint32 InDeathScore);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_UpdateMultiPlayRuleState(const uint32 inTurn, FName InRuleAlias, TEnumAsByte<ESBRuleState> InRuleState, float InRemainTime, uint32 InRemainLifeCount);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_StopSkill(const uint32 inTurn, const uint32 inSkillGuid, const uint32 inCasterGUID, bool inCancel);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_StopEffect(const uint32 inTurn, const uint32 inEffectGUID, int32 inEndConditionIndex);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_StopActorMoveToTransform(const uint32 inTurn, uint32 InActorGUID, uint32 Guid);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_StartSkill(const uint32 inTurn, const uint32 inSkillGuid, const uint32 inCasterGUID, const uint32 inSkillTableId, const uint32 inSkillActiveStepId, const TArray<uint32>& inTargetGUIDArray, const FName& inCommandNodeName, const FVector& inInputWorldDirection, const TArray<uint32>& inProjectileGUIDArray, float inSkillSpeed, FName inItemConsumeItemAlias);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_StartEffect(const uint32 inTurn, const uint32 inEffectGUID, const uint32 inMainActorGUID, const uint32 inConstructorActorGUID, int32 inEffectTableId, float inEffectTime, uint8 inUpdateType, FVector InLocation, FRotator InRotation, uint32 inSkillGuid, uint32 inProjectileGUID, FVector inHitDirection, FVector inHitLocation, FName inHitBoneName, FName inHitShowKeyTag);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_SkillResultSet(const uint32 inTurn, uint32 InActorGUID, uint8 inSkillHitResult, float InTime);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_SkillNextStep(const uint32 inTurn, const uint32 inSkillGuid, const uint32 inSkillActiveStepId, const TArray<uint32>& inTargetGUIDArray, bool inImmediateStart, const TArray<uint32>& inProjectileGUIDArray, float inStepStartTime);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_SkillHitResult(const uint32 inTurn, const uint32 inSkillGuid, uint32 inSkillResultID, const uint32 inCasterGUID, const uint32 inTargetGUID, TEnumAsByte<ESBSkillHitResult> inSkillHitResult, FName inAttackGroupName, const FHitResult& inHitResult, FVector inHitLocation, FVector inHitNormal, FName inHitBoneName, FVector inHitDirection, FVector inHitFoward, float inHitStopTime, bool inCriticalHit, TEnumAsByte<ESBSkillAttackDirection> inAttackDirection, FName inShowKeyTag);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ShotProjectile(const uint32 inTurn, const uint32 inProjectileGUID, const uint32 inOwnerActorGuid);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_SetWorldCustomTimeScale(bool bSet, float InScale);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_SetTargetEncroachment(const uint32 inTurn, uint32 InActorGUID, uint32 inTargetGUID, float inBindingTime, float inRotationStartTime, float inRotationEndTime, const FString& inBindingIdleBlendSpace, const FString& inBindingPhysicsAsset, float inTargetDistanceWhenUnbinding, bool inEnablePhysicsBodyCollision);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_SetSkillSlot(const uint32 inTurn, uint32 InActorGUID, TEnumAsByte<ESBSkillSlotType> inSkillSlot, uint32 inSkillId);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_SetForceFixedLocation(const uint32 inTurn, const uint32 inProjectileGUID, bool inForceFixedLocation);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_RunZoneEvent(const uint32 inTurn, uint32 inEventorGUID, uint32 inZoneEventID);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_RetargetingProjectile(const uint32 inTurn, const uint32 inProjectileGUID, const uint32 inOwnerActorGuid, const uint32 inTargetActorGuid, FVector InTargetLocation);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_RespawnActor(uint32 inTurn, int32 InActorGUID);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ResetZone(const uint32 inTurn);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_RequestPlayerName(const uint32 inTurn, uint32 inPlayerId, const FString& inPlayerName, uint32 inRequestPlayerId);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_RequestActorRevive(const uint32 inTurn, uint32 inPlayerId);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_RemoveProjectile(const uint32 inTurn, const uint32 inProjectileGUID, FVector inEndLocation, bool inCallEventOnDead, bool inDestruction);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ReleaseActor(uint32 inTurn, int32 InActorGUID);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_RegisterSaveGame(const uint32 inTurn, const uint32 InActorGUID, const FSBSaveGameData_Actor& InSaveActor, const FSBSaveGameData_Env& InSaveEnv);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ProjectileWaitEnd(const uint32 inTurn, const uint32 inProjectileGUID);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ProjectileUpdateDestLocation(const uint32 inTurn, const uint32 inProjectileGUID, FVector InLocation);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ProjectileHitResult(const uint32 inTurn, const uint32 inProjectileGUID, const uint32 inTargetGUID, FName inResultAlias, TEnumAsByte<ESBSkillHitResult> inResultType, FVector inHitLocation, FVector inHitNormal, FName inHitBoneName, FVector inHitDirection, FName inShowKeyTag);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ProjectileArrived(const uint32 inTurn, const uint32 inProjectileGUID);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_NotifyQuestEvent(const uint32 inTurn, FName InTargetAlias, ESBQuestEventType InQuestEventType);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_NightOperationResult(const uint32 inTurn, bool bSuccess);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_LeaveZone(const uint32 inTurn, uint32 inPlayerId, uint32 InActorGUID, FName inZoneAlias);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ItemBucketItemUpdate(const uint32 inTurn, uint32 inBucketGUID, const FSBItemInstanceForRPC& InItemInstance);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ItemBucketItemSpawn(const uint32 inTurn, uint32 inBucketGUID, FGuid inPocketGuid, uint32 inOwnerActorGuid, FVector InPosition, FRotator InRotation, FVector InTargetLocation, float inSpawnInterval, FSBItemSpawnCasterInfo inCasterInfo, uint32 inEventSpawnId, FName inSpawnPointName, float InOverrideInteractionTime, bool bForceActivePhysics, bool inGainSimulateForceStop, bool inUseOverrideAutoInteraction, bool inAutoInteraction, float inAutoInteractionDist);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ItemBucketItemRemove(const uint32 inTurn, uint32 inBucketGUID, FGuid inItemInstanceGUID, uint32 inRemoveCount, bool inChargeConsume);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ItemBucketItemDespawn(const uint32 inTurn, uint32 inBucketGUID, FGuid inPocketGuid);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ItemBucketItemConsume(const uint32 inTurn, uint32 inBucketGUID, FGuid inItemInstanceGUID, uint32 inConsumeCount, uint32 inApplyActorGUID, uint32 inCasterActorGUID, bool inChargeConsume);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ItemBucketItemAdd(const uint32 inTurn, uint32 inBucketGUID, const FSBItemInstanceForRPC& InItemInstance, uint32 inAddCount, bool bNotifyUI, bool bEventLoad);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ItemBucketInteraction(const uint32 inTurn, uint8 InFromBucketType, uint32 InFromTargetGUID, FGuid inFromPocketGuid, uint8 InToBucketType, uint32 InToTargetGUID);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ItemBucketDestroy(const uint32 inTurn, uint32 inBucketGUID);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ItemBucketCreate(const uint32 inTurn, uint32 inBucketGUID, uint8 inBucketType, uint32 inTargetGUID, bool inPlayerOwned);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_HittedProjectile(const uint32 inTurn, const uint32 inProjectileGUID, FVector inHittedLocation);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_EnterZone(const uint32 inTurn, uint32 inPlayerId, uint32 InActorGUID, FName inZoneAlias);
    
    UFUNCTION(Client, Unreliable)
    void ClientBroadcast_EndTurn(uint32 inTurn);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_DespawnActor(uint32 inTurn, int32 InActorGUID);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_CreateProjectile(const uint32 inTurn, const uint32 inProjectileGUID, FName inProjectileAlias, const uint32 inOwnerActorGuid, const uint32 inTargetActorGuid, FVector InTargetLocation, const FTransform& inInputTransform, FVector inTargetRandomRange, int32 inHitLevel, FName inCommandNodeName, FName inConsumeItemAlias, uint32 inSkillGuid);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_CreateActor(uint32 inTurn, int32 InActorGUID, int32 inCharacterTableID, FVector InPosition, FRotator InRotation, bool inIsPlayer, int32 inPlayerId, bool bInPossess);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_CompleteZoneInit(const uint32 inTurn, uint32 InActorGUID, FName inZoneAlias, bool bInResetZone);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ChangeTimeScale(const uint32 inTurn, const uint32 inObjectGUID, uint8 inLogicObjectType, float inTimeScale);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ChangePlayerActor(const uint32 inTurn, uint32 inOldPlayerActorGuid, uint32 inNewPlayerActorGuid, uint32 inPlayerId);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ApplyEffect(const uint32 inTurn, const uint32 inEffectGUID, const TArray<uint32>& inTargetGUIDArray, const TArray<float>& inEffectValueArray, const FString& inShowPath);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorUnequip(const uint32 inTurn, const uint32 InActorGUID, int32 InEquipType, const FSBItemInstanceForRPC& InItemInstance);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorStatRefresh(const uint32 inTurn, uint32 inRequestPlayerId, uint32 InActorGUID, const TArray<float>& inActorStat);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorSkillHitResultFromTarget(const uint32 inTurn, uint32 InActorGUID, TEnumAsByte<ESBSkillHitResult> inResult, uint32 inTargetActorGuid);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorShowUI(const uint32 inTurn, uint32 InActorGUID, TEnumAsByte<ESBUILogicType> inUiLogicType);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorSetVisible(const uint32 inTurn, uint32 InActorGUID, bool bInFlag);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorSetStance(const uint32 inTurn, uint32 InActorGUID, FName inStanceAlias, bool inImmidiateUpdateStanceAnim);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorSetSpeed(const uint32 inTurn, uint32 InActorGUID, TEnumAsByte<ESBActorSpeedType> inSpeedType, float InSpeed);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorSetOwnerActor(const uint32 inTurn, uint32 InActorGUID, uint32 inOwnerActorGuid);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorSetHitStop(const uint32 inTurn, uint32 InActorGUID, uint32 inHitStopSkillGUID, bool inHitStop);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorSetBulletItem(const uint32 inTurn, uint32 InActorGUID, FName BulletItemAlias);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorSetActive(const uint32 inTurn, uint32 InActorGUID, bool bInFlag);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorRotation(const uint32 inTurn, const uint32 InActorGUID, FRotator InRotation);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorRootMotion(const uint32 inTurn, uint32 Guid, FName inMoveAlias, const uint32 InActorGUID, float InStartTime, float inEndTime, const uint32 inTargetGUID, float inMoveSpeedRate);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorRevival(const uint32 inTurn, uint32 InActorGUID);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorRestoreSkillPoint(const uint32 inTurn, uint32 InActorGUID, int32 InRestoreSP);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorResetSkillUsableGroup(const uint32 inTurn, uint32 InActorGUID, FName inSkillGroup);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorResetSkillCommandUsableCount(const uint32 inTurn, uint32 InActorGUID, FName inSkillCommandAlias);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorResetSkillCommandCoolTime(const uint32 inTurn, uint32 InActorGUID, FName inSkillCommandAlias);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorRemoveTargetedByEnemy(const uint32 inTurn, uint32 InActorGUID, uint32 inEnemyActorGuid);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorRegister(const uint32 inTurn, uint32 inRequestPlayerId, uint32 InActorGUID, FVector InPosition, FRotator InRotation, const TArray<float>& inActorStat, uint32 inEventSpawnId, uint8 inSpawnIndex, FName inSpawnPointName, uint32 inPlayerId, uint32 inOwnerActorGuid, bool inbVisible, bool inbActive, bool inbPlayer, uint32 inTargetEncroachmentEffectId, uint32 inTargetEncroachmentEffectIdByChildActor, const TArray<int32>& inEquipmentTypeArray, const TArray<FSBItemInstanceForRPC>& inEquipments);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorReceiveAchievementReward(const uint32 inTurn, const uint32 InActorGUID, uint32 inAchievementId);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorProgressAchievement(const uint32 inTurn, const uint32 InActorGUID, uint32 inAchievementId, uint32 inProgressValue, bool bCompleted, bool bFromLoad, bool bNotifyUIRequest);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorNextSkill(const uint32 inTurn, const uint32 InActorGUID, uint32 inNextSkillID);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorMoveToTransform(const uint32 inTurn, uint32 Guid, FName inMoveAlias, const uint32 InActorGUID, const uint32 inTargetGUID, float inMoveTime, float inTotalTime, FVector inPositionOffset, FVector inRotationDirection, float inMoveSpeedRate, bool inMoveBySelf);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorLookAt(const uint32 inTurn, uint32 InActorGUID, uint32 inTargetActorGuid, float inLookRotationTime, float inLeftMaxAngle, float inRightMaxAngle, uint32 inBySkillGUID);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorLockOnTarget(const uint32 inTurn, uint32 InActorGUID, uint32 inTargetActorGuid);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorLocation(const uint32 inTurn, const uint32 InActorGUID, FVector InLocation);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorLevelUp(const uint32 inTurn, uint32 InActorGUID, TEnumAsByte<ESBCharacterLevelType> inLevelType, uint32 inLevel, bool bFromLoad);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorJump(const uint32 inTurn, uint32 InActorGUID, bool bInJump);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorHitResult(const uint32 inTurn, uint32 InActorGUID, uint32 inTargetGUID, FVector inHitLocation, FVector inHitNormal, FName inHitBoneName, FVector inHitDirection, const FName& inHitLazerName);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorEquipmentRefresh(const uint32 inTurn, const uint32 InActorGUID, const TArray<int32>& inEquipmentTypeArray, const TArray<FSBItemInstanceForRPC>& inEquipments);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorEquipment(const uint32 inTurn, const uint32 InActorGUID, FName inEquipmentAlias, bool inAttach);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorEquip(const uint32 inTurn, const uint32 InActorGUID, int32 InEquipType, const FSBItemInstanceForRPC& InItemInstance, bool inShowVisual);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorEnableOverlapCollisions(const uint32 inTurn, uint32 InActorGUID, const TArray<FString>& inCollisionArray, bool inEnable);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorDead(const uint32 inTurn, const uint32 InActorGUID, uint32 inHitSkillID, uint32 inEffectID, uint32 inProjectileID, uint32 inCauseActorGUID, bool inDoNotResetSPExp, bool inHaveRevivalItem);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorChangeTribe(const uint32 inTurn, uint32 InActorGUID, FName inTribe);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorApplyState(const uint32 inTurn, const uint32 InActorGUID, TEnumAsByte<ESBActorState> inActorState, bool inAdd, int32 inResultCount);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorApplyStat(const uint32 inTurn, const uint32 InActorGUID, TEnumAsByte<ESBActorStatType> inActorStatType, float InValue, bool inNotify, bool bIgnoreNoDamageState, uint32 inEffectID, float inResultValue);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorAddTargetedByEnemy(const uint32 inTurn, uint32 InActorGUID, uint32 inEnemyActorGuid);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorAdditiveSkillEnergyAmount(const uint32 inTurn, uint32 InActorGUID, FName inSkillAlias, float InValue);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorAdditiveSkillCoolTime(const uint32 inTurn, uint32 InActorGUID, FName inSkillAlias, float InValue);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorAdditiveSkillCommandCoolTime(const uint32 inTurn, uint32 InActorGUID, FName inSkillCommandAlias, float InValue);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorAddedItemAutoLevelUpType(const uint32 inTurn, uint32 InActorGUID, TEnumAsByte<ESBCharacterLevelType> inLevelType, uint32 InNewLevel, int32 InCurrentItemAmount, int32 InAddedItemAmount);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_ActorAction(const uint32 inTurn, const uint32 InActorGUID, TEnumAsByte<ESBActorAction> InAction);
    
    UFUNCTION(Client, Reliable)
    void ClientBroadcast_AcquireSkill(const uint32 inTurn, uint32 InActorGUID, uint32 inAcquisitionSkillId, bool bDonotConsumeSP, uint32 inRemainSP);
    
};

