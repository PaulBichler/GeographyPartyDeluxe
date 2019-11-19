// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "codename_geographyGameMode.h"
#include "codename_geographyPlayerController.h"
#include "codename_geographyCharacter.h"
#include "UObject/ConstructorHelpers.h"

Acodename_geographyGameMode::Acodename_geographyGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = Acodename_geographyPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}