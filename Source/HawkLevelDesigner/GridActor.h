// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GridActor.generated.h"

UCLASS()
class HAWKLEVELDESIGNER_API AGridActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGridActor();

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* VisualMesh;

	UPROPERTY(VisibleAnywhere)
		int32 Width;
	UPROPERTY(VisibleAnywhere)
		int32 Length;

	UFUNCTION(BlueprintCallable)
		void SetSize(int32 w, int32 l);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
