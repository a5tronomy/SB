#include "SBNetworkPlayerController.h"

ASBNetworkPlayerController::ASBNetworkPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->DebugInfoTouchTimes.AddDefaulted(3);
}

void ASBNetworkPlayerController::ServerRequest_ZoneTriggerDoEvent_Implementation(uint32 inEventorGUID, uint32 inZoneTriggerGuid, FName inTriggerAlias, TEnumAsByte<ESBConditionResultType> inTriggerTouchResult, int32 inDoingCount) {
}
bool ASBNetworkPlayerController::ServerRequest_ZoneTriggerDoEvent_Validate(uint32 inEventorGUID, uint32 inZoneTriggerGuid, FName inTriggerAlias, TEnumAsByte<ESBConditionResultType> inTriggerTouchResult, int32 inDoingCount) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_ZoneEnvChangeState_Implementation(uint32 inZoneEnvGuid, FName inZoneEnvName, FName inStateTagName, uint32 inCasterGUID, bool bInIgnoreTransitSeq) {
}
bool ASBNetworkPlayerController::ServerRequest_ZoneEnvChangeState_Validate(uint32 inZoneEnvGuid, FName inZoneEnvName, FName inStateTagName, uint32 inCasterGUID, bool bInIgnoreTransitSeq) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_WarpPosition_Implementation(int32 inPlayerId, const FVector& InLocation, const FRotator& InRotation) {
}
bool ASBNetworkPlayerController::ServerRequest_WarpPosition_Validate(int32 inPlayerId, const FVector& InLocation, const FRotator& InRotation) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_UseSkill_Implementation(uint32 inCasterUID, TEnumAsByte<ESBSkillCommandState> inCommand, uint32 inSkillId, FName inCommandNodeName, const TArray<uint32>& inTargetActorIdList, FVector InTargetLocation, FVector inInputWorldDirection) {
}
bool ASBNetworkPlayerController::ServerRequest_UseSkill_Validate(uint32 inCasterUID, TEnumAsByte<ESBSkillCommandState> inCommand, uint32 inSkillId, FName inCommandNodeName, const TArray<uint32>& inTargetActorIdList, FVector InTargetLocation, FVector inInputWorldDirection) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_UpdateSkillTargetLocation_Implementation(const uint32 inCasterGUID, const uint32 inSkillGuid, FVector InTargetLocation) {
}
bool ASBNetworkPlayerController::ServerRequest_UpdateSkillTargetLocation_Validate(const uint32 inCasterGUID, const uint32 inSkillGuid, FVector InTargetLocation) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_StopSkill_Implementation(const uint32 inCasterUID, const uint32 inSkillGuid, bool inCheckMoveBlock) {
}
bool ASBNetworkPlayerController::ServerRequest_StopSkill_Validate(const uint32 inCasterUID, const uint32 inSkillGuid, bool inCheckMoveBlock) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_SetSkillSlot_Implementation(uint32 InActorGUID, TEnumAsByte<ESBSkillSlotType> inSlotType, uint32 inSkill) {
}
bool ASBNetworkPlayerController::ServerRequest_SetSkillSlot_Validate(uint32 InActorGUID, TEnumAsByte<ESBSkillSlotType> inSlotType, uint32 inSkill) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_SetMeshInfo_Implementation(int32 inPlayerId, uint8 MeshInfoSlot, FName MeshResourcePath, FName AnimAssetPath, FVector OffsetPosition, FRotator OffsetRotation, uint8 AttachType, FName AttachSocketName) {
}
bool ASBNetworkPlayerController::ServerRequest_SetMeshInfo_Validate(int32 inPlayerId, uint8 MeshInfoSlot, FName MeshResourcePath, FName AnimAssetPath, FVector OffsetPosition, FRotator OffsetRotation, uint8 AttachType, FName AttachSocketName) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_SetAimLockOnTarget_Implementation(const uint32 inCasterUID, FName inCommandNodeName, const TArray<uint32>& inTargetGUIDArray) {
}
bool ASBNetworkPlayerController::ServerRequest_SetAimLockOnTarget_Validate(const uint32 inCasterUID, FName inCommandNodeName, const TArray<uint32>& inTargetGUIDArray) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_SetActiveWorldObject_Implementation(TEnumAsByte<ESBWorldObjectType> InType, FName inWorldObjectUniqueKey, TEnumAsByte<ESBObjectState> InObjState) {
}
bool ASBNetworkPlayerController::ServerRequest_SetActiveWorldObject_Validate(TEnumAsByte<ESBWorldObjectType> InType, FName inWorldObjectUniqueKey, TEnumAsByte<ESBObjectState> InObjState) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_ServerTravel_Implementation(int32 inPlayerId, const FString& inMultiMapAlias, bool bRandomMap) {
}
bool ASBNetworkPlayerController::ServerRequest_ServerTravel_Validate(int32 inPlayerId, const FString& inMultiMapAlias, bool bRandomMap) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_ResetZone_Implementation(const uint32 InActorGUID, FName inZoneAlias) {
}
bool ASBNetworkPlayerController::ServerRequest_ResetZone_Validate(const uint32 InActorGUID, FName inZoneAlias) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_RequestPlayerName_Implementation(uint32 inPlayerId, uint32 inRequestPlayerId) {
}
bool ASBNetworkPlayerController::ServerRequest_RequestPlayerName_Validate(uint32 inPlayerId, uint32 inRequestPlayerId) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_RequestActorRevive_Implementation(uint32 inPlayerId) {
}
bool ASBNetworkPlayerController::ServerRequest_RequestActorRevive_Validate(uint32 inPlayerId) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_RegisterSaveGame_Implementation(const uint32 InActorGUID, const FSBSaveGameData_Actor& InSaveActor, const FSBSaveGameData_Env& InSaveEnv, const FSBSaveGameData_Item& InSaveItem, const FSBSaveGameData_Achievement& InSaveAchievement) {
}
bool ASBNetworkPlayerController::ServerRequest_RegisterSaveGame_Validate(const uint32 InActorGUID, const FSBSaveGameData_Actor& InSaveActor, const FSBSaveGameData_Env& InSaveEnv, const FSBSaveGameData_Item& InSaveItem, const FSBSaveGameData_Achievement& InSaveAchievement) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_PlayTheater_Implementation(uint32 InActorGUID) {
}
bool ASBNetworkPlayerController::ServerRequest_PlayTheater_Validate(uint32 InActorGUID) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_NextStepWhenHoldAndDualSenseTriggerEffectWeaponFired_Implementation(const uint32 inCasterGUID, const FName inCommandNodeName) {
}
bool ASBNetworkPlayerController::ServerRequest_NextStepWhenHoldAndDualSenseTriggerEffectWeaponFired_Validate(const uint32 inCasterGUID, const FName inCommandNodeName) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_NextStepSkill_Implementation(const uint32 inCasterUID, FName inCommandNodeName) {
}
bool ASBNetworkPlayerController::ServerRequest_NextStepSkill_Validate(const uint32 inCasterUID, FName inCommandNodeName) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_MultiPlaySetRemainTime_Implementation(float InRemainTime) {
}
bool ASBNetworkPlayerController::ServerRequest_MultiPlaySetRemainTime_Validate(float InRemainTime) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_MultiPlayChangeRule_Implementation(FName InRuleAlias) {
}
bool ASBNetworkPlayerController::ServerRequest_MultiPlayChangeRule_Validate(FName InRuleAlias) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_Login_Implementation(uint32 inCharacterTableID, FVector InPosition, FRotator InRotation, int32 inPlayerId, bool inSetPlayerPosition) {
}
bool ASBNetworkPlayerController::ServerRequest_Login_Validate(uint32 inCharacterTableID, FVector InPosition, FRotator InRotation, int32 inPlayerId, bool inSetPlayerPosition) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_LinkSkillBreak_Implementation(uint32 inSkillGuid, uint32 inBreakerActor) {
}
bool ASBNetworkPlayerController::ServerRequest_LinkSkillBreak_Validate(uint32 inSkillGuid, uint32 inBreakerActor) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_LeaveZone_Implementation(uint32 inPlayerId, uint32 InActorGUID, FName inZoneAlias) {
}
bool ASBNetworkPlayerController::ServerRequest_LeaveZone_Validate(uint32 inPlayerId, uint32 InActorGUID, FName inZoneAlias) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_ItemBucketSpawn_Implementation(uint8 InType, uint32 inTargetGUID, FName InItemAlias, uint32 InItemCount, FVector InPosition, FRotator InRotation) {
}
bool ASBNetworkPlayerController::ServerRequest_ItemBucketSpawn_Validate(uint8 InType, uint32 inTargetGUID, FName InItemAlias, uint32 InItemCount, FVector InPosition, FRotator InRotation) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_ItemBucketRewardGroupDrop_Implementation(uint8 inBucketType, uint32 inTargetGUID, const FName& InRewardGroupAlias, FVector InLocation, float InOverrideInteractionTime, float InDelaySpawnTime, uint32 InOverrideLocationActorGUID) {
}
bool ASBNetworkPlayerController::ServerRequest_ItemBucketRewardGroupDrop_Validate(uint8 inBucketType, uint32 inTargetGUID, const FName& InRewardGroupAlias, FVector InLocation, float InOverrideInteractionTime, float InDelaySpawnTime, uint32 InOverrideLocationActorGUID) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_ItemBucketItemRemove_Implementation(uint8 InType, uint32 inTargetGUID, const FName& InItemAlias, uint32 InItemCount, int32 InItemPocketIndex) {
}
bool ASBNetworkPlayerController::ServerRequest_ItemBucketItemRemove_Validate(uint8 InType, uint32 inTargetGUID, const FName& InItemAlias, uint32 InItemCount, int32 InItemPocketIndex) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_ItemBucketItemConsume_Implementation(uint8 InType, uint32 inTargetGUID, uint32 inApplyActorGUID, const FName& InItemAlias, uint32 InItemCount, int32 InItemPocketIndex, uint32 InConsumeSkillId, FVector inSkillTargetLocation, FName inSkillCommandName) {
}
bool ASBNetworkPlayerController::ServerRequest_ItemBucketItemConsume_Validate(uint8 InType, uint32 inTargetGUID, uint32 inApplyActorGUID, const FName& InItemAlias, uint32 InItemCount, int32 InItemPocketIndex, uint32 InConsumeSkillId, FVector inSkillTargetLocation, FName inSkillCommandName) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_ItemBucketItemAdd_Implementation(uint8 InType, uint32 inTargetGUID, FName InItemAlias, uint32 InItemCount, uint32 InStatLevel, bool bInNotifyUI, bool bNotifyEnhanceUI, bool bInEventLoad, const FSBItemInstanceForRPC& InItemInstance) {
}
bool ASBNetworkPlayerController::ServerRequest_ItemBucketItemAdd_Validate(uint8 InType, uint32 inTargetGUID, FName InItemAlias, uint32 InItemCount, uint32 InStatLevel, bool bInNotifyUI, bool bNotifyEnhanceUI, bool bInEventLoad, const FSBItemInstanceForRPC& InItemInstance) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_ItemBucketInteraction_Implementation(uint8 InFromBucketType, uint32 InFromTargetGUID, FGuid inFromPocketGuid, uint8 InToBucketType, uint32 InToTargetGUID) {
}
bool ASBNetworkPlayerController::ServerRequest_ItemBucketInteraction_Validate(uint8 InFromBucketType, uint32 InFromTargetGUID, FGuid inFromPocketGuid, uint8 InToBucketType, uint32 InToTargetGUID) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_EnterZone_Implementation(uint32 inPlayerId, uint32 InActorGUID, FName inZoneAlias) {
}
bool ASBNetworkPlayerController::ServerRequest_EnterZone_Validate(uint32 inPlayerId, uint32 InActorGUID, FName inZoneAlias) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_DestructionZoneEventActor_Implementation(FName inZoneEventActorName, FVector inHitLocation, FVector inHitDirection) {
}
bool ASBNetworkPlayerController::ServerRequest_DestructionZoneEventActor_Validate(FName inZoneEventActorName, FVector inHitLocation, FVector inHitDirection) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_CreateActor_Implementation(uint32 inCharacterTableID, FVector InPosition, FRotator InRotation, bool inIsPlayer, bool inCheatCmd, int32 inPlayerId, uint32 inEventSpawnId, uint8 inSpawnIndex, FName inSpawnPointName, bool bInPossess) {
}
bool ASBNetworkPlayerController::ServerRequest_CreateActor_Validate(uint32 inCharacterTableID, FVector InPosition, FRotator InRotation, bool inIsPlayer, bool inCheatCmd, int32 inPlayerId, uint32 inEventSpawnId, uint8 inSpawnIndex, FName inSpawnPointName, bool bInPossess) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_Cheat_Implementation(const uint32 InActorGUID, const uint32 inPlayerId, const FString& InCmdName, const FString& InArgs) {
}
bool ASBNetworkPlayerController::ServerRequest_Cheat_Validate(const uint32 InActorGUID, const uint32 inPlayerId, const FString& InCmdName, const FString& InArgs) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_ChangeBulletItem_Implementation(uint32 InActorGUID, FName inBulletItemAlias) {
}
bool ASBNetworkPlayerController::ServerRequest_ChangeBulletItem_Validate(uint32 InActorGUID, FName inBulletItemAlias) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_CancelEventMove_Implementation(int32 inPlayerId) {
}
bool ASBNetworkPlayerController::ServerRequest_CancelEventMove_Validate(int32 inPlayerId) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_ActorUnequip_Implementation(const uint32 InActorGUID, int32 InEquipType) {
}
bool ASBNetworkPlayerController::ServerRequest_ActorUnequip_Validate(const uint32 InActorGUID, int32 InEquipType) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_ActorTransform_Implementation(const uint32 InActorGUID, FVector InPosition, FRotator InRotation) {
}
bool ASBNetworkPlayerController::ServerRequest_ActorTransform_Validate(const uint32 InActorGUID, FVector InPosition, FRotator InRotation) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_ActorStopAllCloakingEffect_Implementation(uint32 InActorGUID) {
}
bool ASBNetworkPlayerController::ServerRequest_ActorStopAllCloakingEffect_Validate(uint32 InActorGUID) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_ActorStancePressCommandKey_Implementation(const uint32 InActorGUID, FName inStanceAlias, bool inPressCommandKey) {
}
bool ASBNetworkPlayerController::ServerRequest_ActorStancePressCommandKey_Validate(const uint32 InActorGUID, FName inStanceAlias, bool inPressCommandKey) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_ActorRevival_Implementation(const uint32 InActorGUID, const bool bInUseRevivalItem) {
}
bool ASBNetworkPlayerController::ServerRequest_ActorRevival_Validate(const uint32 InActorGUID, const bool bInUseRevivalItem) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_ActorRestoreSkillPoint_Implementation(uint32 InActorGUID, bool inbConsumeItem, FName InSkillTreeAlias) {
}
bool ASBNetworkPlayerController::ServerRequest_ActorRestoreSkillPoint_Validate(uint32 InActorGUID, bool inbConsumeItem, FName InSkillTreeAlias) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_ActorRespawn_Implementation(const uint32 InActorGUID, bool inWarpToCampPosition) {
}
bool ASBNetworkPlayerController::ServerRequest_ActorRespawn_Validate(const uint32 InActorGUID, bool inWarpToCampPosition) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_ActorRemoveTargetedByEnemy_Implementation(uint32 InActorGUID, uint32 inEnemyActorGuid) {
}
bool ASBNetworkPlayerController::ServerRequest_ActorRemoveTargetedByEnemy_Validate(uint32 InActorGUID, uint32 inEnemyActorGuid) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_ActorRegister_Implementation(const uint32 InActorGUID, uint32 inRequestPlayerId, const TArray<float>& inActorStat) {
}
bool ASBNetworkPlayerController::ServerRequest_ActorRegister_Validate(const uint32 InActorGUID, uint32 inRequestPlayerId, const TArray<float>& inActorStat) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_ActorReceiveAchievementReward_Implementation(const uint32 InActorGUID, uint32 inAchievementId) {
}
bool ASBNetworkPlayerController::ServerRequest_ActorReceiveAchievementReward_Validate(const uint32 InActorGUID, uint32 inAchievementId) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_ActorProgressAchievementId_Implementation(const uint32 InActorGUID, uint32 inAchievementId, int32 inProgressValue) {
}
bool ASBNetworkPlayerController::ServerRequest_ActorProgressAchievementId_Validate(const uint32 InActorGUID, uint32 inAchievementId, int32 inProgressValue) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_ActorProgressAchievement_Implementation(const uint32 InActorGUID, TEnumAsByte<ESBAchievementEventType> inEvent, TEnumAsByte<ESBAchievementCategoryType> inCategory, const TArray<int32>& inParamTypeArray, const TArray<FString>& inParamValueArray, int32 inProgressValue) {
}
bool ASBNetworkPlayerController::ServerRequest_ActorProgressAchievement_Validate(const uint32 InActorGUID, TEnumAsByte<ESBAchievementEventType> inEvent, TEnumAsByte<ESBAchievementCategoryType> inCategory, const TArray<int32>& inParamTypeArray, const TArray<FString>& inParamValueArray, int32 inProgressValue) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_ActorLockOnTarget_Implementation(uint32 InActorGUID, uint32 inTargetGUID) {
}
bool ASBNetworkPlayerController::ServerRequest_ActorLockOnTarget_Validate(uint32 InActorGUID, uint32 inTargetGUID) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_ActorLevelUp_Implementation(uint32 InActorGUID, TEnumAsByte<ESBCharacterLevelType> inLevelType, uint32 inLevel, bool bConsumeItem, bool bFromLoad) {
}
bool ASBNetworkPlayerController::ServerRequest_ActorLevelUp_Validate(uint32 InActorGUID, TEnumAsByte<ESBCharacterLevelType> inLevelType, uint32 inLevel, bool bConsumeItem, bool bFromLoad) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_ActorLanded_Implementation(const uint32 InActorGUID, float InFallingDistance, float InLandingZ) {
}
bool ASBNetworkPlayerController::ServerRequest_ActorLanded_Validate(const uint32 InActorGUID, float InFallingDistance, float InLandingZ) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_ActorJump_Implementation(const uint32 InActorGUID, bool bInJump) {
}

void ASBNetworkPlayerController::ServerRequest_ActorInteraction_Implementation(const uint32 InActorGUID, const uint32 inTargetGUID) {
}
bool ASBNetworkPlayerController::ServerRequest_ActorInteraction_Validate(const uint32 InActorGUID, const uint32 inTargetGUID) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_ActorInfo_Implementation(const uint32 InActorGUID, FVector inInputDirection, FVector inInputNonInterpolDirection, FVector inWorldInputDirection, FVector inWorldInputNonInterpolDirection) {
}
bool ASBNetworkPlayerController::ServerRequest_ActorInfo_Validate(const uint32 InActorGUID, FVector inInputDirection, FVector inInputNonInterpolDirection, FVector inWorldInputDirection, FVector inWorldInputNonInterpolDirection) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_ActorEquipmentRefresh_Implementation(const uint32 InActorGUID, const TArray<int32>& inEquipmentTypeArray, const TArray<FSBItemInstanceForRPC>& Equipments) {
}
bool ASBNetworkPlayerController::ServerRequest_ActorEquipmentRefresh_Validate(const uint32 InActorGUID, const TArray<int32>& inEquipmentTypeArray, const TArray<FSBItemInstanceForRPC>& Equipments) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_ActorEquipment_Implementation(const uint32 InActorGUID, FName inEquipmentAlias, bool inAttach) {
}
bool ASBNetworkPlayerController::ServerRequest_ActorEquipment_Validate(const uint32 InActorGUID, FName inEquipmentAlias, bool inAttach) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_ActorEquipBodySuit_Implementation(const uint32 InActorGUID, FName inBodySuitItemAlias) {
}
bool ASBNetworkPlayerController::ServerRequest_ActorEquipBodySuit_Validate(const uint32 InActorGUID, FName inBodySuitItemAlias) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_ActorEquip_Implementation(const uint32 InActorGUID, int32 InEquipType, const FSBItemInstanceForRPC& InItemInstance) {
}
bool ASBNetworkPlayerController::ServerRequest_ActorEquip_Validate(const uint32 InActorGUID, int32 InEquipType, const FSBItemInstanceForRPC& InItemInstance) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_ActorCompleteAchievementEvent_Implementation(const uint32 InActorGUID) {
}
bool ASBNetworkPlayerController::ServerRequest_ActorCompleteAchievementEvent_Validate(const uint32 InActorGUID) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_ActorCompleteAchievement_Implementation(const uint32 InActorGUID, uint32 inAchievementId, bool bOnlyOne) {
}
bool ASBNetworkPlayerController::ServerRequest_ActorCompleteAchievement_Validate(const uint32 InActorGUID, uint32 inAchievementId, bool bOnlyOne) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_ActorAddTargetedByEnemy_Implementation(uint32 InActorGUID, uint32 inEnemyActorGuid) {
}
bool ASBNetworkPlayerController::ServerRequest_ActorAddTargetedByEnemy_Validate(uint32 InActorGUID, uint32 inEnemyActorGuid) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_AcquireSkillAll_Implementation(uint32 InActorGUID, bool bProgressAchievement) {
}
bool ASBNetworkPlayerController::ServerRequest_AcquireSkillAll_Validate(uint32 InActorGUID, bool bProgressAchievement) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_AcquireSkill_Implementation(uint32 InActorGUID, uint32 inAcquisitionSkill, bool bDonotConsumeSP, bool bProgressAchievement) {
}
bool ASBNetworkPlayerController::ServerRequest_AcquireSkill_Validate(uint32 InActorGUID, uint32 inAcquisitionSkill, bool bDonotConsumeSP, bool bProgressAchievement) {
    return true;
}

void ASBNetworkPlayerController::ServerRequest_AcceptPlayerSession_Implementation(int32 inPlayerId, const FString& inPlayerSessionId) {
}
bool ASBNetworkPlayerController::ServerRequest_AcceptPlayerSession_Validate(int32 inPlayerId, const FString& inPlayerSessionId) {
    return true;
}

void ASBNetworkPlayerController::ClientResponse_SetMoveInputBlock_Implementation(int32 inPlayerId, bool inMoveBlock) {
}

void ASBNetworkPlayerController::ClientResponse_SetMeshInfo_Implementation(int32 inPlayerId, uint8 MeshInfoSlot, FName MeshResourcePath, FName AnimAssetPath, FVector OffsetPosition, FRotator OffsetRotation, uint8 AttachType, FName AttachSocketName) {
}

void ASBNetworkPlayerController::ClientResponse_DrawSBDebugSphere_Implementation(const FVector& Center, float Radius, int32 Segments, const FColor& Color) {
}

void ASBNetworkPlayerController::ClientResponse_DrawSBDebugLine_Implementation(const FVector& LineStart, const FVector& LineEnd, const FColor& Color) {
}

void ASBNetworkPlayerController::ClientResponse_DrawSBDebugCapsule_Implementation(const FVector& Center, float HalfHeight, float Radius, const FQuat& Rotation, const FColor& Color) {
}

void ASBNetworkPlayerController::ClientResponse_DrawSBDebugBox_Implementation(const FVector& Center, const FVector& Box, const FQuat& Rotation, const FColor& Color) {
}

void ASBNetworkPlayerController::ClientResponse_DrawSBDebugArrow_Implementation(const FVector& LineStart, const FVector& LineEnd, float ArrowSize, const FColor& Color) {
}

void ASBNetworkPlayerController::ClientResponse_DoJump_Implementation(int32 inPlayerId) {
}

void ASBNetworkPlayerController::ClientResponse_CancelEventMove_Implementation(int32 inPlayerId) {
}

void ASBNetworkPlayerController::ClientBroadcast_ZoneTriggerRegister_Implementation(const uint32 inTurn, FName inZoneAlias, FName inTriggerAlias, uint32 InTriggerGUID, int32 InCurrentDoingCount) {
}

void ASBNetworkPlayerController::ClientBroadcast_ZoneTriggerDoEvent_Implementation(const uint32 inTurn, uint32 inEventorGUID, uint32 inZoneTriggerGuid, FName inTriggerAlias, TEnumAsByte<ESBConditionResultType> inTriggerTouchResult, int32 inDoingCount) {
}

void ASBNetworkPlayerController::ClientBroadcast_ZoneTriggerCreate_Implementation(const uint32 inTurn, FName inZoneAlais, FName inZoneTriggerAlais, uint32 inZoneTriggerGuid) {
}

void ASBNetworkPlayerController::ClientBroadcast_ZoneEventActorRemove_Implementation(const uint32 inTurn, const uint32 inZoneEventActorGUID) {
}

void ASBNetworkPlayerController::ClientBroadcast_ZoneEventActorPostDestruction_Implementation(const uint32 inTurn, const uint32 inZoneEventActorGUID) {
}

void ASBNetworkPlayerController::ClientBroadcast_ZoneEventActorDestructionStep_Implementation(const uint32 inTurn, const uint32 inZoneEventActorGUID, FVector inHitLocation, FVector inHitDirection, int32 inDestructStep, TEnumAsByte<ESBElementType> inHitElementType, float inHitElementAmount, TEnumAsByte<ESBZoneEventHitAttackerType> ZoneEventHitAttackerType) {
}

void ASBNetworkPlayerController::ClientBroadcast_ZoneEventActorDestruction_Implementation(const uint32 inTurn, const uint32 inZoneEventActorGUID, FVector inHitLocation, FVector inHitDirection, TEnumAsByte<ESBZoneEventHitAttackerType> ZoneEventHitAttackerType) {
}

void ASBNetworkPlayerController::ClientBroadcast_ZoneEventActorCreate_Implementation(const uint32 inTurn, const uint32 inZoneEventActorGUID, FName inZoneEventActorName, int32 inZoneEventTableID, bool inDestruction, bool inActorEnableCollision, bool inFromStorage, FVector InLocation, FRotator InRotation, bool bResetZone) {
}

void ASBNetworkPlayerController::ClientBroadcast_ZoneEnvRegister_Implementation(const uint32 inTurn, FName inZoneAlias, FName InEnvSpawnAlias, uint32 InEnvGUID, FName inStateTagName, TEnumAsByte<ESBObjectState> inObjectState, TEnumAsByte<ESBZoneEnvActiveState> inActiveState) {
}

void ASBNetworkPlayerController::ClientBroadcast_ZoneEnvCreate_Implementation(const uint32 inTurn, FName inZoneAlais, FName inZoneEnvSpawnAlais, uint32 inZoneEnvGuid) {
}

void ASBNetworkPlayerController::ClientBroadcast_ZoneEnvChangeState_Implementation(const uint32 inTurn, uint32 inZoneEnvGuid, FName inZoneEnvName, FName inStateTagName, uint32 inCasterGUID, bool bInIgnoreTransitSeq) {
}

void ASBNetworkPlayerController::ClientBroadcast_ZoneEnvChangeEnable_Implementation(const uint32 inTurn, uint32 inZoneEnvGuid, TEnumAsByte<ESBObjectState> inObjectState) {
}

void ASBNetworkPlayerController::ClientBroadcast_UpdateMultiPlayScore_Implementation(const uint32 inTurn, uint32 inPlayerId, float InRemainRespawnTime, uint32 InKillScore, uint32 InDeathScore) {
}

void ASBNetworkPlayerController::ClientBroadcast_UpdateMultiPlayRuleState_Implementation(const uint32 inTurn, FName InRuleAlias, TEnumAsByte<ESBRuleState> InRuleState, float InRemainTime, uint32 InRemainLifeCount) {
}

void ASBNetworkPlayerController::ClientBroadcast_StopSkill_Implementation(const uint32 inTurn, const uint32 inSkillGuid, const uint32 inCasterGUID, bool inCancel) {
}

void ASBNetworkPlayerController::ClientBroadcast_StopEffect_Implementation(const uint32 inTurn, const uint32 inEffectGUID, int32 inEndConditionIndex) {
}

void ASBNetworkPlayerController::ClientBroadcast_StopActorMoveToTransform_Implementation(const uint32 inTurn, uint32 InActorGUID, uint32 Guid) {
}

void ASBNetworkPlayerController::ClientBroadcast_StartSkill_Implementation(const uint32 inTurn, const uint32 inSkillGuid, const uint32 inCasterGUID, const uint32 inSkillTableId, const uint32 inSkillActiveStepId, const TArray<uint32>& inTargetGUIDArray, const FName& inCommandNodeName, const FVector& inInputWorldDirection, const TArray<uint32>& inProjectileGUIDArray, float inSkillSpeed, FName inItemConsumeItemAlias) {
}

void ASBNetworkPlayerController::ClientBroadcast_StartEffect_Implementation(const uint32 inTurn, const uint32 inEffectGUID, const uint32 inMainActorGUID, const uint32 inConstructorActorGUID, int32 inEffectTableId, float inEffectTime, uint8 inUpdateType, FVector InLocation, FRotator InRotation, uint32 inSkillGuid, uint32 inProjectileGUID, FVector inHitDirection, FVector inHitLocation, FName inHitBoneName, FName inHitShowKeyTag) {
}

void ASBNetworkPlayerController::ClientBroadcast_SkillResultSet_Implementation(const uint32 inTurn, uint32 InActorGUID, uint8 inSkillHitResult, float InTime) {
}

void ASBNetworkPlayerController::ClientBroadcast_SkillNextStep_Implementation(const uint32 inTurn, const uint32 inSkillGuid, const uint32 inSkillActiveStepId, const TArray<uint32>& inTargetGUIDArray, bool inImmediateStart, const TArray<uint32>& inProjectileGUIDArray, float inStepStartTime) {
}

void ASBNetworkPlayerController::ClientBroadcast_SkillHitResult_Implementation(const uint32 inTurn, const uint32 inSkillGuid, uint32 inSkillResultID, const uint32 inCasterGUID, const uint32 inTargetGUID, TEnumAsByte<ESBSkillHitResult> inSkillHitResult, FName inAttackGroupName, const FHitResult& inHitResult, FVector inHitLocation, FVector inHitNormal, FName inHitBoneName, FVector inHitDirection, FVector inHitFoward, float inHitStopTime, bool inCriticalHit, TEnumAsByte<ESBSkillAttackDirection> inAttackDirection, FName inShowKeyTag) {
}

void ASBNetworkPlayerController::ClientBroadcast_ShotProjectile_Implementation(const uint32 inTurn, const uint32 inProjectileGUID, const uint32 inOwnerActorGuid) {
}

void ASBNetworkPlayerController::ClientBroadcast_SetWorldCustomTimeScale_Implementation(bool bSet, float InScale) {
}

void ASBNetworkPlayerController::ClientBroadcast_SetTargetEncroachment_Implementation(const uint32 inTurn, uint32 InActorGUID, uint32 inTargetGUID, float inBindingTime, float inRotationStartTime, float inRotationEndTime, const FString& inBindingIdleBlendSpace, const FString& inBindingPhysicsAsset, float inTargetDistanceWhenUnbinding, bool inEnablePhysicsBodyCollision) {
}

void ASBNetworkPlayerController::ClientBroadcast_SetSkillSlot_Implementation(const uint32 inTurn, uint32 InActorGUID, TEnumAsByte<ESBSkillSlotType> inSkillSlot, uint32 inSkillId) {
}

void ASBNetworkPlayerController::ClientBroadcast_SetForceFixedLocation_Implementation(const uint32 inTurn, const uint32 inProjectileGUID, bool inForceFixedLocation) {
}

void ASBNetworkPlayerController::ClientBroadcast_RunZoneEvent_Implementation(const uint32 inTurn, uint32 inEventorGUID, uint32 inZoneEventID) {
}

void ASBNetworkPlayerController::ClientBroadcast_RetargetingProjectile_Implementation(const uint32 inTurn, const uint32 inProjectileGUID, const uint32 inOwnerActorGuid, const uint32 inTargetActorGuid, FVector InTargetLocation) {
}

void ASBNetworkPlayerController::ClientBroadcast_RespawnActor_Implementation(uint32 inTurn, int32 InActorGUID) {
}

void ASBNetworkPlayerController::ClientBroadcast_ResetZone_Implementation(const uint32 inTurn) {
}

void ASBNetworkPlayerController::ClientBroadcast_RequestPlayerName_Implementation(const uint32 inTurn, uint32 inPlayerId, const FString& inPlayerName, uint32 inRequestPlayerId) {
}

void ASBNetworkPlayerController::ClientBroadcast_RequestActorRevive_Implementation(const uint32 inTurn, uint32 inPlayerId) {
}

void ASBNetworkPlayerController::ClientBroadcast_RemoveProjectile_Implementation(const uint32 inTurn, const uint32 inProjectileGUID, FVector inEndLocation, bool inCallEventOnDead, bool inDestruction) {
}

void ASBNetworkPlayerController::ClientBroadcast_ReleaseActor_Implementation(uint32 inTurn, int32 InActorGUID) {
}

void ASBNetworkPlayerController::ClientBroadcast_RegisterSaveGame_Implementation(const uint32 inTurn, const uint32 InActorGUID, const FSBSaveGameData_Actor& InSaveActor, const FSBSaveGameData_Env& InSaveEnv) {
}

void ASBNetworkPlayerController::ClientBroadcast_ProjectileWaitEnd_Implementation(const uint32 inTurn, const uint32 inProjectileGUID) {
}

void ASBNetworkPlayerController::ClientBroadcast_ProjectileUpdateDestLocation_Implementation(const uint32 inTurn, const uint32 inProjectileGUID, FVector InLocation) {
}

void ASBNetworkPlayerController::ClientBroadcast_ProjectileHitResult_Implementation(const uint32 inTurn, const uint32 inProjectileGUID, const uint32 inTargetGUID, FName inResultAlias, TEnumAsByte<ESBSkillHitResult> inResultType, FVector inHitLocation, FVector inHitNormal, FName inHitBoneName, FVector inHitDirection, FName inShowKeyTag) {
}

void ASBNetworkPlayerController::ClientBroadcast_ProjectileArrived_Implementation(const uint32 inTurn, const uint32 inProjectileGUID) {
}

void ASBNetworkPlayerController::ClientBroadcast_NotifyQuestEvent_Implementation(const uint32 inTurn, FName InTargetAlias, ESBQuestEventType InQuestEventType) {
}

void ASBNetworkPlayerController::ClientBroadcast_NightOperationResult_Implementation(const uint32 inTurn, bool bSuccess) {
}

void ASBNetworkPlayerController::ClientBroadcast_LeaveZone_Implementation(const uint32 inTurn, uint32 inPlayerId, uint32 InActorGUID, FName inZoneAlias) {
}

void ASBNetworkPlayerController::ClientBroadcast_ItemBucketItemUpdate_Implementation(const uint32 inTurn, uint32 inBucketGUID, const FSBItemInstanceForRPC& InItemInstance) {
}

void ASBNetworkPlayerController::ClientBroadcast_ItemBucketItemSpawn_Implementation(const uint32 inTurn, uint32 inBucketGUID, FGuid inPocketGuid, uint32 inOwnerActorGuid, FVector InPosition, FRotator InRotation, FVector InTargetLocation, float inSpawnInterval, FSBItemSpawnCasterInfo inCasterInfo, uint32 inEventSpawnId, FName inSpawnPointName, float InOverrideInteractionTime, bool bForceActivePhysics, bool inGainSimulateForceStop, bool inUseOverrideAutoInteraction, bool inAutoInteraction, float inAutoInteractionDist) {
}

void ASBNetworkPlayerController::ClientBroadcast_ItemBucketItemRemove_Implementation(const uint32 inTurn, uint32 inBucketGUID, FGuid inItemInstanceGUID, uint32 inRemoveCount, bool inChargeConsume) {
}

void ASBNetworkPlayerController::ClientBroadcast_ItemBucketItemDespawn_Implementation(const uint32 inTurn, uint32 inBucketGUID, FGuid inPocketGuid) {
}

void ASBNetworkPlayerController::ClientBroadcast_ItemBucketItemConsume_Implementation(const uint32 inTurn, uint32 inBucketGUID, FGuid inItemInstanceGUID, uint32 inConsumeCount, uint32 inApplyActorGUID, uint32 inCasterActorGUID, bool inChargeConsume) {
}

void ASBNetworkPlayerController::ClientBroadcast_ItemBucketItemAdd_Implementation(const uint32 inTurn, uint32 inBucketGUID, const FSBItemInstanceForRPC& InItemInstance, uint32 inAddCount, bool bNotifyUI, bool bEventLoad) {
}

void ASBNetworkPlayerController::ClientBroadcast_ItemBucketInteraction_Implementation(const uint32 inTurn, uint8 InFromBucketType, uint32 InFromTargetGUID, FGuid inFromPocketGuid, uint8 InToBucketType, uint32 InToTargetGUID) {
}

void ASBNetworkPlayerController::ClientBroadcast_ItemBucketDestroy_Implementation(const uint32 inTurn, uint32 inBucketGUID) {
}

void ASBNetworkPlayerController::ClientBroadcast_ItemBucketCreate_Implementation(const uint32 inTurn, uint32 inBucketGUID, uint8 inBucketType, uint32 inTargetGUID, bool inPlayerOwned) {
}

void ASBNetworkPlayerController::ClientBroadcast_HittedProjectile_Implementation(const uint32 inTurn, const uint32 inProjectileGUID, FVector inHittedLocation) {
}

void ASBNetworkPlayerController::ClientBroadcast_EnterZone_Implementation(const uint32 inTurn, uint32 inPlayerId, uint32 InActorGUID, FName inZoneAlias) {
}

void ASBNetworkPlayerController::ClientBroadcast_EndTurn_Implementation(uint32 inTurn) {
}

void ASBNetworkPlayerController::ClientBroadcast_DespawnActor_Implementation(uint32 inTurn, int32 InActorGUID) {
}

void ASBNetworkPlayerController::ClientBroadcast_CreateProjectile_Implementation(const uint32 inTurn, const uint32 inProjectileGUID, FName inProjectileAlias, const uint32 inOwnerActorGuid, const uint32 inTargetActorGuid, FVector InTargetLocation, const FTransform& inInputTransform, FVector inTargetRandomRange, int32 inHitLevel, FName inCommandNodeName, FName inConsumeItemAlias, uint32 inSkillGuid) {
}

void ASBNetworkPlayerController::ClientBroadcast_CreateActor_Implementation(uint32 inTurn, int32 InActorGUID, int32 inCharacterTableID, FVector InPosition, FRotator InRotation, bool inIsPlayer, int32 inPlayerId, bool bInPossess) {
}

void ASBNetworkPlayerController::ClientBroadcast_CompleteZoneInit_Implementation(const uint32 inTurn, uint32 InActorGUID, FName inZoneAlias, bool bInResetZone) {
}

void ASBNetworkPlayerController::ClientBroadcast_ChangeTimeScale_Implementation(const uint32 inTurn, const uint32 inObjectGUID, uint8 inLogicObjectType, float inTimeScale) {
}

void ASBNetworkPlayerController::ClientBroadcast_ChangePlayerActor_Implementation(const uint32 inTurn, uint32 inOldPlayerActorGuid, uint32 inNewPlayerActorGuid, uint32 inPlayerId) {
}

void ASBNetworkPlayerController::ClientBroadcast_ApplyEffect_Implementation(const uint32 inTurn, const uint32 inEffectGUID, const TArray<uint32>& inTargetGUIDArray, const TArray<float>& inEffectValueArray, const FString& inShowPath) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorUnequip_Implementation(const uint32 inTurn, const uint32 InActorGUID, int32 InEquipType, const FSBItemInstanceForRPC& InItemInstance) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorStatRefresh_Implementation(const uint32 inTurn, uint32 inRequestPlayerId, uint32 InActorGUID, const TArray<float>& inActorStat) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorSkillHitResultFromTarget_Implementation(const uint32 inTurn, uint32 InActorGUID, TEnumAsByte<ESBSkillHitResult> inResult, uint32 inTargetActorGuid) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorShowUI_Implementation(const uint32 inTurn, uint32 InActorGUID, TEnumAsByte<ESBUILogicType> inUiLogicType) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorSetVisible_Implementation(const uint32 inTurn, uint32 InActorGUID, bool bInFlag) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorSetStance_Implementation(const uint32 inTurn, uint32 InActorGUID, FName inStanceAlias, bool inImmidiateUpdateStanceAnim) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorSetSpeed_Implementation(const uint32 inTurn, uint32 InActorGUID, TEnumAsByte<ESBActorSpeedType> inSpeedType, float InSpeed) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorSetOwnerActor_Implementation(const uint32 inTurn, uint32 InActorGUID, uint32 inOwnerActorGuid) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorSetHitStop_Implementation(const uint32 inTurn, uint32 InActorGUID, uint32 inHitStopSkillGUID, bool inHitStop) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorSetBulletItem_Implementation(const uint32 inTurn, uint32 InActorGUID, FName BulletItemAlias) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorSetActive_Implementation(const uint32 inTurn, uint32 InActorGUID, bool bInFlag) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorRotation_Implementation(const uint32 inTurn, const uint32 InActorGUID, FRotator InRotation) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorRootMotion_Implementation(const uint32 inTurn, uint32 Guid, FName inMoveAlias, const uint32 InActorGUID, float InStartTime, float inEndTime, const uint32 inTargetGUID, float inMoveSpeedRate) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorRevival_Implementation(const uint32 inTurn, uint32 InActorGUID) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorRestoreSkillPoint_Implementation(const uint32 inTurn, uint32 InActorGUID, int32 InRestoreSP) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorResetSkillUsableGroup_Implementation(const uint32 inTurn, uint32 InActorGUID, FName inSkillGroup) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorResetSkillCommandUsableCount_Implementation(const uint32 inTurn, uint32 InActorGUID, FName inSkillCommandAlias) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorResetSkillCommandCoolTime_Implementation(const uint32 inTurn, uint32 InActorGUID, FName inSkillCommandAlias) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorRemoveTargetedByEnemy_Implementation(const uint32 inTurn, uint32 InActorGUID, uint32 inEnemyActorGuid) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorRegister_Implementation(const uint32 inTurn, uint32 inRequestPlayerId, uint32 InActorGUID, FVector InPosition, FRotator InRotation, const TArray<float>& inActorStat, uint32 inEventSpawnId, uint8 inSpawnIndex, FName inSpawnPointName, uint32 inPlayerId, uint32 inOwnerActorGuid, bool inbVisible, bool inbActive, bool inbPlayer, uint32 inTargetEncroachmentEffectId, uint32 inTargetEncroachmentEffectIdByChildActor, const TArray<int32>& inEquipmentTypeArray, const TArray<FSBItemInstanceForRPC>& inEquipments) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorReceiveAchievementReward_Implementation(const uint32 inTurn, const uint32 InActorGUID, uint32 inAchievementId) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorProgressAchievement_Implementation(const uint32 inTurn, const uint32 InActorGUID, uint32 inAchievementId, uint32 inProgressValue, bool bCompleted, bool bFromLoad, bool bNotifyUIRequest) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorNextSkill_Implementation(const uint32 inTurn, const uint32 InActorGUID, uint32 inNextSkillID) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorMoveToTransform_Implementation(const uint32 inTurn, uint32 Guid, FName inMoveAlias, const uint32 InActorGUID, const uint32 inTargetGUID, float inMoveTime, float inTotalTime, FVector inPositionOffset, FVector inRotationDirection, float inMoveSpeedRate, bool inMoveBySelf) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorLookAt_Implementation(const uint32 inTurn, uint32 InActorGUID, uint32 inTargetActorGuid, float inLookRotationTime, float inLeftMaxAngle, float inRightMaxAngle, uint32 inBySkillGUID) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorLockOnTarget_Implementation(const uint32 inTurn, uint32 InActorGUID, uint32 inTargetActorGuid) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorLocation_Implementation(const uint32 inTurn, const uint32 InActorGUID, FVector InLocation) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorLevelUp_Implementation(const uint32 inTurn, uint32 InActorGUID, TEnumAsByte<ESBCharacterLevelType> inLevelType, uint32 inLevel, bool bFromLoad) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorJump_Implementation(const uint32 inTurn, uint32 InActorGUID, bool bInJump) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorHitResult_Implementation(const uint32 inTurn, uint32 InActorGUID, uint32 inTargetGUID, FVector inHitLocation, FVector inHitNormal, FName inHitBoneName, FVector inHitDirection, const FName& inHitLazerName) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorEquipmentRefresh_Implementation(const uint32 inTurn, const uint32 InActorGUID, const TArray<int32>& inEquipmentTypeArray, const TArray<FSBItemInstanceForRPC>& inEquipments) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorEquipment_Implementation(const uint32 inTurn, const uint32 InActorGUID, FName inEquipmentAlias, bool inAttach) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorEquip_Implementation(const uint32 inTurn, const uint32 InActorGUID, int32 InEquipType, const FSBItemInstanceForRPC& InItemInstance, bool inShowVisual) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorEnableOverlapCollisions_Implementation(const uint32 inTurn, uint32 InActorGUID, const TArray<FString>& inCollisionArray, bool inEnable) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorDead_Implementation(const uint32 inTurn, const uint32 InActorGUID, uint32 inHitSkillID, uint32 inEffectID, uint32 inProjectileID, uint32 inCauseActorGUID, bool inDoNotResetSPExp, bool inHaveRevivalItem) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorChangeTribe_Implementation(const uint32 inTurn, uint32 InActorGUID, FName inTribe) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorApplyState_Implementation(const uint32 inTurn, const uint32 InActorGUID, TEnumAsByte<ESBActorState> inActorState, bool inAdd, int32 inResultCount) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorApplyStat_Implementation(const uint32 inTurn, const uint32 InActorGUID, TEnumAsByte<ESBActorStatType> inActorStatType, float InValue, bool inNotify, bool bIgnoreNoDamageState, uint32 inEffectID, float inResultValue) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorAddTargetedByEnemy_Implementation(const uint32 inTurn, uint32 InActorGUID, uint32 inEnemyActorGuid) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorAdditiveSkillEnergyAmount_Implementation(const uint32 inTurn, uint32 InActorGUID, FName inSkillAlias, float InValue) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorAdditiveSkillCoolTime_Implementation(const uint32 inTurn, uint32 InActorGUID, FName inSkillAlias, float InValue) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorAdditiveSkillCommandCoolTime_Implementation(const uint32 inTurn, uint32 InActorGUID, FName inSkillCommandAlias, float InValue) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorAddedItemAutoLevelUpType_Implementation(const uint32 inTurn, uint32 InActorGUID, TEnumAsByte<ESBCharacterLevelType> inLevelType, uint32 InNewLevel, int32 InCurrentItemAmount, int32 InAddedItemAmount) {
}

void ASBNetworkPlayerController::ClientBroadcast_ActorAction_Implementation(const uint32 inTurn, const uint32 InActorGUID, TEnumAsByte<ESBActorAction> InAction) {
}

void ASBNetworkPlayerController::ClientBroadcast_AcquireSkill_Implementation(const uint32 inTurn, uint32 InActorGUID, uint32 inAcquisitionSkillId, bool bDonotConsumeSP, uint32 inRemainSP) {
}


