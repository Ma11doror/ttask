// Copyright Epic Games, Inc. All Rights Reserved.

#include "ttask_m_tGameMode.h"
#include "ttask_m_tCharacter.h"
#include "UObject/ConstructorHelpers.h"

Attask_m_tGameMode::Attask_m_tGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
