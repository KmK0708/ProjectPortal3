// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "PortalHUD.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTPORTAL3_API APortalHUD : public AHUD
{
	GENERATED_BODY()
	
public:
	APortalHUD();

	virtual void DrawHUD() override;

private:
	class UTexture2D* CrosshairTex;

};
