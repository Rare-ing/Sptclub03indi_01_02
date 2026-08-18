// Fill out your copyright notice in the Description page of Project Settings.


#include "SpartaGameMode.h"
#include "SpartaPlayerController.h"

ASpartaGameMode::ASpartaGameMode()
{
	PlayerControllerClass = ASpartaPlayerController::StaticClass();
}
