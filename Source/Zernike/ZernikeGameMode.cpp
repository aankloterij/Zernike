// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Zernike.h"
#include "ZernikeGameMode.h"
#include "ZernikeHUD.h"
#include "ZernikeCharacter.h"

AZernikeGameMode::AZernikeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AZernikeHUD::StaticClass();
}
