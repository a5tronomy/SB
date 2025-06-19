#include "SBCharacterCollisionShapeInfo.h"

FSBCharacterCollisionShapeInfo::FSBCharacterCollisionShapeInfo() {
    this->ShapeType = CharacterCollisionShapeType_Box;
    this->bMeleeAttackCollision = false;
    this->bRangeAttackCollision = false;
    this->bOnlyJustActiveCollision = false;
    this->WeakPointDamageAdditiveRate = 0.00f;
    this->bKeepShapeScale = false;
    this->bRootAxisRelativeLocation = false;
    this->bRootAxisRelativeRotation = false;
    this->ValidAngle = 0.00f;
    this->CapsuleHalfHeight = 0.00f;
    this->CapsuleRadius = 0.00f;
}

