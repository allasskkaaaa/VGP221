// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ProjectGameMode.generated.h"

/**
 * 
 */
UCLASS()
class GAME_API AProjectGameMode : public AGameModeBase
{
	GENERATED_BODY()

	virtual void StartPlay() override;
	
};
