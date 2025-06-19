#include "SBRagdollInfo.h"

FSBRagdollInfo::FSBRagdollInfo() {
    this->EnableRagdollCount = 0;
    this->bRagdollStopWhenZeroVelocity = false;
    this->WaitZeroVelocityTime = 0.00f;
    this->ImpulseDelayTime = 0.00f;
    this->bRegisterPoseSnapshot = false;
    this->PoseSnapshotDelayTime = 0.00f;
    this->bPoseSnapshot = false;
    this->RegisterStopFrameDelay = 0;
    this->FadeInTime = 0.00f;
    this->FadeOutTime = 0.00f;
    this->BlendWeight = 0.00f;
    this->bAllBodies = false;
    this->bStopSimulatePhysics = false;
    this->CurrentActiveTime = 0.00f;
    this->bUseMassScale = false;
    this->ImpulseLimitVelocity = 0.00f;
}

