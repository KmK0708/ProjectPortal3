// Fill out your copyright notice in the Description page of Project Settings.


#include "PortalPass.h"

// Sets default values
APortalPass::APortalPass()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APortalPass::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APortalPass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

