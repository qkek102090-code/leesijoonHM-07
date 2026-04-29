// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameMode.h"
#include "HMCharacter.h"
#include "MyPlayerController.h"

AMyGameMode::AMyGameMode()
{
	DefaultPawnClass = AHMCharacter::StaticClass();
	PlayerControllerClass = AMyPlayerController::StaticClass();
}
