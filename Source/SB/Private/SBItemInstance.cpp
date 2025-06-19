#include "SBItemInstance.h"

FSBItemInstance::FSBItemInstance() {
    this->StatLevel = 0;
    this->ItemCount = 0;
    this->ItemChargeCount = 0;
    this->Equiped = false;
    this->MatVarIndex = 0;
    this->OverrideSaveType = ESBItemOverrideSaveType_None;
    this->bWithResetZone = false;
    this->bFavorites = false;
    this->bMustAcquisition = false;
}

