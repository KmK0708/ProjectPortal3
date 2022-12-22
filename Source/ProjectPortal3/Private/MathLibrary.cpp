// Fill out your copyright notice in the Description page of Project Settings.


#include "MathLibrary.h"

FVector UMathLibrary::ConvertLocation(FVector const& Location, AActor* Portal, AActor* Target)
{
	FVector Direction = Location - Portal->GetActorLocation();
	FVector TargetLocation = Target->GetActorLocation();

	return FVector();
}

FRotator UMathLibrary::ConvertRotation(FRotator const& Rotation, AActor* Portal, AActor* Target)
{
	return FRotator();
}

bool UMathLibrary::CheckIsInFront(FVector const& Point, FVector const& PortalLocation, FVector const& PortalNormal)
{
	return false;
}

bool CheckIsCrossing(FVector const& Point, FVector const& PortalLocation, FVector const& PortalNormal, bool& out_LastInFront, FVector& out_LastPosition)
{
	return false;
}