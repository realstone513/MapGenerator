// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <time.h>
#include "PerlinNoise2D.generated.h"

#define SEED_COUNT 100
#define MAP_WIDTH 50
#define MAX_PRIME_INDEX 10

UCLASS(BlueprintType, Blueprintable)
class MAPGENERATOR_API APerlinNoise2D : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APerlinNoise2D();

	UFUNCTION(BlueprintCallable, Category = CustomNoise)
		float ValueNoise_2D(float x, float y);
};
