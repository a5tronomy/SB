#include "SBZoneEnvGrabComponent.h"

USBZoneEnvGrabComponent::USBZoneEnvGrabComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GrabSet = NULL;
    this->UseAutoSafeMoveCalc = true;
    this->ManualSafeMoveDist = 15.00f;
    this->ManualSafeMoveRadius = 40.00f;
    this->ManualSafeMoveHeight = 95.00f;
    this->bFirstGrabed = false;
    this->GrabArrowIndex = 0;
    this->bModePivotObject = false;
    this->bModeRotateLockObject = false;
    this->GrabActiveDistXY = 0.00f;
}


