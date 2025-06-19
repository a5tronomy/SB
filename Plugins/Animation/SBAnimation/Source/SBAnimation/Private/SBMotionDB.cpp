#include "SBMotionDB.h"

USBMotionDB::USBMotionDB() {
    this->MotionStepTime = 0.10f;
    this->MotionFutureCheckRangeTime = 1.00f;
    this->SelectedSkeleton = NULL;
    this->SelectMotionIndex = -1;
}


