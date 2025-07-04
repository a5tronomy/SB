#pragma once
#include "CoreMinimal.h"
#include "ESBData.generated.h"

UENUM()
enum ESBData {
    DATA_Skill,
    DATA_TargetFilter,
    DATA_SkillActiveStep,
    DATA_Effect,
    DATA_CharacterMove,
    DATA_SkillCommand,
    DATA_Character,
    DATA_Equipment,
    DATA_EquipmentMaterial,
    DATA_CharacterAnimSet,
    DATA_CharacterStance,
    DATA_Projectile,
    DATA_World,
    DATA_Zone,
    DATA_ZoneEvent,
    DATA_ZoneTrigger,
    DATA_ZoneEventActor,
    DATA_EventActorEffect,
    DATA_EventLevelSeq,
    DATA_EventSpawn,
    DATA_EventZoneControl,
    DATA_EventTheater,
    DATA_EventItem,
    DATA_EventAIDecorator,
    DATA_EventObjControl,
    DATA_EventUIAction,
    DATA_EventActorActive,
    DATA_EventZoneEventActorControl,
    DATA_CharacterAppearance,
    DATA_CharacterWeight,
    DATA_ConditionTrigger,
    DATA_EventQuest,
    DATA_QuestMission,
    DATA_Quest,
    DATA_QuestTask,
    DATA_QuestTaskGroup,
    DATA_LevelTargetFilter,
    DATA_EffectVolume,
    DATA_Condition,
    DATA_ConditionGroup,
    DATA_ZoneEnv,
    DATA_ZoneEnvSpawn,
    DATA_Item,
    DATA_ItemEquipable,
    DATA_ItemConsumable,
    DATA_RewardGroup,
    DATA_DropRateAdjust,
    DATA_EventEnvControl,
    DATA_CharacterTribe,
    DATA_EventEffectVolumeControl,
    DATA_EventItemAction,
    DATA_AIGroup,
    DATA_AcquisitionSkill,
    DATA_PassiveSkillFunction,
    DATA_SkillPriority,
    DATA_SkillResult,
    DATA_CharacterAnimMoveInfo,
    DATA_EffectCombination,
    DATA_GearStat,
    DATA_GearStatGroup,
    DATA_EventRequestPathWay,
    DATA_ZoneLayerGroup,
    DATA_AreaControlVolume,
    DATA_EventAreaControlVolumeControl,
    DATA_ActorStatText,
    DATA_EquipStatViewer,
    DATA_EventActorBattleState,
    DATA_GuideAction,
    DATA_EventGuideAction,
    DATA_PuzzleStringArray,
    DATA_ZonePhaseEvent,
    DATA_CharacterLevel,
    DATA_DifficultyStatGroup,
    DATA_Achievement,
    DATA_Activity,
    DATA_Trophy,
    Data_CheatCommand,
    DATA_ItemSkillEquipable,
    DATA_CharacterDetectAI,
    DATA_CharacterDead,
    DATA_EventInteractCamp,
    DATA_EventLaserControl,
    DATA_SpawnGroupRule,
    DATA_SPLevel,
    DATA_Shop,
    DATA_ShopItem,
    DATA_ZoneCamp,
    DATA_ItemBullet,
    DATA_EventZoneWarp,
    DATA_TransformCharacter,
    DATA_MultiMap,
    DATA_MultiPlayRule,
    DATA_ItemLure,
    DATA_ItemReplacement,
    DATA_MetaAI,
    DATA_EventMetaAI,
    DATA_MetaAIBehavior,
    DATA_UIActionRequest,
    DATA_UITextActionFormat,
    DATA_UITextInputDefine,
    DATA_UIKeyImageAsset,
    DATA_Album,
    DATA_TheaterSelectData,
    DATA_ItemFish,
    DATA_ItemSpawn,
    DATA_SoundEvent,
    DATA_SoundEventQuest,
    DATA_SoundEventLevelSequence,
    DATA_SoundAttenuationEvent,
    DATA_SoundEquipmentSet,
    DATA_EditorTooltip,
    DATA_GamePlayProgressRecord,
    DATA_CheatProgressQuestCommands,
    DATA_ReStartRuleTable,
    DATA_Hint,
    DATA_WorldTransition,
    DATA_StudioTransition,
    DATA_GuideMessage,
    DATA_Can,
    DATA_ShowParam,
    DATA_WorldMap,
    DATA_SocialAnim,
    DATA_CheatQuestTable,
    DATA_UITutorial,
    DATA_EffectVolumeProperty,
    DATA_ResourceCacheSequence,
    DATA_TrainningRoomSetting,
    DATA_IsolatedArea,
    DATA_Manual,
    DATA_Credit,
    DATA_SequenceActorTag,
    DATA_LevelGraphicsOptions,
    DATA_NGPlusEventSpawn,
    DATA_NGPlusAlreadySetup,
    DATA_GamePlayProgressCheat,
    DATA_ActorPlayPreset,
    DATA_BossChallenge,
    DATA_EventGift,
    DATA_PhotoModeImageFilter,
    DATA_PhotoModeFacialAnimation,
    DATA_PhotoModeEyesPositionByPose,
    DATA_PhotoChallenge,
    DATA_PhotoModeOption,
    DATA_PhotoModeImage,
    DATA_PhotoModeMovement,
    DATA_KeyMapping,
    DATA_KeyMappingRollover,
    DATA_TurntableSound,
    DATA_LoadingScreenGameTip,
    DATA_NikkeStage,
    DATA_MailBoxGift,
    DATA_ArtBook,
    DATA_NikkeLostArticle,
    DATA_MAX UMETA(Hidden),
};

