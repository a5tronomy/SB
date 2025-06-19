#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "Camera/PlayerCameraManager.h"
#include "ESBGameDifficultyType.h"
#include "ESBGameOptionType.h"
#include "ESBLocalize.h"
#include "ESBPhotoModeFacialAnimType.h"
#include "ESBSkelMeshSlot.h"
#include "ESBSoundVolumeChannel.h"
#include "ESBSoundVolumeControlType.h"
#include "ESBTrainningRoomChangeType.h"
#include "ESBTrainningRoomNpcAIType.h"
#include "SBCheatManager.generated.h"

UCLASS(Within=SBPlayerController)
class SB_API USBCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TMap<FName, bool> ToggleCVarCommandLastArg;
    
    UPROPERTY()
    int32 luaIntValue;
    
    USBCheatManager();

    UFUNCTION(Exec)
    void StopManualLoadingScreen();
    
    UFUNCTION(Exec)
    void StartManualLoadingScreen();
    
    UFUNCTION(Exec)
    void SetMaxUndilatedFrameTime(float inMaxUndilatedFPS);
    
    UFUNCTION(Exec)
    void SetFixedFrameRate(float inFixedFrameRate);
    
    UFUNCTION(Exec)
    void SBZoneEvent(FName InEventAlias);
    
    UFUNCTION(Exec)
    void SbWorldObjReInit();
    
    UFUNCTION(Exec)
    void SBWorldGlobalMotionBlurScale(bool bSet, float InValue);
    
    UFUNCTION(Exec)
    void SBWorldEnvPostProcessDisable(bool bDisable);
    
    UFUNCTION(Exec)
    void SBWorldEnvCounter(int32 InType, bool bActive);
    
    UFUNCTION(Exec)
    void SBWaypoint(int32 InWaypoint);
    
    UFUNCTION(Exec)
    void SBWaveMerge(const FString& overwriteFileName, float Delay);
    
    UFUNCTION(Exec)
    void SBWarpWorld(FName inWorldAlias);
    
    UFUNCTION(Exec)
    void SBWarpPosition(float InX, float InY, float InZ, bool bNoUseWarp);
    
    UFUNCTION(Exec)
    void SBWarpPlayer(FName TargetTagName);
    
    UFUNCTION(Exec)
    void SBWarpCampToPointName(FName InCampAlias, FName TargetSpawnPoint);
    
    UFUNCTION(Exec)
    void SBWarpCampToLocation(FName InCampAlias, float X, float Y, float Z);
    
    UFUNCTION(Exec)
    void SBWarpCamp(FName InCampAlias);
    
    UFUNCTION(Exec)
    void SBVisibleLoadingScreen(bool bVisible);
    
    UFUNCTION(Exec)
    void SBVariationText(int32 InTextIndex, const FString& InKey);
    
    UFUNCTION(Exec)
    void SBValidatePakDuplication();
    
    UFUNCTION(Exec)
    void SBValidatePakCount(int32 InCount);
    
    UFUNCTION(Exec)
    void SBUsePDODitherAlpha(bool bEnable);
    
    UFUNCTION(Exec)
    void SBUseOcclusionDebugging();
    
    UFUNCTION(Exec)
    void SBUpdateNierDLCUI(bool bEnable);
    
    UFUNCTION(Exec)
    void SBUpdateMoveSpeed(float UpdateDelayTime);
    
    UFUNCTION(Exec)
    void SBUpdateCouponUserInfo(const FString& inPlatform, const FString& inUserId, int32 InPlayTime);
    
    UFUNCTION(Exec)
    void SBUpdateCognitoStatus(const FString& inPlayerName, const FString& inPassWord);
    
    UFUNCTION(Exec)
    void SBUnuseOcclusionDebugging();
    
    UFUNCTION(Exec)
    void SBUnLoadLevel(const FString& InLevelPath);
    
    UFUNCTION(Exec)
    void SBUIWorkShopEnableDefaultShop();
    
    UFUNCTION(Exec)
    void SBUIWorkShopDisableDefaultShop();
    
    UFUNCTION(Exec)
    void SBUIToggleShowFriendShipGain();
    
    UFUNCTION(Exec)
    void SBUIToggleForceValidShopItem();
    
    UFUNCTION(Exec)
    void SBUIStudioShowPlay(const FString& ShowTag, bool bSameStop, bool bBlendCamera);
    
    UFUNCTION(Exec)
    void SBUIStudioSetItem(const FString& inAssetPath);
    
    UFUNCTION(Exec)
    void SBUIStudioSequencePlay(const FString& SequenceTag, bool bSameStop, bool bBlendCamera);
    
    UFUNCTION(Exec)
    void SBUIStudioPreviewOpen();
    
    UFUNCTION(Exec)
    void SBUIStudioEvent(const FString& inEvent);
    
    UFUNCTION(Exec)
    void SBUIStudioAttachEquipment(const FString& inTargetTag, const FString& InItemAlias);
    
    UFUNCTION(Exec)
    void SBUIOpenWorkShop();
    
    UFUNCTION(Exec)
    void SBUIOpenShop(const FString& OpenShopDataAlias, const FString& OpenShopInstanceAlias, const FString& OpenShopTitleTag);
    
    UFUNCTION(Exec)
    void SBUIOpenHairSalonToGameMenu();
    
    UFUNCTION(Exec)
    void SBUIOpenGameMenuToHairSalon();
    
    UFUNCTION(Exec)
    void SBUIOpenGameMenu();
    
    UFUNCTION(Exec)
    void SBUIOpen(const FString& UILogicTypeName, bool bDuplicateCheck);
    
    UFUNCTION(Exec)
    void SBUIEventUnlockBurst(float InTime, float InDelay);
    
    UFUNCTION(Exec)
    void SBUIActionWidgetCreate(const FString& widgetAssetPath, float InDelay);
    
    UFUNCTION(Exec)
    void SBUIActionUnlockMode(const FString& TitleKey, float InTime, float InDelay);
    
    UFUNCTION(Exec)
    void SBUIActionRequestAlias(const FString& Group);
    
    UFUNCTION(Exec)
    void SBUIActionNikkeLostArticlePopup(const FString& NikkeLostArticleAlias);
    
    UFUNCTION(Exec)
    void SBUIActionGuideVideo(const FString& TitleKey, const FString& DescKey, const FString& MovieAssetPath, float InTime, float InDelay);
    
    UFUNCTION(Exec)
    void SBUIActionControllerStatePrint();
    
    UFUNCTION(Exec)
    void SBTrinityMode(bool bIsTrinityMode);
    
    UFUNCTION(Exec)
    void SBTrialVersionSet(bool bEnable);
    
    UFUNCTION(Exec)
    void SBTrainingRoomMode(TEnumAsByte<ESBTrainningRoomChangeType> ChangeType, bool Infinite, TEnumAsByte<ESBTrainningRoomNpcAIType> EnemyAIType);
    
    UFUNCTION(Exec)
    void SBToLobby();
    
    UFUNCTION(Exec)
    void SBToggleUseLog(FName inLogKey);
    
    UFUNCTION(Exec)
    void SBToggleUseDrawDebug(FName inDrawKey);
    
    UFUNCTION(Exec)
    void SBToggleStudioOnOff();
    
    UFUNCTION(Exec)
    void SBToggleStencilLog();
    
    UFUNCTION(Exec)
    void SBToggleSoundDebugger();
    
    UFUNCTION(Exec)
    void SBToggleSimpleFishing();
    
    UFUNCTION(Exec)
    void SBToggleSigManShowDebug();
    
    UFUNCTION(Exec)
    void SBToggleRopeSwingPhysic();
    
    UFUNCTION(Exec)
    void SBToggleRewardRateForceSuccess();
    
    UFUNCTION(Exec)
    void SBToggleResourceCacheRecorder();
    
    UFUNCTION(Exec)
    void SBToggleResourceCacheManagerShowDebug();
    
    UFUNCTION(Exec)
    void SBTogglePrintQuartzBeat();
    
    UFUNCTION(Exec)
    void SBTogglePlayerState();
    
    UFUNCTION(Exec)
    void SBTogglePlayerIgnoreCoolTime();
    
    UFUNCTION(Exec)
    void SBTogglePlayerDamageInfo();
    
    UFUNCTION(Exec)
    void SBTogglePhotoModeUI();
    
    UFUNCTION(Exec)
    void SBTogglePhotoModeScreenShotCaptureForceFail();
    
    UFUNCTION(Exec)
    void SBTogglePadSpeaker();
    
    UFUNCTION(Exec)
    void SBToggleObjectID();
    
    UFUNCTION(Exec)
    void SBToggleMotionMatching();
    
    UFUNCTION(Exec)
    void SBToggleMailBox();
    
    UFUNCTION(Exec)
    void SBToggleLockOnCamera();
    
    UFUNCTION(Exec)
    void SBToggleLevelInfo();
    
    UFUNCTION(Exec)
    void SBToggleGCControl();
    
    UFUNCTION(Exec)
    void SBToggleFullBodyIK(const FString& Name);
    
    UFUNCTION(Exec)
    void SBToggleFootIK();
    
    UFUNCTION(Exec)
    void SBToggleFoliageTypeDensityScale(const bool inEnable);
    
    UFUNCTION(Exec)
    void SBToggleFlyCamera();
    
    UFUNCTION(Exec)
    void SBToggleFishMove();
    
    UFUNCTION(Exec)
    void SBToggleFishingDebugger();
    
    UFUNCTION(Exec)
    void SBToggleEngineFlag(FName InFlag);
    
    UFUNCTION(Exec)
    void SBToggleEnemyDamageInfo();
    
    UFUNCTION(Exec)
    void SBToggleEnableSTS();
    
    UFUNCTION(Exec)
    void SBToggleEnableSliceMesh();
    
    UFUNCTION(Exec)
    void SBToggleEnableFootIKWhenSequence();
    
    UFUNCTION(Exec)
    void SBToggleDrawPlayerMove(bool bAddMoveTrackActor, float AddMoveTrackActorDist);
    
    UFUNCTION(Exec)
    void SBToggleDisplayLamsID();
    
    UFUNCTION(Exec)
    void SBToggleDeviceProfileDebugDisplay();
    
    UFUNCTION(Exec)
    void SBToggleDebugSTS();
    
    UFUNCTION(Exec)
    void SBToggleDebugSliceMesh();
    
    UFUNCTION(Exec)
    void SBToggleDebugAudioComponent();
    
    UFUNCTION(Exec)
    void SBToggleCheatCommandDistribution();
    
    UFUNCTION(Exec)
    void SBToggleCharacterMovementParallelUpdate();
    
    UFUNCTION(Exec)
    void SBToggleBossChallengeDebug();
    
    UFUNCTION(Exec)
    void SBToggleAimIK();
    
    UFUNCTION(Exec)
    void SBTheaterTestInteractionYesNo();
    
    UFUNCTION(Exec)
    void SBTheaterTestInteractionSelect();
    
    UFUNCTION(Exec)
    void SBTheaterTestInteractionAdamFusion();
    
    UFUNCTION(Exec)
    void SBTheaterStop(int32 uid);
    
    UFUNCTION(Exec)
    void SBTheaterSkip(int32 uid);
    
    UFUNCTION(Exec)
    void SBTheaterPrintLevelSeqPlaying();
    
    UFUNCTION(Exec)
    void SBTheaterPlayLevelSeq(const FString& ResourcePath, float InOverridePriority, float LocX, float LocY, float LocZ, float Pitch, float Yaw, float Roll);
    
    UFUNCTION(Exec)
    void SBTheaterPlay(const FString& ResourcePath, float InOverridePriority, float LocX, float LocY, float LocZ, float Pitch, float Yaw, float Roll);
    
    UFUNCTION(Exec)
    void SBTheaterOptionCheck(const FString& inResourcePath);
    
    UFUNCTION(Exec)
    void SBTheaterNotifyCompleteSequence(const FString& SequenceName);
    
    UFUNCTION(Exec)
    void SBTheaterIgnoreFirstSkip(bool bSkip);
    
    UFUNCTION(Exec)
    void SBTestPlayGoUI();
    
    UFUNCTION(Exec)
    void SBTestPlayGoLabelAssetCache();
    
    UFUNCTION(Exec)
    void SBTestKrulosLog();
    
    UFUNCTION(Exec)
    void SBTestEanbleBoid();
    
    UFUNCTION(Exec)
    void SBTestCharacterAnim(const FString& InAnimName, float PlayStartTime, float PlayEndTime, float PlayRate, float BlendInTime, float BlendOutTime, bool bLoop, int32 LoopCount);
    
    UFUNCTION(Exec)
    void SBTestChangeBlendSpace(int32 SlotIndex, const FString& InAnimName);
    
    UFUNCTION(Exec)
    void SBTestBridgeLog();
    
    UFUNCTION(Exec)
    void SBTestBool(FName InKey, bool InBool);
    
    UFUNCTION(Exec)
    void SBTestBlackboardComponent();
    
    UFUNCTION(Exec)
    void SBTerminateLevelStreamProfiling();
    
    UFUNCTION(Exec)
    void SBTeleportTo(float InX, float InY, float InZ);
    
    UFUNCTION(Exec)
    void SBTalkTest(const FString& TalkAssetPath, const FString& CharacterAlias, float RelativeLocX, float RelativeLocY, float RelativeLocZ, float RelativeRotYaw, const FString& InTag);
    
    UFUNCTION(Exec)
    void SBSystemSetAppActivate(bool bActivate, float DelayTime);
    
    UFUNCTION(Exec)
    void SBSuicide();
    
    UFUNCTION(Exec)
    void SBStudioState(bool bEnter);
    
    UFUNCTION(Exec)
    void SBStudioResetPhysics();
    
    UFUNCTION(Exec)
    void SBStudioCameraSetManualDistance(float InValue);
    
    UFUNCTION(Exec)
    void SBStudioCameraSetCurrentFocalLength(float InValue);
    
    UFUNCTION(Exec)
    void SBStudioCameraSetCurrentAperture(float InValue);
    
    UFUNCTION(Exec)
    void SBStudioCameraFocusInfo();
    
    UFUNCTION(Exec)
    void SBStopMatchRequest();
    
    UFUNCTION(Exec)
    void SBStopKeepPlaySingleSound();
    
    UFUNCTION(Exec)
    void SBStopAllSounds();
    
    UFUNCTION(Exec)
    void SBStartSingleLevelStreamProfiling(const FString& InLevelStreamName);
    
    UFUNCTION(Exec)
    void SBStartLevelStreamProfiling();
    
    UFUNCTION(Exec)
    void SBStartKeepPlaySingleSound();
    
    UFUNCTION(Exec)
    bool SBStartActivity(FName inActivityName);
    
    UFUNCTION(Exec)
    void SBSpawnEnemy();
    
    UFUNCTION(Exec)
    void SBSoundUnMute();
    
    UFUNCTION(Exec)
    void SBSoundMute();
    
    UFUNCTION(Exec)
    void SBSnapShot(const FString& SnapshotName);
    
    UFUNCTION(Exec)
    void SBSignOutCognito(const FString& inPlayerName, const FString& inPassWord);
    
    UFUNCTION(Exec)
    void SBSignInCognito(const FString& inPlayerName, const FString& inPassWord);
    
    UFUNCTION(Exec)
    void SBSigManUseDebugActors(bool bUse);
    
    UFUNCTION(Exec)
    void SBSigManUnregisterAll();
    
    UFUNCTION(Exec)
    void SBSigManToggleZoneEnvOptimizationConfigs(bool Enable);
    
    UFUNCTION(Exec)
    void SBSigManToggleCharacterOptimizationConfigs(bool Enable);
    
    UFUNCTION(Exec)
    void SBSigManShowDebugFilter(const FString& ActorClass);
    
    UFUNCTION(Exec)
    void SBSigManSetDummyViewportLocationToPlayer();
    
    UFUNCTION(Exec)
    void SBSigManSetDummyViewportLocation(float InX, float InY, float InZ);
    
    UFUNCTION(Exec)
    void SBSigManResetSignificance();
    
    UFUNCTION(Exec)
    void SBSigManRegisterAll();
    
    UFUNCTION(Exec)
    void SBSigManHideDebugActors(bool bHide);
    
    UFUNCTION(Exec)
    void SBSigManEnableDummyViewport(bool bInEnable);
    
    UFUNCTION(Exec)
    void SBSigManDumpLog();
    
    UFUNCTION(Exec)
    void SBShowStoreUI(const FString& ProductId);
    
    UFUNCTION(Exec)
    void SBShowRes();
    
    UFUNCTION(Exec)
    void SBShowEventContentsDate();
    
    UFUNCTION(Exec)
    void SBShowControllerBindingPanel();
    
    UFUNCTION(Exec)
    void SBShowActorID(int32 InShow);
    
    UFUNCTION(Exec)
    void SBShaderPrecompileEnable();
    
    UFUNCTION(Exec)
    void SBShaderPrecompileDisable();
    
    UFUNCTION(Exec)
    void SBSetVoice(const FString& InValue);
    
    UFUNCTION(Exec)
    void SBSetUTCCountryCode(const FString& InCode);
    
    UFUNCTION(Exec)
    void SBSetSlowLevelStreamingUpdate(int32 Level);
    
    UFUNCTION(Exec)
    void SBSetSkillSlot(FName inSkillAlias, int32 SlotNum);
    
    UFUNCTION(Exec)
    void SBSetSettingVersion(int32 InValue);
    
    UFUNCTION(Exec)
    void SBSetScreenTypeWindowedFullScreen();
    
    UFUNCTION(Exec)
    void SBSetScreenTypeWindowed();
    
    UFUNCTION(Exec)
    void SBSetScreenTypeFullScreen();
    
    UFUNCTION(Exec)
    void SBSetScreenType(int32 InScreenType);
    
    UFUNCTION(Exec)
    void SBSetScreenResolution4K();
    
    UFUNCTION(Exec)
    void SBSetScreenResolution2K();
    
    UFUNCTION(Exec)
    void SBSetScreenResolution1K();
    
    UFUNCTION(Exec)
    void SBSetScreenResolution(int32 InValueX, int32 InValueY);
    
    UFUNCTION(Exec)
    void SBSetSaveSlot(int32 InSlotNum);
    
    UFUNCTION(Exec)
    void SBSetSaveMajorVersionLatest();
    
    UFUNCTION(Exec)
    void SBSetSaveMajorVersion(int32 MajorVersion);
    
    UFUNCTION(Exec)
    void SBSetSaveAppContentVersionLatest();
    
    UFUNCTION(Exec)
    void SBSetSaveAppContentVersion(int32 SaveAppVersion);
    
    UFUNCTION(Exec)
    void SBSetResolutionQuality(float InValue);
    
    UFUNCTION(Exec)
    void SBSetPurchaseInTrial(bool bEnable);
    
    UFUNCTION(Exec)
    void SBSetPlayerPawnAnimMode(int32 inMode);
    
    UFUNCTION(Exec)
    void SBSetPhotoModeLightLocation(int32 LightIndex, float X, float Y, float Z);
    
    UFUNCTION(Exec)
    void SBSetNewGamePlus();
    
    UFUNCTION(Exec)
    void SBSetMultiRuleRemainTime(float InRemainTime);
    
    UFUNCTION(Exec)
    void SBSetLoadSlot(const FString& TargetFileName);
    
    UFUNCTION(Exec)
    void SBSetLanguage(const FString& InValue);
    
    UFUNCTION(Exec)
    void SBSetIgnoreEntitlementList(bool bEnable);
    
    UFUNCTION(Exec)
    void SBSetHintType(FName inHintType);
    
    UFUNCTION(Exec)
    void SBSetHDRDisplayNit(int32 DisplayNit);
    
    UFUNCTION(Exec)
    void SBSetHDR(bool bEnable);
    
    UFUNCTION(Exec)
    void SBSetGamma(float InValue);
    
    UFUNCTION(Exec)
    void SBSetFreezeIK(float InFreezeTime);
    
    UFUNCTION(Exec)
    void SBSetFishingLogBook(FName InFishAlias, int32 InCount, float InMaxWeightRecord);
    
    UFUNCTION(Exec)
    void SBSetFishingAssist(bool bEnable);
    
    UFUNCTION(Exec)
    void SBSetDollyCamMode(bool bFlag);
    
    UFUNCTION(Exec)
    void SBSetDisplayCropAspectRatio(bool bUse);
    
    UFUNCTION(Exec)
    void SBSetDifficultyAlias(FName inDifficultyAlias);
    
    UFUNCTION(Exec)
    void SBSetDifficulty(ESBGameDifficultyType InDifficulty);
    
    UFUNCTION(Exec)
    void SBSetCustomVector2D(const FString& InKey, float inValue1, float inValue2);
    
    UFUNCTION(Exec)
    void SBSetCustomInt(const FString& InKey, int32 InValue);
    
    UFUNCTION(Exec)
    void SBSetCustomFloat(const FString& InKey, float InValue);
    
    UFUNCTION(Exec)
    void SBSetCustomBool(const FString& InKey, bool InValue);
    
    UFUNCTION(Exec)
    void SBSetCouponUserInfo(const FString& inPlatform, const FString& inUserId, const FString& inUserName);
    
    UFUNCTION(Exec)
    void SBSetCamBlend(TEnumAsByte<EViewTargetBlendFunction> InNewType, float BlendExp);
    
    UFUNCTION(Exec)
    void SBSetBuySB(bool bEnable);
    
    UFUNCTION(Exec)
    void SBSetBuyNikkeDLC(bool bEnable);
    
    UFUNCTION(Exec)
    void SBSetBuyNierDLC(bool bEnable);
    
    UFUNCTION(Exec)
    void SBSetBodySuitLevel(const FString& InItemAlias, uint32 inLevel, bool bConsumeItem);
    
    UFUNCTION(Exec)
    void SBSetAsyncLoadingScreenDisable(bool bDisable);
    
    UFUNCTION(Exec)
    void SBSetAssetGroupCulture(const FString& culture);
    
    UFUNCTION(Exec)
    void SBSetAppRegionUP(bool bUPRegion);
    
    UFUNCTION(Exec)
    void SBSetAppRegionJP(bool bJPRegion);
    
    UFUNCTION(Exec)
    void SBSetAppRegionEP(bool bEPRegion);
    
    UFUNCTION(Exec)
    bool SBSetActivityAvailability(FName inActivityName, bool inbEnabled);
    
    UFUNCTION(Exec)
    void SBServerTravel(const FString& inMultiMapAlias, bool bRandomMap);
    
    UFUNCTION(Exec)
    void SBServer(const FString& InCmd);
    
    UFUNCTION(Exec)
    void SBSequenceMovie(const FString& AssetPath, float FadeIn, float FadeOut);
    
    UFUNCTION(Exec)
    void SBSequenceAttachWidget(bool bActive, bool bReset, const FString& inAssetPath, int32 hAlign, int32 vAlign, float offsetX, float offsetY, const FString& Arg1, const FString& Arg2, const FString& Arg3, const FString& Arg4, const FString& Arg5, const FString& Arg6);
    
    UFUNCTION(Exec)
    void SBSendPlayerSessionInviteName(const FString& inFriendName);
    
    UFUNCTION(Exec)
    void SBSendPlayerSessionInviteIndex(int32 inFriendIndex);
    
    UFUNCTION(Exec)
    void SBSendHelloToAWSLambda();
    
    UFUNCTION(Exec)
    void SBSelfiePhotoMode();
    
    UFUNCTION(Exec)
    void SBSceErrorDialog(int32 inErrorCode);
    
    UFUNCTION(Exec)
    void SBSaveToManualSaveSlot(int32 InSlotNum);
    
    UFUNCTION(Exec)
    void SBSaveToAutoSaveSlot(int32 InSlotNum);
    
    UFUNCTION(Exec)
    void SBSaveResetTrigger(FName TriggerAlias);
    
    UFUNCTION(Exec)
    void SBSaveObjectCount();
    
    UFUNCTION(Exec)
    void SBSaveGameOption();
    
    UFUNCTION(Exec)
    void SBSaveGame();
    
    UFUNCTION(Exec)
    void SBSaveEveryZone(bool bClearZoneContainer);
    
    UFUNCTION(Exec)
    void SBRunSpawnEvent(FName InAlias);
    
    UFUNCTION(Exec)
    void SBRunItemSpawnEvent(FName InAlias);
    
    UFUNCTION(Exec)
    void SBRunGameWorldEvent(int32 InType, FName InEventAlias);
    
    UFUNCTION(Exec)
    void SBRunEventUIAction(const FString& InAlias);
    
    UFUNCTION(Exec)
    void SBRSToPC(const FString& InScriptPath, const FString& InFunctionName);
    
    UFUNCTION(Exec)
    void SBRSToPA(const FString& InScriptPath, const FString& InFunctionName);
    
    UFUNCTION(Exec)
    void SBRewardGroupDropSequentialArc(FName RewardGroupAlias, float RelativeLocX, float RelativeLocY, float RelativeLocZ, float SpawnStartInterval, float SpawnNextInterval, float Distance, float Degree, float ColumnCount, float DistanceAdditional, float DecreaseCountFactor, float DecreaseDegree);
    
    UFUNCTION(Exec)
    void SBRewardGroupDropRandomRange(FName RewardGroupAlias, float RelativeLocX, float RelativeLocY, float RelativeLocZ, float SpawnStartInterval, float SpawnNextInterval, float DropDistanceMin, float DropDistanceMax, float DropDirXMin, float DropDirXMax, float DropDirYMin, float DropDirYMax, float DropDirZMin, float DropDirZMax);
    
    UFUNCTION(Exec)
    void SBRewardGroupDropInven(FName RewardGroupAlias, bool NotifyUI);
    
    UFUNCTION(Exec)
    void SBRewardGroupDropFormationPathLocation(FName RewardGroupAlias, float LocX, float LocY, float LocZ, const FString& formationPath, float DirX, float DirY, float DirZ);
    
    UFUNCTION(Exec)
    void SBRewardGroupDropFormationPath(FName RewardGroupAlias, float RelativeLocX, float RelativeLocY, float RelativeLocZ, const FString& formationPath);
    
    UFUNCTION(Exec)
    void SBRewardGroupDrop(FName RewardGroupAlias, float RelativeLocX, float RelativeLocY, float RelativeLocZ, float DelayTime);
    
    UFUNCTION(Exec)
    void SBReturnToSinglePlay();
    
    UFUNCTION(Exec)
    void SBRetryNikkeStage();
    
    UFUNCTION(Exec)
    void SBRestoreSkillPoint(bool bConsumeItem, FName SkillTreeAlias);
    
    UFUNCTION(Exec)
    void SBRestoreDeviceProfile();
    
    UFUNCTION(Exec)
    void SBResourceCacheUpdate();
    
    UFUNCTION(Exec)
    void SBResourceCacheSequenceList();
    
    UFUNCTION(Exec)
    void SBResourceCacheManagerLog();
    
    UFUNCTION(Exec)
    void SBResourceCacheManagerEnable(const bool inEnable);
    
    UFUNCTION(Exec)
    void SBResourceCacheEnable(const bool inEnable);
    
    UFUNCTION(Exec)
    void SBResetZone();
    
    UFUNCTION(Exec)
    void SBResetTrainingRoom();
    
    UFUNCTION(Exec)
    void SBResetRope();
    
    UFUNCTION(Exec)
    void SBResetNoticeScreenSkip();
    
    UFUNCTION(Exec)
    void SBResetDifficultyAlias();
    
    UFUNCTION(Exec)
    void SBResetCam();
    
    UFUNCTION(Exec)
    void SBRequestTargetZone(const FName& ZoneAlias, const FName& SpawnPoint);
    
    UFUNCTION(Exec)
    void SBRequestExit();
    
    UFUNCTION(Exec)
    void SBRenderHair(bool inOn);
    
    UFUNCTION(Exec)
    void SBRenderFace(bool inOn);
    
    UFUNCTION(Exec)
    void SBRemoveSkillAll();
    
    UFUNCTION(Exec)
    void SBRemoveSkill(FName inAcquisitionSkillAlias);
    
    UFUNCTION(Exec)
    void SBRemovedWidgetFindReferences(int32 InIndex);
    
    UFUNCTION(Exec)
    void SBReloadConfig();
    
    UFUNCTION(Exec)
    void SBRegisterPlayerSessionName(const FString& inPlayerName);
    
    UFUNCTION(Exec)
    void SBRegisterPlayerSessionFriendIndex(int32 inFriendIndex);
    
    UFUNCTION(Exec)
    void SBRefreshWidgetViewportSize();
    
    UFUNCTION(Exec)
    void SBQuestTrackOnOff();
    
    UFUNCTION(Exec)
    void SBQuestTrackingTargetFilterPrint();
    
    UFUNCTION(Exec)
    void SBQuestRemoveAllQuest();
    
    UFUNCTION(Exec)
    void SBQuestPause(bool bEnable);
    
    UFUNCTION(Exec)
    void SBQuestFailed(FName QuestAlias);
    
    UFUNCTION(Exec)
    void SBQuestDebuggerTaskGroupDescriptionShow();
    
    UFUNCTION(Exec)
    void SBQuestDebuggerTaskGroupDescriptionHide();
    
    UFUNCTION(Exec)
    void SBQuestDebuggerTaskDescriptionShow();
    
    UFUNCTION(Exec)
    void SBQuestDebuggerTaskDescriptionHide();
    
    UFUNCTION(Exec)
    void SBQuestDebuggerShow();
    
    UFUNCTION(Exec)
    void SBQuestDebuggerSetCompleteQuestVisible(bool bVisible);
    
    UFUNCTION(Exec)
    void SBQuestDebuggerQuestTitleShow();
    
    UFUNCTION(Exec)
    void SBQuestDebuggerQuestTitleHide();
    
    UFUNCTION(Exec)
    void SBQuestDebuggerQuestDescriptionShow();
    
    UFUNCTION(Exec)
    void SBQuestDebuggerQuestDescriptionHide();
    
    UFUNCTION(Exec)
    void SBQuestDebuggerHide();
    
    UFUNCTION(Exec)
    void SBQuestCompleteTaskGroup(FName TaskGroupAlias);
    
    UFUNCTION(Exec)
    void SBQuestCompleteTask(FName TaskAlias);
    
    UFUNCTION(Exec)
    void SBQuestCompleteList();
    
    UFUNCTION(Exec)
    void SBQuestComplete(FName QuestAlias);
    
    UFUNCTION(Exec)
    void SBQuestAcquireReward(FName QuestAlias);
    
    UFUNCTION(Exec)
    void SBQuestAcquire(FName QuestAlias);
    
    UFUNCTION(Exec)
    void SBQueryPresence();
    
    UFUNCTION(Exec)
    void SBQueryAchievements();
    
    UFUNCTION(Exec)
    void SBPVDConnect();
    
    UFUNCTION(Exec)
    void SBPushSoundMix(const FString& Path);
    
    UFUNCTION(Exec)
    void SBPushSoundEvent(FName InSoundEventAlias, float DelayTime);
    
    UFUNCTION(Exec)
    bool SBProgressTrophy(FName inTrophyName, uint32 inProgressValue);
    
    UFUNCTION(Exec)
    bool SBProgressAllTrophy();
    
    UFUNCTION(Exec)
    void SBProfilingUI();
    
    UFUNCTION(Exec)
    void SBPrintWorldTimeSeconds();
    
    UFUNCTION(Exec)
    void SBPrintUTCOffset();
    
    UFUNCTION(Exec)
    void SBPrintSupportedWindowedscreenResolutions();
    
    UFUNCTION(Exec)
    void SBPrintSupportedFullscreenResolutions();
    
    UFUNCTION(Exec)
    void SBPrintSteamInputActive();
    
    UFUNCTION(Exec)
    void SBPrintSoundVolume(ESBSoundVolumeChannel InChannel, ESBSoundVolumeControlType InControlType);
    
    UFUNCTION(Exec)
    void SBPrintScreenSize();
    
    UFUNCTION(Exec)
    void SBPrintSaveVersion();
    
    UFUNCTION(Exec)
    void SBPrintPlayerCharacterInfo();
    
    UFUNCTION(Exec)
    void SBPrintNewGamePlusCount();
    
    UFUNCTION(Exec)
    void SBPrintLogLockOnPoint();
    
    UFUNCTION(Exec)
    void SBPrintLanguageDefaultCode();
    
    UFUNCTION(Exec)
    void SBPrintKeyboardLayout();
    
    UFUNCTION(Exec)
    void SBPrintHdrToneMapLuminance();
    
    UFUNCTION(Exec)
    void SBPrintGPUAdapterDedicatedMemoryUsage();
    
    UFUNCTION(Exec)
    void SBPrintGameOptionDefaultValue(ESBGameOptionType GameOptionType);
    
    UFUNCTION(Exec)
    void SBPrintFixedFrameRate();
    
    UFUNCTION(Exec)
    void SBPrintEquipLilyMeshAssetPath();
    
    UFUNCTION(Exec)
    void SBPrintEntitlementList(bool bInRefresh);
    
    UFUNCTION(Exec)
    void SBPrintCurrentLanguage();
    
    UFUNCTION(Exec)
    void SBPrintBuildInfo();
    
    UFUNCTION(Exec)
    void SBPrintAvailableLanguages();
    
    UFUNCTION(Exec)
    void SBPrintAppId();
    
    UFUNCTION(Exec)
    void SBPrintAllScreenSize();
    
    UFUNCTION(Exec)
    void SBPrintActiveVolume();
    
    UFUNCTION(Exec)
    void SBPopUpPlayGoDebugUI();
    
    UFUNCTION(Exec)
    void SBPopSoundMix(const FString& Path);
    
    UFUNCTION(Exec)
    void SBPointRectLightCastShadow(bool inCastShadow);
    
    UFUNCTION(Exec)
    void SBPlayVibration(const FString& InPath);
    
    UFUNCTION(Exec)
    void SBPlayTestSound(const FString& InPath, float SeekToTime);
    
    UFUNCTION(Exec)
    void SBPlayTestQuartzSound(const FString& InSoundPath);
    
    UFUNCTION(Exec)
    void SBPlayTest3dSound(const FString& InSoundPath);
    
    UFUNCTION(Exec)
    void SBPlayShow(const FString& InShowDataPath);
    
    UFUNCTION(Exec)
    void SBPlayLevelSeq(FName InSeqName, float InPlayTime, const FString& InAttachActors);
    
    UFUNCTION(Exec)
    void SBPlayGoTest();
    
    UFUNCTION(Exec)
    void SBPlayerUseSkill(FName InSkillName);
    
    UFUNCTION(Exec)
    void SBPlayerUngrabObject();
    
    UFUNCTION(Exec)
    void SBPlayerTransform(FName inCharacterAlias);
    
    UFUNCTION(Exec)
    void SBPlayerSP(uint32 InValue);
    
    UFUNCTION(Exec)
    void SBPlayerShowMultiMapLevel();
    
    UFUNCTION(Exec)
    void SBPlayerShowAchievementInfo(uint32 inAchievementId, const FString& inAchievementAlias);
    
    UFUNCTION(Exec)
    void SBPlayerSetLevel(FName inLevelType, uint32 inLevel, bool bConsumeItem);
    
    UFUNCTION(Exec)
    void SBPlayerSetCameraLock(bool bLock);
    
    UFUNCTION(Exec)
    void SBPlayerRevival();
    
    UFUNCTION(Exec)
    void SBPlayerResetPhysics(bool bResetPhysics, bool bResetCloth, float FadeTime);
    
    UFUNCTION(Exec)
    void SBPlayerRemoveAchievement(const FString& inAchievementAlias);
    
    UFUNCTION(Exec)
    void SBPlayerRecreatePhysicsState();
    
    UFUNCTION(Exec)
    void SBPlayerRecoveryItems();
    
    UFUNCTION(Exec)
    void SBPlayerReceiveAchievementReward(const FString& inAchievementAlias);
    
    UFUNCTION(Exec)
    void SBPlayerProcessAchievementOnlyOne(const FString& inAchievementAlias, int32 inProgressValue);
    
    UFUNCTION(Exec)
    void SBPlayerMoveTo(float InLocationX, float InLocationY, float InLocationZ, bool InManualStop, bool InCheckLocation, bool InUseBraking, int32 InBrakingInputType, float InBrakingDistStart, float InBrakingDistEnd);
    
    UFUNCTION(Exec)
    void SBPlayerMovementMode(const FString& inMode);
    
    UFUNCTION(Exec)
    void SBPlayerMovementDisableDesireRotation(bool bActive);
    
    UFUNCTION(Exec)
    void SBPlayerMaxTachyGauge();
    
    UFUNCTION(Exec)
    void SBPlayerMaterialChange(int32 Index);
    
    UFUNCTION(Exec)
    void SBPlayerLockOnSpeed(float inWalkSpeed, float inRunSpeed);
    
    UFUNCTION(Exec)
    void SBPlayerLevelList();
    
    UFUNCTION(Exec)
    void SBPlayerJaliFace(bool bActive);
    
    UFUNCTION(Exec)
    void SBPlayerItemRecharge(const FString& ItemAlias, bool bNotifyUI);
    
    UFUNCTION(Exec)
    void SBPlayerItemBucketList(bool EquipOnly);
    
    UFUNCTION(Exec)
    void SBPlayerItemBucketItemRemove(FName InItemAlias, int32 InCount, int32 InPocketIndex);
    
    UFUNCTION(Exec)
    void SBPlayerItemBucketItemConsume(FName InItemAlias, int32 InCount, int32 InPocketIndex);
    
    UFUNCTION(Exec)
    void SBPlayerItemBucketItemAdd(FName InItemAlias, int32 InCount, int32 InStatLevel, bool bNotifyUI);
    
    UFUNCTION(Exec)
    void SBPlayerIsCompleteAchievement(uint32 inAchievementId, const FString& inAchievementAlias);
    
    UFUNCTION(Exec)
    void SBPlayerInputState(bool bState, bool bControlChar, bool bControlCharState);
    
    UFUNCTION(Exec)
    void SBPlayerIncreaseMultiMapLevel(int32 inDiffValue);
    
    UFUNCTION(Exec)
    void SBPlayerHP(float InValue);
    
    UFUNCTION(Exec)
    void SBPlayerHintList();
    
    UFUNCTION(Exec)
    void SBPlayerFrontGrabObject();
    
    UFUNCTION(Exec)
    void SBPlayerForceTurn();
    
    UFUNCTION(Exec)
    void SBPlayerEventTagClear();
    
    UFUNCTION(Exec)
    void SBPlayerEventTag(const FString& InTag);
    
    UFUNCTION(Exec)
    void SBPlayerEquipItem(const FString& EquipType, bool bEquip, const FString& ItemAlias);
    
    UFUNCTION(Exec)
    void SBPlayerEnableExtraSprint(bool bFlag);
    
    UFUNCTION(Exec)
    void SBPlayerCompleteAchievementOnlyOne(const FString& inAchievementAlias);
    
    UFUNCTION(Exec)
    void SBPlayerCompleteAchievement(const FString& inAchievementAlias);
    
    UFUNCTION(Exec)
    void SBPlayerChangeStance(const FString& Stance);
    
    UFUNCTION(Exec)
    void SBPlayerChangeBulletAlias(const FString& BulletAlias);
    
    UFUNCTION(Exec)
    void SBPlayerCameraInterpolMode(float InTime, bool bCalcNewTargetDir, bool bOnlyRotation);
    
    UFUNCTION(Exec)
    void SBPlayerCameraFadeManualPriority(bool bFade, float inFadeAmount, float InPriority);
    
    UFUNCTION(Exec)
    void SBPlayerCameraFadeAutoPriority(bool bFade, float inFadeStart, float inFadeEnd, float inFadeTime, float inFadeDelay, float InPriority);
    
    UFUNCTION(Exec)
    void SBPlayerCameraFade(bool bFade, float inFadeAmount);
    
    UFUNCTION(Exec)
    void SBPlayerBurstGauge(float InValue);
    
    UFUNCTION(Exec)
    void SBPlayerBetaGauge(float InValue);
    
    UFUNCTION(Exec)
    void SBPlayerBattleState(bool bBattleState);
    
    UFUNCTION(Exec)
    void SBPlayerAchievementList();
    
    UFUNCTION(Exec)
    void SBPlayCustomBlendSpace(float InDuration);
    
    UFUNCTION(Exec)
    void SBPlayCustomAnimMeshSlotByTag(const FString& InActorTag, const FString& InAnimName, float InPlayStartTime, float InPlayEndTime, float InPlayRate, float InBlendInTime, float InBlendOutTime, bool bInLoop, int32 LoopCount, bool bHoldEndTime, float InDeltaTime, TEnumAsByte<ESBSkelMeshSlot> inMeshSlot);
    
    UFUNCTION(Exec)
    void SBPlayCustomAnimMeshSlot(const FString& InAnimName, float InPlayStartTime, float InPlayEndTime, float InPlayRate, float InBlendInTime, float InBlendOutTime, bool bInLoop, int32 LoopCount, bool bHoldEndTime, float InDeltaTime, TEnumAsByte<ESBSkelMeshSlot> inMeshSlot);
    
    UFUNCTION(Exec)
    void SBPlayCustomAnimByTag(const FString& InActorTag, const FString& InAnimName, int32 inCustomIndex, float InPlayStartTime, float InPlayEndTime, float InPlayRate, float InBlendInTime, float InBlendOutTime, bool bInLoop, int32 LoopCount);
    
    UFUNCTION(Exec)
    void SBPlayCustomAnimByFolder(const FString& InFolderPath);
    
    UFUNCTION(Exec)
    void SBPlayCustomAnim(const FString& InAnimName, float InPlayStartTime, float InPlayEndTime, float InPlayRate, float InBlendInTime, float InBlendOutTime, bool bInLoop, int32 LoopCount, bool bHoldEndTime, float InDeltaTime, int32 inCustomIndex);
    
    UFUNCTION(Exec)
    void SBPlayCameraAnim(const FString& InPath);
    
    UFUNCTION(Exec)
    void SBPhotoModeTakeScreenshot();
    
    UFUNCTION(Exec)
    void SBPhotoModeFacialAnimType(TEnumAsByte<ESBPhotoModeFacialAnimType> SBIdleAnimType);
    
    UFUNCTION(Exec)
    void SBPhotoModeFacialAnimPosition(float position);
    
    UFUNCTION(Exec)
    void SBPhotoModeDebug();
    
    UFUNCTION(Exec)
    void SBPhotoMode();
    
    UFUNCTION(Exec)
    void SBPerformanceProfilerStop();
    
    UFUNCTION(Exec)
    void SBPerformanceProfilerStartForLevelStream();
    
    UFUNCTION(Exec)
    void SBPerformanceProfilerStart(bool bCheckGPU, float inLimit);
    
    UFUNCTION(Exec)
    void SBPerformanceProfilerMoveCamera(float InDistance);
    
    UFUNCTION(Exec)
    void SBPDODitherAlphaThreshold(float AlphaThreshold);
    
    UFUNCTION(Exec)
    void SBPauseAllSounds(bool bPause);
    
    UFUNCTION(Exec)
    void SBOverrideDeviceProfile(const FString& InProfileName);
    
    UFUNCTION(Exec)
    void SBOpenRequestBoard(bool IsNikke);
    
    UFUNCTION(Exec)
    void SBOpenLevel(FName LevelName);
    
    UFUNCTION(Exec)
    void SBOpenCredit(bool bAllowClose, bool bStartScroll);
    
    UFUNCTION(Exec)
    void SBNikkeMiniGameResultTest(const FString& LostArticleAlias, bool IsCleared);
    
    UFUNCTION(Exec)
    void SBNikkeMiniGameNextWaveUITest();
    
    UFUNCTION(Exec)
    void SBNikkeMiniGameForceVictory();
    
    UFUNCTION(Exec)
    void SBNikkeMiniGameDefenseGaugeTest(int32 AddScore);
    
    UFUNCTION(Exec)
    void SBNextChangeBody();
    
    UFUNCTION(Exec)
    void SBNewGUID();
    
    UFUNCTION(Exec)
    void SBMetaAIThink(FName inThink, FName inBehaviorAlias);
    
    UFUNCTION(Exec)
    void SBMetaAISpecialBehaviorTag(FName inTargetNodeTag);
    
    UFUNCTION(Exec)
    void SBMetaAISetNodeIndex(int32 inNodeIndex);
    
    UFUNCTION(Exec)
    void SBMetaAIAlias(FName inMetaAIAlias);
    
    UFUNCTION(Exec)
    void SBMessageBoxV3Text(const FString& inTitleText, const FString& inDescText, int32 InType);
    
    UFUNCTION(Exec)
    void SBMessageBoxV3StringTable(const FString& inTitleKey, const FString& inDescKey, bool bShowSaveTimeMessage, int32 InType);
    
    UFUNCTION(Exec)
    void SBMeshStudioShowTest();
    
    UFUNCTION(Exec)
    void SBMemRecordStop();
    
    UFUNCTION(Exec)
    void SBMemRecordStart(float Interval, int32 FlushCount, float MemSpikeThreshold);
    
    UFUNCTION(Exec)
    void SBMaterialTest(int32 Index);
    
    UFUNCTION(Exec)
    void SBMatchRequestWithName(const FString& InMapName, const FString& inOwnerName, const FString& inMatchName);
    
    UFUNCTION(Exec)
    void SBMatchRequest();
    
    UFUNCTION(Exec)
    void SBManualSaveList();
    
    UFUNCTION(Exec)
    void SBLuaCheat(const FString& CallFunc);
    
    UFUNCTION(Exec)
    void SBLookAtTargetTag(FName inSourceTag, const FString& inTargetTag, const FString& inTargetSocket, float inLookAtZOffset);
    
    UFUNCTION(Exec)
    void SBLogTickToTime(int64 Tick);
    
    UFUNCTION(Exec)
    void SBLogThreadCount();
    
    UFUNCTION(Exec)
    void SBLogShowDataContainsKey(int32 ShowKeyEnum);
    
    UFUNCTION(Exec)
    void SBLogSaveData(int32 InSlotNum);
    
    UFUNCTION(Exec)
    void SBLogPlayerLocation();
    
    UFUNCTION(Exec)
    void SBLogPackageDependency(FName InPackageName);
    
    UFUNCTION(Exec)
    void SBLogEnvState();
    
    UFUNCTION(Exec)
    void SBLogDLSSEstimatedVRAM();
    
    UFUNCTION(Exec)
    void SBLogDirectoriesNeverCook();
    
    UFUNCTION(Exec)
    void SBLogDeviceProfileName();
    
    UFUNCTION(Exec)
    void SBLogCVarValue(const FString& InCVar);
    
    UFUNCTION(Exec)
    void SBLogAllVibrationComponent(bool bDetail);
    
    UFUNCTION(Exec)
    void SBLogAllAudioComponent();
    
    UFUNCTION(Exec)
    void SBLogActiveInteraction();
    
    UFUNCTION(Exec)
    void SBLoadSnapShot(const FString& SnapshotName);
    
    UFUNCTION(Exec)
    void SBLoadShortcutData(int32 InIndex);
    
    UFUNCTION(Exec)
    void SBLoadSaveData(const FString& InPath);
    
    UFUNCTION(Exec)
    void SBLoadMap(const FString& InMapName);
    
    UFUNCTION(Exec)
    void SBLoadLevel(const FString& InLevelPath);
    
    UFUNCTION(Exec)
    void SBLoadingScreenFadeOut(float InDuration, float InFromAlpha, float InEndAlpha, float InDelay);
    
    UFUNCTION(Exec)
    void SBLoadingScreenFadeIn(float InDuration, float InFromAlpha, float InEndAlpha, float InDelay);
    
    UFUNCTION(Exec)
    void SBLoadingScreenFadeAuto(float InLifeTime, float InStartDuration, float InStartAlphaFrom, float InStartAlphaEnd, float InEndDuration, float InEndAlphaFrom, float InEndAlphaEnd);
    
    UFUNCTION(Exec)
    void SBLoadingScreenAlpha(float InAlpha);
    
    UFUNCTION(Exec)
    void SBLoadGameOption();
    
    UFUNCTION(Exec)
    void SBLoadFromShortcut(const FString& InMapName, const FString& InFilename);
    
    UFUNCTION(Exec)
    void SBLoadFromManualSaveSlot(int32 InSlotNum);
    
    UFUNCTION(Exec)
    void SBLoadFromAutoSaveSlot(int32 InSlotNum);
    
    UFUNCTION(Exec)
    void SBLLMRecordStop();
    
    UFUNCTION(Exec)
    void SBLLMRecordStart(float Interval);
    
    UFUNCTION(Exec)
    void SBLineNotify(const FString& inMessage, const FString& inToken);
    
    UFUNCTION(Exec)
    void SBLiftUpFish(FName InFishAlias);
    
    UFUNCTION(Exec)
    void SBLeaveTrainingRoom();
    
    UFUNCTION(Exec)
    void SBJoinPlayerSession();
    
    UFUNCTION(Exec)
    void SBJiraLoginUI();
    
    UFUNCTION(Exec)
    void SBJiraLogin(const FString& ID, const FString& pw);
    
    UFUNCTION(Exec)
    void SBItemTableGroupPrint(int32 inCategory, int32 inRarity);
    
    UFUNCTION(Exec)
    void SBItemMustAcquisition();
    
    UFUNCTION(Exec)
    void SBIsHeadphonePluggedIn();
    
    UFUNCTION(Exec)
    void SBInvalidationRoot();
    
    UFUNCTION(Exec)
    void SBInputKeyMappingTest();
    
    UFUNCTION(Exec)
    void SBInputKeyMappingSave();
    
    UFUNCTION(Exec)
    void SBInputKeyMappingRestore();
    
    UFUNCTION(Exec)
    void SBInputKeyMappingForceRebuild();
    
    UFUNCTION(Exec)
    void SBInputBlockTimer(float inBlockTime, bool inUseRealTime);
    
    UFUNCTION(Exec)
    void SBInputBlockManual(bool bInputBlock, float DelayTime);
    
    UFUNCTION(Exec)
    void SBIgnoreHintActivateZoneTrigger(bool bIgnore);
    
    UFUNCTION(Exec)
    void SBHUDViewportSize(int32 Width, int32 Height);
    
    UFUNCTION(Exec)
    void SBHUDViewportPos(bool bSet, int32 X, int32 Y);
    
    UFUNCTION(Exec)
    void SBHUDSkillRefreshIcon();
    
    UFUNCTION(Exec)
    void SBHUDRefresh(float DelayTime);
    
    UFUNCTION(Exec)
    void SBHUDPlayerInfoSendWigetEvent(const FString& inEvent);
    
    UFUNCTION(Exec)
    void SBHUDPlayerInfoDetailToggle();
    
    UFUNCTION(Exec)
    void SBHUDModeChange(int32 Mode);
    
    UFUNCTION(Exec)
    void SBHUDEnemyStatInfoDetailToggle();
    
    UFUNCTION(Exec)
    void SBHUDAspectRatio(float Value);
    
    UFUNCTION(Exec)
    void SBHideActor(const FString& TagName, bool bHide);
    
    UFUNCTION(Exec)
    void SBHDRTextureRenderShow(const FString& InTexturePath, bool bImageView);
    
    UFUNCTION(Exec)
    void SBHDRTextureRenderHide();
    
    UFUNCTION(Exec)
    void SBHDRTextureRefreshDPI();
    
    UFUNCTION(Exec)
    void SBHDRContrastDetail(float InValue);
    
    UFUNCTION(Exec)
    void SBHDRBrightnessDetail(float InValue);
    
    UFUNCTION(Exec)
    void SBGWorldOrigin(int32 InLocationX, int32 InLocationY, int32 InLocationZ);
    
    UFUNCTION(Exec)
    void SBGetRewardFish(FName InRewardGroupBy, FName InLureAlias, float InWeight);
    
    UFUNCTION(Exec)
    void SBGetPublicIP();
    
    UFUNCTION(Exec)
    void SBGetPhotoModeLightPresetData(int32 LightIndex);
    
    UFUNCTION(Exec)
    void SBGetPhotoModeLightLocation(int32 LightIndex);
    
    UFUNCTION(Exec)
    void SBGetGameIntentInfo();
    
    UFUNCTION(Exec)
    void SBGetFriendList();
    
    UFUNCTION(Exec)
    void SBGetCouponUserInfo(const FString& inPlatform, const FString& inUserId);
    
    UFUNCTION(Exec)
    void SBGetCoupon(const FString& inPlatform, const FString& inUserId, const FString& inUserName, const FString& inUserAccessToken, const FString& inCouponServer);
    
    UFUNCTION(Exec)
    void SBGenerateSpawnGroupRuleFromZone(const FString& inZoneAlias);
    
    UFUNCTION(Exec)
    void SBGenerateSpawnGroupRule(const FString& inSpawnGroupRuleAlias);
    
    UFUNCTION(Exec)
    void SBGenerateMapResPosition(int32 RequestNum, float MinRadius, float MaxRadius, float Threshold, float GenerateMinBoundX, float GenerateMinBoundY, float GenerateMaxBoundX, float GenerateMaxBoundY, int32 CollisionCheckCount);
    
    UFUNCTION(Exec)
    void SBGenerateCirclePack(int32 RequestNum, float MinRadius, float MaxRadius, float Threshold, float GenerateMinBoundX, float GenerateMinBoundY, float GenerateMaxBoundX, float GenerateMaxBoundY, int32 CollisionCheckCount, int32 OccluderNum, float MinOccluderRadius, float MaxOccluderRadius);
    
    UFUNCTION(Exec)
    void SBGameUserSettings_StopBenchmark();
    
    UFUNCTION(Exec)
    void SBGameUserSettings_SetPreset(int64 inQuality);
    
    UFUNCTION(Exec)
    void SBGameUserSettings_Set(const FString& inOption, int64 inQuality);
    
    UFUNCTION(Exec)
    void SBGameUserSettings_RunBenchmark(int32 inStep);
    
    UFUNCTION(Exec)
    void SBGameUserSettings_ResolutionScale(float InScale);
    
    UFUNCTION(Exec)
    void SBGameUserSettings_HDDMode(bool inEnable);
    
    UFUNCTION(Exec)
    void SBGameProgressSubQuest(FName CheatQuestAlias, FName Difficulty, int32 CommandSlotIndex, int32 Round);
    
    UFUNCTION(Exec)
    void SBGameProgressEpicQuest(FName CheatQuestAlias, FName Difficulty, int32 CommandSlotIndex, int32 Round);
    
    UFUNCTION(Exec)
    void SBGameProgressCommand(FName CheatQuestAlias, bool bEnableNewGamePlus, FName DifficultyAlias, int32 DebugCommandSlotIndex);
    
    UFUNCTION(Exec)
    void SBGamePauseTagListPrint();
    
    UFUNCTION(Exec)
    void SBGamePaused(bool inPaused);
    
    UFUNCTION(Exec)
    void SBGameOptionSubtitleVisible(bool bVisible);
    
    UFUNCTION(Exec)
    void SBGameOptionSetActiveHDRLuminanceController(bool bActive);
    
    UFUNCTION(Exec)
    void SBGameOptionResetNeedInitialSetup();
    
    UFUNCTION(Exec)
    void SBGameOptionResetNeedInitialContentsSetup();
    
    UFUNCTION(Exec)
    void SBGameOptionMasterVolume(float InVolume);
    
    UFUNCTION(Exec)
    void SBGameOptionKeyMappingReload();
    
    UFUNCTION(Exec)
    void SBGameOptionHUDVisible(bool bVisible);
    
    UFUNCTION(Exec)
    void SBGameOptionContrast(int32 InValue);
    
    UFUNCTION(Exec)
    void SBGameOptionBGMVolume(float InVolume);
    
    UFUNCTION(Exec)
    void SBForceLOD(int32 inLOD);
    
    UFUNCTION(Exec)
    void SBForceLag(float inDelayStart, float inLagTime);
    
    UFUNCTION(Exec)
    void SBForceHitFish(FName InFishAlias);
    
    UFUNCTION(Exec)
    void SBForceHapticVibration(bool bEnable);
    
    UFUNCTION(Exec)
    void SBForceGCActorPool();
    
    UFUNCTION(Exec)
    void SBForceGC();
    
    UFUNCTION(Exec)
    void SBForceEnsure();
    
    UFUNCTION(Exec)
    void SBForceCrash();
    
    UFUNCTION(Exec)
    void SBFeedbackWarpIssue(const FString& InIssueName);
    
    UFUNCTION(Exec)
    void SBFeedbackUMapRefresh();
    
    UFUNCTION(Exec)
    void SBFeedbackUMapIssueMapChange(const FString& InIssueName, const FString& ChangeMapName);
    
    UFUNCTION(Exec)
    void SBFeedbackUMapIssueCreate(const FString& InSummary, const FString& InDesc, int32 InPriority);
    
    UFUNCTION(Exec)
    void SBFeedbackUMapIssueClose(const FString& InIssueName);
    
    UFUNCTION(Exec)
    void SBFeedbackOpenList();
    
    UFUNCTION(Exec)
    void SBFeedbackIssueUpdate(const FString& InIssueName, const FString& InSummary, const FString& InDesc, int32 InPriority, int32 InProgress);
    
    UFUNCTION(Exec)
    void SBFeedbackIssueRefresh(const FString& InIssueName);
    
    UFUNCTION(Exec)
    void SBFeedbackCommentRemove(const FString& InIssueName, const FString& InCommentID);
    
    UFUNCTION(Exec)
    void SBFeedbackCommentRefresh(const FString& InIssueName);
    
    UFUNCTION(Exec)
    void SBFeedbackCommentEdit(const FString& InIssueName, const FString& InCommentID, const FString& InCommentBody);
    
    UFUNCTION(Exec)
    void SBFeedbackCommentAdd(const FString& InIssueName, const FString& InCommentBody);
    
    UFUNCTION(Exec)
    void SBFeedbackCloseList();
    
    UFUNCTION(Exec)
    void SBFeedbackChangeNextState();
    
    UFUNCTION(Exec)
    void SBFailedQuest(FName QuestAlias);
    
    UFUNCTION(Exec)
    void SBExitNikkeStage();
    
    UFUNCTION(Exec)
    void SBEquipBodySuit(int32 ShortCutNum);
    
    UFUNCTION(Exec)
    void SBEnvState(FName EnvAlias, FName TagName);
    
    UFUNCTION(Exec)
    void SBEnvControlVolControlOverride(const FString& VolumeName, bool bActive);
    
    UFUNCTION(Exec)
    void SBEntitlementInfinityLoading(bool bInEnable);
    
    UFUNCTION(Exec)
    void SBEnterWorld(const FName& EnterWorldAlias);
    
    UFUNCTION(Exec)
    void SBEnterTrainingRoom(FName TrainningRoomAlias);
    
    UFUNCTION(Exec)
    void SBEnterNikkeStage(FName NikkeStage, FName EnvSpawnAlias);
    
    UFUNCTION(Exec)
    void SBEnteredByActivityFakeClear();
    
    UFUNCTION(Exec)
    void SBEnteredByActivityFake();
    
    UFUNCTION(Exec)
    bool SBEndActivity(FName inActivityName);
    
    UFUNCTION(Exec)
    void SBEnableAreaVolume(FName& InName, bool bFlag);
    
    UFUNCTION(Exec)
    void SBDumpPackageList();
    
    UFUNCTION(Exec)
    void SBDualSenseVibrationMode(int32 Mode);
    
    UFUNCTION(Exec)
    void SBDualSenseVibration(uint8 LargeMotor, uint8 SmallMotor);
    
    UFUNCTION(Exec)
    void SBDualSenseToggleAdaptiveTriggerStateLog(int32 Direction);
    
    UFUNCTION(Exec)
    void SBDualSenseToggleAdaptiveTriggerPositionLog(int32 Direction);
    
    UFUNCTION(Exec)
    void SBDualSenseCheckUpdate();
    
    UFUNCTION(Exec)
    void SBDualSenseCheckAudioSupport();
    
    UFUNCTION(Exec)
    void SBDualSenseApplyTriggerEffectWithData(const FString& DataPath);
    
    UFUNCTION(Exec)
    void SBDualSenseAdaptiveTriggerWeapon(uint8 StartPosition, uint8 EndPosition, uint8 Strength, int32 Direction);
    
    UFUNCTION(Exec)
    void SBDualSenseAdaptiveTriggerVibration(uint8 position, uint8 Frequency, uint8 Amplitude, int32 Direction);
    
    UFUNCTION(Exec)
    void SBDualSenseAdaptiveTriggerSlopeFeedback(uint8 InStartPosition, uint8 InEndPosition, uint8 InStartStrength, uint8 InEndStrength, int32 Direction);
    
    UFUNCTION(Exec)
    void SBDualSenseAdaptiveTriggerMultiplePositionVibration(uint8 Frequency, uint8 Amplitude0, uint8 Amplitude1, uint8 Amplitude2, uint8 Amplitude3, uint8 Amplitude4, uint8 Amplitude5, uint8 Amplitude6, uint8 Amplitude7, uint8 Amplitude8, uint8 Amplitude9, int32 Direction);
    
    UFUNCTION(Exec)
    void SBDualSenseAdaptiveTriggerMultiplePositionFeedback(uint8 Strength0, uint8 Strength1, uint8 Strength2, uint8 Strength3, uint8 Strength4, uint8 Strength5, uint8 Strength6, uint8 Strength7, uint8 Strength8, uint8 Strength9, int32 Direction);
    
    UFUNCTION(Exec)
    void SBDualSenseAdaptiveTriggerFeedback(uint8 position, uint8 Strength, int32 Direction);
    
    UFUNCTION(Exec)
    void SBDualSenseAdaptiveTriggerClear(int32 Direction);
    
    UFUNCTION(Exec)
    void SBDroneSpotLightCastShadow(bool Inactive);
    
    UFUNCTION(Exec)
    void SBDrawTestCurve(float InDrawTime, float TargetDist, float ControlPointLength);
    
    UFUNCTION(Exec)
    void SBDrawPlayerMove(float InDrawTime);
    
    UFUNCTION(Exec)
    void SBDoesPakExist(int32 PakNum);
    
    UFUNCTION(Exec)
    void SBDiffCaptureObjectList();
    
    UFUNCTION(Exec)
    void SBDetachPlayerEquipment(FName inEquipmentAlias);
    
    UFUNCTION(Exec)
    void SBDebugTheaterPlay(int32 InValue);
    
    UFUNCTION(Exec)
    void SBDebugSave(bool Flag);
    
    UFUNCTION(Exec)
    void SBDebugManualSaveData(int32 InSlotNum);
    
    UFUNCTION(Exec)
    void SBDebugLogStatLLMFull(bool bRecord, bool bReportAndClear);
    
    UFUNCTION(Exec)
    void SBDebugLogOnSyncLoadPackage(bool bEnable);
    
    UFUNCTION(Exec)
    void SBDebugLogOnSyncLoadingFlush(bool bEnable);
    
    UFUNCTION(Exec)
    void SBDebugLogOnAsyncLoadPackage(bool bEnable);
    
    UFUNCTION(Exec)
    void SBDebugLogOnAsyncLoadingFlush(bool bEnable);
    
    UFUNCTION(Exec)
    void SBDebugAutoSaveData(int32 InSlotNum);
    
    UFUNCTION(Exec)
    void SBCurrentWorldInfo();
    
    UFUNCTION(Exec)
    void SBCurrentViewTarget();
    
    UFUNCTION(Exec)
    void SBCurrentDeviceSteamDeck(bool bEnable);
    
    UFUNCTION(Exec)
    void SBCreditDebugCloseAllow(bool bDebugAllowClose);
    
    UFUNCTION(Exec)
    void SBCreatePlayerSession();
    
    UFUNCTION(Exec)
    void SBCreateItemRange(FName InItemAlias, uint32 InItemCount, uint32 InStatLevel, float RelativeLocX, float RelativeLocY, float RelativeLocZ, float SpawnDelayTime);
    
    UFUNCTION(Exec)
    void SBCreateItemArc(FName InItemAlias, uint32 InItemCount, uint32 InStatLevel, float Distance, float angle, int32 ArcCount, float DistanceAdditional, float DecreaseCountFactor, float DecreaseDegree, float RelativeLocX, float RelativeLocY, float RelativeLocZ, float SpawnDelayTime);
    
    UFUNCTION(Exec)
    void SBCreateItem(FName InItemAlias, uint32 InStatLevel, uint32 InItemCount, float RelativeLocX, float RelativeLocY, float RelativeLocZ, float RelativeRotYaw, float SpawnDelayTime);
    
    UFUNCTION(Exec)
    void SBCreateCharacter(FName inCharacterAlias, float RelativeLocX, float RelativeLocY, float RelativeLocZ, float RelativeRotYaw);
    
    UFUNCTION(Exec)
    void SBConnectDedicatedServer(const FString& inServerIP, const FString& inMultiMapAlias);
    
    UFUNCTION(Exec)
    void SBConfigOverrideString(const FString& inOptionName, const FString& InValue);
    
    UFUNCTION(Exec)
    void SBConfigOverrideInt(const FString& inOptionName, int32 InValue);
    
    UFUNCTION(Exec)
    void SBConfigOverrideFloatArray(const FString& inOptionName, const FString& InData);
    
    UFUNCTION(Exec)
    void SBConfigOverrideFloat(const FString& inOptionName, float InValue);
    
    UFUNCTION(Exec)
    void SBConfigOverrideBool(const FString& inOptionName, bool InValue);
    
    UFUNCTION(Exec)
    void SBConditionTest(const FString& inConditionAlias);
    
    UFUNCTION(Exec)
    void SBConditionGroupTest(const FString& inConditionAlias);
    
    UFUNCTION(Exec)
    void SBCompleteQuest(FName QuestAlias, bool bForceAcquireRequestReward);
    
    UFUNCTION(Exec)
    void SBCompleteNikkeStage(bool bVictory);
    
    UFUNCTION(Exec)
    void SBCompleteHint(FName inHintAlias);
    
    UFUNCTION(Exec)
    void SBColorVisionDeficiency(int32 InType, float inSeverity, bool inCorrectDeficiency, bool inShowCorrectionWithDeficiency);
    
    UFUNCTION(Exec)
    void SBClearFixedEntitlement();
    
    UFUNCTION(Exec)
    void SBClearDebugLog(const FString& LogCategoryName);
    
    UFUNCTION(Exec)
    void SBClearCaptureObjectList();
    
    UFUNCTION(Exec)
    void SBClearACPool();
    
    UFUNCTION(Exec)
    void SBCheckTrialVersion();
    
    UFUNCTION(Exec)
    void SBCheckPlayGoDebug();
    
    UFUNCTION(Exec)
    void SBCheckChunkSize(uint32 PakchunkID);
    
    UFUNCTION(Exec)
    void SBCheckChunkProgress(uint32 PakchunkID);
    
    UFUNCTION(Exec)
    void SBCheckChunkLocation(uint32 PakchunkID);
    
    UFUNCTION(Exec)
    void SBCheckAvaiableLocationFromLineCheck(float StartX, float StartY, float startZ, float EndX, float EndY, float endZ, float checkRadius);
    
    UFUNCTION(Exec)
    void SBCheatTableCommand(const FString& inCommandGroup);
    
    UFUNCTION(Exec)
    void SBCheatProgressSubQuestNewGamePlusMinMax(FName CheatQuestAlias, FName DifficultyAlias, int32 DebugCommandSlotIndex);
    
    UFUNCTION(Exec)
    void SBCheatProgressSubQuestMinMax(FName CheatQuestAlias, int32 DebugCommandSlotIndex);
    
    UFUNCTION(Exec)
    void SBCheatProgressSubQuestCommand(FName CheatQuestAlias, bool bEnableNewGamePlus, FName DifficultyAlias, int32 DebugCommandSlotIndex);
    
    UFUNCTION(Exec)
    void SBCheatProgressSubQuest(FName CheatQuestAlias);
    
    UFUNCTION(Exec)
    void SBCheatProgressQuestNewGamePlusMinMax(FName CheatQuestAlias, FName DifficultyAlias, int32 DebugCommandSlotIndex);
    
    UFUNCTION(Exec)
    void SBCheatProgressQuestNewGamePlus(FName CheatQuestAlias, FName DifficultyAlias);
    
    UFUNCTION(Exec)
    void SBCheatProgressQuestMinMax(FName CheatQuestAlias, int32 DebugCommandSlotIndex);
    
    UFUNCTION(Exec)
    void SBCheatProgressQuest(FName CheatQuestAlias);
    
    UFUNCTION(Exec)
    void SBCheatGroupLoop(FName GroupName, int32 LoopCount);
    
    UFUNCTION(Exec)
    void SBCheatGroup(FName GroupName);
    
    UFUNCTION(Exec)
    void SBCharacterSetting(FName GamePlayProgressAlias, int32 CommandSlotIndexm, int32 Round);
    
    UFUNCTION(Exec)
    void SBCharacterDespawnFromTag(const FString& InTag);
    
    UFUNCTION(Exec)
    void SBChangeWorld(const FString& changeWorld);
    
    UFUNCTION(Exec)
    void SBChangeRule(FName InRuleAlias);
    
    UFUNCTION(Exec)
    void SBChangeMesh(int32 MeshInfoIndex, FName MeshPath, FName AnimPath);
    
    UFUNCTION(Exec)
    void SBChangeFace(FName MeshPath);
    
    UFUNCTION(Exec)
    void SBChangeBody(FName MeshPath);
    
    UFUNCTION(Exec)
    void SBCaptureObjectList();
    
    UFUNCTION(Exec)
    void SBCameraFOV(float InNewFov);
    
    UFUNCTION(Exec)
    void SBBossKillInfinity(bool bActive, float inRepeatTime);
    
    UFUNCTION(Exec)
    void SBBossChallengeUnlockStageReset();
    
    UFUNCTION(Exec)
    void SBBossChallengeUnlockAllStage();
    
    UFUNCTION(Exec)
    void SBBossChallengeUnlockAllPreset();
    
    UFUNCTION(Exec)
    void SBBossChallengeUnlockAllMode();
    
    UFUNCTION(Exec)
    void SBBossChallengeUnlockAll();
    
    UFUNCTION(Exec)
    void SBBossChallengeResetAllPreset();
    
    UFUNCTION(Exec)
    void SBBossChallengeResetAllMode();
    
    UFUNCTION(Exec)
    void SBBossChallengeResetAll();
    
    UFUNCTION(Exec)
    void SBBossChallengeRecordResetStage(const FString& InStageAlias);
    
    UFUNCTION(Exec)
    void SBBossChallengeRecordReset();
    
    UFUNCTION(Exec)
    void SBBossChallengePrintBestRecord();
    
    UFUNCTION(Exec)
    void SBBossChallengeExit();
    
    UFUNCTION(Exec)
    void SBBossChallengeCompleteAllStage();
    
    UFUNCTION(Exec)
    void SBBossChallenge(const FName& BossChallengeAlias, const int32 PlayerPreset, int32 Difficulty);
    
    UFUNCTION(Exec)
    void SBBoneToBone(float InKeepDur, float InInterpTime, int32 InIndex);
    
    UFUNCTION(Exec)
    void SBBlockLevelStreaming(bool bBlock);
    
    UFUNCTION(Exec)
    void SBBackupTest(int32 BackupSlotNum);
    
    UFUNCTION(Exec)
    void SBBackupDelete(int32 BackupSlotNum);
    
    UFUNCTION(Exec)
    void SBAutoSaveList();
    
    UFUNCTION(Exec)
    void SBAutoMemReportStop();
    
    UFUNCTION(Exec)
    void SBAutoMemReportStart(float Interval);
    
    UFUNCTION(Exec)
    void SBAutoLoginWithOnlineIdentity();
    
    UFUNCTION(Exec)
    void SBAudioHRTFEnabledForAllEnable();
    
    UFUNCTION(Exec)
    void SBAudioHRTFEnabledForAllDisable();
    
    UFUNCTION(Exec)
    void SBAudio3DMixdownPassthroughEnable();
    
    UFUNCTION(Exec)
    void SBAudio3DMixdownPassthroughDisable();
    
    UFUNCTION(Exec)
    void SBAttenuationVisualize(bool bVisualize);
    
    UFUNCTION(Exec)
    void SBAttachPlayerEquipment(FName inEquipmentAlias);
    
    UFUNCTION(Exec)
    void SBAsyncLoadingScreenStop(float FadeDuration);
    
    UFUNCTION(Exec)
    void SBAsyncLoadingScreenPlay(float FadeDuration);
    
    UFUNCTION(Exec)
    void SBArcEventSpawn(int32 MaxCount);
    
    UFUNCTION(Exec)
    void SBApplyEffectMe(FName inEffectAlias);
    
    UFUNCTION(Exec)
    void SBApplyEffect(FName inEffectAlias, int32 InActorGUID);
    
    UFUNCTION(Exec)
    void SBAppFunc(FName AppRegionName, bool bEnable);
    
    UFUNCTION(Exec)
    void SBAnimSequenceGetTimeFromPos(const FString& AssetPath, const FString& BoneName, float InX, float InY, float InZ);
    
    UFUNCTION(Exec)
    void SBAnimSequenceBake(const FString& AssetPath);
    
    UFUNCTION(Exec)
    void SBAIMovePath(FName InAlias, uint32 InActorGUID);
    
    UFUNCTION(Exec)
    void SBAdjustSoundVolume(ESBSoundVolumeChannel InChannel, float Volume, ESBSoundVolumeControlType InControlType);
    
    UFUNCTION(Exec)
    void SBAddMaterialParamTest();
    
    UFUNCTION(Exec)
    void SBAddFixedEntitlement(const FString& InEntitlementId);
    
    UFUNCTION(Exec)
    void SBAddEntitlement(const FString& InEntitlementId);
    
    UFUNCTION(Exec)
    void SBAddDebugMessageFromStringTable(const FString& InDebugStringTableKey, TEnumAsByte<ESBLocalize> InLocalizeType);
    
    UFUNCTION(Exec)
    void SBAddDebugMessage(const FString& InDebugString);
    
    UFUNCTION(Exec)
    void SBActorTickDistance(float InDistance);
    
    UFUNCTION(Exec)
    void SBActorRenderDistance(float InDistance);
    
    UFUNCTION(Exec)
    void SBActorInfo(const FString& inActorName);
    
    UFUNCTION(Exec)
    void SBActiveCamp(FName CampAlias);
    
    UFUNCTION(Exec)
    void SBActivateHint(FName inHintAlias);
    
    UFUNCTION(Exec)
    void SBAcquireSkillAll(bool bProgressAchievement, bool bNewGamePlusSkill, bool bDroneSkill);
    
    UFUNCTION(Exec)
    void SBAcquireSkill(FName inAcquisitionSkillAlias, bool bProgressAchievement, bool bDonotConsumeSP);
    
    UFUNCTION(Exec)
    void SBAcquireQuest(FName QuestAlias);
    
    UFUNCTION(Exec)
    void SB720p();
    
    UFUNCTION(Exec)
    void SB2160p();
    
    UFUNCTION(Exec)
    void SB1440p();
    
    UFUNCTION(Exec)
    void SB1080p();
    
    UFUNCTION(Exec)
    void ProfilePoint_F02(int32 Index);
    
    UFUNCTION(Exec)
    void ProfilePoint_F01(int32 Index);
    
    UFUNCTION(Exec)
    void ProfilePoint_E05(int32 Index);
    
    UFUNCTION(Exec)
    void ProfilePoint_E03(int32 Index);
    
    UFUNCTION(Exec)
    void ProfilePoint_C05(int32 Index);
    
};

