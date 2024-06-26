#pragma once
#include "Engine.h"
#include "RollBackParameterGimmickInfMap.h"
#include "RollBackParameterGimmick.generated.h"

USTRUCT()
struct DUCK_API FRollBackParameterGimmick {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRollBackParameterGimmickInfMap> GimmickInfMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> isResetByFrameUpdate;
    
    FRollBackParameterGimmick();
};

