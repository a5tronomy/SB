#include "SBCharacterDetectAITableProperty.h"

FSBCharacterDetectAITableProperty::FSBCharacterDetectAITableProperty() {
    this->AISightSenseHorizontalAngle = 0.00f;
    this->AISightSenseVerticalAngle = 0.00f;
    this->AISightSenseNearDistance = 0.00f;
    this->AISightSenseVerticalDistance = 0.00f;
    this->AISightSenseIgnoreBlocking = false;
    this->AISightSenseIgnoreBlockingWhenDetectTarget = false;
    this->AIDetectCheckDistance = 0.00f;
    this->AIObserveCheckDistance = 0.00f;
    this->AIPursuitDistance = 0.00f;
    this->AIPursuitFixedDistance = 0.00f;
    this->AIPursuitVerticaDistance = 0.00f;
    this->AIIncreaseAggroGaguePerSecond = 0.00f;
    this->AIIncreaseDoubtAggroGaguePerSecond = 0.00f;
    this->AIDecreaseLevel0AggroGaguePerSecond = 0.00f;
    this->AIDecreaseLevel1AggroGaguePerSecond = 0.00f;
}

