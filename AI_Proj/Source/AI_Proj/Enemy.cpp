// Fill out your copyright notice in the Description page of Project Settings.

#include "Navigation/PathFollowingComponent.h"
#include "Enemy.h"

AEnemy::AEnemy()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	GetPathFollowingComponent()->OnRequestFinished.AddUObject(this, &AEnemy::OnAIMoveCompleted);
	Move();
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemy::Move()
{
	MoveToLocation
	(
		FVector(0, 0, 0), //Location to move to
		1.f, //The buffer between the object and the location to count
		true, //Should stop after reaching destination
		true, //Use NavMesh
		false //IDK
	);
}

void AEnemy::OnAIMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	UE_LOG(LogTemp, Warning, TEXT("Completed!"));
}
