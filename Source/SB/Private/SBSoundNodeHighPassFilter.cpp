#include "SBSoundNodeHighPassFilter.h"

USBSoundNodeHighPassFilter::USBSoundNodeHighPassFilter() {
    this->FilterType = ESBHighPassFilterSoundNodeType::Replace;
    this->HighPassFilterMin_Replace = 20.00f;
    this->HighPassFilterMax_Replace = 20000.00f;
    this->HighPassFilterMin_Multiply = 0.00f;
    this->HighPassFilterMax_Multiply = 1.00f;
}


