// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "NavigationSystem.h"
#include "Navigation/PathFollowingComponent.h"

#include "Enemy.generated.h"
struct FAIRequestID;
struct FPathFollowingResult;

UCLASS()
class AI_PROJ_API AEnemy : public AAIController
{
	GENERATED_BODY()




public:
	// Sets default values for this character's properties
	AEnemy();
	FTimerHandle MyTimerHandle;

	virtual void OnPossess(APawn* InPawn) override;
	virtual void Tick(float DeltaTime) override;

	void Move();


	
	void OnAIMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result);

	
private:
	FVector Origin;
	float SearchRange = 1000.f;
	UNavigationSystemV1* NavSystem;
	
};
