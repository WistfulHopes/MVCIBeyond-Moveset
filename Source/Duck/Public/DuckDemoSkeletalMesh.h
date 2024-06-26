#pragma once
#include "Engine.h"
#include "GameFramework/Actor.h"
#include "PhysicsBlendSet.h"
#include "DuckDemoSkeletalMesh.generated.h"

class UDuckDemoSkeletalMeshComponent;
class UPhysicsAsset;

UCLASS(Blueprintable)
class DUCK_API ADuckDemoSkeletalMesh : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDuckDemoSkeletalMeshComponent* RootSkMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> NouseBodyPhysicsName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NouseClothPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool FlgTeleportOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* PhysicsAssetOriginal;
    
public:
    ADuckDemoSkeletalMesh(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Setup();
    
    UFUNCTION(BlueprintCallable)
    void SetPhysicsBlendSet(const TArray<FPhysicsBlendSet>& Set);
    
};

