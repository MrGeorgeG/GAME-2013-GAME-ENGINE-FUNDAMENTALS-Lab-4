// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Lab4_Xinlin_GanGameMode.h"
#include "Lab4_Xinlin_GanPlayerController.h"
#include "Lab4_Xinlin_GanCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALab4_Xinlin_GanGameMode::ALab4_Xinlin_GanGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ALab4_Xinlin_GanPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}