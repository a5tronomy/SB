#include "SBShowSetAIDecoratorKey.h"

USBShowSetAIDecoratorKey::USBShowSetAIDecoratorKey() {
    this->SetVarType = ESBBlackboardVarType::INT;
    this->FloatVar = 0.00f;
    this->IntVar = 0;
    this->BoolVar = false;
    this->bSetWhenEndKey = false;
    this->SetEnd_FloatVar = 0.00f;
    this->SetEnd_IntVar = 0;
    this->SetEnd_BoolVar = false;
}


