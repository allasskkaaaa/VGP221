// Fill out your copyright notice in the Description page of Project Settings.


#include "Gamemode/ProjectGameMode.h"

void AProjectGameMode::StartPlay()
{
    Super::StartPlay();

    check(GEngine != nullptr);

    //1. To print to screen

    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World, this is ProjectGameMode!"));

    //2. To print to console

    UE_LOG(LogTemp, Warning, TEXT("Hello World, this is ProjectGameMode!"));
}
