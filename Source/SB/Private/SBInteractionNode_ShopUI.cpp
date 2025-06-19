#include "SBInteractionNode_ShopUI.h"

USBInteractionNode_ShopUI::USBInteractionNode_ShopUI() {
    this->InteractionNodeType = ESBIANode_UI;
    this->ShopName = TEXT("ShopCommon");
    this->DelayTime = 0.00f;
    this->bActorBlockAll = false;
    this->InteractionMoveType = ESBInteractionMove_None;
    this->TargetShopDataType = ESBIAOverrideField_None;
    this->TargetShopIndex = 1;
    this->bStopTheater = false;
    this->bUseCloseFadeScreen = false;
}


