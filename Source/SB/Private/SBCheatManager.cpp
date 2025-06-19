#include "SBCheatManager.h"

USBCheatManager::USBCheatManager() {
    this->luaIntValue = 0;
}

void USBCheatManager::StopManualLoadingScreen() {
}

void USBCheatManager::StartManualLoadingScreen() {
}

void USBCheatManager::SetMaxUndilatedFrameTime(float inMaxUndilatedFPS) {
}

void USBCheatManager::SetFixedFrameRate(float inFixedFrameRate) {
}

void USBCheatManager::SBZoneEvent(FName InEventAlias) {
}

void USBCheatManager::SbWorldObjReInit() {
}

void USBCheatManager::SBWorldGlobalMotionBlurScale(bool bSet, float InValue) {
}

void USBCheatManager::SBWorldEnvPostProcessDisable(bool bDisable) {
}

void USBCheatManager::SBWorldEnvCounter(int32 InType, bool bActive) {
}

void USBCheatManager::SBWaypoint(int32 InWaypoint) {
}

void USBCheatManager::SBWaveMerge(const FString& overwriteFileName, float Delay) {
}

void USBCheatManager::SBWarpWorld(FName inWorldAlias) {
}

void USBCheatManager::SBWarpPosition(float InX, float InY, float InZ, bool bNoUseWarp) {
}

void USBCheatManager::SBWarpPlayer(FName TargetTagName) {
}

void USBCheatManager::SBWarpCampToPointName(FName InCampAlias, FName TargetSpawnPoint) {
}

void USBCheatManager::SBWarpCampToLocation(FName InCampAlias, float X, float Y, float Z) {
}

void USBCheatManager::SBWarpCamp(FName InCampAlias) {
}

void USBCheatManager::SBVisibleLoadingScreen(bool bVisible) {
}

void USBCheatManager::SBVariationText(int32 InTextIndex, const FString& InKey) {
}

void USBCheatManager::SBValidatePakDuplication() {
}

void USBCheatManager::SBValidatePakCount(int32 InCount) {
}

void USBCheatManager::SBUsePDODitherAlpha(bool bEnable) {
}

void USBCheatManager::SBUseOcclusionDebugging() {
}

void USBCheatManager::SBUpdateNierDLCUI(bool bEnable) {
}

void USBCheatManager::SBUpdateMoveSpeed(float UpdateDelayTime) {
}

void USBCheatManager::SBUpdateCouponUserInfo(const FString& inPlatform, const FString& inUserId, int32 InPlayTime) {
}

void USBCheatManager::SBUpdateCognitoStatus(const FString& inPlayerName, const FString& inPassWord) {
}

void USBCheatManager::SBUnuseOcclusionDebugging() {
}

void USBCheatManager::SBUnLoadLevel(const FString& InLevelPath) {
}

void USBCheatManager::SBUIWorkShopEnableDefaultShop() {
}

void USBCheatManager::SBUIWorkShopDisableDefaultShop() {
}

void USBCheatManager::SBUIToggleShowFriendShipGain() {
}

void USBCheatManager::SBUIToggleForceValidShopItem() {
}

void USBCheatManager::SBUIStudioShowPlay(const FString& ShowTag, bool bSameStop, bool bBlendCamera) {
}

void USBCheatManager::SBUIStudioSetItem(const FString& inAssetPath) {
}

void USBCheatManager::SBUIStudioSequencePlay(const FString& SequenceTag, bool bSameStop, bool bBlendCamera) {
}

void USBCheatManager::SBUIStudioPreviewOpen() {
}

void USBCheatManager::SBUIStudioEvent(const FString& inEvent) {
}

void USBCheatManager::SBUIStudioAttachEquipment(const FString& inTargetTag, const FString& InItemAlias) {
}

void USBCheatManager::SBUIOpenWorkShop() {
}

void USBCheatManager::SBUIOpenShop(const FString& OpenShopDataAlias, const FString& OpenShopInstanceAlias, const FString& OpenShopTitleTag) {
}

void USBCheatManager::SBUIOpenHairSalonToGameMenu() {
}

void USBCheatManager::SBUIOpenGameMenuToHairSalon() {
}

void USBCheatManager::SBUIOpenGameMenu() {
}

void USBCheatManager::SBUIOpen(const FString& UILogicTypeName, bool bDuplicateCheck) {
}

void USBCheatManager::SBUIEventUnlockBurst(float InTime, float InDelay) {
}

void USBCheatManager::SBUIActionWidgetCreate(const FString& widgetAssetPath, float InDelay) {
}

void USBCheatManager::SBUIActionUnlockMode(const FString& TitleKey, float InTime, float InDelay) {
}

void USBCheatManager::SBUIActionRequestAlias(const FString& Group) {
}

void USBCheatManager::SBUIActionNikkeLostArticlePopup(const FString& NikkeLostArticleAlias) {
}

void USBCheatManager::SBUIActionGuideVideo(const FString& TitleKey, const FString& DescKey, const FString& MovieAssetPath, float InTime, float InDelay) {
}

void USBCheatManager::SBUIActionControllerStatePrint() {
}

void USBCheatManager::SBTrinityMode(bool bIsTrinityMode) {
}

void USBCheatManager::SBTrialVersionSet(bool bEnable) {
}

void USBCheatManager::SBTrainingRoomMode(TEnumAsByte<ESBTrainningRoomChangeType> ChangeType, bool Infinite, TEnumAsByte<ESBTrainningRoomNpcAIType> EnemyAIType) {
}

void USBCheatManager::SBToLobby() {
}

void USBCheatManager::SBToggleUseLog(FName inLogKey) {
}

void USBCheatManager::SBToggleUseDrawDebug(FName inDrawKey) {
}

void USBCheatManager::SBToggleStudioOnOff() {
}

void USBCheatManager::SBToggleStencilLog() {
}

void USBCheatManager::SBToggleSoundDebugger() {
}

void USBCheatManager::SBToggleSimpleFishing() {
}

void USBCheatManager::SBToggleSigManShowDebug() {
}

void USBCheatManager::SBToggleRopeSwingPhysic() {
}

void USBCheatManager::SBToggleRewardRateForceSuccess() {
}

void USBCheatManager::SBToggleResourceCacheRecorder() {
}

void USBCheatManager::SBToggleResourceCacheManagerShowDebug() {
}

void USBCheatManager::SBTogglePrintQuartzBeat() {
}

void USBCheatManager::SBTogglePlayerState() {
}

void USBCheatManager::SBTogglePlayerIgnoreCoolTime() {
}

void USBCheatManager::SBTogglePlayerDamageInfo() {
}

void USBCheatManager::SBTogglePhotoModeUI() {
}

void USBCheatManager::SBTogglePhotoModeScreenShotCaptureForceFail() {
}

void USBCheatManager::SBTogglePadSpeaker() {
}

void USBCheatManager::SBToggleObjectID() {
}

void USBCheatManager::SBToggleMotionMatching() {
}

void USBCheatManager::SBToggleMailBox() {
}

void USBCheatManager::SBToggleLockOnCamera() {
}

void USBCheatManager::SBToggleLevelInfo() {
}

void USBCheatManager::SBToggleGCControl() {
}

void USBCheatManager::SBToggleFullBodyIK(const FString& Name) {
}

void USBCheatManager::SBToggleFootIK() {
}

void USBCheatManager::SBToggleFoliageTypeDensityScale(const bool inEnable) {
}

void USBCheatManager::SBToggleFlyCamera() {
}

void USBCheatManager::SBToggleFishMove() {
}

void USBCheatManager::SBToggleFishingDebugger() {
}

void USBCheatManager::SBToggleEngineFlag(FName InFlag) {
}

void USBCheatManager::SBToggleEnemyDamageInfo() {
}

void USBCheatManager::SBToggleEnableSTS() {
}

void USBCheatManager::SBToggleEnableSliceMesh() {
}

void USBCheatManager::SBToggleEnableFootIKWhenSequence() {
}

void USBCheatManager::SBToggleDrawPlayerMove(bool bAddMoveTrackActor, float AddMoveTrackActorDist) {
}

void USBCheatManager::SBToggleDisplayLamsID() {
}

void USBCheatManager::SBToggleDeviceProfileDebugDisplay() {
}

void USBCheatManager::SBToggleDebugSTS() {
}

void USBCheatManager::SBToggleDebugSliceMesh() {
}

void USBCheatManager::SBToggleDebugAudioComponent() {
}

void USBCheatManager::SBToggleCheatCommandDistribution() {
}

void USBCheatManager::SBToggleCharacterMovementParallelUpdate() {
}

void USBCheatManager::SBToggleBossChallengeDebug() {
}

void USBCheatManager::SBToggleAimIK() {
}

void USBCheatManager::SBTheaterTestInteractionYesNo() {
}

void USBCheatManager::SBTheaterTestInteractionSelect() {
}

void USBCheatManager::SBTheaterTestInteractionAdamFusion() {
}

void USBCheatManager::SBTheaterStop(int32 uid) {
}

void USBCheatManager::SBTheaterSkip(int32 uid) {
}

void USBCheatManager::SBTheaterPrintLevelSeqPlaying() {
}

void USBCheatManager::SBTheaterPlayLevelSeq(const FString& ResourcePath, float InOverridePriority, float LocX, float LocY, float LocZ, float Pitch, float Yaw, float Roll) {
}

void USBCheatManager::SBTheaterPlay(const FString& ResourcePath, float InOverridePriority, float LocX, float LocY, float LocZ, float Pitch, float Yaw, float Roll) {
}

void USBCheatManager::SBTheaterOptionCheck(const FString& inResourcePath) {
}

void USBCheatManager::SBTheaterNotifyCompleteSequence(const FString& SequenceName) {
}

void USBCheatManager::SBTheaterIgnoreFirstSkip(bool bSkip) {
}

void USBCheatManager::SBTestPlayGoUI() {
}

void USBCheatManager::SBTestPlayGoLabelAssetCache() {
}

void USBCheatManager::SBTestKrulosLog() {
}

void USBCheatManager::SBTestEanbleBoid() {
}

void USBCheatManager::SBTestCharacterAnim(const FString& InAnimName, float PlayStartTime, float PlayEndTime, float PlayRate, float BlendInTime, float BlendOutTime, bool bLoop, int32 LoopCount) {
}

void USBCheatManager::SBTestChangeBlendSpace(int32 SlotIndex, const FString& InAnimName) {
}

void USBCheatManager::SBTestBridgeLog() {
}

void USBCheatManager::SBTestBool(FName InKey, bool InBool) {
}

void USBCheatManager::SBTestBlackboardComponent() {
}

void USBCheatManager::SBTerminateLevelStreamProfiling() {
}

void USBCheatManager::SBTeleportTo(float InX, float InY, float InZ) {
}

void USBCheatManager::SBTalkTest(const FString& TalkAssetPath, const FString& CharacterAlias, float RelativeLocX, float RelativeLocY, float RelativeLocZ, float RelativeRotYaw, const FString& InTag) {
}

void USBCheatManager::SBSystemSetAppActivate(bool bActivate, float DelayTime) {
}

void USBCheatManager::SBSuicide() {
}

void USBCheatManager::SBStudioState(bool bEnter) {
}

void USBCheatManager::SBStudioResetPhysics() {
}

void USBCheatManager::SBStudioCameraSetManualDistance(float InValue) {
}

void USBCheatManager::SBStudioCameraSetCurrentFocalLength(float InValue) {
}

void USBCheatManager::SBStudioCameraSetCurrentAperture(float InValue) {
}

void USBCheatManager::SBStudioCameraFocusInfo() {
}

void USBCheatManager::SBStopMatchRequest() {
}

void USBCheatManager::SBStopKeepPlaySingleSound() {
}

void USBCheatManager::SBStopAllSounds() {
}

void USBCheatManager::SBStartSingleLevelStreamProfiling(const FString& InLevelStreamName) {
}

void USBCheatManager::SBStartLevelStreamProfiling() {
}

void USBCheatManager::SBStartKeepPlaySingleSound() {
}

bool USBCheatManager::SBStartActivity(FName inActivityName) {
    return false;
}

void USBCheatManager::SBSpawnEnemy() {
}

void USBCheatManager::SBSoundUnMute() {
}

void USBCheatManager::SBSoundMute() {
}

void USBCheatManager::SBSnapShot(const FString& SnapshotName) {
}

void USBCheatManager::SBSignOutCognito(const FString& inPlayerName, const FString& inPassWord) {
}

void USBCheatManager::SBSignInCognito(const FString& inPlayerName, const FString& inPassWord) {
}

void USBCheatManager::SBSigManUseDebugActors(bool bUse) {
}

void USBCheatManager::SBSigManUnregisterAll() {
}

void USBCheatManager::SBSigManToggleZoneEnvOptimizationConfigs(bool Enable) {
}

void USBCheatManager::SBSigManToggleCharacterOptimizationConfigs(bool Enable) {
}

void USBCheatManager::SBSigManShowDebugFilter(const FString& ActorClass) {
}

void USBCheatManager::SBSigManSetDummyViewportLocationToPlayer() {
}

void USBCheatManager::SBSigManSetDummyViewportLocation(float InX, float InY, float InZ) {
}

void USBCheatManager::SBSigManResetSignificance() {
}

void USBCheatManager::SBSigManRegisterAll() {
}

void USBCheatManager::SBSigManHideDebugActors(bool bHide) {
}

void USBCheatManager::SBSigManEnableDummyViewport(bool bInEnable) {
}

void USBCheatManager::SBSigManDumpLog() {
}

void USBCheatManager::SBShowStoreUI(const FString& ProductId) {
}

void USBCheatManager::SBShowRes() {
}

void USBCheatManager::SBShowEventContentsDate() {
}

void USBCheatManager::SBShowControllerBindingPanel() {
}

void USBCheatManager::SBShowActorID(int32 InShow) {
}

void USBCheatManager::SBShaderPrecompileEnable() {
}

void USBCheatManager::SBShaderPrecompileDisable() {
}

void USBCheatManager::SBSetVoice(const FString& InValue) {
}

void USBCheatManager::SBSetUTCCountryCode(const FString& InCode) {
}

void USBCheatManager::SBSetSlowLevelStreamingUpdate(int32 Level) {
}

void USBCheatManager::SBSetSkillSlot(FName inSkillAlias, int32 SlotNum) {
}

void USBCheatManager::SBSetSettingVersion(int32 InValue) {
}

void USBCheatManager::SBSetScreenTypeWindowedFullScreen() {
}

void USBCheatManager::SBSetScreenTypeWindowed() {
}

void USBCheatManager::SBSetScreenTypeFullScreen() {
}

void USBCheatManager::SBSetScreenType(int32 InScreenType) {
}

void USBCheatManager::SBSetScreenResolution4K() {
}

void USBCheatManager::SBSetScreenResolution2K() {
}

void USBCheatManager::SBSetScreenResolution1K() {
}

void USBCheatManager::SBSetScreenResolution(int32 InValueX, int32 InValueY) {
}

void USBCheatManager::SBSetSaveSlot(int32 InSlotNum) {
}

void USBCheatManager::SBSetSaveMajorVersionLatest() {
}

void USBCheatManager::SBSetSaveMajorVersion(int32 MajorVersion) {
}

void USBCheatManager::SBSetSaveAppContentVersionLatest() {
}

void USBCheatManager::SBSetSaveAppContentVersion(int32 SaveAppVersion) {
}

void USBCheatManager::SBSetResolutionQuality(float InValue) {
}

void USBCheatManager::SBSetPurchaseInTrial(bool bEnable) {
}

void USBCheatManager::SBSetPlayerPawnAnimMode(int32 inMode) {
}

void USBCheatManager::SBSetPhotoModeLightLocation(int32 LightIndex, float X, float Y, float Z) {
}

void USBCheatManager::SBSetNewGamePlus() {
}

void USBCheatManager::SBSetMultiRuleRemainTime(float InRemainTime) {
}

void USBCheatManager::SBSetLoadSlot(const FString& TargetFileName) {
}

void USBCheatManager::SBSetLanguage(const FString& InValue) {
}

void USBCheatManager::SBSetIgnoreEntitlementList(bool bEnable) {
}

void USBCheatManager::SBSetHintType(FName inHintType) {
}

void USBCheatManager::SBSetHDRDisplayNit(int32 DisplayNit) {
}

void USBCheatManager::SBSetHDR(bool bEnable) {
}

void USBCheatManager::SBSetGamma(float InValue) {
}

void USBCheatManager::SBSetFreezeIK(float InFreezeTime) {
}

void USBCheatManager::SBSetFishingLogBook(FName InFishAlias, int32 InCount, float InMaxWeightRecord) {
}

void USBCheatManager::SBSetFishingAssist(bool bEnable) {
}

void USBCheatManager::SBSetDollyCamMode(bool bFlag) {
}

void USBCheatManager::SBSetDisplayCropAspectRatio(bool bUse) {
}

void USBCheatManager::SBSetDifficultyAlias(FName inDifficultyAlias) {
}

void USBCheatManager::SBSetDifficulty(ESBGameDifficultyType InDifficulty) {
}

void USBCheatManager::SBSetCustomVector2D(const FString& InKey, float inValue1, float inValue2) {
}

void USBCheatManager::SBSetCustomInt(const FString& InKey, int32 InValue) {
}

void USBCheatManager::SBSetCustomFloat(const FString& InKey, float InValue) {
}

void USBCheatManager::SBSetCustomBool(const FString& InKey, bool InValue) {
}

void USBCheatManager::SBSetCouponUserInfo(const FString& inPlatform, const FString& inUserId, const FString& inUserName) {
}

void USBCheatManager::SBSetCamBlend(TEnumAsByte<EViewTargetBlendFunction> InNewType, float BlendExp) {
}

void USBCheatManager::SBSetBuySB(bool bEnable) {
}

void USBCheatManager::SBSetBuyNikkeDLC(bool bEnable) {
}

void USBCheatManager::SBSetBuyNierDLC(bool bEnable) {
}

void USBCheatManager::SBSetBodySuitLevel(const FString& InItemAlias, uint32 inLevel, bool bConsumeItem) {
}

void USBCheatManager::SBSetAsyncLoadingScreenDisable(bool bDisable) {
}

void USBCheatManager::SBSetAssetGroupCulture(const FString& culture) {
}

void USBCheatManager::SBSetAppRegionUP(bool bUPRegion) {
}

void USBCheatManager::SBSetAppRegionJP(bool bJPRegion) {
}

void USBCheatManager::SBSetAppRegionEP(bool bEPRegion) {
}

bool USBCheatManager::SBSetActivityAvailability(FName inActivityName, bool inbEnabled) {
    return false;
}

void USBCheatManager::SBServerTravel(const FString& inMultiMapAlias, bool bRandomMap) {
}

void USBCheatManager::SBServer(const FString& InCmd) {
}

void USBCheatManager::SBSequenceMovie(const FString& AssetPath, float FadeIn, float FadeOut) {
}

void USBCheatManager::SBSequenceAttachWidget(bool bActive, bool bReset, const FString& inAssetPath, int32 hAlign, int32 vAlign, float offsetX, float offsetY, const FString& Arg1, const FString& Arg2, const FString& Arg3, const FString& Arg4, const FString& Arg5, const FString& Arg6) {
}

void USBCheatManager::SBSendPlayerSessionInviteName(const FString& inFriendName) {
}

void USBCheatManager::SBSendPlayerSessionInviteIndex(int32 inFriendIndex) {
}

void USBCheatManager::SBSendHelloToAWSLambda() {
}

void USBCheatManager::SBSelfiePhotoMode() {
}

void USBCheatManager::SBSceErrorDialog(int32 inErrorCode) {
}

void USBCheatManager::SBSaveToManualSaveSlot(int32 InSlotNum) {
}

void USBCheatManager::SBSaveToAutoSaveSlot(int32 InSlotNum) {
}

void USBCheatManager::SBSaveResetTrigger(FName TriggerAlias) {
}

void USBCheatManager::SBSaveObjectCount() {
}

void USBCheatManager::SBSaveGameOption() {
}

void USBCheatManager::SBSaveGame() {
}

void USBCheatManager::SBSaveEveryZone(bool bClearZoneContainer) {
}

void USBCheatManager::SBRunSpawnEvent(FName InAlias) {
}

void USBCheatManager::SBRunItemSpawnEvent(FName InAlias) {
}

void USBCheatManager::SBRunGameWorldEvent(int32 InType, FName InEventAlias) {
}

void USBCheatManager::SBRunEventUIAction(const FString& InAlias) {
}

void USBCheatManager::SBRSToPC(const FString& InScriptPath, const FString& InFunctionName) {
}

void USBCheatManager::SBRSToPA(const FString& InScriptPath, const FString& InFunctionName) {
}

void USBCheatManager::SBRewardGroupDropSequentialArc(FName RewardGroupAlias, float RelativeLocX, float RelativeLocY, float RelativeLocZ, float SpawnStartInterval, float SpawnNextInterval, float Distance, float Degree, float ColumnCount, float DistanceAdditional, float DecreaseCountFactor, float DecreaseDegree) {
}

void USBCheatManager::SBRewardGroupDropRandomRange(FName RewardGroupAlias, float RelativeLocX, float RelativeLocY, float RelativeLocZ, float SpawnStartInterval, float SpawnNextInterval, float DropDistanceMin, float DropDistanceMax, float DropDirXMin, float DropDirXMax, float DropDirYMin, float DropDirYMax, float DropDirZMin, float DropDirZMax) {
}

void USBCheatManager::SBRewardGroupDropInven(FName RewardGroupAlias, bool NotifyUI) {
}

void USBCheatManager::SBRewardGroupDropFormationPathLocation(FName RewardGroupAlias, float LocX, float LocY, float LocZ, const FString& formationPath, float DirX, float DirY, float DirZ) {
}

void USBCheatManager::SBRewardGroupDropFormationPath(FName RewardGroupAlias, float RelativeLocX, float RelativeLocY, float RelativeLocZ, const FString& formationPath) {
}

void USBCheatManager::SBRewardGroupDrop(FName RewardGroupAlias, float RelativeLocX, float RelativeLocY, float RelativeLocZ, float DelayTime) {
}

void USBCheatManager::SBReturnToSinglePlay() {
}

void USBCheatManager::SBRetryNikkeStage() {
}

void USBCheatManager::SBRestoreSkillPoint(bool bConsumeItem, FName SkillTreeAlias) {
}

void USBCheatManager::SBRestoreDeviceProfile() {
}

void USBCheatManager::SBResourceCacheUpdate() {
}

void USBCheatManager::SBResourceCacheSequenceList() {
}

void USBCheatManager::SBResourceCacheManagerLog() {
}

void USBCheatManager::SBResourceCacheManagerEnable(const bool inEnable) {
}

void USBCheatManager::SBResourceCacheEnable(const bool inEnable) {
}

void USBCheatManager::SBResetZone() {
}

void USBCheatManager::SBResetTrainingRoom() {
}

void USBCheatManager::SBResetRope() {
}

void USBCheatManager::SBResetNoticeScreenSkip() {
}

void USBCheatManager::SBResetDifficultyAlias() {
}

void USBCheatManager::SBResetCam() {
}

void USBCheatManager::SBRequestTargetZone(const FName& ZoneAlias, const FName& SpawnPoint) {
}

void USBCheatManager::SBRequestExit() {
}

void USBCheatManager::SBRenderHair(bool inOn) {
}

void USBCheatManager::SBRenderFace(bool inOn) {
}

void USBCheatManager::SBRemoveSkillAll() {
}

void USBCheatManager::SBRemoveSkill(FName inAcquisitionSkillAlias) {
}

void USBCheatManager::SBRemovedWidgetFindReferences(int32 InIndex) {
}

void USBCheatManager::SBReloadConfig() {
}

void USBCheatManager::SBRegisterPlayerSessionName(const FString& inPlayerName) {
}

void USBCheatManager::SBRegisterPlayerSessionFriendIndex(int32 inFriendIndex) {
}

void USBCheatManager::SBRefreshWidgetViewportSize() {
}

void USBCheatManager::SBQuestTrackOnOff() {
}

void USBCheatManager::SBQuestTrackingTargetFilterPrint() {
}

void USBCheatManager::SBQuestRemoveAllQuest() {
}

void USBCheatManager::SBQuestPause(bool bEnable) {
}

void USBCheatManager::SBQuestFailed(FName QuestAlias) {
}

void USBCheatManager::SBQuestDebuggerTaskGroupDescriptionShow() {
}

void USBCheatManager::SBQuestDebuggerTaskGroupDescriptionHide() {
}

void USBCheatManager::SBQuestDebuggerTaskDescriptionShow() {
}

void USBCheatManager::SBQuestDebuggerTaskDescriptionHide() {
}

void USBCheatManager::SBQuestDebuggerShow() {
}

void USBCheatManager::SBQuestDebuggerSetCompleteQuestVisible(bool bVisible) {
}

void USBCheatManager::SBQuestDebuggerQuestTitleShow() {
}

void USBCheatManager::SBQuestDebuggerQuestTitleHide() {
}

void USBCheatManager::SBQuestDebuggerQuestDescriptionShow() {
}

void USBCheatManager::SBQuestDebuggerQuestDescriptionHide() {
}

void USBCheatManager::SBQuestDebuggerHide() {
}

void USBCheatManager::SBQuestCompleteTaskGroup(FName TaskGroupAlias) {
}

void USBCheatManager::SBQuestCompleteTask(FName TaskAlias) {
}

void USBCheatManager::SBQuestCompleteList() {
}

void USBCheatManager::SBQuestComplete(FName QuestAlias) {
}

void USBCheatManager::SBQuestAcquireReward(FName QuestAlias) {
}

void USBCheatManager::SBQuestAcquire(FName QuestAlias) {
}

void USBCheatManager::SBQueryPresence() {
}

void USBCheatManager::SBQueryAchievements() {
}

void USBCheatManager::SBPVDConnect() {
}

void USBCheatManager::SBPushSoundMix(const FString& Path) {
}

void USBCheatManager::SBPushSoundEvent(FName InSoundEventAlias, float DelayTime) {
}

bool USBCheatManager::SBProgressTrophy(FName inTrophyName, uint32 inProgressValue) {
    return false;
}

bool USBCheatManager::SBProgressAllTrophy() {
    return false;
}

void USBCheatManager::SBProfilingUI() {
}

void USBCheatManager::SBPrintWorldTimeSeconds() {
}

void USBCheatManager::SBPrintUTCOffset() {
}

void USBCheatManager::SBPrintSupportedWindowedscreenResolutions() {
}

void USBCheatManager::SBPrintSupportedFullscreenResolutions() {
}

void USBCheatManager::SBPrintSteamInputActive() {
}

void USBCheatManager::SBPrintSoundVolume(ESBSoundVolumeChannel InChannel, ESBSoundVolumeControlType InControlType) {
}

void USBCheatManager::SBPrintScreenSize() {
}

void USBCheatManager::SBPrintSaveVersion() {
}

void USBCheatManager::SBPrintPlayerCharacterInfo() {
}

void USBCheatManager::SBPrintNewGamePlusCount() {
}

void USBCheatManager::SBPrintLogLockOnPoint() {
}

void USBCheatManager::SBPrintLanguageDefaultCode() {
}

void USBCheatManager::SBPrintKeyboardLayout() {
}

void USBCheatManager::SBPrintHdrToneMapLuminance() {
}

void USBCheatManager::SBPrintGPUAdapterDedicatedMemoryUsage() {
}

void USBCheatManager::SBPrintGameOptionDefaultValue(ESBGameOptionType GameOptionType) {
}

void USBCheatManager::SBPrintFixedFrameRate() {
}

void USBCheatManager::SBPrintEquipLilyMeshAssetPath() {
}

void USBCheatManager::SBPrintEntitlementList(bool bInRefresh) {
}

void USBCheatManager::SBPrintCurrentLanguage() {
}

void USBCheatManager::SBPrintBuildInfo() {
}

void USBCheatManager::SBPrintAvailableLanguages() {
}

void USBCheatManager::SBPrintAppId() {
}

void USBCheatManager::SBPrintAllScreenSize() {
}

void USBCheatManager::SBPrintActiveVolume() {
}

void USBCheatManager::SBPopUpPlayGoDebugUI() {
}

void USBCheatManager::SBPopSoundMix(const FString& Path) {
}

void USBCheatManager::SBPointRectLightCastShadow(bool inCastShadow) {
}

void USBCheatManager::SBPlayVibration(const FString& InPath) {
}

void USBCheatManager::SBPlayTestSound(const FString& InPath, float SeekToTime) {
}

void USBCheatManager::SBPlayTestQuartzSound(const FString& InSoundPath) {
}

void USBCheatManager::SBPlayTest3dSound(const FString& InSoundPath) {
}

void USBCheatManager::SBPlayShow(const FString& InShowDataPath) {
}

void USBCheatManager::SBPlayLevelSeq(FName InSeqName, float InPlayTime, const FString& InAttachActors) {
}

void USBCheatManager::SBPlayGoTest() {
}

void USBCheatManager::SBPlayerUseSkill(FName InSkillName) {
}

void USBCheatManager::SBPlayerUngrabObject() {
}

void USBCheatManager::SBPlayerTransform(FName inCharacterAlias) {
}

void USBCheatManager::SBPlayerSP(uint32 InValue) {
}

void USBCheatManager::SBPlayerShowMultiMapLevel() {
}

void USBCheatManager::SBPlayerShowAchievementInfo(uint32 inAchievementId, const FString& inAchievementAlias) {
}

void USBCheatManager::SBPlayerSetLevel(FName inLevelType, uint32 inLevel, bool bConsumeItem) {
}

void USBCheatManager::SBPlayerSetCameraLock(bool bLock) {
}

void USBCheatManager::SBPlayerRevival() {
}

void USBCheatManager::SBPlayerResetPhysics(bool bResetPhysics, bool bResetCloth, float FadeTime) {
}

void USBCheatManager::SBPlayerRemoveAchievement(const FString& inAchievementAlias) {
}

void USBCheatManager::SBPlayerRecreatePhysicsState() {
}

void USBCheatManager::SBPlayerRecoveryItems() {
}

void USBCheatManager::SBPlayerReceiveAchievementReward(const FString& inAchievementAlias) {
}

void USBCheatManager::SBPlayerProcessAchievementOnlyOne(const FString& inAchievementAlias, int32 inProgressValue) {
}

void USBCheatManager::SBPlayerMoveTo(float InLocationX, float InLocationY, float InLocationZ, bool InManualStop, bool InCheckLocation, bool InUseBraking, int32 InBrakingInputType, float InBrakingDistStart, float InBrakingDistEnd) {
}

void USBCheatManager::SBPlayerMovementMode(const FString& inMode) {
}

void USBCheatManager::SBPlayerMovementDisableDesireRotation(bool bActive) {
}

void USBCheatManager::SBPlayerMaxTachyGauge() {
}

void USBCheatManager::SBPlayerMaterialChange(int32 Index) {
}

void USBCheatManager::SBPlayerLockOnSpeed(float inWalkSpeed, float inRunSpeed) {
}

void USBCheatManager::SBPlayerLevelList() {
}

void USBCheatManager::SBPlayerJaliFace(bool bActive) {
}

void USBCheatManager::SBPlayerItemRecharge(const FString& ItemAlias, bool bNotifyUI) {
}

void USBCheatManager::SBPlayerItemBucketList(bool EquipOnly) {
}

void USBCheatManager::SBPlayerItemBucketItemRemove(FName InItemAlias, int32 InCount, int32 InPocketIndex) {
}

void USBCheatManager::SBPlayerItemBucketItemConsume(FName InItemAlias, int32 InCount, int32 InPocketIndex) {
}

void USBCheatManager::SBPlayerItemBucketItemAdd(FName InItemAlias, int32 InCount, int32 InStatLevel, bool bNotifyUI) {
}

void USBCheatManager::SBPlayerIsCompleteAchievement(uint32 inAchievementId, const FString& inAchievementAlias) {
}

void USBCheatManager::SBPlayerInputState(bool bState, bool bControlChar, bool bControlCharState) {
}

void USBCheatManager::SBPlayerIncreaseMultiMapLevel(int32 inDiffValue) {
}

void USBCheatManager::SBPlayerHP(float InValue) {
}

void USBCheatManager::SBPlayerHintList() {
}

void USBCheatManager::SBPlayerFrontGrabObject() {
}

void USBCheatManager::SBPlayerForceTurn() {
}

void USBCheatManager::SBPlayerEventTagClear() {
}

void USBCheatManager::SBPlayerEventTag(const FString& InTag) {
}

void USBCheatManager::SBPlayerEquipItem(const FString& EquipType, bool bEquip, const FString& ItemAlias) {
}

void USBCheatManager::SBPlayerEnableExtraSprint(bool bFlag) {
}

void USBCheatManager::SBPlayerCompleteAchievementOnlyOne(const FString& inAchievementAlias) {
}

void USBCheatManager::SBPlayerCompleteAchievement(const FString& inAchievementAlias) {
}

void USBCheatManager::SBPlayerChangeStance(const FString& Stance) {
}

void USBCheatManager::SBPlayerChangeBulletAlias(const FString& BulletAlias) {
}

void USBCheatManager::SBPlayerCameraInterpolMode(float InTime, bool bCalcNewTargetDir, bool bOnlyRotation) {
}

void USBCheatManager::SBPlayerCameraFadeManualPriority(bool bFade, float inFadeAmount, float InPriority) {
}

void USBCheatManager::SBPlayerCameraFadeAutoPriority(bool bFade, float inFadeStart, float inFadeEnd, float inFadeTime, float inFadeDelay, float InPriority) {
}

void USBCheatManager::SBPlayerCameraFade(bool bFade, float inFadeAmount) {
}

void USBCheatManager::SBPlayerBurstGauge(float InValue) {
}

void USBCheatManager::SBPlayerBetaGauge(float InValue) {
}

void USBCheatManager::SBPlayerBattleState(bool bBattleState) {
}

void USBCheatManager::SBPlayerAchievementList() {
}

void USBCheatManager::SBPlayCustomBlendSpace(float InDuration) {
}

void USBCheatManager::SBPlayCustomAnimMeshSlotByTag(const FString& InActorTag, const FString& InAnimName, float InPlayStartTime, float InPlayEndTime, float InPlayRate, float InBlendInTime, float InBlendOutTime, bool bInLoop, int32 LoopCount, bool bHoldEndTime, float InDeltaTime, TEnumAsByte<ESBSkelMeshSlot> inMeshSlot) {
}

void USBCheatManager::SBPlayCustomAnimMeshSlot(const FString& InAnimName, float InPlayStartTime, float InPlayEndTime, float InPlayRate, float InBlendInTime, float InBlendOutTime, bool bInLoop, int32 LoopCount, bool bHoldEndTime, float InDeltaTime, TEnumAsByte<ESBSkelMeshSlot> inMeshSlot) {
}

void USBCheatManager::SBPlayCustomAnimByTag(const FString& InActorTag, const FString& InAnimName, int32 inCustomIndex, float InPlayStartTime, float InPlayEndTime, float InPlayRate, float InBlendInTime, float InBlendOutTime, bool bInLoop, int32 LoopCount) {
}

void USBCheatManager::SBPlayCustomAnimByFolder(const FString& InFolderPath) {
}

void USBCheatManager::SBPlayCustomAnim(const FString& InAnimName, float InPlayStartTime, float InPlayEndTime, float InPlayRate, float InBlendInTime, float InBlendOutTime, bool bInLoop, int32 LoopCount, bool bHoldEndTime, float InDeltaTime, int32 inCustomIndex) {
}

void USBCheatManager::SBPlayCameraAnim(const FString& InPath) {
}

void USBCheatManager::SBPhotoModeTakeScreenshot() {
}

void USBCheatManager::SBPhotoModeFacialAnimType(TEnumAsByte<ESBPhotoModeFacialAnimType> SBIdleAnimType) {
}

void USBCheatManager::SBPhotoModeFacialAnimPosition(float position) {
}

void USBCheatManager::SBPhotoModeDebug() {
}

void USBCheatManager::SBPhotoMode() {
}

void USBCheatManager::SBPerformanceProfilerStop() {
}

void USBCheatManager::SBPerformanceProfilerStartForLevelStream() {
}

void USBCheatManager::SBPerformanceProfilerStart(bool bCheckGPU, float inLimit) {
}

void USBCheatManager::SBPerformanceProfilerMoveCamera(float InDistance) {
}

void USBCheatManager::SBPDODitherAlphaThreshold(float AlphaThreshold) {
}

void USBCheatManager::SBPauseAllSounds(bool bPause) {
}

void USBCheatManager::SBOverrideDeviceProfile(const FString& InProfileName) {
}

void USBCheatManager::SBOpenRequestBoard(bool IsNikke) {
}

void USBCheatManager::SBOpenLevel(FName LevelName) {
}

void USBCheatManager::SBOpenCredit(bool bAllowClose, bool bStartScroll) {
}

void USBCheatManager::SBNikkeMiniGameResultTest(const FString& LostArticleAlias, bool IsCleared) {
}

void USBCheatManager::SBNikkeMiniGameNextWaveUITest() {
}

void USBCheatManager::SBNikkeMiniGameForceVictory() {
}

void USBCheatManager::SBNikkeMiniGameDefenseGaugeTest(int32 AddScore) {
}

void USBCheatManager::SBNextChangeBody() {
}

void USBCheatManager::SBNewGUID() {
}

void USBCheatManager::SBMetaAIThink(FName inThink, FName inBehaviorAlias) {
}

void USBCheatManager::SBMetaAISpecialBehaviorTag(FName inTargetNodeTag) {
}

void USBCheatManager::SBMetaAISetNodeIndex(int32 inNodeIndex) {
}

void USBCheatManager::SBMetaAIAlias(FName inMetaAIAlias) {
}

void USBCheatManager::SBMessageBoxV3Text(const FString& inTitleText, const FString& inDescText, int32 InType) {
}

void USBCheatManager::SBMessageBoxV3StringTable(const FString& inTitleKey, const FString& inDescKey, bool bShowSaveTimeMessage, int32 InType) {
}

void USBCheatManager::SBMeshStudioShowTest() {
}

void USBCheatManager::SBMemRecordStop() {
}

void USBCheatManager::SBMemRecordStart(float Interval, int32 FlushCount, float MemSpikeThreshold) {
}

void USBCheatManager::SBMaterialTest(int32 Index) {
}

void USBCheatManager::SBMatchRequestWithName(const FString& InMapName, const FString& inOwnerName, const FString& inMatchName) {
}

void USBCheatManager::SBMatchRequest() {
}

void USBCheatManager::SBManualSaveList() {
}

void USBCheatManager::SBLuaCheat(const FString& CallFunc) {
}

void USBCheatManager::SBLookAtTargetTag(FName inSourceTag, const FString& inTargetTag, const FString& inTargetSocket, float inLookAtZOffset) {
}

void USBCheatManager::SBLogTickToTime(int64 Tick) {
}

void USBCheatManager::SBLogThreadCount() {
}

void USBCheatManager::SBLogShowDataContainsKey(int32 ShowKeyEnum) {
}

void USBCheatManager::SBLogSaveData(int32 InSlotNum) {
}

void USBCheatManager::SBLogPlayerLocation() {
}

void USBCheatManager::SBLogPackageDependency(FName InPackageName) {
}

void USBCheatManager::SBLogEnvState() {
}

void USBCheatManager::SBLogDLSSEstimatedVRAM() {
}

void USBCheatManager::SBLogDirectoriesNeverCook() {
}

void USBCheatManager::SBLogDeviceProfileName() {
}

void USBCheatManager::SBLogCVarValue(const FString& InCVar) {
}

void USBCheatManager::SBLogAllVibrationComponent(bool bDetail) {
}

void USBCheatManager::SBLogAllAudioComponent() {
}

void USBCheatManager::SBLogActiveInteraction() {
}

void USBCheatManager::SBLoadSnapShot(const FString& SnapshotName) {
}

void USBCheatManager::SBLoadShortcutData(int32 InIndex) {
}

void USBCheatManager::SBLoadSaveData(const FString& InPath) {
}

void USBCheatManager::SBLoadMap(const FString& InMapName) {
}

void USBCheatManager::SBLoadLevel(const FString& InLevelPath) {
}

void USBCheatManager::SBLoadingScreenFadeOut(float InDuration, float InFromAlpha, float InEndAlpha, float InDelay) {
}

void USBCheatManager::SBLoadingScreenFadeIn(float InDuration, float InFromAlpha, float InEndAlpha, float InDelay) {
}

void USBCheatManager::SBLoadingScreenFadeAuto(float InLifeTime, float InStartDuration, float InStartAlphaFrom, float InStartAlphaEnd, float InEndDuration, float InEndAlphaFrom, float InEndAlphaEnd) {
}

void USBCheatManager::SBLoadingScreenAlpha(float InAlpha) {
}

void USBCheatManager::SBLoadGameOption() {
}

void USBCheatManager::SBLoadFromShortcut(const FString& InMapName, const FString& InFilename) {
}

void USBCheatManager::SBLoadFromManualSaveSlot(int32 InSlotNum) {
}

void USBCheatManager::SBLoadFromAutoSaveSlot(int32 InSlotNum) {
}

void USBCheatManager::SBLLMRecordStop() {
}

void USBCheatManager::SBLLMRecordStart(float Interval) {
}

void USBCheatManager::SBLineNotify(const FString& inMessage, const FString& inToken) {
}

void USBCheatManager::SBLiftUpFish(FName InFishAlias) {
}

void USBCheatManager::SBLeaveTrainingRoom() {
}

void USBCheatManager::SBJoinPlayerSession() {
}

void USBCheatManager::SBJiraLoginUI() {
}

void USBCheatManager::SBJiraLogin(const FString& ID, const FString& pw) {
}

void USBCheatManager::SBItemTableGroupPrint(int32 inCategory, int32 inRarity) {
}

void USBCheatManager::SBItemMustAcquisition() {
}

void USBCheatManager::SBIsHeadphonePluggedIn() {
}

void USBCheatManager::SBInvalidationRoot() {
}

void USBCheatManager::SBInputKeyMappingTest() {
}

void USBCheatManager::SBInputKeyMappingSave() {
}

void USBCheatManager::SBInputKeyMappingRestore() {
}

void USBCheatManager::SBInputKeyMappingForceRebuild() {
}

void USBCheatManager::SBInputBlockTimer(float inBlockTime, bool inUseRealTime) {
}

void USBCheatManager::SBInputBlockManual(bool bInputBlock, float DelayTime) {
}

void USBCheatManager::SBIgnoreHintActivateZoneTrigger(bool bIgnore) {
}

void USBCheatManager::SBHUDViewportSize(int32 Width, int32 Height) {
}

void USBCheatManager::SBHUDViewportPos(bool bSet, int32 X, int32 Y) {
}

void USBCheatManager::SBHUDSkillRefreshIcon() {
}

void USBCheatManager::SBHUDRefresh(float DelayTime) {
}

void USBCheatManager::SBHUDPlayerInfoSendWigetEvent(const FString& inEvent) {
}

void USBCheatManager::SBHUDPlayerInfoDetailToggle() {
}

void USBCheatManager::SBHUDModeChange(int32 Mode) {
}

void USBCheatManager::SBHUDEnemyStatInfoDetailToggle() {
}

void USBCheatManager::SBHUDAspectRatio(float Value) {
}

void USBCheatManager::SBHideActor(const FString& TagName, bool bHide) {
}

void USBCheatManager::SBHDRTextureRenderShow(const FString& InTexturePath, bool bImageView) {
}

void USBCheatManager::SBHDRTextureRenderHide() {
}

void USBCheatManager::SBHDRTextureRefreshDPI() {
}

void USBCheatManager::SBHDRContrastDetail(float InValue) {
}

void USBCheatManager::SBHDRBrightnessDetail(float InValue) {
}

void USBCheatManager::SBGWorldOrigin(int32 InLocationX, int32 InLocationY, int32 InLocationZ) {
}

void USBCheatManager::SBGetRewardFish(FName InRewardGroupBy, FName InLureAlias, float InWeight) {
}

void USBCheatManager::SBGetPublicIP() {
}

void USBCheatManager::SBGetPhotoModeLightPresetData(int32 LightIndex) {
}

void USBCheatManager::SBGetPhotoModeLightLocation(int32 LightIndex) {
}

void USBCheatManager::SBGetGameIntentInfo() {
}

void USBCheatManager::SBGetFriendList() {
}

void USBCheatManager::SBGetCouponUserInfo(const FString& inPlatform, const FString& inUserId) {
}

void USBCheatManager::SBGetCoupon(const FString& inPlatform, const FString& inUserId, const FString& inUserName, const FString& inUserAccessToken, const FString& inCouponServer) {
}

void USBCheatManager::SBGenerateSpawnGroupRuleFromZone(const FString& inZoneAlias) {
}

void USBCheatManager::SBGenerateSpawnGroupRule(const FString& inSpawnGroupRuleAlias) {
}

void USBCheatManager::SBGenerateMapResPosition(int32 RequestNum, float MinRadius, float MaxRadius, float Threshold, float GenerateMinBoundX, float GenerateMinBoundY, float GenerateMaxBoundX, float GenerateMaxBoundY, int32 CollisionCheckCount) {
}

void USBCheatManager::SBGenerateCirclePack(int32 RequestNum, float MinRadius, float MaxRadius, float Threshold, float GenerateMinBoundX, float GenerateMinBoundY, float GenerateMaxBoundX, float GenerateMaxBoundY, int32 CollisionCheckCount, int32 OccluderNum, float MinOccluderRadius, float MaxOccluderRadius) {
}

void USBCheatManager::SBGameUserSettings_StopBenchmark() {
}

void USBCheatManager::SBGameUserSettings_SetPreset(int64 inQuality) {
}

void USBCheatManager::SBGameUserSettings_Set(const FString& inOption, int64 inQuality) {
}

void USBCheatManager::SBGameUserSettings_RunBenchmark(int32 inStep) {
}

void USBCheatManager::SBGameUserSettings_ResolutionScale(float InScale) {
}

void USBCheatManager::SBGameUserSettings_HDDMode(bool inEnable) {
}

void USBCheatManager::SBGameProgressSubQuest(FName CheatQuestAlias, FName Difficulty, int32 CommandSlotIndex, int32 Round) {
}

void USBCheatManager::SBGameProgressEpicQuest(FName CheatQuestAlias, FName Difficulty, int32 CommandSlotIndex, int32 Round) {
}

void USBCheatManager::SBGameProgressCommand(FName CheatQuestAlias, bool bEnableNewGamePlus, FName DifficultyAlias, int32 DebugCommandSlotIndex) {
}

void USBCheatManager::SBGamePauseTagListPrint() {
}

void USBCheatManager::SBGamePaused(bool inPaused) {
}

void USBCheatManager::SBGameOptionSubtitleVisible(bool bVisible) {
}

void USBCheatManager::SBGameOptionSetActiveHDRLuminanceController(bool bActive) {
}

void USBCheatManager::SBGameOptionResetNeedInitialSetup() {
}

void USBCheatManager::SBGameOptionResetNeedInitialContentsSetup() {
}

void USBCheatManager::SBGameOptionMasterVolume(float InVolume) {
}

void USBCheatManager::SBGameOptionKeyMappingReload() {
}

void USBCheatManager::SBGameOptionHUDVisible(bool bVisible) {
}

void USBCheatManager::SBGameOptionContrast(int32 InValue) {
}

void USBCheatManager::SBGameOptionBGMVolume(float InVolume) {
}

void USBCheatManager::SBForceLOD(int32 inLOD) {
}

void USBCheatManager::SBForceLag(float inDelayStart, float inLagTime) {
}

void USBCheatManager::SBForceHitFish(FName InFishAlias) {
}

void USBCheatManager::SBForceHapticVibration(bool bEnable) {
}

void USBCheatManager::SBForceGCActorPool() {
}

void USBCheatManager::SBForceGC() {
}

void USBCheatManager::SBForceEnsure() {
}

void USBCheatManager::SBForceCrash() {
}

void USBCheatManager::SBFeedbackWarpIssue(const FString& InIssueName) {
}

void USBCheatManager::SBFeedbackUMapRefresh() {
}

void USBCheatManager::SBFeedbackUMapIssueMapChange(const FString& InIssueName, const FString& ChangeMapName) {
}

void USBCheatManager::SBFeedbackUMapIssueCreate(const FString& InSummary, const FString& InDesc, int32 InPriority) {
}

void USBCheatManager::SBFeedbackUMapIssueClose(const FString& InIssueName) {
}

void USBCheatManager::SBFeedbackOpenList() {
}

void USBCheatManager::SBFeedbackIssueUpdate(const FString& InIssueName, const FString& InSummary, const FString& InDesc, int32 InPriority, int32 InProgress) {
}

void USBCheatManager::SBFeedbackIssueRefresh(const FString& InIssueName) {
}

void USBCheatManager::SBFeedbackCommentRemove(const FString& InIssueName, const FString& InCommentID) {
}

void USBCheatManager::SBFeedbackCommentRefresh(const FString& InIssueName) {
}

void USBCheatManager::SBFeedbackCommentEdit(const FString& InIssueName, const FString& InCommentID, const FString& InCommentBody) {
}

void USBCheatManager::SBFeedbackCommentAdd(const FString& InIssueName, const FString& InCommentBody) {
}

void USBCheatManager::SBFeedbackCloseList() {
}

void USBCheatManager::SBFeedbackChangeNextState() {
}

void USBCheatManager::SBFailedQuest(FName QuestAlias) {
}

void USBCheatManager::SBExitNikkeStage() {
}

void USBCheatManager::SBEquipBodySuit(int32 ShortCutNum) {
}

void USBCheatManager::SBEnvState(FName EnvAlias, FName TagName) {
}

void USBCheatManager::SBEnvControlVolControlOverride(const FString& VolumeName, bool bActive) {
}

void USBCheatManager::SBEntitlementInfinityLoading(bool bInEnable) {
}

void USBCheatManager::SBEnterWorld(const FName& EnterWorldAlias) {
}

void USBCheatManager::SBEnterTrainingRoom(FName TrainningRoomAlias) {
}

void USBCheatManager::SBEnterNikkeStage(FName NikkeStage, FName EnvSpawnAlias) {
}

void USBCheatManager::SBEnteredByActivityFakeClear() {
}

void USBCheatManager::SBEnteredByActivityFake() {
}

bool USBCheatManager::SBEndActivity(FName inActivityName) {
    return false;
}

void USBCheatManager::SBEnableAreaVolume(FName& InName, bool bFlag) {
}

void USBCheatManager::SBDumpPackageList() {
}

void USBCheatManager::SBDualSenseVibrationMode(int32 Mode) {
}

void USBCheatManager::SBDualSenseVibration(uint8 LargeMotor, uint8 SmallMotor) {
}

void USBCheatManager::SBDualSenseToggleAdaptiveTriggerStateLog(int32 Direction) {
}

void USBCheatManager::SBDualSenseToggleAdaptiveTriggerPositionLog(int32 Direction) {
}

void USBCheatManager::SBDualSenseCheckUpdate() {
}

void USBCheatManager::SBDualSenseCheckAudioSupport() {
}

void USBCheatManager::SBDualSenseApplyTriggerEffectWithData(const FString& DataPath) {
}

void USBCheatManager::SBDualSenseAdaptiveTriggerWeapon(uint8 StartPosition, uint8 EndPosition, uint8 Strength, int32 Direction) {
}

void USBCheatManager::SBDualSenseAdaptiveTriggerVibration(uint8 position, uint8 Frequency, uint8 Amplitude, int32 Direction) {
}

void USBCheatManager::SBDualSenseAdaptiveTriggerSlopeFeedback(uint8 InStartPosition, uint8 InEndPosition, uint8 InStartStrength, uint8 InEndStrength, int32 Direction) {
}

void USBCheatManager::SBDualSenseAdaptiveTriggerMultiplePositionVibration(uint8 Frequency, uint8 Amplitude0, uint8 Amplitude1, uint8 Amplitude2, uint8 Amplitude3, uint8 Amplitude4, uint8 Amplitude5, uint8 Amplitude6, uint8 Amplitude7, uint8 Amplitude8, uint8 Amplitude9, int32 Direction) {
}

void USBCheatManager::SBDualSenseAdaptiveTriggerMultiplePositionFeedback(uint8 Strength0, uint8 Strength1, uint8 Strength2, uint8 Strength3, uint8 Strength4, uint8 Strength5, uint8 Strength6, uint8 Strength7, uint8 Strength8, uint8 Strength9, int32 Direction) {
}

void USBCheatManager::SBDualSenseAdaptiveTriggerFeedback(uint8 position, uint8 Strength, int32 Direction) {
}

void USBCheatManager::SBDualSenseAdaptiveTriggerClear(int32 Direction) {
}

void USBCheatManager::SBDroneSpotLightCastShadow(bool Inactive) {
}

void USBCheatManager::SBDrawTestCurve(float InDrawTime, float TargetDist, float ControlPointLength) {
}

void USBCheatManager::SBDrawPlayerMove(float InDrawTime) {
}

void USBCheatManager::SBDoesPakExist(int32 PakNum) {
}

void USBCheatManager::SBDiffCaptureObjectList() {
}

void USBCheatManager::SBDetachPlayerEquipment(FName inEquipmentAlias) {
}

void USBCheatManager::SBDebugTheaterPlay(int32 InValue) {
}

void USBCheatManager::SBDebugSave(bool Flag) {
}

void USBCheatManager::SBDebugManualSaveData(int32 InSlotNum) {
}

void USBCheatManager::SBDebugLogStatLLMFull(bool bRecord, bool bReportAndClear) {
}

void USBCheatManager::SBDebugLogOnSyncLoadPackage(bool bEnable) {
}

void USBCheatManager::SBDebugLogOnSyncLoadingFlush(bool bEnable) {
}

void USBCheatManager::SBDebugLogOnAsyncLoadPackage(bool bEnable) {
}

void USBCheatManager::SBDebugLogOnAsyncLoadingFlush(bool bEnable) {
}

void USBCheatManager::SBDebugAutoSaveData(int32 InSlotNum) {
}

void USBCheatManager::SBCurrentWorldInfo() {
}

void USBCheatManager::SBCurrentViewTarget() {
}

void USBCheatManager::SBCurrentDeviceSteamDeck(bool bEnable) {
}

void USBCheatManager::SBCreditDebugCloseAllow(bool bDebugAllowClose) {
}

void USBCheatManager::SBCreatePlayerSession() {
}

void USBCheatManager::SBCreateItemRange(FName InItemAlias, uint32 InItemCount, uint32 InStatLevel, float RelativeLocX, float RelativeLocY, float RelativeLocZ, float SpawnDelayTime) {
}

void USBCheatManager::SBCreateItemArc(FName InItemAlias, uint32 InItemCount, uint32 InStatLevel, float Distance, float angle, int32 ArcCount, float DistanceAdditional, float DecreaseCountFactor, float DecreaseDegree, float RelativeLocX, float RelativeLocY, float RelativeLocZ, float SpawnDelayTime) {
}

void USBCheatManager::SBCreateItem(FName InItemAlias, uint32 InStatLevel, uint32 InItemCount, float RelativeLocX, float RelativeLocY, float RelativeLocZ, float RelativeRotYaw, float SpawnDelayTime) {
}

void USBCheatManager::SBCreateCharacter(FName inCharacterAlias, float RelativeLocX, float RelativeLocY, float RelativeLocZ, float RelativeRotYaw) {
}

void USBCheatManager::SBConnectDedicatedServer(const FString& inServerIP, const FString& inMultiMapAlias) {
}

void USBCheatManager::SBConfigOverrideString(const FString& inOptionName, const FString& InValue) {
}

void USBCheatManager::SBConfigOverrideInt(const FString& inOptionName, int32 InValue) {
}

void USBCheatManager::SBConfigOverrideFloatArray(const FString& inOptionName, const FString& InData) {
}

void USBCheatManager::SBConfigOverrideFloat(const FString& inOptionName, float InValue) {
}

void USBCheatManager::SBConfigOverrideBool(const FString& inOptionName, bool InValue) {
}

void USBCheatManager::SBConditionTest(const FString& inConditionAlias) {
}

void USBCheatManager::SBConditionGroupTest(const FString& inConditionAlias) {
}

void USBCheatManager::SBCompleteQuest(FName QuestAlias, bool bForceAcquireRequestReward) {
}

void USBCheatManager::SBCompleteNikkeStage(bool bVictory) {
}

void USBCheatManager::SBCompleteHint(FName inHintAlias) {
}

void USBCheatManager::SBColorVisionDeficiency(int32 InType, float inSeverity, bool inCorrectDeficiency, bool inShowCorrectionWithDeficiency) {
}

void USBCheatManager::SBClearFixedEntitlement() {
}

void USBCheatManager::SBClearDebugLog(const FString& LogCategoryName) {
}

void USBCheatManager::SBClearCaptureObjectList() {
}

void USBCheatManager::SBClearACPool() {
}

void USBCheatManager::SBCheckTrialVersion() {
}

void USBCheatManager::SBCheckPlayGoDebug() {
}

void USBCheatManager::SBCheckChunkSize(uint32 PakchunkID) {
}

void USBCheatManager::SBCheckChunkProgress(uint32 PakchunkID) {
}

void USBCheatManager::SBCheckChunkLocation(uint32 PakchunkID) {
}

void USBCheatManager::SBCheckAvaiableLocationFromLineCheck(float StartX, float StartY, float startZ, float EndX, float EndY, float endZ, float checkRadius) {
}

void USBCheatManager::SBCheatTableCommand(const FString& inCommandGroup) {
}

void USBCheatManager::SBCheatProgressSubQuestNewGamePlusMinMax(FName CheatQuestAlias, FName DifficultyAlias, int32 DebugCommandSlotIndex) {
}

void USBCheatManager::SBCheatProgressSubQuestMinMax(FName CheatQuestAlias, int32 DebugCommandSlotIndex) {
}

void USBCheatManager::SBCheatProgressSubQuestCommand(FName CheatQuestAlias, bool bEnableNewGamePlus, FName DifficultyAlias, int32 DebugCommandSlotIndex) {
}

void USBCheatManager::SBCheatProgressSubQuest(FName CheatQuestAlias) {
}

void USBCheatManager::SBCheatProgressQuestNewGamePlusMinMax(FName CheatQuestAlias, FName DifficultyAlias, int32 DebugCommandSlotIndex) {
}

void USBCheatManager::SBCheatProgressQuestNewGamePlus(FName CheatQuestAlias, FName DifficultyAlias) {
}

void USBCheatManager::SBCheatProgressQuestMinMax(FName CheatQuestAlias, int32 DebugCommandSlotIndex) {
}

void USBCheatManager::SBCheatProgressQuest(FName CheatQuestAlias) {
}

void USBCheatManager::SBCheatGroupLoop(FName GroupName, int32 LoopCount) {
}

void USBCheatManager::SBCheatGroup(FName GroupName) {
}

void USBCheatManager::SBCharacterSetting(FName GamePlayProgressAlias, int32 CommandSlotIndexm, int32 Round) {
}

void USBCheatManager::SBCharacterDespawnFromTag(const FString& InTag) {
}

void USBCheatManager::SBChangeWorld(const FString& changeWorld) {
}

void USBCheatManager::SBChangeRule(FName InRuleAlias) {
}

void USBCheatManager::SBChangeMesh(int32 MeshInfoIndex, FName MeshPath, FName AnimPath) {
}

void USBCheatManager::SBChangeFace(FName MeshPath) {
}

void USBCheatManager::SBChangeBody(FName MeshPath) {
}

void USBCheatManager::SBCaptureObjectList() {
}

void USBCheatManager::SBCameraFOV(float InNewFov) {
}

void USBCheatManager::SBBossKillInfinity(bool bActive, float inRepeatTime) {
}

void USBCheatManager::SBBossChallengeUnlockStageReset() {
}

void USBCheatManager::SBBossChallengeUnlockAllStage() {
}

void USBCheatManager::SBBossChallengeUnlockAllPreset() {
}

void USBCheatManager::SBBossChallengeUnlockAllMode() {
}

void USBCheatManager::SBBossChallengeUnlockAll() {
}

void USBCheatManager::SBBossChallengeResetAllPreset() {
}

void USBCheatManager::SBBossChallengeResetAllMode() {
}

void USBCheatManager::SBBossChallengeResetAll() {
}

void USBCheatManager::SBBossChallengeRecordResetStage(const FString& InStageAlias) {
}

void USBCheatManager::SBBossChallengeRecordReset() {
}

void USBCheatManager::SBBossChallengePrintBestRecord() {
}

void USBCheatManager::SBBossChallengeExit() {
}

void USBCheatManager::SBBossChallengeCompleteAllStage() {
}

void USBCheatManager::SBBossChallenge(const FName& BossChallengeAlias, const int32 PlayerPreset, int32 Difficulty) {
}

void USBCheatManager::SBBoneToBone(float InKeepDur, float InInterpTime, int32 InIndex) {
}

void USBCheatManager::SBBlockLevelStreaming(bool bBlock) {
}

void USBCheatManager::SBBackupTest(int32 BackupSlotNum) {
}

void USBCheatManager::SBBackupDelete(int32 BackupSlotNum) {
}

void USBCheatManager::SBAutoSaveList() {
}

void USBCheatManager::SBAutoMemReportStop() {
}

void USBCheatManager::SBAutoMemReportStart(float Interval) {
}

void USBCheatManager::SBAutoLoginWithOnlineIdentity() {
}

void USBCheatManager::SBAudioHRTFEnabledForAllEnable() {
}

void USBCheatManager::SBAudioHRTFEnabledForAllDisable() {
}

void USBCheatManager::SBAudio3DMixdownPassthroughEnable() {
}

void USBCheatManager::SBAudio3DMixdownPassthroughDisable() {
}

void USBCheatManager::SBAttenuationVisualize(bool bVisualize) {
}

void USBCheatManager::SBAttachPlayerEquipment(FName inEquipmentAlias) {
}

void USBCheatManager::SBAsyncLoadingScreenStop(float FadeDuration) {
}

void USBCheatManager::SBAsyncLoadingScreenPlay(float FadeDuration) {
}

void USBCheatManager::SBArcEventSpawn(int32 MaxCount) {
}

void USBCheatManager::SBApplyEffectMe(FName inEffectAlias) {
}

void USBCheatManager::SBApplyEffect(FName inEffectAlias, int32 InActorGUID) {
}

void USBCheatManager::SBAppFunc(FName AppRegionName, bool bEnable) {
}

void USBCheatManager::SBAnimSequenceGetTimeFromPos(const FString& AssetPath, const FString& BoneName, float InX, float InY, float InZ) {
}

void USBCheatManager::SBAnimSequenceBake(const FString& AssetPath) {
}

void USBCheatManager::SBAIMovePath(FName InAlias, uint32 InActorGUID) {
}

void USBCheatManager::SBAdjustSoundVolume(ESBSoundVolumeChannel InChannel, float Volume, ESBSoundVolumeControlType InControlType) {
}

void USBCheatManager::SBAddMaterialParamTest() {
}

void USBCheatManager::SBAddFixedEntitlement(const FString& InEntitlementId) {
}

void USBCheatManager::SBAddEntitlement(const FString& InEntitlementId) {
}

void USBCheatManager::SBAddDebugMessageFromStringTable(const FString& InDebugStringTableKey, TEnumAsByte<ESBLocalize> InLocalizeType) {
}

void USBCheatManager::SBAddDebugMessage(const FString& InDebugString) {
}

void USBCheatManager::SBActorTickDistance(float InDistance) {
}

void USBCheatManager::SBActorRenderDistance(float InDistance) {
}

void USBCheatManager::SBActorInfo(const FString& inActorName) {
}

void USBCheatManager::SBActiveCamp(FName CampAlias) {
}

void USBCheatManager::SBActivateHint(FName inHintAlias) {
}

void USBCheatManager::SBAcquireSkillAll(bool bProgressAchievement, bool bNewGamePlusSkill, bool bDroneSkill) {
}

void USBCheatManager::SBAcquireSkill(FName inAcquisitionSkillAlias, bool bProgressAchievement, bool bDonotConsumeSP) {
}

void USBCheatManager::SBAcquireQuest(FName QuestAlias) {
}

void USBCheatManager::SB720p() {
}

void USBCheatManager::SB2160p() {
}

void USBCheatManager::SB1440p() {
}

void USBCheatManager::SB1080p() {
}

void USBCheatManager::ProfilePoint_F02(int32 Index) {
}

void USBCheatManager::ProfilePoint_F01(int32 Index) {
}

void USBCheatManager::ProfilePoint_E05(int32 Index) {
}

void USBCheatManager::ProfilePoint_E03(int32 Index) {
}

void USBCheatManager::ProfilePoint_C05(int32 Index) {
}


