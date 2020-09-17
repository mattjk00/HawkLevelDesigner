// Fill out your copyright notice in the Description page of Project Settings.


#include "GridActor.h"

// Sets default values
AGridActor::AGridActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Width = 10;
	Length = 10;
	VisualMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	VisualMesh->SetupAttachment(RootComponent);
}

void AGridActor::SetSize(int32 w, int32 l)
{
	Width = w;
	Length = l;
	VisualMesh->SetRelativeScale3D(FVector(Width, Length, 1));
}

// Called when the game starts or when spawned
void AGridActor::BeginPlay()
{
	Super::BeginPlay();
	VisualMesh->SetRelativeScale3D(FVector(Width, Length, 1));
}

// Called every frame
void AGridActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

