#include "SBRewardGroupSpawnFormation.h"

USBRewardGroupSpawnFormation::USBRewardGroupSpawnFormation() {
    this->SpawnRangeType = ESBItemSpawnRangeType_SequentialArc;
    this->UseSpawnShow = true;
    this->UseSimulatePhysics = true;
    this->UsePostLocationVerifyCheck = false;
    this->IgnoreFinishSimulatePhysics = false;
    this->SpawnStartInterval = 0.20f;
    this->SpawnNextInterval = 0.10f;
    this->SpawnDelayTime = 0.00f;
    this->SpawnCheckLocation = false;
    this->SpawnCheckStartDist = 100.00f;
    this->SpawnCheckEndDist = 100.00f;
    this->SpawnTargetType = ESBItemBucketType_Zone;
    this->RandomRangeUseGlobalSetting = true;
    this->RandomRangeDropDistMin = 0.00f;
    this->RandomRangeDropDistMax = 100.00f;
    this->RandomRangeDropDirXMin = -1.00f;
    this->RandomRangeDropDirXMax = 1.00f;
    this->RandomRangeDropDirYMin = -1.00f;
    this->RandomRangeDropDirYMax = 1.00f;
    this->RandomRangeDropDirZMin = 0.00f;
    this->RandomRangeDropDirZMax = 0.00f;
    this->RandomRangeDropOffsetZ = 0.00f;
    this->RandomRangeCharSocket = TEXT("Bip001-Pelvis");
    this->SequentialArcDistance = 100.00f;
    this->SequentialArcDegree = 120.00f;
    this->SequentialArcColumnCount = 6;
    this->SequentialArcDistanceAdditional = 50.00f;
    this->SequentialArcDecreaseCountFactor = 1.00f;
    this->SequentialArcDecreaseDegree = 10.00f;
}


