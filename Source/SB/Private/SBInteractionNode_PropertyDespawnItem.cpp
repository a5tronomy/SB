#include "SBInteractionNode_PropertyDespawnItem.h"

USBInteractionNode_PropertyDespawnItem::USBInteractionNode_PropertyDespawnItem() {
    this->InteractionNodeType = ESBIANode_Action;
    this->ItemCount = 0;
    this->ItemBucketType = ESBItemBucketType_None;
    this->CheckRange = ESBConditionItemCheckRangeType_Inven;
}


