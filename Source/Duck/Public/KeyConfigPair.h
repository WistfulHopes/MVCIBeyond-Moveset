#pragma once
#include "Engine.h"
#include "GameButtonType.h"
#include "GameConfigItems.h"
#include "KeyConfigPair.generated.h"

USTRUCT()
struct DUCK_API FKeyConfigPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    GameConfigItems ConfigType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    GameButtonType ButtonType;
    
    FKeyConfigPair();
};

