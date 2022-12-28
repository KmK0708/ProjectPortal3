// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PortalPlayerController.generated.h"

class APortalManager;

/**
 * 
 */
UCLASS()
class PROJECTPORTAL3_API APortalPlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	APortalManager* GetPortalManager();

	UPROPERTY(EditDefaultsOnly, Category = Portal)
	TSubclassOf<class APortalPass> PortalClass;

protected:
	virtual void BeginPlay() override;

	APortalManager* PortalManager;
	
};
