// Copyright Epic Games, Inc. All Rights Reserved.

#include "TeleportGameMode.h"
#include "TeleportCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATeleportGameMode::ATeleportGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
