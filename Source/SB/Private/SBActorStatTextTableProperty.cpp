#include "SBActorStatTextTableProperty.h"

FSBActorStatTextTableProperty::FSBActorStatTextTableProperty() {
    this->ID = 0;
    this->StatType = ActorStatType_None;
    this->CalculatedStatType = ESBActorCalculatedStatType_None;
    this->TextType = ESBActorStatTextType_Static;
}

