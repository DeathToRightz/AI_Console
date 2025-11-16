// Fill out your copyright notice in the Description page of Project Settings.

#include "Navigation/PathFollowingComponent.h"
#include "Enemy.h"

#include "GameFramework/Character.h"

AEnemy::AEnemy()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void AEnemy::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	if (!InPawn) { return; }
	
	//Origin = InPawn->GetActorLocation();
	
	NavSystem = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());

	if (!NavSystem) { UE_LOG(LogTemp, Warning, TEXT("Navigation system not found!")); return; }


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
	
	if (!NavSystem)
	{
		UE_LOG(LogTemp, Warning, TEXT("Navigation system not valid!"));
		return;
	}

	APawn* ControlledPawn = GetPawn();
	if (!ControlledPawn)
	{
		UE_LOG(LogTemp, Warning, TEXT("No pawn possessed!"));
		return;
	}

	Origin = ControlledPawn->GetActorLocation();

	FNavLocation RandomLocation;
	if (NavSystem->GetRandomReachablePointInRadius(Origin, SearchRange, RandomLocation))
	{
		MoveToLocation
		(
			RandomLocation.Location, //Location to move to
			1.f, //The buffer between the object and the location to count
			true, //Should stop after reaching destination
			true, //Use NavMesh
			false //IDK
		);
	}

}

void AEnemy::OnAIMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	UE_LOG(LogTemp, Warning, TEXT("Completed!"));
	Origin = GetPawn()->GetActorLocation();
	Move();
}
