#pragma once
#include "CoreMinimal.h"
#include "ESBUILogicType.generated.h"

UENUM()
enum ESBUILogicType {
    ESBUILogicType_NONE,
    ESBUILogicType_HUD,
    ESBUILogicType_HUDGetNotice,
    ESBUILogicType_HUDGetNoticeSlot,
    ESBUILogicType_HUDGetNewNotice,
    ESBUILogicType_HUDGetNewNoticeSlot,
    ESBUILogicType_HUDSystemNotice,
    ESBUILogicType_HUDSystemNoticeSlot,
    ESBUILogicType_HUDItemNotice,
    ESBUILogicType_HUDItemNoticeSlot,
    ESBUILogicType_HUDItemNewNotice,
    ESBUILogicType_HUDItemNewNoticeSlot,
    ESBUILogicType_HUDPlayerInfo,
    ESBUILogicType_HUDEnemyInfo,
    ESBUILogicType_HUDEnemyStateBar,
    ESBUILogicType_HUDEffectIcon,
    ESBUILogicType_HUDSave,
    ESBUILogicType_HUDSaveList,
    ESBUILogicType_HUDLoadList,
    ESBUILogicType_HUDDead,
    ESBUILogicType_HUDFade,
    ESBUILogicType_HUDScanField,
    ESBUILogicType_HUDScanFieldSlot,
    ESBUILogicType_HUDInteractable,
    ESBUILogicType_HUDInteractableSlot,
    ESBUILogicType_HUDSkill,
    ESBUILogicType_HUDSkillSlot,
    ESBUILogicType_HUDSkillMarker,
    ESBUILogicType_HUDSkillEquipmentPopup,
    ESBUILogicType_HUDSkillEquipmentPopupSlot,
    ESBUILogicType_HUDSkillPoint,
    ESBUILogicType_HUDSkillPreview,
    ESBUILogicType_HUDSystemInfo,
    ESBUILogicType_HUDBodySuit,
    ESBUILogicType_HUDEnhanceResult,
    ESBUILogicType_HUDItemSlot,
    ESBUILogicType_HUDItemEquip,
    ESBUILogicType_HUDMultiPlayPvp,
    ESBUILogicType_HUDNightOperation,
    ESBUILogicType_HUDNightOperationFriendSlot,
    ESBUILogicType_HUDNightOperationFriendIndicator,
    ESBUILogicType_HUDTPSMode,
    ESBUILogicType_HUDTPSBullet,
    ESBUILogicType_HUDTPSBulletSlot,
    ESBUILogicType_HUDTPSNikkeMode,
    ESBUILogicType_HUDNikkeEnemy,
    ESBUILogicType_HUDNikkeQte,
    ESBUILogicType_HUDFishing,
    ESBUILogicType_HUDFishingDebugger,
    ESBUILogicType_HUDTachySlot,
    ESBUILogicType_HUDQuestDebugger,
    ESBUILogicType_HUDNotifyCoreItem,
    ESBUILogicType_HUDNotifyQuest,
    ESBUILogicType_HUDNotifyQuestTask,
    ESBUILogicType_HUDNotifyUpdate,
    ESBUILogicType_HUDNotifySkillExp,
    ESBUILogicType_HUDNotifyCanGain,
    ESBUILogicType_HUDNotifySpecialReward,
    ESBUILogicType_HUDNotifyReturn,
    ESBUILogicType_HUDNotifyLilyExp,
    ESBUILogicType_HUDTracking,
    ESBUILogicType_HUDTrackingCompass,
    ESBUILogicType_HUDTrackingSlot,
    ESBUILogicType_HUDOffScreenIndicator,
    ESBUILogicType_HUDOffScreenIndicatorSlot,
    ESBUILogicType_HUDHint,
    ESBUILogicType_HUDCampIndicator,
    ESBUILogicType_HUDQuestInfo,
    ESBUILogicType_HUDQuestInfoSlot,
    ESBUILogicType_HUDDroneIndicator,
    ESBUILogicType_HUDCountDown,
    ESBUILogicType_HUDActionAssist,
    ESBUILogicType_HUDNikkeLostGoodsIndicator,
    ESBUILogicType_HUDPostRoot,
    ESBUILogicType_SequencePostRoot,
    ESBUILogicType_SaveMarker,
    ESBUILogicType_NotifyMessage,
    ESBUILogicType_SkillAcquisition,
    ESBUILogicType_InteractionPoint,
    ESBUILogicType_Loading,
    ESBUILogicType_GameMenu,
    ESBUILogicType_GameMenuTab,
    ESBUILogicType_GameMenuSkillPoint,
    ESBUILogicType_GameMenuNewSkill,
    ESBUILogicType_GameMenuNewSkillTree,
    ESBUILogicType_GameMenuNewSkillTreeSlot,
    ESBUILogicType_GameMenuNewSkillResetPopup,
    ESBUILogicType_GameMenuEquip,
    ESBUILogicType_GameMenuEquipCallOutGear,
    ESBUILogicType_GameMenuEquipCallOutExoSpine,
    ESBUILogicType_GameMenuEquipMount,
    ESBUILogicType_GameMenuEquipInven,
    ESBUILogicType_GameMenuEquipDetail,
    ESBUILogicType_GameMenuEquipIconSlot,
    ESBUILogicType_GameMenuEquipStatViewer,
    ESBUILogicType_GameMenuEquipStatViewerList,
    ESBUILogicType_GameMenuBag,
    ESBUILogicType_GameMenuBagInven,
    ESBUILogicType_GameMenuBagDetail,
    ESBUILogicType_GameMenuSetting,
    ESBUILogicType_GameMenuQuestJournal,
    ESBUILogicType_GameMenuSave,
    ESBUILogicType_GameMenuLoad,
    ESBUILogicType_GameMenuManual,
    ESBUILogicType_GameMenuManualDetail,
    ESBUILogicType_GameMenuStat,
    ESBUILogicType_GameMenuStatSlot,
    ESBUILogicType_GameMenuAlbum,
    ESBUILogicType_GameMenuAlbumList,
    ESBUILogicType_GameMenuAlbumTileView,
    ESBUILogicType_GameMenuAlbumDetail,
    ESBUILogicType_GameMenuMap,
    ESBUILogicType_GameMenuMapPointer,
    ESBUILogicType_GameMenuMapSelectCustomPin,
    ESBUILogicType_GameMenuPlayGo,
    ESBUILogicType_CommonChoice,
    ESBUILogicType_CommonMessageBox,
    ESBUILogicType_CommonMessageBoxNew,
    ESBUILogicType_CommonMessageBoxV3,
    ESBUILogicType_CommonToastMessage,
    ESBUILogicType_CommonCurrency,
    ESBUILogicType_CommonTab,
    ESBUILogicType_CommonManualTab,
    ESBUILogicType_First,
    ESBUILogicType_FinishEve,
    ESBUILogicType_FinishEve2,
    ESBUILogicType_FinishTrial,
    ESBUILogicType_Lobby,
    ESBUILogicType_LobbyBackground,
    ESBUILogicType_ShortcutGame,
    ESBUILogicType_InitialSetup,
    ESBUILogicType_LobbySetting,
    ESBUILogicType_SaveSlot,
    ESBUILogicType_SavePage,
    ESBUILogicType_GameSplash,
    ESBUILogicType_LoadDemoSaveData,
    ESBUILogicType_MessageBoxList,
    ESBUILogicType_ShaderCompile,
    ESBUILogicType_ContentsSettingPopup,
    ESBUILogicType_AccessibilitySettingPopup,
    ESBUILogicType_PSNLoginPopup,
    ESBUILogicType_PersonalInfoPopup,
    ESBUILogicType_WorkShop,
    ESBUILogicType_WorkShopTab,
    ESBUILogicType_WorkShopEnhanceEve,
    ESBUILogicType_WorkShopNanoSuit,
    ESBUILogicType_WorkShopDrone,
    ESBUILogicType_WorkShopExospine,
    ESBUILogicType_WorkShopBodySuitResult,
    ESBUILogicType_WorkShopRecoveryPotionResultPopup,
    ESBUILogicType_WorkShopWeaponResultPopup,
    ESBUILogicType_WorkShopTabUnlockPopup,
    ESBUILogicType_Puzzle,
    ESBUILogicType_RecordPopup,
    ESBUILogicType_FishingResult,
    ESBUILogicType_FishingFishDetail,
    ESBUILogicType_FishingBoxReward,
    ESBUILogicType_FishingBoxRewardSlot,
    ESBUILogicType_CanCollection,
    ESBUILogicType_CanDetail,
    ESBUILogicType_CanGain,
    ESBUILogicType_TestNavigation,
    ESBUILogicType_AreaName,
    ESBUILogicType_GuideVideo,
    ESBUILogicType_GuideUnlockMode,
    ESBUILogicType_GuideMessage,
    ESBUILogicType_GuideMessageSlot,
    ESBUILogicType_GuideRewardList,
    ESBUILogicType_TutorialFloater,
    ESBUILogicType_Shop,
    ESBUILogicType_Shop_ItemList,
    ESBUILogicType_Shop_ItemDetail,
    ESBUILogicType_Shop_Popup,
    ESBUILogicType_ShopAll,
    ESBUILogicType_ShopCore,
    ESBUILogicType_ShopQuest,
    ESBUILogicType_ShopUsableItem,
    ESBUILogicType_ShopBullet,
    ESBUILogicType_ShopMaterial,
    ESBUILogicType_ShopGear,
    ESBUILogicType_ShopRecipe,
    ESBUILogicType_ShopLook,
    ESBUILogicType_ShopFish,
    ESBUILogicType_ShopEtc,
    ESBUILogicType_ShopSell,
    ESBUILogicType_TeleportCamp,
    ESBUILogicType_TeleportRegion,
    ESBUILogicType_TeleportRegionSlot,
    ESBUILogicType_Empty,
    ESBUILogicType_DebugCommand,
    ESBUILogicType_MiniGameGorgon,
    ESBUILogicType_DebugViewer,
    ESBUILogicType_HUDRealTimeDebug,
    ESBUILogicType_HUDSoundDebugger,
    ESBUILogicType_HUDSoundDebuggerSetting,
    ESBUILogicType_Indicator,
    ESBUILogicType_RedDot,
    ESBUILogicType_SettingSlotRadioBox,
    ESBUILogicType_SettingSlotRadioButton,
    ESBUILogicType_SettingV2,
    ESBUILogicType_SettingSlotComboBox,
    ESBUILogicType_SettingSlotRollingV2,
    ESBUILogicType_SettingSlotSliderV2,
    ESBUILogicType_SettingSlotButtonV2,
    ESBUILogicType_SettingPopup,
    ESBUILogicType_SettingPopupDisplay,
    ESBUILogicType_SettingPopupDisplaySDR,
    ESBUILogicType_SettingPopupDisplayHDR,
    ESBUILogicType_KeyMappingViewer,
    ESBUILogicType_KeyMappingPadViewer,
    ESBUILogicType_KeyMappingPopup,
    ESBUILogicType_KeyMappingSlotContainer,
    ESBUILogicType_KeyMappingSlot,
    ESBUILogicType_RequestBoard,
    ESBUILogicType_NextChapterPopup,
    ESBUILogicType_NightOperationSelect,
    ESBUILogicType_HUDResetNotice,
    ESBUILogicType_HUDResetNoticeSlot,
    ESBUILogicType_HairSalon,
    ESBUILogicType_HairSalonDetail,
    ESBUILogicType_TrainingRoom,
    ESBUILogicType_TrainingRoomMenu,
    ESBUILogicType_TrainingRoomSkillInfo,
    ESBUILogicType_TrainingRoomSkillStackSlot,
    ESBUILogicType_TestTextCorrect,
    ESBUILogicType_Reward,
    ESBUILogicType_RewardSlot,
    ESBUILogicType_SpecialReward,
    ESBUILogicType_DebugToastMessage,
    ESBUILogicType_InteractionMessageBox,
    ESBUILogicType_DebugPlayerInfo,
    ESBUILogicType_GameSplashSaveGuide,
    ESBUILogicType_GameSplashTrialNotice,
    ESBUILogicType_TrialBossChallengeMessage,
    ESBUILogicType_TrialShopApp,
    ESBUILogicType_DLCPurchasePopup,
    ESBUILogicType_BossChallenge,
    ESBUILogicType_BossChallengeFinishResult,
    ESBUILogicType_BossChallengeDebugInfo,
    ESBUILogicType_BossChallengeExit,
    ESBUILogicType_PhotoMode,
    ESBUILogicType_PhotoModeSettingSlotSlider,
    ESBUILogicType_PhotoModeSettingSlotRolling,
    ESBUILogicType_PhotoModeSettingSlotButton,
    ESBUILogicType_Turntable,
    ESBUILogicType_NikkeLostArticlePopup,
    ESBUILogicType_NikkeMinigameResult,
    ESBUILogicType_MailBox,
    ESBUILogicType_Coupon,
    ESBUILogicType_ArtBook,
    ESBUILogicType_NikkeStagePoup,
    ESBUILogicType_GamePause,
};

