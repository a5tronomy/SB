#include "SBMetaAIBehaviorTableProperty.h"

FSBMetaAIBehaviorTableProperty::FSBMetaAIBehaviorTableProperty() {
    this->ID = 0;
    this->Priority = 0;
    this->FindDistance = 0.00f;
    this->Interval = 0.00f;
    this->AcitiveProbability = 0.00f;
    this->TirednessPerSecond = 0.00f;
    this->Condition_StartTiredness = 0.00f;
    this->Condition_StartTiredness_OperationType = ESBEQ_None;
    this->Condition_EndTiredness = 0.00f;
    this->Condition_EndTiredness_OperationType = ESBEQ_None;
}

