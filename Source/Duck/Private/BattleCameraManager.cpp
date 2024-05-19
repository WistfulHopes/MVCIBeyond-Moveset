#include "DuckModule.h"
#include "BattleCameraManager.h"

ABattleCameraManager::ABattleCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FOV = 0.00f;
    this->Depression = 0.00f;
    this->Elevation = 0.00f;
    this->TurnAngleLeft = 0.00f;
    this->TurnAngleRight = 0.00f;
}


