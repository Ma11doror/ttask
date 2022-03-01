// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "PickableObject.generated.h"

UCLASS()
class TTASK_M_T_API AStaminaRegen : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStaminaRegen();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	UBoxComponent* CollisionMesh;

	virtual  void NotifyActorBeginOverlap(AActor* OtherActor) override;

	UPROPERTY(EditAnywhere, Category = "Abilities")
	TSubclassOf<UGameplayAbility> PerformingAbility;
	
};
