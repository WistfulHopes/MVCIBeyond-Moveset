#pragma once
#include "Engine.h"
#include "DuckCharaVisualManager.h"
#include "DuckCharaDemoVisualManager.generated.h"

UCLASS(Blueprintable)
class DUCK_API ADuckCharaDemoVisualManager : public ADuckCharaVisualManager {
    GENERATED_BODY()
public:
    ADuckCharaDemoVisualManager(const FObjectInitializer& ObjectInitializer);

};

