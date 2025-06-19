#include "SBItemTableProperty.h"

FSBItemTableProperty::FSBItemTableProperty() {
    this->ID = 0;
    this->InventoryPriority = 0;
    this->Category = ESBItemCategory_None;
    this->Rarity = ESBItemRarityType_None;
    this->SaveType = ESBItemSaveType_None;
    this->IncludeDropPool = false;
    this->StackAmount = 0;
    this->MaxAmount = 0;
    this->MaxAmountOverrideActorStat = ActorStatType_None;
    this->ChargeCount = 0;
    this->ChargeOverrideActorStat = ActorStatType_None;
    this->AbleBroken = false;
    this->AblePrice = false;
    this->AbleDrop = false;
    this->RequireLevel = 0;
    this->AssetZOffset = 0.00f;
    this->Asset3DScale = 0.00f;
    this->FastNotifySpecialReward = false;
    this->ActorBlockTime = 0.00f;
    this->InteractionImmidateUse = false;
    this->InteractionDist = 0.00f;
    this->AutoInteraction = false;
    this->AutoInteractionDist = 0.00f;
    this->AutoCharacterLevelUpType = ESBCharacterLevelType_None;
    this->NotiType = ESBItemNotificationType_Default;
    this->ScanDisplayType = ESBScanDisplayType_None;
    this->WeightMin = 0.00f;
    this->WeightMax = 0.00f;
    this->bMaintainNewGamePlus = false;
    this->MaintainMaxAmountForFirstNewGamePlus = 0;
}

