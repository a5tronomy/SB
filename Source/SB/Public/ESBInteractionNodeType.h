#pragma once
#include "CoreMinimal.h"
#include "ESBInteractionNodeType.generated.h"

UENUM()
enum ESBInteractionNodeType {
    ESBIANode_None,
    ESBIANode_RootNode,
    ESBIANode_EventNode,
    ESBIANode_ConditionNode,
    ESBIANode_Switch,
    ESBIANode_ResultSwitch,
    ESBIANode_Root,
    ESBIANode_Action,
    ESBIANode_ChangeProperty,
    ESBIANode_Puzzle,
    ESBIANode_UI,
    ESBIANode_InteractCamp,
    ESBIANode_SaveGame,
    ESBIANode_ChangeStateLinkEnv,
    ESBIANode_DebugPrintStringNode,
    ESBIANode_Cancel,
    ESBIANode_SetCustomValue,
    ESBIANode_IntCompare,
    ESBIANode_Grab,
    ESBIANode_PreDataNode,
    ESBIANode_InteractionUIData,
    ESBIANode_QuestEvent,
    ESBIANode_GetRandomInt,
    ESBIANode_SwitchInt,
    ESBIANode_TemplateStart,
    ESBIANode_TemplateEnd,
    ESBIANode_TemplateInst,
    ESBIANode_FailNotify,
    ESBIANode_Goto,
    ESBIANode_GotoLabel,
    ESBIANode_Tick,
    ESBIANode_SelectDataSwitch,
    ESBIANode_ShopUI,
    ESBIANode_TemplateInstV2,
    ESBIANode_TemplateV2,
    ESBIANode_UISystemNotice,
    ESBIANode_EnterNikkeStage,
    ESBIANode_ClearedNikkeStage,
    ESBIANode_Num,
};

