#include "SBInteractionNode_WorkShopUI.h"

USBInteractionNode_WorkShopUI::USBInteractionNode_WorkShopUI() {
    this->InteractionNodeType = ESBIANode_UI;
    this->OpenUIType = ESBUIWorkShopType_Default;
    this->OwnerShow = NULL;
    this->CasterShow = NULL;
    this->ShowLoopCount = -1;
    this->ShowPlayRuleType = ESBInteractShowPlayRuleType_Static;
    this->DelayTime = 0.00f;
    this->bActorBlockAll = false;
    this->InteractionMoveType = ESBInteractionMove_None;
    this->ShopName = TEXT("ShopCommon");
    this->TargetShopDataType = ESBIAOverrideField_None;
    this->TargetShopIndex = 1;
}


