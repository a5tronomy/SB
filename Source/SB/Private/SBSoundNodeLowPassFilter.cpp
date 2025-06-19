#include "SBSoundNodeLowPassFilter.h"

USBSoundNodeLowPassFilter::USBSoundNodeLowPassFilter() {
    this->FilterType = ESBLowPassFilterSoundNodeType::Replace;
    this->LowPassFilterMin_Replace = 20.00f;
    this->LowPassFilterMax_Replace = 20000.00f;
    this->LowPassFilterMin_Multiply = 0.00f;
    this->LowPassFilterMax_Multiply = 1.00f;
}


