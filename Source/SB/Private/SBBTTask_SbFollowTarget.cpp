#include "SBBTTask_SbFollowTarget.h"

USBBTTask_SbFollowTarget::USBBTTask_SbFollowTarget() {
    this->NodeName = TEXT("SB_DronFollowTarget");
    this->MoveState = MoveState_None;
    this->TargetType = ESBAIActorType::Owner;
    this->DroneFollowLocationType = SBDroneFollowLocationType_System;
    this->LocationHoldingTime = 1.00f;
    this->bUseNavMesh = true;
    this->DistanceOfApproach = 0.00f;
    this->ExecutableDistanceToTarget = 0.00f;
    this->TeleportDistance = 340282346638528859811704183484516925440.00f;
}


