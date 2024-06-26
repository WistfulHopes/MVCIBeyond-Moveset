#pragma once
#include "Engine.h"
#include "DynamicMaterialsContainer.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;

USTRUCT()
struct FDynamicMaterialsContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> mat_dynaimc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> mat_origin;
    
    DUCK_API FDynamicMaterialsContainer();
};

