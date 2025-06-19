#include "SBItemSpawnFormation.h"

FSBItemSpawnFormation::FSBItemSpawnFormation() {
    this->UseSpawnShow = false;
    this->UseSimulatePhysics = false;
    this->UsePostLocationVerifyCheck = false;
    this->IgnoreFinishSimulatePhysics = false;
    this->SpawnRangeType = ESBItemSpawnRangeType_None;
    this->SpawnStartInterval = 0.00f;
    this->SpawnNextInterval = 0.00f;
    this->SpawnCheckLocation = false;
    this->SpawnCheckStartDist = 0.00f;
    this->SpawnCheckEndDist = 0.00f;
    this->SpawnCheckForward = false;
    this->RandomRangeUseGlobalSetting = false;
    this->RandomRangeDropDistMin = 0.00f;
    this->RandomRangeDropDistMax = 0.00f;
    this->RandomRangeDropDirXMin = 0.00f;
    this->RandomRangeDropDirXMax = 0.00f;
    this->RandomRangeDropDirYMin = 0.00f;
    this->RandomRangeDropDirYMax = 0.00f;
    this->RandomRangeDropDirZMin = 0.00f;
    this->RandomRangeDropDirZMax = 0.00f;
    this->RandomRangeDropOffsetZ = 0.00f;
    this->SequentialArcDistance = 0.00f;
    this->SequentialArcDegree = 0.00f;
    this->SequentialArcColumnCount = 0;
    this->SequentialArcDistanceAdditional = 0.00f;
    this->SequentialArcDecreaseCountFactor = 0.00f;
    this->SequentialArcDecreaseDegree = 0.00f;
}

