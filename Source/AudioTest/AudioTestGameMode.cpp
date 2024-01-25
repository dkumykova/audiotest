// Copyright Epic Games, Inc. All Rights Reserved.

#include "AudioTestGameMode.h"
#include "AudioTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAudioTestGameMode::AAudioTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
