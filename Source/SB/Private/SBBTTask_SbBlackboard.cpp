#include "SBBTTask_SbBlackboard.h"

USBBTTask_SbBlackboard::USBBTTask_SbBlackboard() {
    this->NodeName = TEXT("SB_Blackboard");
    this->bReturnSucceeded = false;
    this->VarType = ESBBlackboardVarType::INT;
    this->IntValue = 0;
    this->FloatValue = 0.00f;
    this->bAdditive = false;
    this->bCheckContains = false;
    this->bCheckNoContains = false;
}


