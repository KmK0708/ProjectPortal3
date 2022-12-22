// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MathLibrary.generated.h"

class AActor;

/**
 * 
 */
UCLASS()
class PROJECTPORTAL3_API UMathLibrary : public UObject
{
	GENERATED_BODY()
	

public:

	UFUNCTION(BluePrintCallable)
		static FVector ConvertLocation(FVector const& Location, AActor* Portal, AActor* Target);

	UFUNCTION(BluePrintCallable)
		static FRotator ConvertRotation(FRotator const& Rotation, AActor* Portal, AActor* Target);

	UFUNCTION(BluePrintCallable)
		static bool CheckIsInFront(FVector const& point, FVector const& PortalLocation, FVector const& PortalNormal);

	//UFUNCTION(BluePrintCallable)
		//static bool CheckIsCrossing(FVector const& Point, FVector const& PortalLocation, FVector const& PortalNormal, bool& out_LastInFront, FVector& out_LastPosition);
	
};
