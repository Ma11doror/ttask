// Fill out your copyright notice in the Description page of Project Settings.


#include "PickableObject.h"
#include "ttask_m_tCharacter.h"

// Sets default values
AStaminaRegen::AStaminaRegen()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CollisionMesh = CreateDefaultSubobject<UBoxComponent>(FName("OverlapCollision"));
	CollisionMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called when the game starts or when spawned
void AStaminaRegen::BeginPlay()
{
	Super::BeginPlay();
	
	
}

// Called every frame
void AStaminaRegen::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStaminaRegen::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);


	Attask_m_tCharacter* Player = Cast<Attask_m_tCharacter>(OtherActor);
	if(!Player->GetAbilitySystemComponent())
	{
		return;
	}

	
	if(IsValid(PerformingAbility))
		{
			Player->GetAbilitySystemComponent()->TryActivateAbilityByClass(PerformingAbility, true);
		}
		
	

	Destroy();
}

