// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectZGameMode.h"
#include "ProjectZCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectZGameMode::AProjectZGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
