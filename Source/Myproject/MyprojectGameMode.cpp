// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyprojectGameMode.h"
#include "MyprojectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyprojectGameMode::AMyprojectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
