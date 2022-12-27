// Fill out your copyright notice in the Description page of Project Settings.


#include "PortalProjectile.h"

// Sets default values
APortalProjectile::APortalProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APortalProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APortalProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

