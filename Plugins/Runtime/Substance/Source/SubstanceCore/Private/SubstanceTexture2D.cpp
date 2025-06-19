#include "SubstanceTexture2D.h"

USubstanceTexture2D::USubstanceTexture2D() {
    this->ParentInstance = NULL;
    this->AddressX = TA_Wrap;
    this->AddressY = TA_Wrap;
    this->bCooked = false;
}


