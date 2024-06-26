#pragma once
#include "Engine.h"
#include "DuckPlayerController.h"
#include "BattlePlayerController.generated.h"

UCLASS(Blueprintable)
class DUCK_API ABattlePlayerController : public ADuckPlayerController {
    GENERATED_BODY()
public:
    ABattlePlayerController(const FObjectInitializer& ObjectInitializer);

};

