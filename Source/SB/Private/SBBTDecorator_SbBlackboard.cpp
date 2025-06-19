#include "SBBTDecorator_SbBlackboard.h"

USBBTDecorator_SbBlackboard::USBBTDecorator_SbBlackboard() {
    this->NodeName = TEXT("SB_Blackboard");
    this->ActorType = ESBAIActorType::Self;
    this->CompareOP = ESBCompare::Equal;
    this->VarType = ESBBlackboardVarType::INT;
    this->IntValue = 0;
    this->FloatValue = 0.00f;
    this->BoolValue = false;
    this->SetValueType = ESBDecoratorBlackboardSetValueType::None;
    this->SetIntValue = 0;
    this->SetFloatValue = 0.00f;
    this->SetBoolValue = false;
}


