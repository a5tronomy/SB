#include "SBQuestTaskTypeRequireItem.h"

USBQuestTaskTypeRequireItem::USBQuestTaskTypeRequireItem() {
    this->MissionType = ESBMission_RequireItem;
    this->CountType = ESBQuestRequireItemTaskCountType::InventoryAndObtain;
    this->ConditionCount = 1;
    this->CheckItemType = ESBQuestRequireItemTaskCheckType::ItemAlias;
    this->CheckItemCategory = ESBItemCategory_None;
}


