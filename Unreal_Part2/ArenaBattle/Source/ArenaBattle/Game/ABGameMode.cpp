// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/ABGameMode.h"
#include "ABGameMode.h"
#include "Player/ABPlayerController.h"

AABGameMode::AABGameMode()
{
	//static ConstructorHelpers::FClassFinder<APawn> ThirdPersonClassRef(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C"));
	//if (ThirdPersonClassRef.Class)
	//{
	//	DefaultPawnClass = ThirdPersonClassRef.Class;//DefaultPawnClass�� ThirdPersonClassRef�� �ִ� Class�� ��������.
	//}
	//DefaultPawnClass

	//��� �޾����Ƿ� ���� ����
	static ConstructorHelpers::FClassFinder<APawn> DefaultPawnClassRef(TEXT("/Script/ArenaBattle.ABCharacterPlayer"));
	if (DefaultPawnClassRef.Class)
	{
		DefaultPawnClass = DefaultPawnClassRef.Class;
	}

	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerClassRef(TEXT("/Script/ArenaBattle.ABPlayerController"));
	if (PlayerControllerClassRef.Class)
	{
		PlayerControllerClass = PlayerControllerClassRef.Class;//PlayerControllerClass�� PlayerControllerClassRef�� �ִ� Class�� ��������.
	}
	//�ϴ��� �ڵ尡 �ƴ϶� ��η� Ŭ���� �������ִ� ������ �������� �ּ�ȭ�ϱ� �����̴�.
	//PlayerControllerClass = AABPlayerController::StaticClass();//Ŭ���� ������ �� �� ����.
}